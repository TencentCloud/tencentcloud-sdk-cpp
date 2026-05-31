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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_

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
                * RenewTokenPlanTeamOrder请求参数结构体
                */
                class RenewTokenPlanTeamOrderRequest : public AbstractModel
                {
                public:
                    RenewTokenPlanTeamOrderRequest();
                    ~RenewTokenPlanTeamOrderRequest() = default;
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
                     * 获取续费时长。单位：月。必须大于 0。
                     * @return TimeSpan 续费时长。单位：月。必须大于 0。
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置续费时长。单位：月。必须大于 0。
                     * @param _timeSpan 续费时长。单位：月。必须大于 0。
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。可通过 DescribeTokenPlanList 接口获取。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 续费时长。单位：月。必须大于 0。
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_
