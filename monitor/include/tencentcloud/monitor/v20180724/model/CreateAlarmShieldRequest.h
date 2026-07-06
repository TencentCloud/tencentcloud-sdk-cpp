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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMSHIELDREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMSHIELDREQUEST_H_

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
                * CreateAlarmShield请求参数结构体
                */
                class CreateAlarmShieldRequest : public AbstractModel
                {
                public:
                    CreateAlarmShieldRequest();
                    ~CreateAlarmShieldRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模块名，这里填“monitor”</p>
                     * @return Module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块名，这里填“monitor”</p>
                     * @param _module <p>模块名，这里填“monitor”</p>
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
                     * 获取<p>屏蔽策略名称</p>
                     * @return Name <p>屏蔽策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>屏蔽策略名称</p>
                     * @param _name <p>屏蔽策略名称</p>
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
                     * 获取<p>监控类型</p>
                     * @return MonitorType <p>监控类型</p>
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型</p>
                     * @param _monitorType <p>监控类型</p>
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取<p>命名空间即策略类型</p>
                     * @return NameSpace <p>命名空间即策略类型</p>
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置<p>命名空间即策略类型</p>
                     * @param _nameSpace <p>命名空间即策略类型</p>
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽</p>
                     * @return ShieldTimeType <p>屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽</p>
                     * 
                     */
                    std::string GetShieldTimeType() const;

                    /**
                     * 设置<p>屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽</p>
                     * @param _shieldTimeType <p>屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽</p>
                     * 
                     */
                    void SetShieldTimeType(const std::string& _shieldTimeType);

                    /**
                     * 判断参数 ShieldTimeType 是否已赋值
                     * @return ShieldTimeType 是否已赋值
                     * 
                     */
                    bool ShieldTimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽对象</p>
                     * @return ShieldObject <p>屏蔽对象</p>
                     * 
                     */
                    std::vector<std::string> GetShieldObject() const;

                    /**
                     * 设置<p>屏蔽对象</p>
                     * @param _shieldObject <p>屏蔽对象</p>
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
                     * 获取<p>屏蔽指标 为空则为全部指标</p>
                     * @return ShieldMetric <p>屏蔽指标 为空则为全部指标</p>
                     * 
                     */
                    std::vector<std::string> GetShieldMetric() const;

                    /**
                     * 设置<p>屏蔽指标 为空则为全部指标</p>
                     * @param _shieldMetric <p>屏蔽指标 为空则为全部指标</p>
                     * 
                     */
                    void SetShieldMetric(const std::vector<std::string>& _shieldMetric);

                    /**
                     * 判断参数 ShieldMetric 是否已赋值
                     * @return ShieldMetric 是否已赋值
                     * 
                     */
                    bool ShieldMetricHasBeenSet() const;

                    /**
                     * 获取<p>开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0</p>
                     * @return StartTime <p>开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0</p>
                     * @param _startTime <p>开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0</p>
                     * @return EndTime <p>结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0</p>
                     * @param _endTime <p>结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>循环开始日期 2022/04/01 缺省:0</p>
                     * @return LoopStartDate <p>循环开始日期 2022/04/01 缺省:0</p>
                     * 
                     */
                    uint64_t GetLoopStartDate() const;

                    /**
                     * 设置<p>循环开始日期 2022/04/01 缺省:0</p>
                     * @param _loopStartDate <p>循环开始日期 2022/04/01 缺省:0</p>
                     * 
                     */
                    void SetLoopStartDate(const uint64_t& _loopStartDate);

                    /**
                     * 判断参数 LoopStartDate 是否已赋值
                     * @return LoopStartDate 是否已赋值
                     * 
                     */
                    bool LoopStartDateHasBeenSet() const;

                    /**
                     * 获取<p>循环结束日期 2022/04/05 缺省:0</p>
                     * @return LoopEndDate <p>循环结束日期 2022/04/05 缺省:0</p>
                     * 
                     */
                    uint64_t GetLoopEndDate() const;

                    /**
                     * 设置<p>循环结束日期 2022/04/05 缺省:0</p>
                     * @param _loopEndDate <p>循环结束日期 2022/04/05 缺省:0</p>
                     * 
                     */
                    void SetLoopEndDate(const uint64_t& _loopEndDate);

                    /**
                     * 判断参数 LoopEndDate 是否已赋值
                     * @return LoopEndDate 是否已赋值
                     * 
                     */
                    bool LoopEndDateHasBeenSet() const;

                    /**
                     * 获取<p>需要屏蔽的策略ID</p>
                     * @return ShieldPolicyId <p>需要屏蔽的策略ID</p>
                     * 
                     */
                    std::string GetShieldPolicyId() const;

                    /**
                     * 设置<p>需要屏蔽的策略ID</p>
                     * @param _shieldPolicyId <p>需要屏蔽的策略ID</p>
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
                     * 获取<p>需要屏蔽的告警等级，取值范围Warn,Remind,Serious</p>
                     * @return ShieldAlarmLevel <p>需要屏蔽的告警等级，取值范围Warn,Remind,Serious</p>
                     * 
                     */
                    std::vector<std::string> GetShieldAlarmLevel() const;

                    /**
                     * 设置<p>需要屏蔽的告警等级，取值范围Warn,Remind,Serious</p>
                     * @param _shieldAlarmLevel <p>需要屏蔽的告警等级，取值范围Warn,Remind,Serious</p>
                     * 
                     */
                    void SetShieldAlarmLevel(const std::vector<std::string>& _shieldAlarmLevel);

                    /**
                     * 判断参数 ShieldAlarmLevel 是否已赋值
                     * @return ShieldAlarmLevel 是否已赋值
                     * 
                     */
                    bool ShieldAlarmLevelHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽类型，为OBJNAME是实例屏蔽，为POLICY是策略屏蔽</p>
                     * @return VersionTag <p>屏蔽类型，为OBJNAME是实例屏蔽，为POLICY是策略屏蔽</p>
                     * 
                     */
                    std::string GetVersionTag() const;

                    /**
                     * 设置<p>屏蔽类型，为OBJNAME是实例屏蔽，为POLICY是策略屏蔽</p>
                     * @param _versionTag <p>屏蔽类型，为OBJNAME是实例屏蔽，为POLICY是策略屏蔽</p>
                     * 
                     */
                    void SetVersionTag(const std::string& _versionTag);

                    /**
                     * 判断参数 VersionTag 是否已赋值
                     * @return VersionTag 是否已赋值
                     * 
                     */
                    bool VersionTagHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽规则的描述</p>
                     * @return Description <p>屏蔽规则的描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>屏蔽规则的描述</p>
                     * @param _description <p>屏蔽规则的描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>时区，东八区+8，西八区减8，以此类推</p>
                     * @return TimeZone <p>时区，东八区+8，西八区减8，以此类推</p>
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置<p>时区，东八区+8，西八区减8，以此类推</p>
                     * @param _timeZone <p>时区，东八区+8，西八区减8，以此类推</p>
                     * 
                     */
                    void SetTimeZone(const double& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽事件 为空则为全部指标</p>
                     * @return ShieldEvent <p>屏蔽事件 为空则为全部指标</p>
                     * 
                     */
                    std::vector<std::string> GetShieldEvent() const;

                    /**
                     * 设置<p>屏蔽事件 为空则为全部指标</p>
                     * @param _shieldEvent <p>屏蔽事件 为空则为全部指标</p>
                     * 
                     */
                    void SetShieldEvent(const std::vector<std::string>& _shieldEvent);

                    /**
                     * 判断参数 ShieldEvent 是否已赋值
                     * @return ShieldEvent 是否已赋值
                     * 
                     */
                    bool ShieldEventHasBeenSet() const;

                    /**
                     * 获取<p>是否对指标屏蔽 1=是 0=否</p>
                     * @return ShieldMetricFlag <p>是否对指标屏蔽 1=是 0=否</p>
                     * 
                     */
                    int64_t GetShieldMetricFlag() const;

                    /**
                     * 设置<p>是否对指标屏蔽 1=是 0=否</p>
                     * @param _shieldMetricFlag <p>是否对指标屏蔽 1=是 0=否</p>
                     * 
                     */
                    void SetShieldMetricFlag(const int64_t& _shieldMetricFlag);

                    /**
                     * 判断参数 ShieldMetricFlag 是否已赋值
                     * @return ShieldMetricFlag 是否已赋值
                     * 
                     */
                    bool ShieldMetricFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否对事件屏蔽 1=是 0=否</p>
                     * @return ShieldEventFlag <p>是否对事件屏蔽 1=是 0=否</p>
                     * 
                     */
                    int64_t GetShieldEventFlag() const;

                    /**
                     * 设置<p>是否对事件屏蔽 1=是 0=否</p>
                     * @param _shieldEventFlag <p>是否对事件屏蔽 1=是 0=否</p>
                     * 
                     */
                    void SetShieldEventFlag(const int64_t& _shieldEventFlag);

                    /**
                     * 判断参数 ShieldEventFlag 是否已赋值
                     * @return ShieldEventFlag 是否已赋值
                     * 
                     */
                    bool ShieldEventFlagHasBeenSet() const;

                private:

                    /**
                     * <p>模块名，这里填“monitor”</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>屏蔽策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>监控类型</p>
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>命名空间即策略类型</p>
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * <p>屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽</p>
                     */
                    std::string m_shieldTimeType;
                    bool m_shieldTimeTypeHasBeenSet;

                    /**
                     * <p>屏蔽对象</p>
                     */
                    std::vector<std::string> m_shieldObject;
                    bool m_shieldObjectHasBeenSet;

                    /**
                     * <p>屏蔽指标 为空则为全部指标</p>
                     */
                    std::vector<std::string> m_shieldMetric;
                    bool m_shieldMetricHasBeenSet;

                    /**
                     * <p>开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>循环开始日期 2022/04/01 缺省:0</p>
                     */
                    uint64_t m_loopStartDate;
                    bool m_loopStartDateHasBeenSet;

                    /**
                     * <p>循环结束日期 2022/04/05 缺省:0</p>
                     */
                    uint64_t m_loopEndDate;
                    bool m_loopEndDateHasBeenSet;

                    /**
                     * <p>需要屏蔽的策略ID</p>
                     */
                    std::string m_shieldPolicyId;
                    bool m_shieldPolicyIdHasBeenSet;

                    /**
                     * <p>需要屏蔽的告警等级，取值范围Warn,Remind,Serious</p>
                     */
                    std::vector<std::string> m_shieldAlarmLevel;
                    bool m_shieldAlarmLevelHasBeenSet;

                    /**
                     * <p>屏蔽类型，为OBJNAME是实例屏蔽，为POLICY是策略屏蔽</p>
                     */
                    std::string m_versionTag;
                    bool m_versionTagHasBeenSet;

                    /**
                     * <p>屏蔽规则的描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>时区，东八区+8，西八区减8，以此类推</p>
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>屏蔽事件 为空则为全部指标</p>
                     */
                    std::vector<std::string> m_shieldEvent;
                    bool m_shieldEventHasBeenSet;

                    /**
                     * <p>是否对指标屏蔽 1=是 0=否</p>
                     */
                    int64_t m_shieldMetricFlag;
                    bool m_shieldMetricFlagHasBeenSet;

                    /**
                     * <p>是否对事件屏蔽 1=是 0=否</p>
                     */
                    int64_t m_shieldEventFlag;
                    bool m_shieldEventFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMSHIELDREQUEST_H_
