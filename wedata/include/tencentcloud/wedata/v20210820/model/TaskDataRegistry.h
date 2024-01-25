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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDATAREGISTRY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDATAREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskDataRegistryDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 自动解析任务依赖
                */
                class TaskDataRegistry : public AbstractModel
                {
                public:
                    TaskDataRegistry();
                    ~TaskDataRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTO GetTaskInfo() const;

                    /**
                     * 设置任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInfo(const TaskDsDTO& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskDataRegistryInfo 依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDataRegistryDTO GetTaskDataRegistryInfo() const;

                    /**
                     * 设置依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskDataRegistryInfo 依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskDataRegistryInfo(const TaskDataRegistryDTO& _taskDataRegistryInfo);

                    /**
                     * 判断参数 TaskDataRegistryInfo 是否已赋值
                     * @return TaskDataRegistryInfo 是否已赋值
                     * 
                     */
                    bool TaskDataRegistryInfoHasBeenSet() const;

                private:

                    /**
                     * 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTO m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * 依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDataRegistryDTO m_taskDataRegistryInfo;
                    bool m_taskDataRegistryInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDATAREGISTRY_H_
