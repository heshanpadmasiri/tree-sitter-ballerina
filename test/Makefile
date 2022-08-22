TEST_SRC=$(wildcard ./bal_files/*.bal)
TEST_OUT=$(subst bal_files,out, $(patsubst %.bal, %.out, $(TEST_SRC)))
TEST_CORPUS=$(subst bal_files,corpus, $(patsubst %.bal, %.txt, $(TEST_SRC)))
TARGETS=update clean
TREE_SITTER=tree-sitter
PYTHON=python3

update: $(TEST_CORPUS)

clean:
	rm -rf ./out/*
	rm -rf ./corpus/*

out/%.out: bal_files/%.bal
	$(TREE_SITTER) parse $< > $@

corpus/%.txt: bal_files/%.bal out/%.out
	$(PYTHON) ./corpus_gen.py  $^ ./$@

.PHONY : $(TARGETS)
