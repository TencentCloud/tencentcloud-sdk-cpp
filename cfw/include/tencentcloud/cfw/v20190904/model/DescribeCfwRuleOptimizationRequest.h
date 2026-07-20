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
                     * 获取<p>防火墙规则类型。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组。</p>
                     * @return RuleType <p>防火墙规则类型。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组。</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>防火墙规则类型。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组。</p>
                     * @param _ruleType <p>防火墙规则类型。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组。</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>要执行的优化维度白名单。可选，例如 D1、D2、D8；不传默认执行全部支持维度。</p>
                     * @return Dimensions <p>要执行的优化维度白名单。可选，例如 D1、D2、D8；不传默认执行全部支持维度。</p>
                     * 
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置<p>要执行的优化维度白名单。可选，例如 D1、D2、D8；不传默认执行全部支持维度。</p>
                     * @param _dimensions <p>要执行的优化维度白名单。可选，例如 D1、D2、D8；不传默认执行全部支持维度。</p>
                     * 
                     */
                    void SetDimensions(const std::vector<std::string>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取<p>长期零命中规则阈值天数。可选，默认 180。</p>
                     * @return IdleDays <p>长期零命中规则阈值天数。可选，默认 180。</p>
                     * 
                     */
                    int64_t GetIdleDays() const;

                    /**
                     * 设置<p>长期零命中规则阈值天数。可选，默认 180。</p>
                     * @param _idleDays <p>长期零命中规则阈值天数。可选，默认 180。</p>
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
                     * 获取<p>单 IP 离散过多聚合建议的最小数量。可选，默认 10。</p>
                     * @return IpAggMin <p>单 IP 离散过多聚合建议的最小数量。可选，默认 10。</p>
                     * 
                     */
                    int64_t GetIpAggMin() const;

                    /**
                     * 设置<p>单 IP 离散过多聚合建议的最小数量。可选，默认 10。</p>
                     * @param _ipAggMin <p>单 IP 离散过多聚合建议的最小数量。可选，默认 10。</p>
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
                     * 获取<p>可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，默认 50。</p>
                     * @return IocSample <p>可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，默认 50。</p>
                     * 
                     */
                    int64_t GetIocSample() const;

                    /**
                     * 设置<p>可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，默认 50。</p>
                     * @param _iocSample <p>可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，默认 50。</p>
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
                     * <p>防火墙规则类型。必填。枚举：border 互联网边界；nat NAT 边界；vpc VPC 间；enterprise_sg 企业安全组。</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>要执行的优化维度白名单。可选，例如 D1、D2、D8；不传默认执行全部支持维度。</p>
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>长期零命中规则阈值天数。可选，默认 180。</p>
                     */
                    int64_t m_idleDays;
                    bool m_idleDaysHasBeenSet;

                    /**
                     * <p>单 IP 离散过多聚合建议的最小数量。可选，默认 10。</p>
                     */
                    int64_t m_ipAggMin;
                    bool m_ipAggMinHasBeenSet;

                    /**
                     * <p>可迁移 IOC 建议中返回的样例 IOC 数量上限。可选，默认 50。</p>
                     */
                    int64_t m_iocSample;
                    bool m_iocSampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWRULEOPTIMIZATIONREQUEST_H_
