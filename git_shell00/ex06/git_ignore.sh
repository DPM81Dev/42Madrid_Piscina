#! /bin/bash

# Script para mostrar la lista de archivos ignorados por Git

# Obtener la lista de archivos ignorados
ignored_files=$(git ls-files --others --ignored --exclude-standard)

# Mostrar la lista de archivos ignorados
echo "$ignored_files"
