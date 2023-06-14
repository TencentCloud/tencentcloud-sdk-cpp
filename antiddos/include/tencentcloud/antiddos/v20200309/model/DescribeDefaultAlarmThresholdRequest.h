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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDefaultAlarmThreshold请求参数结构体
                */
                class DescribeDefaultAlarmThresholdRequest : public AbstractModel
                {
                public:
                    DescribeDefaultAlarmThresholdRequest();
                    ~DescribeDefaultAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品类型，取值[
bgp(表示高防包产品)
bgpip(表示高防IP产品)
]
                     * @return InstanceType 产品类型，取值[
bgp(表示高防包产品)
bgpip(表示高防IP产品)
]
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置产品类型，取值[
bgp(表示高防包产品)
bgpip(表示高防IP产品)
]
                     * @param _instanceType 产品类型，取值[
bgp(表示高防包产品)
bgpip(表示高防IP产品)
]
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取告警阈值类型搜索，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * @return FilterAlarmType 告警阈值类型搜索，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * 
                     */
                    int64_t GetFilterAlarmType() const;

                    /**
                     * 设置告警阈值类型搜索，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * @param _filterAlarmType 告警阈值类型搜索，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * 
                     */
                    void SetFilterAlarmType(const int64_t& _filterAlarmType);

                    /**
                     * 判断参数 FilterAlarmType 是否已赋值
                     * @return FilterAlarmType 是否已赋值
                     * 
                     */
                    bool FilterAlarmTypeHasBeenSet() const;

                private:

                    /**
                     * 产品类型，取值[
bgp(表示高防包产品)
bgpip(表示高防IP产品)
]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 告警阈值类型搜索，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     */
                    int64_t m_filterAlarmType;
                    bool m_filterAlarmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDREQUEST_H_
