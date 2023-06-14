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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/TrafficPackage.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeTrafficPackages返回参数结构体
                */
                class DescribeTrafficPackagesResponse : public AbstractModel
                {
                public:
                    DescribeTrafficPackagesResponse();
                    ~DescribeTrafficPackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量包总个数
                     * @return TotalCount 流量包总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取流量包详情
                     * @return TrafficPackages 流量包详情
                     * 
                     */
                    std::vector<TrafficPackage> GetTrafficPackages() const;

                    /**
                     * 判断参数 TrafficPackages 是否已赋值
                     * @return TrafficPackages 是否已赋值
                     * 
                     */
                    bool TrafficPackagesHasBeenSet() const;

                    /**
                     * 获取即将过期的流量包个数（7天内）
                     * @return ExpiringCount 即将过期的流量包个数（7天内）
                     * 
                     */
                    int64_t GetExpiringCount() const;

                    /**
                     * 判断参数 ExpiringCount 是否已赋值
                     * @return ExpiringCount 是否已赋值
                     * 
                     */
                    bool ExpiringCountHasBeenSet() const;

                    /**
                     * 获取有效流量包个数
                     * @return EnabledCount 有效流量包个数
                     * 
                     */
                    int64_t GetEnabledCount() const;

                    /**
                     * 判断参数 EnabledCount 是否已赋值
                     * @return EnabledCount 是否已赋值
                     * 
                     */
                    bool EnabledCountHasBeenSet() const;

                    /**
                     * 获取付费流量包个数
                     * @return PaidCount 付费流量包个数
                     * 
                     */
                    int64_t GetPaidCount() const;

                    /**
                     * 判断参数 PaidCount 是否已赋值
                     * @return PaidCount 是否已赋值
                     * 
                     */
                    bool PaidCountHasBeenSet() const;

                private:

                    /**
                     * 流量包总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 流量包详情
                     */
                    std::vector<TrafficPackage> m_trafficPackages;
                    bool m_trafficPackagesHasBeenSet;

                    /**
                     * 即将过期的流量包个数（7天内）
                     */
                    int64_t m_expiringCount;
                    bool m_expiringCountHasBeenSet;

                    /**
                     * 有效流量包个数
                     */
                    int64_t m_enabledCount;
                    bool m_enabledCountHasBeenSet;

                    /**
                     * 付费流量包个数
                     */
                    int64_t m_paidCount;
                    bool m_paidCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_
