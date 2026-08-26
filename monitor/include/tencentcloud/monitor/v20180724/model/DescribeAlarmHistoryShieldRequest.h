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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmHistoryShield请求参数结构体
                */
                class DescribeAlarmHistoryShieldRequest : public AbstractModel
                {
                public:
                    DescribeAlarmHistoryShieldRequest();
                    ~DescribeAlarmHistoryShieldRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，这里填“monitor”
                     * @return Module 模块名，这里填“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”
                     * @param _module 模块名，这里填“monitor”
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return ShieldPolicyId 策略id
                     * 
                     */
                    std::string GetShieldPolicyId() const;

                    /**
                     * 设置策略id
                     * @param _shieldPolicyId 策略id
                     * 
                     */
                    void SetShieldPolicyId(const std::string& _shieldPolicyId);

                    /**
                     * 判断参数 ShieldPolicyId 是否已赋值
                     * @return ShieldPolicyId 是否已赋值
                     * 
                     */
                    bool ShieldPolicyIdHasBeenSet() const;

                    /**
                     * 获取告警历史维度
                     * @return ShieldObject 告警历史维度
                     * 
                     */
                    std::vector<std::string> GetShieldObject() const;

                    /**
                     * 设置告警历史维度
                     * @param _shieldObject 告警历史维度
                     * 
                     */
                    void SetShieldObject(const std::vector<std::string>& _shieldObject);

                    /**
                     * 判断参数 ShieldObject 是否已赋值
                     * @return ShieldObject 是否已赋值
                     * 
                     */
                    bool ShieldObjectHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param _metricName 指标名称
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取屏蔽策略Id
                     * @return ShieldId 屏蔽策略Id
                     * 
                     */
                    std::string GetShieldId() const;

                    /**
                     * 设置屏蔽策略Id
                     * @param _shieldId 屏蔽策略Id
                     * 
                     */
                    void SetShieldId(const std::string& _shieldId);

                    /**
                     * 判断参数 ShieldId 是否已赋值
                     * @return ShieldId 是否已赋值
                     * 
                     */
                    bool ShieldIdHasBeenSet() const;

                    /**
                     * 获取告警等级
                     * @return ShieldAlarmLevel 告警等级
                     * 
                     */
                    std::string GetShieldAlarmLevel() const;

                    /**
                     * 设置告警等级
                     * @param _shieldAlarmLevel 告警等级
                     * 
                     */
                    void SetShieldAlarmLevel(const std::string& _shieldAlarmLevel);

                    /**
                     * 判断参数 ShieldAlarmLevel 是否已赋值
                     * @return ShieldAlarmLevel 是否已赋值
                     * 
                     */
                    bool ShieldAlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警历史会话ID
                     * @return SessionId 告警历史会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置告警历史会话ID
                     * @param _sessionId 告警历史会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                private:

                    /**
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略id
                     */
                    std::string m_shieldPolicyId;
                    bool m_shieldPolicyIdHasBeenSet;

                    /**
                     * 告警历史维度
                     */
                    std::vector<std::string> m_shieldObject;
                    bool m_shieldObjectHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 屏蔽策略Id
                     */
                    std::string m_shieldId;
                    bool m_shieldIdHasBeenSet;

                    /**
                     * 告警等级
                     */
                    std::string m_shieldAlarmLevel;
                    bool m_shieldAlarmLevelHasBeenSet;

                    /**
                     * 告警历史会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDREQUEST_H_
