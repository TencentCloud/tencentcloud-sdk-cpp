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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELDTO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/TrainingModelVersionDTO.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 模型列表
                */
                class TrainingModelDTO : public AbstractModel
                {
                public:
                    TrainingModelDTO();
                    ~TrainingModelDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型id
                     * @return TrainingModelId 模型id
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型id
                     * @param TrainingModelId 模型id
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     */
                    bool TrainingModelIdHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return TrainingModelName 模型名称
                     */
                    std::string GetTrainingModelName() const;

                    /**
                     * 设置模型名称
                     * @param TrainingModelName 模型名称
                     */
                    void SetTrainingModelName(const std::string& _trainingModelName);

                    /**
                     * 判断参数 TrainingModelName 是否已赋值
                     * @return TrainingModelName 是否已赋值
                     */
                    bool TrainingModelNameHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取模型创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 模型创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模型创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 模型创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模型版本列表。默认不返回，仅在指定请求参数开启时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingModelVersions 模型版本列表。默认不返回，仅在指定请求参数开启时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingModelVersionDTO> GetTrainingModelVersions() const;

                    /**
                     * 设置模型版本列表。默认不返回，仅在指定请求参数开启时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrainingModelVersions 模型版本列表。默认不返回，仅在指定请求参数开启时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrainingModelVersions(const std::vector<TrainingModelVersionDTO>& _trainingModelVersions);

                    /**
                     * 判断参数 TrainingModelVersions 是否已赋值
                     * @return TrainingModelVersions 是否已赋值
                     */
                    bool TrainingModelVersionsHasBeenSet() const;

                private:

                    /**
                     * 模型id
                     */
                    std::string m_trainingModelId;
                    bool m_trainingModelIdHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_trainingModelName;
                    bool m_trainingModelNameHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 模型创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模型版本列表。默认不返回，仅在指定请求参数开启时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingModelVersionDTO> m_trainingModelVersions;
                    bool m_trainingModelVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMODELDTO_H_
