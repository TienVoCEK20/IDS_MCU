/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Mar  6 22:31:17 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[161] = {
  0xbefd32b33ebee89fU, 0x3e9df1253f0a20a8U, 0x3e356ad2bf08bcc4U, 0x3f02dc0ebeabef0eU,
  0xbef658523ed26a8dU, 0x3e8ed538be4360f2U, 0xbe974c16be9ffb3dU, 0xbf16eb13bc7ecb40U,
  0xbf6509c7U, 0xbf17d2e4bdc9322fU, 0xbde0da8100000000U, 0xbecae58200000000U,
  0x3f0778d9U, 0xbea65e7000000000U, 0x0U, 0x0U,
  0xbe6e8c22be8233c0U, 0xbe70c28a3e81c535U, 0xbe8f118e3ebb2cf1U, 0xbe458291be64e2f4U,
  0x3ec63377be9049f2U, 0x3da788acbebc9b18U, 0xbec2b9f73e138fb2U, 0xbe2835923e18dadeU,
  0xbed386303f5d4ba0U, 0x3f43155f3e8c9a5eU, 0xbd321a6bbed7817fU, 0x3e059b95be9f0b58U,
  0xbe49436cbf05924bU, 0x3ddc4a713ed8fda1U, 0xbda2d620bec1ad52U, 0xbe52d6ae3e2133faU,
  0x3d91193cbec7be0cU, 0x3e4f90363e20e465U, 0xbd0e47a03c9bc950U, 0x3e70de2f3d469a10U,
  0x3ece5d8dbe8d9484U, 0xbe9fea43be3ecdc8U, 0x3ea68f55bea67ebaU, 0x3daf500cbe9e84d0U,
  0x3d16a210beb18bcdU, 0x3de9c0e4bedda614U, 0xbe107b00bc292a00U, 0x3ec9b40fbe091cc4U,
  0x3e8e0c1fbe8a3736U, 0xbea5a8d8be6df63aU, 0x3eca19d9be91c9baU, 0xbe05ddcabe68bf40U,
  0x3e8a3e0bbeba14cfU, 0x3d0f4940be849767U, 0x3e38807a3ecd8405U, 0xbed3ee5ebeb47f76U,
  0x3e96c2573df764beU, 0x3cd36c003c62c000U, 0x3ea39bf33e7f6c52U, 0xbe06651a3e041752U,
  0xbdceab70be5fc5b6U, 0x3e3dbebebe1a9c12U, 0x3ea7f3ab3ebac805U, 0xbea4726ebe8e5f4dU,
  0xbecb8b57be32b864U, 0xbe9ee19d3eab11fbU, 0x3ebae351bed132cbU, 0xbd1e64d0beaa442bU,
  0xbec1ed8ebd95d078U, 0x3ea353bbbd117fa8U, 0x3ea0cc313e9c03bdU, 0xbe9237c2be3229a2U,
  0x3e11e226be7a1e13U, 0x3e274f82bec74b7eU, 0x3ec4d7673e8d832fU, 0x3edcdb713e12df56U,
  0x3eabfd0f3e13e177U, 0xbec53ccd3e7ab7bbU, 0xbe4de6ab3cc48640U, 0xbe129495be50186aU,
  0x3e8c2ce33f10efbbU, 0xbe9c24e8bb598a80U, 0x3ed52ad5be4ebf77U, 0x3daf4e343ced7f20U,
  0xbe9420a0be5b170aU, 0x3eca2dbb3ea51b19U, 0x3eadfee63e6369ceU, 0x3f0550ca3e91db2bU,
  0x3e52abbabeb04c9aU, 0x3e837862bec4fd41U, 0xbeb338483d4acd20U, 0x3e6d7992bdca76d0U,
  0x3c06cea03ed0adb2U, 0x3ed16aa2be49d7bbU, 0x3ea0e8e03e9cc147U, 0x3eccc751be33c3ceU,
  0x3db6b44c3dfa3848U, 0x3f014b773edc5569U, 0x3e98586d3eb2d225U, 0xbe2ae9783ed6b70dU,
  0x3d4a72f8be60da99U, 0x3eacb393bed397f4U, 0x3eccd7ebbe7b937eU, 0x3d8be8a43ea54a8fU,
  0xbeb55d6fbe4e16cfU, 0x3e96432b3e2b3262U, 0xbe867c123e816009U, 0xbeb177b1bd32d7f0U,
  0x3d18ebd0bf04c0cfU, 0xbed02e5b3ee7477eU, 0xbf0c1eb53e4bb382U, 0x3d608a2cbe8aa3f0U,
  0x3de4e1543f1097b7U, 0xbe8efbae3ea20a9dU, 0x3e41ffeebed2a569U, 0x3dc8f9cc3c68e3c0U,
  0xbe90132b3e56cf86U, 0x3ed1f95fbed66a6cU, 0x3e3543f2bec255a0U, 0xbeb982353d6f60d0U,
  0x3e2b3bb6bec2ab67U, 0xbe547addbd4299c8U, 0xbdcbf824be5d820bU, 0x3e4ae3863ed561e1U,
  0x3d9ecedc3f029d9cU, 0x3ed723f13ec0b3adU, 0xbe32429abe477697U, 0xbdeb27cf3d4eb130U,
  0xbd964164bd88d324U, 0x3eca65523d752a48U, 0x3e9676833e1e4fb2U, 0xbe4cda0f3ec7e5e7U,
  0x3cb7b8c0be63c4c9U, 0xbd4e34b0bf419f82U, 0xbe4493ce3d4b0fb8U, 0xbd9ab0ebbe6ab68cU,
  0x3eccb355bd6824fdU, 0xbdcfdd5cbd2d87a0U, 0x3e8a4217be95d5d6U, 0xbe81b51e3d2163d0U,
  0x3e899e393d90d634U, 0xbe24a1b53efc4a18U, 0xbe5571de3e8c07a9U, 0xbde22f7ebec51727U,
  0xbebae5473d1f8b9bU, 0x3e5ac170beab1160U, 0xbe1409b4be9feb9bU, 0x3e8d9c41bdbb9cf4U,
  0xbf5e978c00000000U, 0xbc68e33eU, 0xbd91cabaU, 0x3d1ecc9100000000U,
  0xbde96a70be354cb3U, 0x3d2098ee00000000U, 0xbe27666d00000000U, 0x3d05e7103eb8675dU,
  0x4005869c3ea3e82eU, 0x3eab95d4bf04cb33U, 0xbd4d9f303da81275U, 0x3ec9570f3ec6d502U,
  0xbf34992fbf15a59cU, 0x3f3bfe93bdabed80U, 0xbf0b02643d07bd70U, 0x3e582cc5bf75fd5dU,
  0x3cf1860bU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

