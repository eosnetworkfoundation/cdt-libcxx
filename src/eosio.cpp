#pragma once

/**
 * Define specific things for the eosio system
 */

extern "C" {
   [[eosio::wasm_import]] void eosio_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { eosio_assert(false, "pure virtual method called"); }
}
