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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/MediaInfo.h>
#include <tencentcloud/ams/v20201229/model/TaskLabel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 任务数据
                */
                class TaskData : public AbstractModel
                {
                public:
                    TaskData();
                    ~TaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的数据ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataId 输入的数据ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置输入的数据ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataId 输入的数据ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * @return Status 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * @param Status 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizType 业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BizType 业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取建议。可选：Pass，Block，Review
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 建议。可选：Pass，Block，Review
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议。可选：Pass，Block，Review
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Suggestion 建议。可选：Pass，Block，Review
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaInfo 输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInfo GetMediaInfo() const;

                    /**
                     * 设置输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MediaInfo 输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMediaInfo(const MediaInfo& _mediaInfo);

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     */
                    bool MediaInfoHasBeenSet() const;

                    /**
                     * 获取任务违规标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 任务违规标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLabel> GetLabels() const;

                    /**
                     * 设置任务违规标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Labels 任务违规标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabels(const std::vector<TaskLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取创建时间（ iso 8601 格式）
                     * @return CreatedAt 创建时间（ iso 8601 格式）
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间（ iso 8601 格式）
                     * @param CreatedAt 创建时间（ iso 8601 格式）
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间（ iso 8601 格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间（ iso 8601 格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间（ iso 8601 格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedAt 更新时间（ iso 8601 格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 输入的数据ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 业务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 建议。可选：Pass，Block，Review
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * 任务违规标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 创建时间（ iso 8601 格式）
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间（ iso 8601 格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_
