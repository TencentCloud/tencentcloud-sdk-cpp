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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupInstance.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分组动作
                */
                class TaskGroupAction : public AbstractModel
                {
                public:
                    TaskGroupAction();
                    ~TaskGroupAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务分组动作ID</p>
                     * @return TaskGroupActionId <p>任务分组动作ID</p>
                     * 
                     */
                    int64_t GetTaskGroupActionId() const;

                    /**
                     * 设置<p>任务分组动作ID</p>
                     * @param _taskGroupActionId <p>任务分组动作ID</p>
                     * 
                     */
                    void SetTaskGroupActionId(const int64_t& _taskGroupActionId);

                    /**
                     * 判断参数 TaskGroupActionId 是否已赋值
                     * @return TaskGroupActionId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionIdHasBeenSet() const;

                    /**
                     * 获取<p>任务分组动作实例列表</p>
                     * @return TaskGroupInstances <p>任务分组动作实例列表</p>
                     * 
                     */
                    std::vector<TaskGroupInstance> GetTaskGroupInstances() const;

                    /**
                     * 设置<p>任务分组动作实例列表</p>
                     * @param _taskGroupInstances <p>任务分组动作实例列表</p>
                     * 
                     */
                    void SetTaskGroupInstances(const std::vector<TaskGroupInstance>& _taskGroupInstances);

                    /**
                     * 判断参数 TaskGroupInstances 是否已赋值
                     * @return TaskGroupInstances 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesHasBeenSet() const;

                    /**
                     * 获取<p>动作ID</p>
                     * @return ActionId <p>动作ID</p>
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置<p>动作ID</p>
                     * @param _actionId <p>动作ID</p>
                     * 
                     */
                    void SetActionId(const int64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取<p>分组动作顺序</p>
                     * @return TaskGroupActionOrder <p>分组动作顺序</p>
                     * 
                     */
                    int64_t GetTaskGroupActionOrder() const;

                    /**
                     * 设置<p>分组动作顺序</p>
                     * @param _taskGroupActionOrder <p>分组动作顺序</p>
                     * 
                     */
                    void SetTaskGroupActionOrder(const int64_t& _taskGroupActionOrder);

                    /**
                     * 判断参数 TaskGroupActionOrder 是否已赋值
                     * @return TaskGroupActionOrder 是否已赋值
                     * 
                     */
                    bool TaskGroupActionOrderHasBeenSet() const;

                    /**
                     * 获取<p>分组动作通用配置</p>
                     * @return TaskGroupActionGeneralConfiguration <p>分组动作通用配置</p>
                     * 
                     */
                    std::string GetTaskGroupActionGeneralConfiguration() const;

                    /**
                     * 设置<p>分组动作通用配置</p>
                     * @param _taskGroupActionGeneralConfiguration <p>分组动作通用配置</p>
                     * 
                     */
                    void SetTaskGroupActionGeneralConfiguration(const std::string& _taskGroupActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskGroupActionGeneralConfiguration 是否已赋值
                     * @return TaskGroupActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>分组动作自定义配置</p>
                     * @return TaskGroupActionCustomConfiguration <p>分组动作自定义配置</p>
                     * 
                     */
                    std::string GetTaskGroupActionCustomConfiguration() const;

                    /**
                     * 设置<p>分组动作自定义配置</p>
                     * @param _taskGroupActionCustomConfiguration <p>分组动作自定义配置</p>
                     * 
                     */
                    void SetTaskGroupActionCustomConfiguration(const std::string& _taskGroupActionCustomConfiguration);

                    /**
                     * 判断参数 TaskGroupActionCustomConfiguration 是否已赋值
                     * @return TaskGroupActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCustomConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>分组动作状态</p><p>枚举值：</p><ul><li>2001： 未开始</li><li>2002： 待执行</li><li>2003： 执行中</li><li>2004： 执行结束</li></ul>
                     * @return TaskGroupActionStatus <p>分组动作状态</p><p>枚举值：</p><ul><li>2001： 未开始</li><li>2002： 待执行</li><li>2003： 执行中</li><li>2004： 执行结束</li></ul>
                     * 
                     */
                    int64_t GetTaskGroupActionStatus() const;

                    /**
                     * 设置<p>分组动作状态</p><p>枚举值：</p><ul><li>2001： 未开始</li><li>2002： 待执行</li><li>2003： 执行中</li><li>2004： 执行结束</li></ul>
                     * @param _taskGroupActionStatus <p>分组动作状态</p><p>枚举值：</p><ul><li>2001： 未开始</li><li>2002： 待执行</li><li>2003： 执行中</li><li>2004： 执行结束</li></ul>
                     * 
                     */
                    void SetTaskGroupActionStatus(const int64_t& _taskGroupActionStatus);

                    /**
                     * 判断参数 TaskGroupActionStatus 是否已赋值
                     * @return TaskGroupActionStatus 是否已赋值
                     * 
                     */
                    bool TaskGroupActionStatusHasBeenSet() const;

                    /**
                     * 获取<p>动作分组创建时间</p>
                     * @return TaskGroupActionCreateTime <p>动作分组创建时间</p>
                     * 
                     */
                    std::string GetTaskGroupActionCreateTime() const;

                    /**
                     * 设置<p>动作分组创建时间</p>
                     * @param _taskGroupActionCreateTime <p>动作分组创建时间</p>
                     * 
                     */
                    void SetTaskGroupActionCreateTime(const std::string& _taskGroupActionCreateTime);

                    /**
                     * 判断参数 TaskGroupActionCreateTime 是否已赋值
                     * @return TaskGroupActionCreateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>动作分组更新时间</p>
                     * @return TaskGroupActionUpdateTime <p>动作分组更新时间</p>
                     * 
                     */
                    std::string GetTaskGroupActionUpdateTime() const;

                    /**
                     * 设置<p>动作分组更新时间</p>
                     * @param _taskGroupActionUpdateTime <p>动作分组更新时间</p>
                     * 
                     */
                    void SetTaskGroupActionUpdateTime(const std::string& _taskGroupActionUpdateTime);

                    /**
                     * 判断参数 TaskGroupActionUpdateTime 是否已赋值
                     * @return TaskGroupActionUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>动作名称</p>
                     * @return ActionTitle <p>动作名称</p>
                     * 
                     */
                    std::string GetActionTitle() const;

                    /**
                     * 设置<p>动作名称</p>
                     * @param _actionTitle <p>动作名称</p>
                     * 
                     */
                    void SetActionTitle(const std::string& _actionTitle);

                    /**
                     * 判断参数 ActionTitle 是否已赋值
                     * @return ActionTitle 是否已赋值
                     * 
                     */
                    bool ActionTitleHasBeenSet() const;

                    /**
                     * 获取<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * @return TaskGroupActionStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * 
                     */
                    int64_t GetTaskGroupActionStatusType() const;

                    /**
                     * 设置<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * @param _taskGroupActionStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * 
                     */
                    void SetTaskGroupActionStatusType(const int64_t& _taskGroupActionStatusType);

                    /**
                     * 判断参数 TaskGroupActionStatusType 是否已赋值
                     * @return TaskGroupActionStatusType 是否已赋值
                     * 
                     */
                    bool TaskGroupActionStatusTypeHasBeenSet() const;

                    /**
                     * 获取<p>RandomId</p>
                     * @return TaskGroupActionRandomId <p>RandomId</p>
                     * 
                     */
                    int64_t GetTaskGroupActionRandomId() const;

                    /**
                     * 设置<p>RandomId</p>
                     * @param _taskGroupActionRandomId <p>RandomId</p>
                     * 
                     */
                    void SetTaskGroupActionRandomId(const int64_t& _taskGroupActionRandomId);

                    /**
                     * 判断参数 TaskGroupActionRandomId 是否已赋值
                     * @return TaskGroupActionRandomId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionRandomIdHasBeenSet() const;

                    /**
                     * 获取<p>RecoverId</p>
                     * @return TaskGroupActionRecoverId <p>RecoverId</p>
                     * 
                     */
                    int64_t GetTaskGroupActionRecoverId() const;

                    /**
                     * 设置<p>RecoverId</p>
                     * @param _taskGroupActionRecoverId <p>RecoverId</p>
                     * 
                     */
                    void SetTaskGroupActionRecoverId(const int64_t& _taskGroupActionRecoverId);

                    /**
                     * 判断参数 TaskGroupActionRecoverId 是否已赋值
                     * @return TaskGroupActionRecoverId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionRecoverIdHasBeenSet() const;

                    /**
                     * 获取<p>ExecuteId</p>
                     * @return TaskGroupActionExecuteId <p>ExecuteId</p>
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteId() const;

                    /**
                     * 设置<p>ExecuteId</p>
                     * @param _taskGroupActionExecuteId <p>ExecuteId</p>
                     * 
                     */
                    void SetTaskGroupActionExecuteId(const int64_t& _taskGroupActionExecuteId);

                    /**
                     * 判断参数 TaskGroupActionExecuteId 是否已赋值
                     * @return TaskGroupActionExecuteId 是否已赋值
                     * 
                     */
                    bool TaskGroupActionExecuteIdHasBeenSet() const;

                    /**
                     * 获取<p>调用api类型，0:tat, 1:云api</p>
                     * @return ActionApiType <p>调用api类型，0:tat, 1:云api</p>
                     * 
                     */
                    int64_t GetActionApiType() const;

                    /**
                     * 设置<p>调用api类型，0:tat, 1:云api</p>
                     * @param _actionApiType <p>调用api类型，0:tat, 1:云api</p>
                     * 
                     */
                    void SetActionApiType(const int64_t& _actionApiType);

                    /**
                     * 判断参数 ActionApiType 是否已赋值
                     * @return ActionApiType 是否已赋值
                     * 
                     */
                    bool ActionApiTypeHasBeenSet() const;

                    /**
                     * 获取<p>1:故障，2:恢复</p>
                     * @return ActionAttribute <p>1:故障，2:恢复</p>
                     * 
                     */
                    int64_t GetActionAttribute() const;

                    /**
                     * 设置<p>1:故障，2:恢复</p>
                     * @param _actionAttribute <p>1:故障，2:恢复</p>
                     * 
                     */
                    void SetActionAttribute(const int64_t& _actionAttribute);

                    /**
                     * 判断参数 ActionAttribute 是否已赋值
                     * @return ActionAttribute 是否已赋值
                     * 
                     */
                    bool ActionAttributeHasBeenSet() const;

                    /**
                     * 获取<p>动作类型：平台、自定义</p>
                     * @return ActionType <p>动作类型：平台、自定义</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>动作类型：平台、自定义</p>
                     * @param _actionType <p>动作类型：平台、自定义</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否可重试</p>
                     * @return IsExecuteRedo <p>是否可重试</p>
                     * 
                     */
                    bool GetIsExecuteRedo() const;

                    /**
                     * 设置<p>是否可重试</p>
                     * @param _isExecuteRedo <p>是否可重试</p>
                     * 
                     */
                    void SetIsExecuteRedo(const bool& _isExecuteRedo);

                    /**
                     * 判断参数 IsExecuteRedo 是否已赋值
                     * @return IsExecuteRedo 是否已赋值
                     * 
                     */
                    bool IsExecuteRedoHasBeenSet() const;

                    /**
                     * 获取<p>动作风险级别</p>
                     * @return ActionRisk <p>动作风险级别</p>
                     * 
                     */
                    std::string GetActionRisk() const;

                    /**
                     * 设置<p>动作风险级别</p>
                     * @param _actionRisk <p>动作风险级别</p>
                     * 
                     */
                    void SetActionRisk(const std::string& _actionRisk);

                    /**
                     * 判断参数 ActionRisk 是否已赋值
                     * @return ActionRisk 是否已赋值
                     * 
                     */
                    bool ActionRiskHasBeenSet() const;

                    /**
                     * 获取<p>动作运行时间</p><p>单位：秒</p>
                     * @return TaskGroupActionExecuteTime <p>动作运行时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteTime() const;

                    /**
                     * 设置<p>动作运行时间</p><p>单位：秒</p>
                     * @param _taskGroupActionExecuteTime <p>动作运行时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetTaskGroupActionExecuteTime(const int64_t& _taskGroupActionExecuteTime);

                    /**
                     * 判断参数 TaskGroupActionExecuteTime 是否已赋值
                     * @return TaskGroupActionExecuteTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionExecuteTimeHasBeenSet() const;

                    /**
                     * 获取<p>动作开始执行时间</p>
                     * @return TaskGroupActionStartTime <p>动作开始执行时间</p>
                     * 
                     */
                    std::string GetTaskGroupActionStartTime() const;

                    /**
                     * 设置<p>动作开始执行时间</p>
                     * @param _taskGroupActionStartTime <p>动作开始执行时间</p>
                     * 
                     */
                    void SetTaskGroupActionStartTime(const std::string& _taskGroupActionStartTime);

                    /**
                     * 判断参数 TaskGroupActionStartTime 是否已赋值
                     * @return TaskGroupActionStartTime 是否已赋值
                     * 
                     */
                    bool TaskGroupActionStartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务分组动作ID</p>
                     */
                    int64_t m_taskGroupActionId;
                    bool m_taskGroupActionIdHasBeenSet;

                    /**
                     * <p>任务分组动作实例列表</p>
                     */
                    std::vector<TaskGroupInstance> m_taskGroupInstances;
                    bool m_taskGroupInstancesHasBeenSet;

                    /**
                     * <p>动作ID</p>
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * <p>分组动作顺序</p>
                     */
                    int64_t m_taskGroupActionOrder;
                    bool m_taskGroupActionOrderHasBeenSet;

                    /**
                     * <p>分组动作通用配置</p>
                     */
                    std::string m_taskGroupActionGeneralConfiguration;
                    bool m_taskGroupActionGeneralConfigurationHasBeenSet;

                    /**
                     * <p>分组动作自定义配置</p>
                     */
                    std::string m_taskGroupActionCustomConfiguration;
                    bool m_taskGroupActionCustomConfigurationHasBeenSet;

                    /**
                     * <p>分组动作状态</p><p>枚举值：</p><ul><li>2001： 未开始</li><li>2002： 待执行</li><li>2003： 执行中</li><li>2004： 执行结束</li></ul>
                     */
                    int64_t m_taskGroupActionStatus;
                    bool m_taskGroupActionStatusHasBeenSet;

                    /**
                     * <p>动作分组创建时间</p>
                     */
                    std::string m_taskGroupActionCreateTime;
                    bool m_taskGroupActionCreateTimeHasBeenSet;

                    /**
                     * <p>动作分组更新时间</p>
                     */
                    std::string m_taskGroupActionUpdateTime;
                    bool m_taskGroupActionUpdateTimeHasBeenSet;

                    /**
                     * <p>动作名称</p>
                     */
                    std::string m_actionTitle;
                    bool m_actionTitleHasBeenSet;

                    /**
                     * <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     */
                    int64_t m_taskGroupActionStatusType;
                    bool m_taskGroupActionStatusTypeHasBeenSet;

                    /**
                     * <p>RandomId</p>
                     */
                    int64_t m_taskGroupActionRandomId;
                    bool m_taskGroupActionRandomIdHasBeenSet;

                    /**
                     * <p>RecoverId</p>
                     */
                    int64_t m_taskGroupActionRecoverId;
                    bool m_taskGroupActionRecoverIdHasBeenSet;

                    /**
                     * <p>ExecuteId</p>
                     */
                    int64_t m_taskGroupActionExecuteId;
                    bool m_taskGroupActionExecuteIdHasBeenSet;

                    /**
                     * <p>调用api类型，0:tat, 1:云api</p>
                     */
                    int64_t m_actionApiType;
                    bool m_actionApiTypeHasBeenSet;

                    /**
                     * <p>1:故障，2:恢复</p>
                     */
                    int64_t m_actionAttribute;
                    bool m_actionAttributeHasBeenSet;

                    /**
                     * <p>动作类型：平台、自定义</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>是否可重试</p>
                     */
                    bool m_isExecuteRedo;
                    bool m_isExecuteRedoHasBeenSet;

                    /**
                     * <p>动作风险级别</p>
                     */
                    std::string m_actionRisk;
                    bool m_actionRiskHasBeenSet;

                    /**
                     * <p>动作运行时间</p><p>单位：秒</p>
                     */
                    int64_t m_taskGroupActionExecuteTime;
                    bool m_taskGroupActionExecuteTimeHasBeenSet;

                    /**
                     * <p>动作开始执行时间</p>
                     */
                    std::string m_taskGroupActionStartTime;
                    bool m_taskGroupActionStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_
