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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_IMAGETERRORDETECT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_IMAGETERRORDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 图片暴恐详情
                */
                class ImageTerrorDetect : public AbstractModel
                {
                public:
                    ImageTerrorDetect();
                    ~ImageTerrorDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 关键词明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置关键词明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywords 关键词明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
24001：暴恐
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilType 恶意类型
100：正常
24001：暴恐
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
24001：暴恐
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _evilType 恶意类型
100：正常
24001：暴恐
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取暴恐标签：返回暴恐特征中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 暴恐标签：返回暴恐特征中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置暴恐标签：返回暴恐特征中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 暴恐标签：返回暴恐特征中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取暴恐分：分值范围0--100，分数越高暴恐倾向越明显
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 暴恐分：分值范围0--100，分数越高暴恐倾向越明显
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置暴恐分：分值范围0--100，分数越高暴恐倾向越明显
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 暴恐分：分值范围0--100，分数越高暴恐倾向越明显
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取处置判定 0：正常 1：可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitFlag 处置判定 0：正常 1：可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置处置判定 0：正常 1：可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitFlag 处置判定 0：正常 1：可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                private:

                    /**
                     * 关键词明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 恶意类型
100：正常
24001：暴恐
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 暴恐标签：返回暴恐特征中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 暴恐分：分值范围0--100，分数越高暴恐倾向越明显
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 处置判定 0：正常 1：可疑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_IMAGETERRORDETECT_H_
