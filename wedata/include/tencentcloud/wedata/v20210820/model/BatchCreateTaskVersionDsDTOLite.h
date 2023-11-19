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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDSDTOLITE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDSDTOLITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTOLiteV2.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchCreateTaskVersionDs使用的TaskVersionDsDTO
                */
                class BatchCreateTaskVersionDsDTOLite : public AbstractModel
                {
                public:
                    BatchCreateTaskVersionDsDTOLite();
                    ~BatchCreateTaskVersionDsDTOLite() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionRemark 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionRemark 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTOLiteV2 GetTaskInfo() const;

                    /**
                     * 设置任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInfo(const TaskDsDTOLiteV2& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTOLiteV2 m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONDSDTOLITE_H_
