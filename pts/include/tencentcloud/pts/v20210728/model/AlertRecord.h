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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertRecordStatus.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 告警历史记录项
                */
                class AlertRecord : public AbstractModel
                {
                public:
                    AlertRecord();
                    ~AlertRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRecordId 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlertRecordId() const;

                    /**
                     * 设置告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlertRecordId 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlertRecordId(const std::string& _alertRecordId);

                    /**
                     * 判断参数 AlertRecordId 是否已赋值
                     * @return AlertRecordId 是否已赋值
                     */
                    bool AlertRecordIdHasBeenSet() const;

                    /**
                     * 获取项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScenarioId 场景 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScenarioId 场景 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlertRecordStatus GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const AlertRecordStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedAt 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobId 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 告警历史记录项 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertRecordId;
                    bool m_alertRecordIdHasBeenSet;

                    /**
                     * 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlertRecordStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
