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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwRuleOptimization请求参数结构体
                */
                class DescribeCfwRuleOptimizationRequest : public AbstractModel
                {
                public:
                    DescribeCfwRuleOptimizationRequest();
                    ~DescribeCfwRuleOptimizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取长期零命中规则阈值天数。可选，必须为正整数，默认 180。
                     * @return IdleDays 长期零命中规则阈值天数。可选，必须为正整数，默认 180。
                     * 
                     */
                    int64_t GetIdleDays() const;

                    /**
                     * 设置长期零命中规则阈值天数。可选，必须为正整数，默认 180。
                     * @param _idleDays 长期零命中规则阈值天数。可选，必须为正整数，默认 180。
                     * 
                     */
                    void SetIdleDays(const int64_t& _idleDays);

                    /**
                     * 判断参数 IdleDays 是否已赋值
                     * @return IdleDays 是否已赋值
                     * 
                     */
                    bool IdleDaysHasBeenSet() const;

                    /**
                     * 获取单 IP 离散过多聚合建议的最小数量。可选，最小为 2，默认 10。
                     * @return IpAggMin 单 IP 离散过多聚合建议的最小数量。可选，最小为 2，默认 10。
                     * 
                     */
                    int64_t GetIpAggMin() const;

                    /**
                     * 设置单 IP 离散过多聚合建议的最小数量。可选，最小为 2，默认 10。
                     * @param _ipAggMin 单 IP 离散过多聚合建议的最小数量。可选，最小为 2，默认 10。
                     * 
                     */
                    void SetIpAggMin(const int64_t& _ipAggMin);

                    /**
                     * 判断参数 IpAggMin 是否已赋值
                     * @return IpAggMin 是否已赋值
                     * 
                     */
                    bool IpAggMinHasBeenSet() const;

                    /**
                     * 获取可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，必须为正整数，默认 50。
                     * @return IocSample 可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，必须为正整数，默认 50。
                     * 
                     */
                    int64_t GetIocSample() const;

                    /**
                     * 设置可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，必须为正整数，默认 50。
                     * @param _iocSample 可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，必须为正整数，默认 50。
                     * 
                     */
                    void SetIocSample(const int64_t& _iocSample);

                    /**
                     * 判断参数 IocSample 是否已赋值
                     * @return IocSample 是否已赋值
                     * 
                     */
                    bool IocSampleHasBeenSet() const;

                private:

                    /**
                     * 长期零命中规则阈值天数。可选，必须为正整数，默认 180。
                     */
                    int64_t m_idleDays;
                    bool m_idleDaysHasBeenSet;

                    /**
                     * 单 IP 离散过多聚合建议的最小数量。可选，最小为 2，默认 10。
                     */
                    int64_t m_ipAggMin;
                    bool m_ipAggMinHasBeenSet;

                    /**
                     * 可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，必须为正整数，默认 50。
                     */
                    int64_t m_iocSample;
                    bool m_iocSampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONREQUEST_H_
