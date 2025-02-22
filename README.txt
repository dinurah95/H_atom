-Hydrogen Atom-

The hydrogen atom is composed of a single electron that orbits a positively charged nucleus. This electron's existence is confined to specific orbits, distinguished by quantum numbers: the radial quantum number (n), which takes on values of 1, 2, 3, ..., and the angular momentum quantum numbers (l) and (m). The permissible values for (l) range from 0 to (n-1), and for (m), they span from -l to +l. The energy of each orbital, denoted as En, follows a formula: En = -(13.6 eV)/n^2. Therefore, each energy level displays a certain degree of multiplicity with gn-fold degeneracy. In simpler terms, there are gn = n^2 states that share the same energy level.

Transitions between orbitals can occur if the electron absorbs or emits a photon. But since a quantum of light has intrinsic angular momentum (1 in units of ℏ), conservation laws limit which atomic transitions are possible. This leads to the famous electric dipole selection rules Δl=±1 and Δm=0,±1.

"Selection.cpp" computes all possible transitions of the form n2→n1 with n1< n2≤20. "Selection.cpp" outputs the results in four columns indicating the initial and final radial quantum numbers, the number of allowed pathways, the energy of the emitted photon (ΔE=E2−E1), and its wavelength λ=hc/ΔE in nanometers. Furthermore, spectral lines in the visible region 380 nm < λ < 750 nm are marked with a lowercase v.
