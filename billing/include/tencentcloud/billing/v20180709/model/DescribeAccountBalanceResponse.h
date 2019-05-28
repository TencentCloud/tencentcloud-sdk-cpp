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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAccountBalance返回参数结构体
                */
                class DescribeAccountBalanceResponse : public AbstractModel
                {
                public:
                    DescribeAccountBalanceResponse();
                    ~DescribeAccountBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取云账户信息中的”展示可用余额”字段，单位为"分"
                     * @return Balance 云账户信息中的”展示可用余额”字段，单位为"分"
                     */
                    int64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     */
                    bool BalanceHasBeenSet() const;

                private:

                    /**
                     * 云账户信息中的”展示可用余额”字段，单位为"分"
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
