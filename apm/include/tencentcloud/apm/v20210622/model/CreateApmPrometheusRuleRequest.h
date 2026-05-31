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
                     * 获取<p>指标匹配规则名</p>
                     * @return Name <p>指标匹配规则名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>指标匹配规则名</p>
                     * @param _name <p>指标匹配规则名</p>
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
                     * 获取<p>规则生效的应用。作用全部应用就传空字符串</p>
                     * @return ServiceName <p>规则生效的应用。作用全部应用就传空字符串</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>规则生效的应用。作用全部应用就传空字符串</p>
                     * @param _serviceName <p>规则生效的应用。作用全部应用就传空字符串</p>
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
                     * 获取<p>指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
                     * @return MetricMatchType <p>指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置<p>指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
                     * @param _metricMatchType <p>指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
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
                     * 获取<p>客户定义的命中指标名规则。</p>
                     * @return MetricNameRule <p>客户定义的命中指标名规则。</p>
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置<p>客户定义的命中指标名规则。</p>
                     * @param _metricNameRule <p>客户定义的命中指标名规则。</p>
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
                     * 获取<p>业务系统ID</p>
                     * @return InstanceId <p>业务系统ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统ID</p>
                     * @param _instanceId <p>业务系统ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否追加资源属性</p>
                     * @return AppendResourceAttributes <p>是否追加资源属性</p>
                     * 
                     */
                    bool GetAppendResourceAttributes() const;

                    /**
                     * 设置<p>是否追加资源属性</p>
                     * @param _appendResourceAttributes <p>是否追加资源属性</p>
                     * 
                     */
                    void SetAppendResourceAttributes(const bool& _appendResourceAttributes);

                    /**
                     * 判断参数 AppendResourceAttributes 是否已赋值
                     * @return AppendResourceAttributes 是否已赋值
                     * 
                     */
                    bool AppendResourceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>指标匹配规则名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规则生效的应用。作用全部应用就传空字符串</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>指标匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                    /**
                     * <p>客户定义的命中指标名规则。</p>
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * <p>业务系统ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否追加资源属性</p>
                     */
                    bool m_appendResourceAttributes;
                    bool m_appendResourceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_
