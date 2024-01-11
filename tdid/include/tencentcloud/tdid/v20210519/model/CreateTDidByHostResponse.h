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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/ChainTransaction.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateTDidByHost返回参数结构体
                */
                class CreateTDidByHostResponse : public AbstractModel
                {
                public:
                    CreateTDidByHostResponse();
                    ~CreateTDidByHostResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DID标识
                     * @return Did DID标识
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取链上交易信息
                     * @return Transaction 链上交易信息
                     * 
                     */
                    ChainTransaction GetTransaction() const;

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                private:

                    /**
                     * DID标识
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 链上交易信息
                     */
                    ChainTransaction m_transaction;
                    bool m_transactionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTRESPONSE_H_
