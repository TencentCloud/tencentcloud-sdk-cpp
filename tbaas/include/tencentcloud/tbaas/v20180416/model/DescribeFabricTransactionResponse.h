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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeFabricTransaction返回参数结构体
                */
                class DescribeFabricTransactionResponse : public AbstractModel
                {
                public:
                    DescribeFabricTransactionResponse();
                    ~DescribeFabricTransactionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易ID
                     * @return TxId 交易ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

                    /**
                     * 获取交易Hash
                     * @return TxHash 交易Hash
                     * 
                     */
                    std::string GetTxHash() const;

                    /**
                     * 判断参数 TxHash 是否已赋值
                     * @return TxHash 是否已赋值
                     * 
                     */
                    bool TxHashHasBeenSet() const;

                    /**
                     * 获取交易状态
                     * @return TxStatus 交易状态
                     * 
                     */
                    std::string GetTxStatus() const;

                    /**
                     * 判断参数 TxStatus 是否已赋值
                     * @return TxStatus 是否已赋值
                     * 
                     */
                    bool TxStatusHasBeenSet() const;

                    /**
                     * 获取参与的组织列表
                     * @return JoinOrgList 参与的组织列表
                     * 
                     */
                    std::vector<std::string> GetJoinOrgList() const;

                    /**
                     * 判断参数 JoinOrgList 是否已赋值
                     * @return JoinOrgList 是否已赋值
                     * 
                     */
                    bool JoinOrgListHasBeenSet() const;

                    /**
                     * 获取交易发送者
                     * @return Sender 交易发送者
                     * 
                     */
                    std::string GetSender() const;

                    /**
                     * 判断参数 Sender 是否已赋值
                     * @return Sender 是否已赋值
                     * 
                     */
                    bool SenderHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
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
                     * 获取交易所属合约
                     * @return ChaincodeName 交易所属合约
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     * 
                     */
                    bool ChaincodeNameHasBeenSet() const;

                    /**
                     * 获取交易数据，base64编码，解码后为json化的字符串
                     * @return TransactionData 交易数据，base64编码，解码后为json化的字符串
                     * 
                     */
                    std::string GetTransactionData() const;

                    /**
                     * 判断参数 TransactionData 是否已赋值
                     * @return TransactionData 是否已赋值
                     * 
                     */
                    bool TransactionDataHasBeenSet() const;

                private:

                    /**
                     * 交易ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * 交易Hash
                     */
                    std::string m_txHash;
                    bool m_txHashHasBeenSet;

                    /**
                     * 交易状态
                     */
                    std::string m_txStatus;
                    bool m_txStatusHasBeenSet;

                    /**
                     * 参与的组织列表
                     */
                    std::vector<std::string> m_joinOrgList;
                    bool m_joinOrgListHasBeenSet;

                    /**
                     * 交易发送者
                     */
                    std::string m_sender;
                    bool m_senderHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 交易所属合约
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * 交易数据，base64编码，解码后为json化的字符串
                     */
                    std::string m_transactionData;
                    bool m_transactionDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_
