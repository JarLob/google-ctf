/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 */

#include "tomcrypt_private.h"

#ifdef LTC_MDH

/* This holds the key settings.  ***MUST*** be organized by size from smallest to largest. */
const ltc_dh_set_type ltc_dh_sets[] = {
#ifdef LTC_DH768
{  /* 768-bit MODP Group 1 - https://tools.ietf.org/html/rfc7296#appendix-B.1 */
   96,
   "DH-768",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A63A3620FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH1024
{  /* 1024-bit MODP Group 2 - https://tools.ietf.org/html/rfc7296#appendix-B.2 */
   128,
   "DH-1024",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE65381"
   "FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH1536
{  /* 1536-bit MODP Group 5 - https://tools.ietf.org/html/rfc3526#section-2 */
   192,
   "DH-1536",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA237327FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH2048
{  /* 2048-bit MODP Group 14 - https://tools.ietf.org/html/rfc3526#section-3 */
   256,
   "DH-2048",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
   "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
   "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
   "15728E5A8AACAA68FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH3072
{  /* 3072-bit MODP Group 15 - https://tools.ietf.org/html/rfc3526#section-4 */
   384,
   "DH-3072",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
   "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
   "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
   "15728E5A8AAAC42DAD33170D04507A33A85521ABDF1CBA64"
   "ECFB850458DBEF0A8AEA71575D060C7DB3970F85A6E1E4C7"
   "ABF5AE8CDB0933D71E8C94E04A25619DCEE3D2261AD2EE6B"
   "F12FFA06D98A0864D87602733EC86A64521F2B18177B200C"
   "BBE117577A615D6C770988C0BAD946E208E24FA074E5AB31"
   "43DB5BFCE0FD108E4B82D120A93AD2CAFFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH4096
{  /* 4096-bit MODP Group 16 - https://tools.ietf.org/html/rfc3526#section-5 */
   512,
   "DH-4096",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
   "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
   "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
   "15728E5A8AAAC42DAD33170D04507A33A85521ABDF1CBA64"
   "ECFB850458DBEF0A8AEA71575D060C7DB3970F85A6E1E4C7"
   "ABF5AE8CDB0933D71E8C94E04A25619DCEE3D2261AD2EE6B"
   "F12FFA06D98A0864D87602733EC86A64521F2B18177B200C"
   "BBE117577A615D6C770988C0BAD946E208E24FA074E5AB31"
   "43DB5BFCE0FD108E4B82D120A92108011A723C12A787E6D7"
   "88719A10BDBA5B2699C327186AF4E23C1A946834B6150BDA"
   "2583E9CA2AD44CE8DBBBC2DB04DE8EF92E8EFC141FBECAA6"
   "287C59474E6BC05D99B2964FA090C3A2233BA186515BE7ED"
   "1F612970CEE2D7AFB81BDD762170481CD0069127D5B05AA9"
   "93B4EA988D8FDDC186FFB7DC90A6C08F4DF435C934063199"
   "FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH6144
{  /* 6144-bit MODP Group 17 - https://tools.ietf.org/html/rfc3526#section-6 */
   768,
   "DH-6144",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
   "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
   "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
   "15728E5A8AAAC42DAD33170D04507A33A85521ABDF1CBA64"
   "ECFB850458DBEF0A8AEA71575D060C7DB3970F85A6E1E4C7"
   "ABF5AE8CDB0933D71E8C94E04A25619DCEE3D2261AD2EE6B"
   "F12FFA06D98A0864D87602733EC86A64521F2B18177B200C"
   "BBE117577A615D6C770988C0BAD946E208E24FA074E5AB31"
   "43DB5BFCE0FD108E4B82D120A92108011A723C12A787E6D7"
   "88719A10BDBA5B2699C327186AF4E23C1A946834B6150BDA"
   "2583E9CA2AD44CE8DBBBC2DB04DE8EF92E8EFC141FBECAA6"
   "287C59474E6BC05D99B2964FA090C3A2233BA186515BE7ED"
   "1F612970CEE2D7AFB81BDD762170481CD0069127D5B05AA9"
   "93B4EA988D8FDDC186FFB7DC90A6C08F4DF435C934028492"
   "36C3FAB4D27C7026C1D4DCB2602646DEC9751E763DBA37BD"
   "F8FF9406AD9E530EE5DB382F413001AEB06A53ED9027D831"
   "179727B0865A8918DA3EDBEBCF9B14ED44CE6CBACED4BB1B"
   "DB7F1447E6CC254B332051512BD7AF426FB8F401378CD2BF"
   "5983CA01C64B92ECF032EA15D1721D03F482D7CE6E74FEF6"
   "D55E702F46980C82B5A84031900B1C9E59E7C97FBEC7E8F3"
   "23A97A7E36CC88BE0F1D45B7FF585AC54BD407B22B4154AA"
   "CC8F6D7EBF48E1D814CC5ED20F8037E0A79715EEF29BE328"
   "06A1D58BB7C5DA76F550AA3D8A1FBFF0EB19CCB1A313D55C"
   "DA56C9EC2EF29632387FE8D76E3C0468043E8F663F4860EE"
   "12BF2D5B0B7474D6E694F91E6DCC4024FFFFFFFFFFFFFFFF"
},
#endif
#ifdef LTC_DH8192
{  /* 8192-bit MODP Group 18 - https://tools.ietf.org/html/rfc3526#section-7 */
   1024,
   "DH-8192",
   "2",
   "FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1"
   "29024E088A67CC74020BBEA63B139B22514A08798E3404DD"
   "EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245"
   "E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED"
   "EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE45B3D"
   "C2007CB8A163BF0598DA48361C55D39A69163FA8FD24CF5F"
   "83655D23DCA3AD961C62F356208552BB9ED529077096966D"
   "670C354E4ABC9804F1746C08CA18217C32905E462E36CE3B"
   "E39E772C180E86039B2783A2EC07A28FB5C55DF06F4C52C9"
   "DE2BCBF6955817183995497CEA956AE515D2261898FA0510"
   "15728E5A8AAAC42DAD33170D04507A33A85521ABDF1CBA64"
   "ECFB850458DBEF0A8AEA71575D060C7DB3970F85A6E1E4C7"
   "ABF5AE8CDB0933D71E8C94E04A25619DCEE3D2261AD2EE6B"
   "F12FFA06D98A0864D87602733EC86A64521F2B18177B200C"
   "BBE117577A615D6C770988C0BAD946E208E24FA074E5AB31"
   "43DB5BFCE0FD108E4B82D120A92108011A723C12A787E6D7"
   "88719A10BDBA5B2699C327186AF4E23C1A946834B6150BDA"
   "2583E9CA2AD44CE8DBBBC2DB04DE8EF92E8EFC141FBECAA6"
   "287C59474E6BC05D99B2964FA090C3A2233BA186515BE7ED"
   "1F612970CEE2D7AFB81BDD762170481CD0069127D5B05AA9"
   "93B4EA988D8FDDC186FFB7DC90A6C08F4DF435C934028492"
   "36C3FAB4D27C7026C1D4DCB2602646DEC9751E763DBA37BD"
   "F8FF9406AD9E530EE5DB382F413001AEB06A53ED9027D831"
   "179727B0865A8918DA3EDBEBCF9B14ED44CE6CBACED4BB1B"
   "DB7F1447E6CC254B332051512BD7AF426FB8F401378CD2BF"
   "5983CA01C64B92ECF032EA15D1721D03F482D7CE6E74FEF6"
   "D55E702F46980C82B5A84031900B1C9E59E7C97FBEC7E8F3"
   "23A97A7E36CC88BE0F1D45B7FF585AC54BD407B22B4154AA"
   "CC8F6D7EBF48E1D814CC5ED20F8037E0A79715EEF29BE328"
   "06A1D58BB7C5DA76F550AA3D8A1FBFF0EB19CCB1A313D55C"
   "DA56C9EC2EF29632387FE8D76E3C0468043E8F663F4860EE"
   "12BF2D5B0B7474D6E694F91E6DBE115974A3926F12FEE5E4"
   "38777CB6A932DF8CD8BEC4D073B931BA3BC832B68D9DD300"
   "741FA7BF8AFC47ED2576F6936BA424663AAB639C5AE4F568"
   "3423B4742BF1C978238F16CBE39D652DE3FDB8BEFC848AD9"
   "22222E04A4037C0713EB57A81A23F0C73473FC646CEA306B"
   "4BCBC8862F8385DDFA9D4B7FA2C087E879683303ED5BDD3A"
   "062B3CF5B3A278A66D2A13F83F44F82DDF310EE074AB6A36"
   "4597E899A0255DC164F31CC50846851DF9AB48195DED7EA1"
   "B1D510BD7EE74D73FAF36BC31ECFA268359046F4EB879F92"
   "4009438B481C6CD7889A002ED5EE382BC9190DA6FC026E47"
   "9558E4475677E9AA9E3050E2765694DFC81F56E880B96E71"
   "60C980DD98EDD3DFFFFFFFFFFFFFFFFF"
},
#endif
{
   0,
   NULL,
   NULL,
   NULL
}
};

/**
  Returns the DH group size (octets) for given key
  @param key   The DH key to get the size of
  @return The group size in octets (0 on error)
 */
int dh_get_groupsize(const dh_key *key)
{
   if (key == NULL) return 0;
   return mp_unsigned_bin_size(key->prime);
}

#endif /* LTC_MDH */

/* ref:         HEAD -> develop */
/* git commit:  9c0d7085234bd6baba2ab8fd9eee62254599341c */
/* commit time: 2018-10-15 10:51:17 +0200 */