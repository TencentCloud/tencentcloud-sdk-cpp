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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertCustomReceiver.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupRuleSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdatePrometheusAlertGroup请求参数结构体
                */
                class UpdatePrometheusAlertGroupRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAlertGroupRequest();
                    ~UpdatePrometheusAlertGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取prometheus实例ID
                     * @return InstanceId prometheus实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置prometheus实例ID
                     * @param _instanceId prometheus实例ID
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
                     * 获取告警分组ID，形如alert-xxxx
                     * @return GroupId 告警分组ID，形如alert-xxxx
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置告警分组ID，形如alert-xxxx
                     * @param _groupId 告警分组ID，形如alert-xxxx
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警分组名称，不能与其他告警分组重名
                     * @return GroupName 告警分组名称，不能与其他告警分组重名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置告警分组名称，不能与其他告警分组重名
                     * @param _groupName 告警分组名称，不能与其他告警分组重名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取告警分组状态：
2 -- 启用
3 -- 禁用
不为空时会覆盖 `Rules`字段下所有告警规则状态
                     * @return GroupState 告警分组状态：
2 -- 启用
3 -- 禁用
不为空时会覆盖 `Rules`字段下所有告警规则状态
                     * 
                     */
                    int64_t GetGroupState() const;

                    /**
                     * 设置告警分组状态：
2 -- 启用
3 -- 禁用
不为空时会覆盖 `Rules`字段下所有告警规则状态
                     * @param _groupState 告警分组状态：
2 -- 启用
3 -- 禁用
不为空时会覆盖 `Rules`字段下所有告警规则状态
                     * 
                     */
                    void SetGroupState(const int64_t& _groupState);

                    /**
                     * 判断参数 GroupState 是否已赋值
                     * @return GroupState 是否已赋值
                     * 
                     */
                    bool GroupStateHasBeenSet() const;

                    /**
                     * 获取云监控告警通知模板ID列表，形如Consumer-xxxx或notice-xxxx
                     * @return AMPReceivers 云监控告警通知模板ID列表，形如Consumer-xxxx或notice-xxxx
                     * 
                     */
                    std::vector<std::string> GetAMPReceivers() const;

                    /**
                     * 设置云监控告警通知模板ID列表，形如Consumer-xxxx或notice-xxxx
                     * @param _aMPReceivers 云监控告警通知模板ID列表，形如Consumer-xxxx或notice-xxxx
                     * 
                     */
                    void SetAMPReceivers(const std::vector<std::string>& _aMPReceivers);

                    /**
                     * 判断参数 AMPReceivers 是否已赋值
                     * @return AMPReceivers 是否已赋值
                     * 
                     */
                    bool AMPReceiversHasBeenSet() const;

                    /**
                     * 获取自定义告警通知模板
                     * @return CustomReceiver 自定义告警通知模板
                     * 
                     */
                    PrometheusAlertCustomReceiver GetCustomReceiver() const;

                    /**
                     * 设置自定义告警通知模板
                     * @param _customReceiver 自定义告警通知模板
                     * 
                     */
                    void SetCustomReceiver(const PrometheusAlertCustomReceiver& _customReceiver);

                    /**
                     * 判断参数 CustomReceiver 是否已赋值
                     * @return CustomReceiver 是否已赋值
                     * 
                     */
                    bool CustomReceiverHasBeenSet() const;

                    /**
                     * 获取告警通知周期（收敛时间），为空默认1h
                     * @return RepeatInterval 告警通知周期（收敛时间），为空默认1h
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置告警通知周期（收敛时间），为空默认1h
                     * @param _repeatInterval 告警通知周期（收敛时间），为空默认1h
                     * 
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取要创建的告警规则列表
                     * @return Rules 要创建的告警规则列表
                     * 
                     */
                    std::vector<PrometheusAlertGroupRuleSet> GetRules() const;

                    /**
                     * 设置要创建的告警规则列表
                     * @param _rules 要创建的告警规则列表
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertGroupRuleSet>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * prometheus实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 告警分组ID，形如alert-xxxx
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警分组名称，不能与其他告警分组重名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 告警分组状态：
2 -- 启用
3 -- 禁用
不为空时会覆盖 `Rules`字段下所有告警规则状态
                     */
                    int64_t m_groupState;
                    bool m_groupStateHasBeenSet;

                    /**
                     * 云监控告警通知模板ID列表，形如Consumer-xxxx或notice-xxxx
                     */
                    std::vector<std::string> m_aMPReceivers;
                    bool m_aMPReceiversHasBeenSet;

                    /**
                     * 自定义告警通知模板
                     */
                    PrometheusAlertCustomReceiver m_customReceiver;
                    bool m_customReceiverHasBeenSet;

                    /**
                     * 告警通知周期（收敛时间），为空默认1h
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * 要创建的告警规则列表
                     */
                    std::vector<PrometheusAlertGroupRuleSet> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_
