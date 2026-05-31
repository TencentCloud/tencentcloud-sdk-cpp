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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * UpgradeTokenPlanTeamOrder请求参数结构体
                */
                class UpgradeTokenPlanTeamOrderRequest : public AbstractModel
                {
                public:
                    UpgradeTokenPlanTeamOrderRequest();
                    ~UpgradeTokenPlanTeamOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     * @return TeamId 套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     * @param _teamId 套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取升配后的新规格额度。套餐类型为 enterprise 时表示积分额度，套餐类型为 enterprise-auto 时表示 Token 数。必须大于当前额度。
                     * @return NewCreditOrToken 升配后的新规格额度。套餐类型为 enterprise 时表示积分额度，套餐类型为 enterprise-auto 时表示 Token 数。必须大于当前额度。
                     * 
                     */
                    int64_t GetNewCreditOrToken() const;

                    /**
                     * 设置升配后的新规格额度。套餐类型为 enterprise 时表示积分额度，套餐类型为 enterprise-auto 时表示 Token 数。必须大于当前额度。
                     * @param _newCreditOrToken 升配后的新规格额度。套餐类型为 enterprise 时表示积分额度，套餐类型为 enterprise-auto 时表示 Token 数。必须大于当前额度。
                     * 
                     */
                    void SetNewCreditOrToken(const int64_t& _newCreditOrToken);

                    /**
                     * 判断参数 NewCreditOrToken 是否已赋值
                     * @return NewCreditOrToken 是否已赋值
                     * 
                     */
                    bool NewCreditOrTokenHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 升配后的新规格额度。套餐类型为 enterprise 时表示积分额度，套餐类型为 enterprise-auto 时表示 Token 数。必须大于当前额度。
                     */
                    int64_t m_newCreditOrToken;
                    bool m_newCreditOrTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_
