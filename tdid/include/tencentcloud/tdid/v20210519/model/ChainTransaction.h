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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CHAINTRANSACTION_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CHAINTRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 链上交易信息
                */
                class ChainTransaction : public AbstractModel
                {
                public:
                    ChainTransaction();
                    ~ChainTransaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易哈希
                     * @return TransactionHash 交易哈希
                     * 
                     */
                    std::string GetTransactionHash() const;

                    /**
                     * 设置交易哈希
                     * @param _transactionHash 交易哈希
                     * 
                     */
                    void SetTransactionHash(const std::string& _transactionHash);

                    /**
                     * 判断参数 TransactionHash 是否已赋值
                     * @return TransactionHash 是否已赋值
                     * 
                     */
                    bool TransactionHashHasBeenSet() const;

                private:

                    /**
                     * 交易哈希
                     */
                    std::string m_transactionHash;
                    bool m_transactionHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CHAINTRANSACTION_H_
