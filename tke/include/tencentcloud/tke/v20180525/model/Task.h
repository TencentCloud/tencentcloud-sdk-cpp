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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_TASK_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 任务信息
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态（process(运行中)、pause(暂停)、pausing(暂停中)、paused(已暂停)、done(已完成)、abort(中止)、aborted(已中止)、resume(重新执行)）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeState 任务状态（process(运行中)、pause(暂停)、pausing(暂停中)、paused(已暂停)、done(已完成)、abort(中止)、aborted(已中止)、resume(重新执行)）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置任务状态（process(运行中)、pause(暂停)、pausing(暂停中)、paused(已暂停)、done(已完成)、abort(中止)、aborted(已中止)、resume(重新执行)）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeState 任务状态（process(运行中)、pause(暂停)、pausing(暂停中)、paused(已暂停)、done(已完成)、abort(中止)、aborted(已中止)、resume(重新执行)）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取任务目标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObj 任务目标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObj() const;

                    /**
                     * 设置任务目标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObj 任务目标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObj(const std::string& _targetObj);

                    /**
                     * 判断参数 TargetObj 是否已赋值
                     * @return TargetObj 是否已赋值
                     * 
                     */
                    bool TargetObjHasBeenSet() const;

                    /**
                     * 获取任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Param 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _param 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastError 任务失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastError() const;

                    /**
                     * 设置任务失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastError 任务失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastError(const std::string& _lastError);

                    /**
                     * 判断参数 LastError 是否已赋值
                     * @return LastError 是否已赋值
                     * 
                     */
                    bool LastErrorHasBeenSet() const;

                    /**
                     * 获取任务所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID 任务所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置任务所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterID 任务所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取创建任务唯一请求ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskID 创建任务唯一请求ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置创建任务唯一请求ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskID 创建任务唯一请求ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 任务状态（process(运行中)、pause(暂停)、pausing(暂停中)、paused(已暂停)、done(已完成)、abort(中止)、aborted(已中止)、resume(重新执行)）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 任务目标ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObj;
                    bool m_targetObjHasBeenSet;

                    /**
                     * 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastError;
                    bool m_lastErrorHasBeenSet;

                    /**
                     * 任务所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 创建任务唯一请求ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_TASK_H_
