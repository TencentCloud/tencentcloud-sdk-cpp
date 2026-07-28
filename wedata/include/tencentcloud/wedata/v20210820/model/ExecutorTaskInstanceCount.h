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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORTASKINSTANCECOUNT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORTASKINSTANCECOUNT_H_

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
                * ExecutorTaskInstanceCount
                */
                class ExecutorTaskInstanceCount : public AbstractModel
                {
                public:
                    ExecutorTaskInstanceCount();
                    ~ExecutorTaskInstanceCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取数据开发中的任务类型绑定的资源组数量等待调度的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulingTaskCount 数据开发中的任务类型绑定的资源组数量等待调度的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSchedulingTaskCount() const;

                    /**
                     * 设置数据开发中的任务类型绑定的资源组数量等待调度的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulingTaskCount 数据开发中的任务类型绑定的资源组数量等待调度的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulingTaskCount(const int64_t& _schedulingTaskCount);

                    /**
                     * 判断参数 SchedulingTaskCount 是否已赋值
                     * @return SchedulingTaskCount 是否已赋值
                     * 
                     */
                    bool SchedulingTaskCountHasBeenSet() const;

                    /**
                     * 获取数据开发中的任务类型绑定的资源组数量运行中的人物实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningInstanceCount 数据开发中的任务类型绑定的资源组数量运行中的人物实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunningInstanceCount() const;

                    /**
                     * 设置数据开发中的任务类型绑定的资源组数量运行中的人物实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningInstanceCount 数据开发中的任务类型绑定的资源组数量运行中的人物实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningInstanceCount(const int64_t& _runningInstanceCount);

                    /**
                     * 判断参数 RunningInstanceCount 是否已赋值
                     * @return RunningInstanceCount 是否已赋值
                     * 
                     */
                    bool RunningInstanceCountHasBeenSet() const;

                    /**
                     * 获取数据开发中的任务类型绑定的资源组数量等待运行的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitingInstanceCount 数据开发中的任务类型绑定的资源组数量等待运行的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaitingInstanceCount() const;

                    /**
                     * 设置数据开发中的任务类型绑定的资源组数量等待运行的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitingInstanceCount 数据开发中的任务类型绑定的资源组数量等待运行的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitingInstanceCount(const int64_t& _waitingInstanceCount);

                    /**
                     * 判断参数 WaitingInstanceCount 是否已赋值
                     * @return WaitingInstanceCount 是否已赋值
                     * 
                     */
                    bool WaitingInstanceCountHasBeenSet() const;

                    /**
                     * 获取非离线开发调度中任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OthersTaskTypeSchedulingTaskCount 非离线开发调度中任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOthersTaskTypeSchedulingTaskCount() const;

                    /**
                     * 设置非离线开发调度中任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _othersTaskTypeSchedulingTaskCount 非离线开发调度中任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOthersTaskTypeSchedulingTaskCount(const int64_t& _othersTaskTypeSchedulingTaskCount);

                    /**
                     * 判断参数 OthersTaskTypeSchedulingTaskCount 是否已赋值
                     * @return OthersTaskTypeSchedulingTaskCount 是否已赋值
                     * 
                     */
                    bool OthersTaskTypeSchedulingTaskCountHasBeenSet() const;

                    /**
                     * 获取非离线开发运行中实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OthersTaskTypeRunningInstanceCount 非离线开发运行中实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOthersTaskTypeRunningInstanceCount() const;

                    /**
                     * 设置非离线开发运行中实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _othersTaskTypeRunningInstanceCount 非离线开发运行中实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOthersTaskTypeRunningInstanceCount(const int64_t& _othersTaskTypeRunningInstanceCount);

                    /**
                     * 判断参数 OthersTaskTypeRunningInstanceCount 是否已赋值
                     * @return OthersTaskTypeRunningInstanceCount 是否已赋值
                     * 
                     */
                    bool OthersTaskTypeRunningInstanceCountHasBeenSet() const;

                    /**
                     * 获取非离线开发等待运行实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OthersTaskTypeWaitingInstanceCount 非离线开发等待运行实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOthersTaskTypeWaitingInstanceCount() const;

                    /**
                     * 设置非离线开发等待运行实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _othersTaskTypeWaitingInstanceCount 非离线开发等待运行实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOthersTaskTypeWaitingInstanceCount(const std::string& _othersTaskTypeWaitingInstanceCount);

                    /**
                     * 判断参数 OthersTaskTypeWaitingInstanceCount 是否已赋值
                     * @return OthersTaskTypeWaitingInstanceCount 是否已赋值
                     * 
                     */
                    bool OthersTaskTypeWaitingInstanceCountHasBeenSet() const;

                private:

                    /**
                     * 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 数据开发中的任务类型绑定的资源组数量等待调度的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_schedulingTaskCount;
                    bool m_schedulingTaskCountHasBeenSet;

                    /**
                     * 数据开发中的任务类型绑定的资源组数量运行中的人物实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runningInstanceCount;
                    bool m_runningInstanceCountHasBeenSet;

                    /**
                     * 数据开发中的任务类型绑定的资源组数量等待运行的任务实例数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waitingInstanceCount;
                    bool m_waitingInstanceCountHasBeenSet;

                    /**
                     * 非离线开发调度中任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_othersTaskTypeSchedulingTaskCount;
                    bool m_othersTaskTypeSchedulingTaskCountHasBeenSet;

                    /**
                     * 非离线开发运行中实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_othersTaskTypeRunningInstanceCount;
                    bool m_othersTaskTypeRunningInstanceCountHasBeenSet;

                    /**
                     * 非离线开发等待运行实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_othersTaskTypeWaitingInstanceCount;
                    bool m_othersTaskTypeWaitingInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORTASKINSTANCECOUNT_H_
