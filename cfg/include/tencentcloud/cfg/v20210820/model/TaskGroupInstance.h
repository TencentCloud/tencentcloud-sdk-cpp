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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务分组动作实例
                */
                class TaskGroupInstance : public AbstractModel
                {
                public:
                    TaskGroupInstance();
                    ~TaskGroupInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return TaskGroupInstanceId 实例ID
                     * 
                     */
                    int64_t GetTaskGroupInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _taskGroupInstanceId 实例ID
                     * 
                     */
                    void SetTaskGroupInstanceId(const int64_t& _taskGroupInstanceId);

                    /**
                     * 判断参数 TaskGroupInstanceId 是否已赋值
                     * @return TaskGroupInstanceId 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return TaskGroupInstanceObjectId 实例ID
                     * 
                     */
                    std::string GetTaskGroupInstanceObjectId() const;

                    /**
                     * 设置实例ID
                     * @param _taskGroupInstanceObjectId 实例ID
                     * 
                     */
                    void SetTaskGroupInstanceObjectId(const std::string& _taskGroupInstanceObjectId);

                    /**
                     * 判断参数 TaskGroupInstanceObjectId 是否已赋值
                     * @return TaskGroupInstanceObjectId 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceObjectIdHasBeenSet() const;

                    /**
                     * 获取实例动作执行状态
                     * @return TaskGroupInstanceStatus 实例动作执行状态
                     * 
                     */
                    int64_t GetTaskGroupInstanceStatus() const;

                    /**
                     * 设置实例动作执行状态
                     * @param _taskGroupInstanceStatus 实例动作执行状态
                     * 
                     */
                    void SetTaskGroupInstanceStatus(const int64_t& _taskGroupInstanceStatus);

                    /**
                     * 判断参数 TaskGroupInstanceStatus 是否已赋值
                     * @return TaskGroupInstanceStatus 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return TaskGroupInstanceCreateTime 实例创建时间
                     * 
                     */
                    std::string GetTaskGroupInstanceCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _taskGroupInstanceCreateTime 实例创建时间
                     * 
                     */
                    void SetTaskGroupInstanceCreateTime(const std::string& _taskGroupInstanceCreateTime);

                    /**
                     * 判断参数 TaskGroupInstanceCreateTime 是否已赋值
                     * @return TaskGroupInstanceCreateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取实例更新时间
                     * @return TaskGroupInstanceUpdateTime 实例更新时间
                     * 
                     */
                    std::string GetTaskGroupInstanceUpdateTime() const;

                    /**
                     * 设置实例更新时间
                     * @param _taskGroupInstanceUpdateTime 实例更新时间
                     * 
                     */
                    void SetTaskGroupInstanceUpdateTime(const std::string& _taskGroupInstanceUpdateTime);

                    /**
                     * 判断参数 TaskGroupInstanceUpdateTime 是否已赋值
                     * @return TaskGroupInstanceUpdateTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceUpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * @return TaskGroupInstanceStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * 
                     */
                    int64_t GetTaskGroupInstanceStatusType() const;

                    /**
                     * 设置状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * @param _taskGroupInstanceStatusType 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     * 
                     */
                    void SetTaskGroupInstanceStatusType(const int64_t& _taskGroupInstanceStatusType);

                    /**
                     * 判断参数 TaskGroupInstanceStatusType 是否已赋值
                     * @return TaskGroupInstanceStatusType 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStatusTypeHasBeenSet() const;

                    /**
                     * 获取执行开始时间
                     * @return TaskGroupInstanceStartTime 执行开始时间
                     * 
                     */
                    std::string GetTaskGroupInstanceStartTime() const;

                    /**
                     * 设置执行开始时间
                     * @param _taskGroupInstanceStartTime 执行开始时间
                     * 
                     */
                    void SetTaskGroupInstanceStartTime(const std::string& _taskGroupInstanceStartTime);

                    /**
                     * 判断参数 TaskGroupInstanceStartTime 是否已赋值
                     * @return TaskGroupInstanceStartTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceStartTimeHasBeenSet() const;

                    /**
                     * 获取执行结束时间
                     * @return TaskGroupInstanceEndTime 执行结束时间
                     * 
                     */
                    std::string GetTaskGroupInstanceEndTime() const;

                    /**
                     * 设置执行结束时间
                     * @param _taskGroupInstanceEndTime 执行结束时间
                     * 
                     */
                    void SetTaskGroupInstanceEndTime(const std::string& _taskGroupInstanceEndTime);

                    /**
                     * 判断参数 TaskGroupInstanceEndTime 是否已赋值
                     * @return TaskGroupInstanceEndTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceEndTimeHasBeenSet() const;

                    /**
                     * 获取实例动作执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskGroupInstanceExecuteLog 实例动作执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetTaskGroupInstanceExecuteLog() const;

                    /**
                     * 设置实例动作执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskGroupInstanceExecuteLog 实例动作执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTaskGroupInstanceExecuteLog(const std::string& _taskGroupInstanceExecuteLog);

                    /**
                     * 判断参数 TaskGroupInstanceExecuteLog 是否已赋值
                     * @return TaskGroupInstanceExecuteLog 是否已赋值
                     * @deprecated
                     */
                    bool TaskGroupInstanceExecuteLogHasBeenSet() const;

                    /**
                     * 获取实例是否可重试
                     * @return TaskGroupInstanceIsRedo 实例是否可重试
                     * 
                     */
                    bool GetTaskGroupInstanceIsRedo() const;

                    /**
                     * 设置实例是否可重试
                     * @param _taskGroupInstanceIsRedo 实例是否可重试
                     * 
                     */
                    void SetTaskGroupInstanceIsRedo(const bool& _taskGroupInstanceIsRedo);

                    /**
                     * 判断参数 TaskGroupInstanceIsRedo 是否已赋值
                     * @return TaskGroupInstanceIsRedo 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceIsRedoHasBeenSet() const;

                    /**
                     * 获取动作实例执行时间
                     * @return TaskGroupInstanceExecuteTime 动作实例执行时间
                     * 
                     */
                    int64_t GetTaskGroupInstanceExecuteTime() const;

                    /**
                     * 设置动作实例执行时间
                     * @param _taskGroupInstanceExecuteTime 动作实例执行时间
                     * 
                     */
                    void SetTaskGroupInstanceExecuteTime(const int64_t& _taskGroupInstanceExecuteTime);

                    /**
                     * 判断参数 TaskGroupInstanceExecuteTime 是否已赋值
                     * @return TaskGroupInstanceExecuteTime 是否已赋值
                     * 
                     */
                    bool TaskGroupInstanceExecuteTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    int64_t m_taskGroupInstanceId;
                    bool m_taskGroupInstanceIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_taskGroupInstanceObjectId;
                    bool m_taskGroupInstanceObjectIdHasBeenSet;

                    /**
                     * 实例动作执行状态
                     */
                    int64_t m_taskGroupInstanceStatus;
                    bool m_taskGroupInstanceStatusHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_taskGroupInstanceCreateTime;
                    bool m_taskGroupInstanceCreateTimeHasBeenSet;

                    /**
                     * 实例更新时间
                     */
                    std::string m_taskGroupInstanceUpdateTime;
                    bool m_taskGroupInstanceUpdateTimeHasBeenSet;

                    /**
                     * 状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过
                     */
                    int64_t m_taskGroupInstanceStatusType;
                    bool m_taskGroupInstanceStatusTypeHasBeenSet;

                    /**
                     * 执行开始时间
                     */
                    std::string m_taskGroupInstanceStartTime;
                    bool m_taskGroupInstanceStartTimeHasBeenSet;

                    /**
                     * 执行结束时间
                     */
                    std::string m_taskGroupInstanceEndTime;
                    bool m_taskGroupInstanceEndTimeHasBeenSet;

                    /**
                     * 实例动作执行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskGroupInstanceExecuteLog;
                    bool m_taskGroupInstanceExecuteLogHasBeenSet;

                    /**
                     * 实例是否可重试
                     */
                    bool m_taskGroupInstanceIsRedo;
                    bool m_taskGroupInstanceIsRedoHasBeenSet;

                    /**
                     * 动作实例执行时间
                     */
                    int64_t m_taskGroupInstanceExecuteTime;
                    bool m_taskGroupInstanceExecuteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_
