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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 交易显示概述信息
                */
                class Transaction : public AbstractModel
                {
                public:
                    Transaction();
                    ~Transaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易ID
                     * @return TxId 交易ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 设置交易ID
                     * @param _txId 交易ID
                     * 
                     */
                    void SetTxId(const std::string& _txId);

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

                    /**
                     * 获取合约名称
                     * @return ChaincodeName 合约名称
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置合约名称
                     * @param _chaincodeName 合约名称
                     * 
                     */
                    void SetChaincodeName(const std::string& _chaincodeName);

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     * 
                     */
                    bool ChaincodeNameHasBeenSet() const;

                    /**
                     * 获取交易发送者
                     * @return Sender 交易发送者
                     * 
                     */
                    std::string GetSender() const;

                    /**
                     * 设置交易发送者
                     * @param _sender 交易发送者
                     * 
                     */
                    void SetSender(const std::string& _sender);

                    /**
                     * 判断参数 Sender 是否已赋值
                     * @return Sender 是否已赋值
                     * 
                     */
                    bool SenderHasBeenSet() const;

                    /**
                     * 获取交易创建时间
                     * @return CreateTime 交易创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置交易创建时间
                     * @param _createTime 交易创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取交易所在区块高度
                     * @return BlockHeight 交易所在区块高度
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 设置交易所在区块高度
                     * @param _blockHeight 交易所在区块高度
                     * 
                     */
                    void SetBlockHeight(const int64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取交易在区块中的序号
                     * @return TxIndex 交易在区块中的序号
                     * 
                     */
                    int64_t GetTxIndex() const;

                    /**
                     * 设置交易在区块中的序号
                     * @param _txIndex 交易在区块中的序号
                     * 
                     */
                    void SetTxIndex(const int64_t& _txIndex);

                    /**
                     * 判断参数 TxIndex 是否已赋值
                     * @return TxIndex 是否已赋值
                     * 
                     */
                    bool TxIndexHasBeenSet() const;

                private:

                    /**
                     * 交易ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * 合约名称
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * 交易发送者
                     */
                    std::string m_sender;
                    bool m_senderHasBeenSet;

                    /**
                     * 交易创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 交易所在区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 交易在区块中的序号
                     */
                    int64_t m_txIndex;
                    bool m_txIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_
