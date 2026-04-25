# PWTranslator

Windows tool (C++/CLI + WinForms) to translate Perfect World interface XML files.

## What It Does
- Translates only `.xml` interface files.
- Replaces only `String="..."` values.
- Keeps original layout/position/style from source XML.
- Shows a comparison window (`Before` x `After`) after translation.
- UI language switch: `Portugues (BR)` and `English`.

## How To Use
1. Run `PWTranslator.exe`.
2. Select **Game folder (original XML)**.
3. Select **Reference folder (already translated XML)**.
4. Select **Output folder**.
5. Click **Generate translated XML**.

## Folder Meaning
- **Game folder (original XML)**: XML files you want to translate now.
- **Reference folder (already translated XML)**: XML files used as translation source.
- **Output folder**: where translated XML files are saved.

## Notes
- The app matches controls by `Name`.
- If a file/control has no matching translated `String`, original text is kept.
- Some output subfolders are created automatically by `initFolders`.

---

## PT-BR

Ferramenta Windows (C++/CLI + WinForms) para traduzir XML de interface do Perfect World.

### O que faz
- Traduz somente arquivos `.xml`.
- Troca somente valores de `String="..."`.
- Mantem estrutura/posicao/estilo originais do XML de origem.
- Mostra janela de comparacao (`Antes` x `Depois`) ao final.
- Interface com dois idiomas: `Portugues (BR)` e `English`.

### Como usar
1. Execute `PWTranslator.exe`.
2. Selecione a **Pasta do jogo (XML original)**.
3. Selecione a **Pasta de referencia (XML ja traduzido)**.
4. Selecione a **Pasta de saida**.
5. Clique em **Gerar XML traduzido**.

### Significado das pastas
- **Pasta do jogo (XML original)**: XML que voce quer traduzir agora.
- **Pasta de referencia (XML ja traduzido)**: XML usado como fonte da traducao.
- **Pasta de saida**: onde os XML traduzidos serao salvos.

### Observacoes
- O app faz correspondencia por `Name`.
- Se nao houver traducao para determinado `String`, o valor original e mantido.
- Algumas subpastas de saida sao criadas automaticamente pela funcao `initFolders`.

## Credits
- Author credits in UI: `master9028`
- Repository: `https://github.com/Mastersymnet/PWT`
