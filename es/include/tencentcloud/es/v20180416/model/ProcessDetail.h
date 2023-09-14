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
                     * 获取已完成数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Completed 已完成数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompleted() const;

                    /**
                     * 设置已完成数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completed 已完成数量
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
                     * 获取剩余数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remain 剩余数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemain() const;

                    /**
                     * 设置剩余数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remain 剩余数量
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
                     * 获取总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数量
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
                     * 获取任务类型：
60：重启型任务
70：分片迁移型任务
80：节点变配任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型：
60：重启型任务
70：分片迁移型任务
80：节点变配任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型：
60：重启型任务
70：分片迁移型任务
80：节点变配任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型：
60：重启型任务
70：分片迁移型任务
80：节点变配任务
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

                private:

                    /**
                     * 已完成数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * 剩余数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 任务类型：
60：重启型任务
70：分片迁移型任务
80：节点变配任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_
