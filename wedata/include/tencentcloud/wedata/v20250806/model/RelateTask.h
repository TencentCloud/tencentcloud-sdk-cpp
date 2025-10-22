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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/BriefTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据源相关任务
                */
                class RelateTask : public AbstractModel
                {
                public:
                    RelateTask();
                    ~RelateTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型

- OfflineIntegration --- 离线集成任务
- RealtimeIntegration --- 实时集成任务
- DataDevelopment --- 数据开发任务
- DataQuality --- 数据质量任务
- DataService --- 数据服务任务
- MetadataCollection --- 元数据采集任务
                     * @return TaskType 任务类型

- OfflineIntegration --- 离线集成任务
- RealtimeIntegration --- 实时集成任务
- DataDevelopment --- 数据开发任务
- DataQuality --- 数据质量任务
- DataService --- 数据服务任务
- MetadataCollection --- 元数据采集任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型

- OfflineIntegration --- 离线集成任务
- RealtimeIntegration --- 实时集成任务
- DataDevelopment --- 数据开发任务
- DataQuality --- 数据质量任务
- DataService --- 数据服务任务
- MetadataCollection --- 元数据采集任务
                     * @param _taskType 任务类型

- OfflineIntegration --- 离线集成任务
- RealtimeIntegration --- 实时集成任务
- DataDevelopment --- 数据开发任务
- DataQuality --- 数据质量任务
- DataService --- 数据服务任务
- MetadataCollection --- 元数据采集任务
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
                     * 获取任务数量
                     * @return TaskNum 任务数量
                     * 
                     */
                    int64_t GetTaskNum() const;

                    /**
                     * 设置任务数量
                     * @param _taskNum 任务数量
                     * 
                     */
                    void SetTaskNum(const int64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     * 
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskList 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BriefTask> GetTaskList() const;

                    /**
                     * 设置任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskList 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskList(const std::vector<BriefTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                private:

                    /**
                     * 任务类型

- OfflineIntegration --- 离线集成任务
- RealtimeIntegration --- 实时集成任务
- DataDevelopment --- 数据开发任务
- DataQuality --- 数据质量任务
- DataService --- 数据服务任务
- MetadataCollection --- 元数据采集任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务数量
                     */
                    int64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * 任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BriefTask> m_taskList;
                    bool m_taskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RELATETASK_H_
