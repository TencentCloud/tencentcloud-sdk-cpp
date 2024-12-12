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
                     * 获取屏蔽策略名称
                     * @return Name 屏蔽策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置屏蔽策略名称
                     * @param _name 屏蔽策略名称
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

                    /**
                     * 获取命名空间即策略类型
                     * @return NameSpace 命名空间即策略类型
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间即策略类型
                     * @param _nameSpace 命名空间即策略类型
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
                     * 获取屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     * @return ShieldTimeType 屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     * 
                     */
                    std::string GetShieldTimeType() const;

                    /**
                     * 设置屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     * @param _shieldTimeType 屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
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
                     * 获取屏蔽对象
                     * @return ShieldObject 屏蔽对象
                     * 
                     */
                    std::vector<std::string> GetShieldObject() const;

                    /**
                     * 设置屏蔽对象
                     * @param _shieldObject 屏蔽对象
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
                     * 获取屏蔽指标 为空则为全部指标
                     * @return ShieldMetric 屏蔽指标 为空则为全部指标
                     * 
                     */
                    std::vector<std::string> GetShieldMetric() const;

                    /**
                     * 设置屏蔽指标 为空则为全部指标
                     * @param _shieldMetric 屏蔽指标 为空则为全部指标
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
                     * 获取开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0
                     * @return StartTime 开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0
                     * @param _startTime 开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0
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
                     * 获取结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0
                     * @return EndTime 结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0
                     * @param _endTime 结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0
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
                     * 获取循环开始日期 2022/04/01 缺省:0
                     * @return LoopStartDate 循环开始日期 2022/04/01 缺省:0
                     * 
                     */
                    uint64_t GetLoopStartDate() const;

                    /**
                     * 设置循环开始日期 2022/04/01 缺省:0
                     * @param _loopStartDate 循环开始日期 2022/04/01 缺省:0
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
                     * 获取循环结束日期 2022/04/05 缺省:0
                     * @return LoopEndDate 循环结束日期 2022/04/05 缺省:0
                     * 
                     */
                    uint64_t GetLoopEndDate() const;

                    /**
                     * 设置循环结束日期 2022/04/05 缺省:0
                     * @param _loopEndDate 循环结束日期 2022/04/05 缺省:0
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
                     * 获取需要屏蔽的策略ID
                     * @return ShieldPolicyId 需要屏蔽的策略ID
                     * 
                     */
                    std::string GetShieldPolicyId() const;

                    /**
                     * 设置需要屏蔽的策略ID
                     * @param _shieldPolicyId 需要屏蔽的策略ID
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
                     * 获取需要屏蔽的告警等级，取值范围Warn,Remind,Serious
                     * @return ShieldAlarmLevel 需要屏蔽的告警等级，取值范围Warn,Remind,Serious
                     * 
                     */
                    std::vector<std::string> GetShieldAlarmLevel() const;

                    /**
                     * 设置需要屏蔽的告警等级，取值范围Warn,Remind,Serious
                     * @param _shieldAlarmLevel 需要屏蔽的告警等级，取值范围Warn,Remind,Serious
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
                     * 获取屏蔽类型，为OBJNAME是老版本实例名屏蔽，为POLICY是新版本维度匹配
                     * @return VersionTag 屏蔽类型，为OBJNAME是老版本实例名屏蔽，为POLICY是新版本维度匹配
                     * 
                     */
                    std::string GetVersionTag() const;

                    /**
                     * 设置屏蔽类型，为OBJNAME是老版本实例名屏蔽，为POLICY是新版本维度匹配
                     * @param _versionTag 屏蔽类型，为OBJNAME是老版本实例名屏蔽，为POLICY是新版本维度匹配
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
                     * 获取屏蔽规则的描述
                     * @return Description 屏蔽规则的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置屏蔽规则的描述
                     * @param _description 屏蔽规则的描述
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
                     * 获取 时区，东八区+8，西八区减8，以此类推

                     * @return TimeZone  时区，东八区+8，西八区减8，以此类推

                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置 时区，东八区+8，西八区减8，以此类推

                     * @param _timeZone  时区，东八区+8，西八区减8，以此类推

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
                     * 获取屏蔽事件 为空则为全部指标
                     * @return ShieldEvent 屏蔽事件 为空则为全部指标
                     * 
                     */
                    std::vector<std::string> GetShieldEvent() const;

                    /**
                     * 设置屏蔽事件 为空则为全部指标
                     * @param _shieldEvent 屏蔽事件 为空则为全部指标
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
                     * 获取是否对指标屏蔽 1=是 0=否
                     * @return ShieldMetricFlag 是否对指标屏蔽 1=是 0=否
                     * 
                     */
                    int64_t GetShieldMetricFlag() const;

                    /**
                     * 设置是否对指标屏蔽 1=是 0=否
                     * @param _shieldMetricFlag 是否对指标屏蔽 1=是 0=否
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
                     * 获取是否对事件屏蔽 1=是 0=否
                     * @return ShieldEventFlag 是否对事件屏蔽 1=是 0=否
                     * 
                     */
                    int64_t GetShieldEventFlag() const;

                    /**
                     * 设置是否对事件屏蔽 1=是 0=否
                     * @param _shieldEventFlag 是否对事件屏蔽 1=是 0=否
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
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 屏蔽策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 命名空间即策略类型
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     */
                    std::string m_shieldTimeType;
                    bool m_shieldTimeTypeHasBeenSet;

                    /**
                     * 屏蔽对象
                     */
                    std::vector<std::string> m_shieldObject;
                    bool m_shieldObjectHasBeenSet;

                    /**
                     * 屏蔽指标 为空则为全部指标
                     */
                    std::vector<std::string> m_shieldMetric;
                    bool m_shieldMetricHasBeenSet;

                    /**
                     * 开始时间 相对时间范围:36000 绝对时间范围:1648742400 缺省:0
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 相对时间范围:72000 绝对时间范围:1649088000 缺省:0
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 循环开始日期 2022/04/01 缺省:0
                     */
                    uint64_t m_loopStartDate;
                    bool m_loopStartDateHasBeenSet;

                    /**
                     * 循环结束日期 2022/04/05 缺省:0
                     */
                    uint64_t m_loopEndDate;
                    bool m_loopEndDateHasBeenSet;

                    /**
                     * 需要屏蔽的策略ID
                     */
                    std::string m_shieldPolicyId;
                    bool m_shieldPolicyIdHasBeenSet;

                    /**
                     * 需要屏蔽的告警等级，取值范围Warn,Remind,Serious
                     */
                    std::vector<std::string> m_shieldAlarmLevel;
                    bool m_shieldAlarmLevelHasBeenSet;

                    /**
                     * 屏蔽类型，为OBJNAME是老版本实例名屏蔽，为POLICY是新版本维度匹配
                     */
                    std::string m_versionTag;
                    bool m_versionTagHasBeenSet;

                    /**
                     * 屏蔽规则的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     *  时区，东八区+8，西八区减8，以此类推

                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 屏蔽事件 为空则为全部指标
                     */
                    std::vector<std::string> m_shieldEvent;
                    bool m_shieldEventHasBeenSet;

                    /**
                     * 是否对指标屏蔽 1=是 0=否
                     */
                    int64_t m_shieldMetricFlag;
                    bool m_shieldMetricFlagHasBeenSet;

                    /**
                     * 是否对事件屏蔽 1=是 0=否
                     */
                    int64_t m_shieldEventFlag;
                    bool m_shieldEventFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMSHIELDREQUEST_H_
