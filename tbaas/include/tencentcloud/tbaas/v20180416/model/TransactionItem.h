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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTIONITEM_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTIONITEM_H_

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
                * 交易列表项信息
                */
                class TransactionItem : public AbstractModel
                {
                public:
                    TransactionItem();
                    ~TransactionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易ID
                     * @return TransactionId 交易ID
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置交易ID
                     * @param _transactionId 交易ID
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

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
                     * 设置交易hash
                     * @param _transactionHash 交易hash
                     * 
                     */
                    void SetTransactionHash(const std::string& _transactionHash);

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
                     * 设置创建交易的组织名
                     * @param _createOrgName 创建交易的组织名
                     * 
                     */
                    void SetCreateOrgName(const std::string& _createOrgName);

                    /**
                     * 判断参数 CreateOrgName 是否已赋值
                     * @return CreateOrgName 是否已赋值
                     * 
                     */
                    bool CreateOrgNameHasBeenSet() const;

                    /**
                     * 获取交易所在区块号
                     * @return BlockId 交易所在区块号
                     * 
                     */
                    uint64_t GetBlockId() const;

                    /**
                     * 设置交易所在区块号
                     * @param _blockId 交易所在区块号
                     * 
                     */
                    void SetBlockId(const uint64_t& _blockId);

                    /**
                     * 判断参数 BlockId 是否已赋值
                     * @return BlockId 是否已赋值
                     * 
                     */
                    bool BlockIdHasBeenSet() const;

                    /**
                     * 获取交易类型（普通交易和配置交易）
                     * @return TransactionType 交易类型（普通交易和配置交易）
                     * 
                     */
                    std::string GetTransactionType() const;

                    /**
                     * 设置交易类型（普通交易和配置交易）
                     * @param _transactionType 交易类型（普通交易和配置交易）
                     * 
                     */
                    void SetTransactionType(const std::string& _transactionType);

                    /**
                     * 判断参数 TransactionType 是否已赋值
                     * @return TransactionType 是否已赋值
                     * 
                     */
                    bool TransactionTypeHasBeenSet() const;

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
                    uint64_t GetBlockHeight() const;

                    /**
                     * 设置交易所在区块高度
                     * @param _blockHeight 交易所在区块高度
                     * 
                     */
                    void SetBlockHeight(const uint64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取交易状态
                     * @return TransactionStatus 交易状态
                     * 
                     */
                    std::string GetTransactionStatus() const;

                    /**
                     * 设置交易状态
                     * @param _transactionStatus 交易状态
                     * 
                     */
                    void SetTransactionStatus(const std::string& _transactionStatus);

                    /**
                     * 判断参数 TransactionStatus 是否已赋值
                     * @return TransactionStatus 是否已赋值
                     * 
                     */
                    bool TransactionStatusHasBeenSet() const;

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
                     * 交易所在区块号
                     */
                    uint64_t m_blockId;
                    bool m_blockIdHasBeenSet;

                    /**
                     * 交易类型（普通交易和配置交易）
                     */
                    std::string m_transactionType;
                    bool m_transactionTypeHasBeenSet;

                    /**
                     * 交易创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 交易所在区块高度
                     */
                    uint64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 交易状态
                     */
                    std::string m_transactionStatus;
                    bool m_transactionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTIONITEM_H_
