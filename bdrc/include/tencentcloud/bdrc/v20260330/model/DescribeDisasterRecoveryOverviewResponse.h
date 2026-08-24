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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/DisasterRecoveryOverview.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoveryOverview返回参数结构体
                */
                class DescribeDisasterRecoveryOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDisasterRecoveryOverviewResponse();
                    ~DescribeDisasterRecoveryOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取跨所有地域聚合后的容灾总览数据
                     * @return DisasterRecoveryOverview 跨所有地域聚合后的容灾总览数据
                     * 
                     */
                    DisasterRecoveryOverview GetDisasterRecoveryOverview() const;

                    /**
                     * 判断参数 DisasterRecoveryOverview 是否已赋值
                     * @return DisasterRecoveryOverview 是否已赋值
                     * 
                     */
                    bool DisasterRecoveryOverviewHasBeenSet() const;

                    /**
                     * 获取按地域拆分的容灾总览列表
                     * @return OverviewInRegionSet 按地域拆分的容灾总览列表
                     * 
                     */
                    std::vector<DisasterRecoveryOverview> GetOverviewInRegionSet() const;

                    /**
                     * 判断参数 OverviewInRegionSet 是否已赋值
                     * @return OverviewInRegionSet 是否已赋值
                     * 
                     */
                    bool OverviewInRegionSetHasBeenSet() const;

                private:

                    /**
                     * 跨所有地域聚合后的容灾总览数据
                     */
                    DisasterRecoveryOverview m_disasterRecoveryOverview;
                    bool m_disasterRecoveryOverviewHasBeenSet;

                    /**
                     * 按地域拆分的容灾总览列表
                     */
                    std::vector<DisasterRecoveryOverview> m_overviewInRegionSet;
                    bool m_overviewInRegionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYOVERVIEWRESPONSE_H_
