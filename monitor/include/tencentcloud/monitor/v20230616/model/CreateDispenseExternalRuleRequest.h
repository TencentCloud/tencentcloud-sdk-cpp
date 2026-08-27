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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEDISPENSEEXTERNALRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEDISPENSEEXTERNALRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/Producer.h>
#include <tencentcloud/monitor/v20230616/model/DispenseCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * CreateDispenseExternalRule请求参数结构体
                */
                class CreateDispenseExternalRuleRequest : public AbstractModel
                {
                public:
                    CreateDispenseExternalRuleRequest();
                    ~CreateDispenseExternalRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取云监控对外命名空间
                     * @return ExtNamespace 云监控对外命名空间
                     * 
                     */
                    std::string GetExtNamespace() const;

                    /**
                     * 设置云监控对外命名空间
                     * @param _extNamespace 云监控对外命名空间
                     * 
                     */
                    void SetExtNamespace(const std::string& _extNamespace);

                    /**
                     * 判断参数 ExtNamespace 是否已赋值
                     * @return ExtNamespace 是否已赋值
                     * 
                     */
                    bool ExtNamespaceHasBeenSet() const;

                    /**
                     * 获取转发目标消信息
                     * @return Producer 转发目标消信息
                     * 
                     */
                    Producer GetProducer() const;

                    /**
                     * 设置转发目标消信息
                     * @param _producer 转发目标消信息
                     * 
                     */
                    void SetProducer(const Producer& _producer);

                    /**
                     * 判断参数 Producer 是否已赋值
                     * @return Producer 是否已赋值
                     * 
                     */
                    bool ProducerHasBeenSet() const;

                    /**
                     * 获取转发部署地域列表
                     * @return DispenseRegions 转发部署地域列表
                     * 
                     */
                    std::vector<std::string> GetDispenseRegions() const;

                    /**
                     * 设置转发部署地域列表
                     * @param _dispenseRegions 转发部署地域列表
                     * 
                     */
                    void SetDispenseRegions(const std::vector<std::string>& _dispenseRegions);

                    /**
                     * 判断参数 DispenseRegions 是否已赋值
                     * @return DispenseRegions 是否已赋值
                     * 
                     */
                    bool DispenseRegionsHasBeenSet() const;

                    /**
                     * 获取云监控对外指标
                     * @return ExtMetrics 云监控对外指标
                     * 
                     */
                    std::vector<std::string> GetExtMetrics() const;

                    /**
                     * 设置云监控对外指标
                     * @param _extMetrics 云监控对外指标
                     * 
                     */
                    void SetExtMetrics(const std::vector<std::string>& _extMetrics);

                    /**
                     * 判断参数 ExtMetrics 是否已赋值
                     * @return ExtMetrics 是否已赋值
                     * 
                     */
                    bool ExtMetricsHasBeenSet() const;

                    /**
                     * 获取指标统计周期
                     * @return Period 指标统计周期
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置指标统计周期
                     * @param _period 指标统计周期
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取转发过滤条件信息
                     * @return DispenseConditions 转发过滤条件信息
                     * 
                     */
                    std::vector<DispenseCondition> GetDispenseConditions() const;

                    /**
                     * 设置转发过滤条件信息
                     * @param _dispenseConditions 转发过滤条件信息
                     * 
                     */
                    void SetDispenseConditions(const std::vector<DispenseCondition>& _dispenseConditions);

                    /**
                     * 判断参数 DispenseConditions 是否已赋值
                     * @return DispenseConditions 是否已赋值
                     * 
                     */
                    bool DispenseConditionsHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云监控对外命名空间
                     */
                    std::string m_extNamespace;
                    bool m_extNamespaceHasBeenSet;

                    /**
                     * 转发目标消信息
                     */
                    Producer m_producer;
                    bool m_producerHasBeenSet;

                    /**
                     * 转发部署地域列表
                     */
                    std::vector<std::string> m_dispenseRegions;
                    bool m_dispenseRegionsHasBeenSet;

                    /**
                     * 云监控对外指标
                     */
                    std::vector<std::string> m_extMetrics;
                    bool m_extMetricsHasBeenSet;

                    /**
                     * 指标统计周期
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 转发过滤条件信息
                     */
                    std::vector<DispenseCondition> m_dispenseConditions;
                    bool m_dispenseConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEDISPENSEEXTERNALRULEREQUEST_H_
