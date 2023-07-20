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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYALARMRULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYALARMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyAlarmRuleRequest
                */
                class ModifyAlarmRuleRequest : public AbstractModel
                {
                public:
                    ModifyAlarmRuleRequest();
                    ~ModifyAlarmRuleRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警id
                     * @return AlarmId 告警id
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警id
                     * @param _alarmId 告警id
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取规则名字
                     * @return RuleName 规则名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名字
                     * @param _ruleName 规则名字
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取监控类型,1.task、2.workflow、3.project、4.baseline（默认为1.任务）
                     * @return MonitorType 监控类型,1.task、2.workflow、3.project、4.baseline（默认为1.任务）
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置监控类型,1.task、2.workflow、3.project、4.baseline（默认为1.任务）
                     * @param _monitorType 监控类型,1.task、2.workflow、3.project、4.baseline（默认为1.任务）
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取监控对象
                     * @return MonitorObjectIds 监控对象
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置监控对象
                     * @param _monitorObjectIds 监控对象
                     * 
                     */
                    void SetMonitorObjectIds(const std::vector<std::string>& _monitorObjectIds);

                    /**
                     * 判断参数 MonitorObjectIds 是否已赋值
                     * @return MonitorObjectIds 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdsHasBeenSet() const;

                    /**
                     * 获取告警类型，1.失败告警、2.超时告警、3.成功告警、4.基线破线、5.基线预警、6.基线任务失败（默认1.失败告警）
                     * @return AlarmTypes 告警类型，1.失败告警、2.超时告警、3.成功告警、4.基线破线、5.基线预警、6.基线任务失败（默认1.失败告警）
                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置告警类型，1.失败告警、2.超时告警、3.成功告警、4.基线破线、5.基线预警、6.基线任务失败（默认1.失败告警）
                     * @param _alarmTypes 告警类型，1.失败告警、2.超时告警、3.成功告警、4.基线破线、5.基线预警、6.基线任务失败（默认1.失败告警）
                     * 
                     */
                    void SetAlarmTypes(const std::vector<std::string>& _alarmTypes);

                    /**
                     * 判断参数 AlarmTypes 是否已赋值
                     * @return AlarmTypes 是否已赋值
                     * 
                     */
                    bool AlarmTypesHasBeenSet() const;

                    /**
                     * 获取告警级别，1.普通、2.重要、3.紧急（默认1.普通）
                     * @return AlarmLevel 告警级别，1.普通、2.重要、3.紧急（默认1.普通）
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别，1.普通、2.重要、3.紧急（默认1.普通）
                     * @param _alarmLevel 告警级别，1.普通、2.重要、3.紧急（默认1.普通）
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * @return AlarmWays 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * @param _alarmWays 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * 
                     */
                    void SetAlarmWays(const std::vector<std::string>& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @return AlarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * 
                     */
                    int64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @param _alarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * 
                     */
                    void SetAlarmRecipientType(const int64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取告警接收人
                     * @return AlarmRecipients 告警接收人
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipients() const;

                    /**
                     * 设置告警接收人
                     * @param _alarmRecipients 告警接收人
                     * 
                     */
                    void SetAlarmRecipients(const std::vector<std::string>& _alarmRecipients);

                    /**
                     * 判断参数 AlarmRecipients 是否已赋值
                     * @return AlarmRecipients 是否已赋值
                     * 
                     */
                    bool AlarmRecipientsHasBeenSet() const;

                    /**
                     * 获取告警接收人ID
                     * @return AlarmRecipientIds 告警接收人ID
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipientIds() const;

                    /**
                     * 设置告警接收人ID
                     * @param _alarmRecipientIds 告警接收人ID
                     * 
                     */
                    void SetAlarmRecipientIds(const std::vector<std::string>& _alarmRecipientIds);

                    /**
                     * 判断参数 AlarmRecipientIds 是否已赋值
                     * @return AlarmRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdsHasBeenSet() const;

                    /**
                     * 获取扩展信息, 1.预计运行耗时（默认），2.预计完成时间，3.预计调度时间，4.周期内未完成；取值类型：1.指定指，2.历史均值（默认1.指定指）
                     * @return ExtInfo 扩展信息, 1.预计运行耗时（默认），2.预计完成时间，3.预计调度时间，4.周期内未完成；取值类型：1.指定指，2.历史均值（默认1.指定指）
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置扩展信息, 1.预计运行耗时（默认），2.预计完成时间，3.预计调度时间，4.周期内未完成；取值类型：1.指定指，2.历史均值（默认1.指定指）
                     * @param _extInfo 扩展信息, 1.预计运行耗时（默认），2.预计完成时间，3.预计调度时间，4.周期内未完成；取值类型：1.指定指，2.历史均值（默认1.指定指）
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 告警id
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 规则名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 监控类型,1.task、2.workflow、3.project、4.baseline（默认为1.任务）
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 监控对象
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * 告警类型，1.失败告警、2.超时告警、3.成功告警、4.基线破线、5.基线预警、6.基线任务失败（默认1.失败告警）
                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                    /**
                     * 告警级别，1.普通、2.重要、3.紧急（默认1.普通）
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     */
                    int64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 告警接收人
                     */
                    std::vector<std::string> m_alarmRecipients;
                    bool m_alarmRecipientsHasBeenSet;

                    /**
                     * 告警接收人ID
                     */
                    std::vector<std::string> m_alarmRecipientIds;
                    bool m_alarmRecipientIdsHasBeenSet;

                    /**
                     * 扩展信息, 1.预计运行耗时（默认），2.预计完成时间，3.预计调度时间，4.周期内未完成；取值类型：1.指定指，2.历史均值（默认1.指定指）
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYALARMRULEREQUEST_H_
