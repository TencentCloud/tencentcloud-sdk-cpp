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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/EndorserGroup.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetTransactionDetailForUser返回参数结构体
                */
                class GetTransactionDetailForUserResponse : public AbstractModel
                {
                public:
                    GetTransactionDetailForUserResponse();
                    ~GetTransactionDetailForUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易ID
                     * @return TransactionId 交易ID
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取交易hash
                     * @return TransactionHash 交易hash
                     * 
                     */
                    std::string GetTransactionHash() const;

                    /**
                     * 判断参数 TransactionHash 是否已赋值
                     * @return TransactionHash 是否已赋值
                     * 
                     */
                    bool TransactionHashHasBeenSet() const;

                    /**
                     * 获取创建交易的组织名
                     * @return CreateOrgName 创建交易的组织名
                     * 
                     */
                    std::string GetCreateOrgName() const;

                    /**
                     * 判断参数 CreateOrgName 是否已赋值
                     * @return CreateOrgName 是否已赋值
                     * 
                     */
                    bool CreateOrgNameHasBeenSet() const;

                    /**
                     * 获取交易类型（普通交易和配置交易）
                     * @return TransactionType 交易类型（普通交易和配置交易）
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

                    /**
                     * 获取交易状态
                     * @return TransactionStatus 交易状态
                     * 
                     */
                    std::string GetTransactionStatus() const;

                    /**
                     * 判断参数 TransactionStatus 是否已赋值
                     * @return TransactionStatus 是否已赋值
                     * 
                     */
                    bool TransactionStatusHasBeenSet() const;

                    /**
                     * 获取交易创建时间
                     * @return CreateTime 交易创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取交易数据
                     * @return TransactionData 交易数据
                     * 
                     */
                    std::string GetTransactionData() const;

                    /**
                     * 判断参数 TransactionData 是否已赋值
                     * @return TransactionData 是否已赋值
                     * 
                     */
                    bool TransactionDataHasBeenSet() const;

                    /**
                     * 获取交易所在区块号
                     * @return BlockId 交易所在区块号
                     * 
                     */
                    uint64_t GetBlockId() const;

                    /**
                     * 判断参数 BlockId 是否已赋值
                     * @return BlockId 是否已赋值
                     * 
                     */
                    bool BlockIdHasBeenSet() const;

                    /**
                     * 获取交易所在区块哈希
                     * @return BlockHash 交易所在区块哈希
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
                     * 获取交易所在区块高度
                     * @return BlockHeight 交易所在区块高度
                     * 
                     */
                    uint64_t GetBlockHeight() const;

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取通道名称
                     * @return ChannelName 通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取交易所在合约名称
                     * @return ContractName 交易所在合约名称
                     * 
                     */
                    std::string GetContractName() const;

                    /**
                     * 判断参数 ContractName 是否已赋值
                     * @return ContractName 是否已赋值
                     * 
                     */
                    bool ContractNameHasBeenSet() const;

                    /**
                     * 获取背书组织列表
                     * @return EndorserOrgList 背书组织列表
                     * 
                     */
                    std::vector<EndorserGroup> GetEndorserOrgList() const;

                    /**
                     * 判断参数 EndorserOrgList 是否已赋值
                     * @return EndorserOrgList 是否已赋值
                     * 
                     */
                    bool EndorserOrgListHasBeenSet() const;

                private:

                    /**
                     * 交易ID
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 交易hash
                     */
                    std::string m_transactionHash;
                    bool m_transactionHashHasBeenSet;

                    /**
                     * 创建交易的组织名
                     */
                    std::string m_createOrgName;
                    bool m_createOrgNameHasBeenSet;

                    /**
                     * 交易类型（普通交易和配置交易）
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * 交易状态
                     */
                    std::string m_transactionStatus;
                    bool m_transactionStatusHasBeenSet;

                    /**
                     * 交易创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 交易数据
                     */
                    std::string m_transactionData;
                    bool m_transactionDataHasBeenSet;

                    /**
                     * 交易所在区块号
                     */
                    uint64_t m_blockId;
                    bool m_blockIdHasBeenSet;

                    /**
                     * 交易所在区块哈希
                     */
                    std::string m_blockHash;
                    bool m_blockHashHasBeenSet;

                    /**
                     * 交易所在区块高度
                     */
                    uint64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 交易所在合约名称
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 背书组织列表
                     */
                    std::vector<EndorserGroup> m_endorserOrgList;
                    bool m_endorserOrgListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETTRANSACTIONDETAILFORUSERRESPONSE_H_
