/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/Account.h>
#include <tencentcloud/fwm/v20250611/model/AccountGroupQuotaDetail.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeStrategyAccounts返回参数结构体
                */
                class DescribeStrategyAccountsResponse : public AbstractModel
                {
                public:
                    DescribeStrategyAccountsResponse();
                    ~DescribeStrategyAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号列表
                     * @return Accounts 账号列表
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取账号组列表
                     * @return AccountGroups 账号组列表
                     * 
                     */
                    std::vector<AccountGroupQuotaDetail> GetAccountGroups() const;

                    /**
                     * 判断参数 AccountGroups 是否已赋值
                     * @return AccountGroups 是否已赋值
                     * 
                     */
                    bool AccountGroupsHasBeenSet() const;

                private:

                    /**
                     * 账号列表
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 账号组列表
                     */
                    std::vector<AccountGroupQuotaDetail> m_accountGroups;
                    bool m_accountGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYACCOUNTSRESPONSE_H_
