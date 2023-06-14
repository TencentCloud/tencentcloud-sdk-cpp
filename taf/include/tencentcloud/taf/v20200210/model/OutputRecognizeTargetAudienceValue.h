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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCEVALUE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-验准返回的查询分值
                */
                class OutputRecognizeTargetAudienceValue : public AbstractModel
                {
                public:
                    OutputRecognizeTargetAudienceValue();
                    ~OutputRecognizeTargetAudienceValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModelId() const;

                    /**
                     * 设置模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelId(const uint64_t& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取是否正常返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFound 是否正常返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsFound() const;

                    /**
                     * 设置是否正常返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isFound 是否正常返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsFound(const int64_t& _isFound);

                    /**
                     * 判断参数 IsFound 是否已赋值
                     * @return IsFound 是否已赋值
                     * 
                     */
                    bool IsFoundHasBeenSet() const;

                    /**
                     * 获取返回分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 返回分值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置返回分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 返回分值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModelType() const;

                    /**
                     * 设置模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelType(const uint64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取入参Uid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid 入参Uid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置入参Uid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uid 入参Uid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 是否正常返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isFound;
                    bool m_isFoundHasBeenSet;

                    /**
                     * 返回分值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 入参Uid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCEVALUE_H_
