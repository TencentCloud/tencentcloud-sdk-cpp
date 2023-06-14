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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBALANCENEWRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBALANCENEWRESPONSE_H_

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
                * DescribeClientBalanceNew返回参数结构体
                */
                class DescribeClientBalanceNewResponse : public AbstractModel
                {
                public:
                    DescribeClientBalanceNewResponse();
                    ~DescribeClientBalanceNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户可用余额，单位分 （可用余额 = 现金余额 + 赠送金余额 - 欠费金额 - 冻结金额）
                     * @return Balance 账户可用余额，单位分 （可用余额 = 现金余额 + 赠送金余额 - 欠费金额 - 冻结金额）
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取账户现金余额，单位分
                     * @return Cash 账户现金余额，单位分
                     * 
                     */
                    int64_t GetCash() const;

                    /**
                     * 判断参数 Cash 是否已赋值
                     * @return Cash 是否已赋值
                     * 
                     */
                    bool CashHasBeenSet() const;

                private:

                    /**
                     * 账户可用余额，单位分 （可用余额 = 现金余额 + 赠送金余额 - 欠费金额 - 冻结金额）
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 账户现金余额，单位分
                     */
                    int64_t m_cash;
                    bool m_cashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBALANCENEWRESPONSE_H_
