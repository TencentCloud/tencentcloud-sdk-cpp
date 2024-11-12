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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineDetectOverview返回参数结构体
                */
                class DescribeBaselineDetectOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBaselineDetectOverviewResponse();
                    ~DescribeBaselineDetectOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测服务器数
                     * @return HostCount 检测服务器数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取检测项
                     * @return ItemCount 检测项
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取检测策略项
                     * @return PolicyCount 检测策略项
                     * 
                     */
                    int64_t GetPolicyCount() const;

                    /**
                     * 判断参数 PolicyCount 是否已赋值
                     * @return PolicyCount 是否已赋值
                     * 
                     */
                    bool PolicyCountHasBeenSet() const;

                    /**
                     * 获取通过率*100%
                     * @return PassRate 通过率*100%
                     * 
                     */
                    int64_t GetPassRate() const;

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取最近一次检测通过个数
                     * @return LatestPassCount 最近一次检测通过个数
                     * 
                     */
                    int64_t GetLatestPassCount() const;

                    /**
                     * 判断参数 LatestPassCount 是否已赋值
                     * @return LatestPassCount 是否已赋值
                     * 
                     */
                    bool LatestPassCountHasBeenSet() const;

                    /**
                     * 获取最近一次检测未通过个数
                     * @return LatestNotPassCount 最近一次检测未通过个数
                     * 
                     */
                    int64_t GetLatestNotPassCount() const;

                    /**
                     * 判断参数 LatestNotPassCount 是否已赋值
                     * @return LatestNotPassCount 是否已赋值
                     * 
                     */
                    bool LatestNotPassCountHasBeenSet() const;

                private:

                    /**
                     * 检测服务器数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 检测项
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * 检测策略项
                     */
                    int64_t m_policyCount;
                    bool m_policyCountHasBeenSet;

                    /**
                     * 通过率*100%
                     */
                    int64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * 最近一次检测通过个数
                     */
                    int64_t m_latestPassCount;
                    bool m_latestPassCountHasBeenSet;

                    /**
                     * 最近一次检测未通过个数
                     */
                    int64_t m_latestNotPassCount;
                    bool m_latestNotPassCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_
