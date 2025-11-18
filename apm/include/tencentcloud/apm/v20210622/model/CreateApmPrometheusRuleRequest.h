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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmPrometheusRule请求参数结构体
                */
                class CreateApmPrometheusRuleRequest : public AbstractModel
                {
                public:
                    CreateApmPrometheusRuleRequest();
                    ~CreateApmPrometheusRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指标匹配规则名
                     * @return Name 指标匹配规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指标匹配规则名
                     * @param _name 指标匹配规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则生效的应用。作用全部应用就传空字符串
                     * @return ServiceName 规则生效的应用。作用全部应用就传空字符串
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置规则生效的应用。作用全部应用就传空字符串
                     * @param _serviceName 规则生效的应用。作用全部应用就传空字符串
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配
                     * @return MetricMatchType 指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配
                     * @param _metricMatchType 指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配
                     * 
                     */
                    void SetMetricMatchType(const int64_t& _metricMatchType);

                    /**
                     * 判断参数 MetricMatchType 是否已赋值
                     * @return MetricMatchType 是否已赋值
                     * 
                     */
                    bool MetricMatchTypeHasBeenSet() const;

                    /**
                     * 获取客户定义的命中指标名规则。
                     * @return MetricNameRule 客户定义的命中指标名规则。
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置客户定义的命中指标名规则。
                     * @param _metricNameRule 客户定义的命中指标名规则。
                     * 
                     */
                    void SetMetricNameRule(const std::string& _metricNameRule);

                    /**
                     * 判断参数 MetricNameRule 是否已赋值
                     * @return MetricNameRule 是否已赋值
                     * 
                     */
                    bool MetricNameRuleHasBeenSet() const;

                    /**
                     * 获取业务系统ID
                     * @return InstanceId 业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统ID
                     * @param _instanceId 业务系统ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 指标匹配规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则生效的应用。作用全部应用就传空字符串
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                    /**
                     * 客户定义的命中指标名规则。
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * 业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_
