/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/Transaction.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeFabricBlock返回参数结构体
                */
                class DescribeFabricBlockResponse : public AbstractModel
                {
                public:
                    DescribeFabricBlockResponse();
                    ~DescribeFabricBlockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取区块高度
                     * @return BlockHeight 区块高度
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取区块Hash
                     * @return BlockHash 区块Hash
                     * 
                     */
                    std::string GetBlockHash() const;

                    /**
                     * 判断参数 BlockHash 是否已赋值
                     * @return BlockHash 是否已赋值
                     * 
                     */
                    bool BlockHashHasBeenSet() const;

                    /**
                     * 获取前置区块Hash
                     * @return PreBlockHash 前置区块Hash
                     * 
                     */
                    std::string GetPreBlockHash() const;

                    /**
                     * 判断参数 PreBlockHash 是否已赋值
                     * @return PreBlockHash 是否已赋值
                     * 
                     */
                    bool PreBlockHashHasBeenSet() const;

                    /**
                     * 获取区块中交易数量
                     * @return TxCount 区块中交易数量
                     * 
                     */
                    int64_t GetTxCount() const;

                    /**
                     * 判断参数 TxCount 是否已赋值
                     * @return TxCount 是否已赋值
                     * 
                     */
                    bool TxCountHasBeenSet() const;

                    /**
                     * 获取区块中交易列表
                     * @return TransactionList 区块中交易列表
                     * 
                     */
                    std::vector<Transaction> GetTransactionList() const;

                    /**
                     * 判断参数 TransactionList 是否已赋值
                     * @return TransactionList 是否已赋值
                     * 
                     */
                    bool TransactionListHasBeenSet() const;

                    /**
                     * 获取创建时间戳
                     * @return CreateTimestamp 创建时间戳
                     * 
                     */
                    std::string GetCreateTimestamp() const;

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取提案组织
                     * @return ProposerOrg 提案组织
                     * 
                     */
                    std::string GetProposerOrg() const;

                    /**
                     * 判断参数 ProposerOrg 是否已赋值
                     * @return ProposerOrg 是否已赋值
                     * 
                     */
                    bool ProposerOrgHasBeenSet() const;

                private:

                    /**
                     * 区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 区块Hash
                     */
                    std::string m_blockHash;
                    bool m_blockHashHasBeenSet;

                    /**
                     * 前置区块Hash
                     */
                    std::string m_preBlockHash;
                    bool m_preBlockHashHasBeenSet;

                    /**
                     * 区块中交易数量
                     */
                    int64_t m_txCount;
                    bool m_txCountHasBeenSet;

                    /**
                     * 区块中交易列表
                     */
                    std::vector<Transaction> m_transactionList;
                    bool m_transactionListHasBeenSet;

                    /**
                     * 创建时间戳
                     */
                    std::string m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * 提案组织
                     */
                    std::string m_proposerOrg;
                    bool m_proposerOrgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKRESPONSE_H_
