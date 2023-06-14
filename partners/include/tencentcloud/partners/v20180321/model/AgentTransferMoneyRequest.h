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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTTRANSFERMONEYREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTTRANSFERMONEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * AgentTransferMoney请求参数结构体
                */
                class AgentTransferMoneyRequest : public AbstractModel
                {
                public:
                    AgentTransferMoneyRequest();
                    ~AgentTransferMoneyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户账号ID
                     * @return ClientUin 客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置客户账号ID
                     * @param _clientUin 客户账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取转账金额，单位分
                     * @return Amount 转账金额，单位分
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置转账金额，单位分
                     * @param _amount 转账金额，单位分
                     * 
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 转账金额，单位分
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTTRANSFERMONEYREQUEST_H_
