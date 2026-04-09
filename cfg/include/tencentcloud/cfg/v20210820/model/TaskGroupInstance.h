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
                     * 获取<p>实例ID</p>
                     * @return TaskGroupInstanceId <p>实例ID</p>
                     * 
                     */
                    int64_t GetTaskGroupInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _taskGroupInstanceId <p>实例ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return TaskGroupInstanceObjectId <p>实例ID</p>
                     * 
                     */
                    std::string GetTaskGroupInstanceObjectId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _taskGroupInstanceObjectId <p>实例ID</p>
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
                     * 获取<p>实例动作执行状态</p><p>枚举值：</p><ul><li>3001： 未开始</li><li>3002： 执行中</li><li>3003： 执行结束</li><li>3004： 准备中</li></ul>
                     * @return TaskGroupInstanceStatus <p>实例动作执行状态</p><p>枚举值：</p><ul><li>3001： 未开始</li><li>3002： 执行中</li><li>3003： 执行结束</li><li>3004： 准备中</li></ul>
                     * 
                     */
                    int64_t GetTaskGroupInstanceStatus() const;

                    /**
                     * 设置<p>实例动作执行状态</p><p>枚举值：</p><ul><li>3001： 未开始</li><li>3002： 执行中</li><li>3003： 执行结束</li><li>3004： 准备中</li></ul>
                     * @param _taskGroupInstanceStatus <p>实例动作执行状态</p><p>枚举值：</p><ul><li>3001： 未开始</li><li>3002： 执行中</li><li>3003： 执行结束</li><li>3004： 准备中</li></ul>
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
                     * 获取<p>实例创建时间</p>
                     * @return TaskGroupInstanceCreateTime <p>实例创建时间</p>
                     * 
                     */
                    std::string GetTaskGroupInstanceCreateTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _taskGroupInstanceCreateTime <p>实例创建时间</p>
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
                     * 获取<p>实例更新时间</p>
                     * @return TaskGroupInstanceUpdateTime <p>实例更新时间</p>
                     * 
                     */
                    std::string GetTaskGroupInstanceUpdateTime() const;

                    /**
                     * 设置<p>实例更新时间</p>
                     * @param _taskGroupInstanceUpdateTime <p>实例更新时间</p>
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
                     * 获取<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * @return TaskGroupInstanceStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * 
                     */
                    int64_t GetTaskGroupInstanceStatusType() const;

                    /**
                     * 设置<p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     * @param _taskGroupInstanceStatusType <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
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
                     * 获取<p>执行开始时间</p>
                     * @return TaskGroupInstanceStartTime <p>执行开始时间</p>
                     * 
                     */
                    std::string GetTaskGroupInstanceStartTime() const;

                    /**
                     * 设置<p>执行开始时间</p>
                     * @param _taskGroupInstanceStartTime <p>执行开始时间</p>
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
                     * 获取<p>执行结束时间</p>
                     * @return TaskGroupInstanceEndTime <p>执行结束时间</p>
                     * 
                     */
                    std::string GetTaskGroupInstanceEndTime() const;

                    /**
                     * 设置<p>执行结束时间</p>
                     * @param _taskGroupInstanceEndTime <p>执行结束时间</p>
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
                     * 获取<p>实例动作执行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskGroupInstanceExecuteLog <p>实例动作执行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetTaskGroupInstanceExecuteLog() const;

                    /**
                     * 设置<p>实例动作执行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskGroupInstanceExecuteLog <p>实例动作执行日志</p>
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
                     * 获取<p>实例是否可重试</p>
                     * @return TaskGroupInstanceIsRedo <p>实例是否可重试</p>
                     * 
                     */
                    bool GetTaskGroupInstanceIsRedo() const;

                    /**
                     * 设置<p>实例是否可重试</p>
                     * @param _taskGroupInstanceIsRedo <p>实例是否可重试</p>
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
                     * 获取<p>动作实例执行时间</p><p>单位：秒</p>
                     * @return TaskGroupInstanceExecuteTime <p>动作实例执行时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetTaskGroupInstanceExecuteTime() const;

                    /**
                     * 设置<p>动作实例执行时间</p><p>单位：秒</p>
                     * @param _taskGroupInstanceExecuteTime <p>动作实例执行时间</p><p>单位：秒</p>
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
                     * <p>实例ID</p>
                     */
                    int64_t m_taskGroupInstanceId;
                    bool m_taskGroupInstanceIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_taskGroupInstanceObjectId;
                    bool m_taskGroupInstanceObjectIdHasBeenSet;

                    /**
                     * <p>实例动作执行状态</p><p>枚举值：</p><ul><li>3001： 未开始</li><li>3002： 执行中</li><li>3003： 执行结束</li><li>3004： 准备中</li></ul>
                     */
                    int64_t m_taskGroupInstanceStatus;
                    bool m_taskGroupInstanceStatusHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_taskGroupInstanceCreateTime;
                    bool m_taskGroupInstanceCreateTimeHasBeenSet;

                    /**
                     * <p>实例更新时间</p>
                     */
                    std::string m_taskGroupInstanceUpdateTime;
                    bool m_taskGroupInstanceUpdateTimeHasBeenSet;

                    /**
                     * <p>状态类型: 0 -- 无状态，1 -- 成功，2-- 失败，3--终止，4--跳过</p>
                     */
                    int64_t m_taskGroupInstanceStatusType;
                    bool m_taskGroupInstanceStatusTypeHasBeenSet;

                    /**
                     * <p>执行开始时间</p>
                     */
                    std::string m_taskGroupInstanceStartTime;
                    bool m_taskGroupInstanceStartTimeHasBeenSet;

                    /**
                     * <p>执行结束时间</p>
                     */
                    std::string m_taskGroupInstanceEndTime;
                    bool m_taskGroupInstanceEndTimeHasBeenSet;

                    /**
                     * <p>实例动作执行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskGroupInstanceExecuteLog;
                    bool m_taskGroupInstanceExecuteLogHasBeenSet;

                    /**
                     * <p>实例是否可重试</p>
                     */
                    bool m_taskGroupInstanceIsRedo;
                    bool m_taskGroupInstanceIsRedoHasBeenSet;

                    /**
                     * <p>动作实例执行时间</p><p>单位：秒</p>
                     */
                    int64_t m_taskGroupInstanceExecuteTime;
                    bool m_taskGroupInstanceExecuteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCE_H_
