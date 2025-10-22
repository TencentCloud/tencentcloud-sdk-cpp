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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYTASKSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyTasks请求参数结构体
                */
                class ModifyAlarmPolicyTasksRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyTasksRequest();
                    ~ModifyAlarmPolicyTasksRequest() = default;
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
                     * 获取告警策略 ID
                     * @return PolicyId 告警策略 ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID
                     * @param _policyId 告警策略 ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取告警策略触发任务列表，空数据代表解绑示例值： { "Type": "AS", "TaskConfig": "{\"Region\":\"ap-guangzhou\",\"Group\":\"asg-0zhspjx\",\"Policy\":\"asp-ganig28\"}" }
                     * @return TriggerTasks 告警策略触发任务列表，空数据代表解绑示例值： { "Type": "AS", "TaskConfig": "{\"Region\":\"ap-guangzhou\",\"Group\":\"asg-0zhspjx\",\"Policy\":\"asp-ganig28\"}" }
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置告警策略触发任务列表，空数据代表解绑示例值： { "Type": "AS", "TaskConfig": "{\"Region\":\"ap-guangzhou\",\"Group\":\"asg-0zhspjx\",\"Policy\":\"asp-ganig28\"}" }
                     * @param _triggerTasks 告警策略触发任务列表，空数据代表解绑示例值： { "Type": "AS", "TaskConfig": "{\"Region\":\"ap-guangzhou\",\"Group\":\"asg-0zhspjx\",\"Policy\":\"asp-ganig28\"}" }
                     * 
                     */
                    void SetTriggerTasks(const std::vector<AlarmPolicyTriggerTask>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     * 
                     */
                    bool TriggerTasksHasBeenSet() const;

                private:

                    /**
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 告警策略触发任务列表，空数据代表解绑示例值： { "Type": "AS", "TaskConfig": "{\"Region\":\"ap-guangzhou\",\"Group\":\"asg-0zhspjx\",\"Policy\":\"asp-ganig28\"}" }
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYTASKSREQUEST_H_
