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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERPOOLRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERPOOLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryVoucherPool返回参数结构体
                */
                class QueryVoucherPoolResponse : public AbstractModel
                {
                public:
                    QueryVoucherPoolResponse();
                    ~QueryVoucherPoolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取经销商姓名
                     * @return AgentName 经销商姓名
                     */
                    std::string GetAgentName() const;

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取经销商角色类型：1:经销商 2:总经销商 3:二级经销商
                     * @return AccountType 经销商角色类型：1:经销商 2:总经销商 3:二级经销商
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取总额度
                     * @return TotalQuota 总额度
                     */
                    double GetTotalQuota() const;

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取剩余额度
                     * @return RemainingQuota 剩余额度
                     */
                    double GetRemainingQuota() const;

                    /**
                     * 判断参数 RemainingQuota 是否已赋值
                     * @return RemainingQuota 是否已赋值
                     */
                    bool RemainingQuotaHasBeenSet() const;

                    /**
                     * 获取已发放的代金券数量
                     * @return IssuedNum 已发放的代金券数量
                     */
                    int64_t GetIssuedNum() const;

                    /**
                     * 判断参数 IssuedNum 是否已赋值
                     * @return IssuedNum 是否已赋值
                     */
                    bool IssuedNumHasBeenSet() const;

                private:

                    /**
                     * 经销商姓名
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 经销商角色类型：1:经销商 2:总经销商 3:二级经销商
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 总额度
                     */
                    double m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 剩余额度
                     */
                    double m_remainingQuota;
                    bool m_remainingQuotaHasBeenSet;

                    /**
                     * 已发放的代金券数量
                     */
                    int64_t m_issuedNum;
                    bool m_issuedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERPOOLRESPONSE_H_
