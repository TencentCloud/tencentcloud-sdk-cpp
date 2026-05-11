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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 任务进度详情
                */
                class ProcessDetail : public AbstractModel
                {
                public:
                    ProcessDetail();
                    ~ProcessDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>已完成数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Completed <p>已完成数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompleted() const;

                    /**
                     * 设置<p>已完成数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completed <p>已完成数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompleted(const int64_t& _completed);

                    /**
                     * 判断参数 Completed 是否已赋值
                     * @return Completed 是否已赋值
                     * 
                     */
                    bool CompletedHasBeenSet() const;

                    /**
                     * 获取<p>剩余数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remain <p>剩余数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemain() const;

                    /**
                     * 设置<p>剩余数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remain <p>剩余数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemain(const int64_t& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取<p>总数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>总数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>总数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>总数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>任务类型：<br>60：重启型任务<br>70：分片迁移型任务<br>80：节点变配任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型：<br>60：重启型任务<br>70：分片迁移型任务<br>80：节点变配任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型：<br>60：重启型任务<br>70：分片迁移型任务<br>80：节点变配任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型：<br>60：重启型任务<br>70：分片迁移型任务<br>80：节点变配任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>预估剩余时间</p><p>单位：秒</p>
                     * @return EstimatedTimeRemaining <p>预估剩余时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEstimatedTimeRemaining() const;

                    /**
                     * 设置<p>预估剩余时间</p><p>单位：秒</p>
                     * @param _estimatedTimeRemaining <p>预估剩余时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetEstimatedTimeRemaining(const int64_t& _estimatedTimeRemaining);

                    /**
                     * 判断参数 EstimatedTimeRemaining 是否已赋值
                     * @return EstimatedTimeRemaining 是否已赋值
                     * 
                     */
                    bool EstimatedTimeRemainingHasBeenSet() const;

                private:

                    /**
                     * <p>已完成数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * <p>剩余数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * <p>总数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>任务类型：<br>60：重启型任务<br>70：分片迁移型任务<br>80：节点变配任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>预估剩余时间</p><p>单位：秒</p>
                     */
                    int64_t m_estimatedTimeRemaining;
                    bool m_estimatedTimeRemainingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_
