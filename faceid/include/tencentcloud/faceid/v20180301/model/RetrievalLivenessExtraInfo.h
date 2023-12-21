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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 模版检索详细信息
                */
                class RetrievalLivenessExtraInfo : public AbstractModel
                {
                public:
                    RetrievalLivenessExtraInfo();
                    ~RetrievalLivenessExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命中的模版类型，其中Common-公共库；Auto-自动聚类库；Owner-自建模版库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitGroup 命中的模版类型，其中Common-公共库；Auto-自动聚类库；Owner-自建模版库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitGroup() const;

                    /**
                     * 设置命中的模版类型，其中Common-公共库；Auto-自动聚类库；Owner-自建模版库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitGroup 命中的模版类型，其中Common-公共库；Auto-自动聚类库；Owner-自建模版库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitGroup(const std::string& _hitGroup);

                    /**
                     * 判断参数 HitGroup 是否已赋值
                     * @return HitGroup 是否已赋值
                     * 
                     */
                    bool HitGroupHasBeenSet() const;

                    /**
                     * 获取命中的相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimilarityScore 命中的相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSimilarityScore() const;

                    /**
                     * 设置命中的相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similarityScore 命中的相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilarityScore(const double& _similarityScore);

                    /**
                     * 判断参数 SimilarityScore 是否已赋值
                     * @return SimilarityScore 是否已赋值
                     * 
                     */
                    bool SimilarityScoreHasBeenSet() const;

                    /**
                     * 获取命中的模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitTemplate 命中的模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitTemplate() const;

                    /**
                     * 设置命中的模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitTemplate 命中的模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitTemplate(const std::string& _hitTemplate);

                    /**
                     * 判断参数 HitTemplate 是否已赋值
                     * @return HitTemplate 是否已赋值
                     * 
                     */
                    bool HitTemplateHasBeenSet() const;

                private:

                    /**
                     * 命中的模版类型，其中Common-公共库；Auto-自动聚类库；Owner-自建模版库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitGroup;
                    bool m_hitGroupHasBeenSet;

                    /**
                     * 命中的相似度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_similarityScore;
                    bool m_similarityScoreHasBeenSet;

                    /**
                     * 命中的模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitTemplate;
                    bool m_hitTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_
