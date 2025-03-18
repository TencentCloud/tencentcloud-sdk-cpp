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
                     * 获取任务分组动作ID
                     * @return TaskGroupActionId 任务分组动作ID
                     * 
                     */
                    int64_t GetTaskGroupActionId() const;

                    /**
                     * 设置任务分组动作ID
                     * @param _taskGroupActionId 任务分组动作ID
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
                     * 获取任务分组动作实例列表
                     * @return TaskGroupInstances 任务分组动作实例列表
                     * 
                     */
                    std::vector<TaskGroupInstance> GetTaskGroupInstances() const;

                    /**
                     * 设置任务分组动作实例列表
                     * @param _taskGroupInstances 任务分组动作实例列表
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
                     * 获取动作ID
                     * @return ActionId 动作ID
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置动作ID
                     * @param _actionId 动作ID
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
                     * 获取分组动作顺序
                     * @return TaskGroupActionOrder 分组动作顺序
                     * 
                     */
                    int64_t GetTaskGroupActionOrder() const;

                    /**
                     * 设置分组动作顺序
                     * @param _taskGroupActionOrder 分组动作顺序
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
                     * 获取分组动作通用配置
                     * @return TaskGroupActionGeneralConfiguration 分组动作通用配置
                     * 
                     */
                    std::string GetTaskGroupActionGeneralConfiguration() const;

                    /**
                     * 设置分组动作通用配置
                     * @param _taskGroupActionGeneralConfiguration 分组动作通用配置
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
                     * 获取分组动作自定义配置
                     * @return TaskGroupActionCustomConfiguration 分组动作自定义配置
                     * 
                     */
                    std::string GetTaskGroupActionCustomConfiguration() const;

                    /**
                     * 设置分组动作自定义配置
                     * @param _taskGroupActionCustomConfiguration 分组动作自定义配置
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
                     * 获取分组动作状态
                     * @return TaskGroupActionStatus 分组动作状态
                     * 
                     */
                    int64_t GetTaskGroupActionStatus() const;

                    /**
                     * 设置分组动作状态
                     * @param _taskGroupActionStatus 分组动作状态
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
                     * 获取动作分组创建时间
                     * @return TaskGroupActionCreateTime 动作分组创建时间
                     * 
                     */
                    std::string GetTaskGroupActionCreateTime() const;

                    /**
                     * 设置动作分组创建时间
                     * @param _taskGroupActionCreateTime 动作分组创建时间
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
                     * 获取动作分组更新时间
                     * @return TaskGroupActionUpdateTime 动作分组更新时间
                     * 
                     */
                    std::string GetTaskGroupActionUpdateTime() const;

                    /**
                     * 设置动作分组更新时间
                     * @param _taskGroupActionUpdateTime 动作分组更新时间
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
                     * 获取动作名称
                     * @return ActionTitle 动作名称
                     * 
                     */
                    std::string GetActionTitle() const;

                    /**
                     * 设置动作名称
                     * @param _actionTitle 动作名称
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
                     * 获取状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * @return TaskGroupActionStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * 
                     */
                    int64_t GetTaskGroupActionStatusType() const;

                    /**
                     * 设置状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * @param _taskGroupActionStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
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
                     * 获取RandomId
                     * @return TaskGroupActionRandomId RandomId
                     * 
                     */
                    int64_t GetTaskGroupActionRandomId() const;

                    /**
                     * 设置RandomId
                     * @param _taskGroupActionRandomId RandomId
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
                     * 获取RecoverId
                     * @return TaskGroupActionRecoverId RecoverId
                     * 
                     */
                    int64_t GetTaskGroupActionRecoverId() const;

                    /**
                     * 设置RecoverId
                     * @param _taskGroupActionRecoverId RecoverId
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
                     * 获取ExecuteId
                     * @return TaskGroupActionExecuteId ExecuteId
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteId() const;

                    /**
                     * 设置ExecuteId
                     * @param _taskGroupActionExecuteId ExecuteId
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
                     * 获取调用api类型，0:tat, 1:云api
                     * @return ActionApiType 调用api类型，0:tat, 1:云api
                     * 
                     */
                    int64_t GetActionApiType() const;

                    /**
                     * 设置调用api类型，0:tat, 1:云api
                     * @param _actionApiType 调用api类型，0:tat, 1:云api
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
                     * 获取1:故障，2:恢复
                     * @return ActionAttribute 1:故障，2:恢复
                     * 
                     */
                    int64_t GetActionAttribute() const;

                    /**
                     * 设置1:故障，2:恢复
                     * @param _actionAttribute 1:故障，2:恢复
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
                     * 获取动作类型：平台、自定义
                     * @return ActionType 动作类型：平台、自定义
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型：平台、自定义
                     * @param _actionType 动作类型：平台、自定义
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
                     * 获取是否可重试
                     * @return IsExecuteRedo 是否可重试
                     * 
                     */
                    bool GetIsExecuteRedo() const;

                    /**
                     * 设置是否可重试
                     * @param _isExecuteRedo 是否可重试
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
                     * 获取动作风险级别
                     * @return ActionRisk 动作风险级别
                     * 
                     */
                    std::string GetActionRisk() const;

                    /**
                     * 设置动作风险级别
                     * @param _actionRisk 动作风险级别
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
                     * 获取动作运行时间
                     * @return TaskGroupActionExecuteTime 动作运行时间
                     * 
                     */
                    int64_t GetTaskGroupActionExecuteTime() const;

                    /**
                     * 设置动作运行时间
                     * @param _taskGroupActionExecuteTime 动作运行时间
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
                     * 获取动作开始执行时间
                     * @return TaskGroupActionStartTime 动作开始执行时间
                     * 
                     */
                    std::string GetTaskGroupActionStartTime() const;

                    /**
                     * 设置动作开始执行时间
                     * @param _taskGroupActionStartTime 动作开始执行时间
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
                     * 任务分组动作ID
                     */
                    int64_t m_taskGroupActionId;
                    bool m_taskGroupActionIdHasBeenSet;

                    /**
                     * 任务分组动作实例列表
                     */
                    std::vector<TaskGroupInstance> m_taskGroupInstances;
                    bool m_taskGroupInstancesHasBeenSet;

                    /**
                     * 动作ID
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 分组动作顺序
                     */
                    int64_t m_taskGroupActionOrder;
                    bool m_taskGroupActionOrderHasBeenSet;

                    /**
                     * 分组动作通用配置
                     */
                    std::string m_taskGroupActionGeneralConfiguration;
                    bool m_taskGroupActionGeneralConfigurationHasBeenSet;

                    /**
                     * 分组动作自定义配置
                     */
                    std::string m_taskGroupActionCustomConfiguration;
                    bool m_taskGroupActionCustomConfigurationHasBeenSet;

                    /**
                     * 分组动作状态
                     */
                    int64_t m_taskGroupActionStatus;
                    bool m_taskGroupActionStatusHasBeenSet;

                    /**
                     * 动作分组创建时间
                     */
                    std::string m_taskGroupActionCreateTime;
                    bool m_taskGroupActionCreateTimeHasBeenSet;

                    /**
                     * 动作分组更新时间
                     */
                    std::string m_taskGroupActionUpdateTime;
                    bool m_taskGroupActionUpdateTimeHasBeenSet;

                    /**
                     * 动作名称
                     */
                    std::string m_actionTitle;
                    bool m_actionTitleHasBeenSet;

                    /**
                     * 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     */
                    int64_t m_taskGroupActionStatusType;
                    bool m_taskGroupActionStatusTypeHasBeenSet;

                    /**
                     * RandomId
                     */
                    int64_t m_taskGroupActionRandomId;
                    bool m_taskGroupActionRandomIdHasBeenSet;

                    /**
                     * RecoverId
                     */
                    int64_t m_taskGroupActionRecoverId;
                    bool m_taskGroupActionRecoverIdHasBeenSet;

                    /**
                     * ExecuteId
                     */
                    int64_t m_taskGroupActionExecuteId;
                    bool m_taskGroupActionExecuteIdHasBeenSet;

                    /**
                     * 调用api类型，0:tat, 1:云api
                     */
                    int64_t m_actionApiType;
                    bool m_actionApiTypeHasBeenSet;

                    /**
                     * 1:故障，2:恢复
                     */
                    int64_t m_actionAttribute;
                    bool m_actionAttributeHasBeenSet;

                    /**
                     * 动作类型：平台、自定义
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 是否可重试
                     */
                    bool m_isExecuteRedo;
                    bool m_isExecuteRedoHasBeenSet;

                    /**
                     * 动作风险级别
                     */
                    std::string m_actionRisk;
                    bool m_actionRiskHasBeenSet;

                    /**
                     * 动作运行时间
                     */
                    int64_t m_taskGroupActionExecuteTime;
                    bool m_taskGroupActionExecuteTimeHasBeenSet;

                    /**
                     * 动作开始执行时间
                     */
                    std::string m_taskGroupActionStartTime;
                    bool m_taskGroupActionStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTION_H_
