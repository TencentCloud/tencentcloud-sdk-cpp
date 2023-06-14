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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEPOLITYDETECT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEPOLITYDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/Logo.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 图片涉政详情
                */
                class ImagePolityDetect : public AbstractModel
                {
                public:
                    ImagePolityDetect();
                    ~ImagePolityDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意类型
100：正常 
20001：政治
                     * @return EvilType 恶意类型
100：正常 
20001：政治
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常 
20001：政治
                     * @param _evilType 恶意类型
100：正常 
20001：政治
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
                     * 获取处置判定  0：正常 1：可疑
                     * @return HitFlag 处置判定  0：正常 1：可疑
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置处置判定  0：正常 1：可疑
                     * @param _hitFlag 处置判定  0：正常 1：可疑
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取命中的人脸名称
                     * @return FaceNames 命中的人脸名称
                     * 
                     */
                    std::vector<std::string> GetFaceNames() const;

                    /**
                     * 设置命中的人脸名称
                     * @param _faceNames 命中的人脸名称
                     * 
                     */
                    void SetFaceNames(const std::vector<std::string>& _faceNames);

                    /**
                     * 判断参数 FaceNames 是否已赋值
                     * @return FaceNames 是否已赋值
                     * 
                     */
                    bool FaceNamesHasBeenSet() const;

                    /**
                     * 获取命中的logo标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolityLogoDetail 命中的logo标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Logo> GetPolityLogoDetail() const;

                    /**
                     * 设置命中的logo标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polityLogoDetail 命中的logo标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolityLogoDetail(const std::vector<Logo>& _polityLogoDetail);

                    /**
                     * 判断参数 PolityLogoDetail 是否已赋值
                     * @return PolityLogoDetail 是否已赋值
                     * 
                     */
                    bool PolityLogoDetailHasBeenSet() const;

                    /**
                     * 获取命中的政治物品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolityItems 命中的政治物品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPolityItems() const;

                    /**
                     * 设置命中的政治物品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _polityItems 命中的政治物品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolityItems(const std::vector<std::string>& _polityItems);

                    /**
                     * 判断参数 PolityItems 是否已赋值
                     * @return PolityItems 是否已赋值
                     * 
                     */
                    bool PolityItemsHasBeenSet() const;

                    /**
                     * 获取政治（人脸）分：分值范围 0-100，分数越高可疑程度越高
                     * @return Score 政治（人脸）分：分值范围 0-100，分数越高可疑程度越高
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置政治（人脸）分：分值范围 0-100，分数越高可疑程度越高
                     * @param _score 政治（人脸）分：分值范围 0-100，分数越高可疑程度越高
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
                     * 获取关键词明细
                     * @return Keywords 关键词明细
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置关键词明细
                     * @param _keywords 关键词明细
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 恶意类型
100：正常 
20001：政治
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 处置判定  0：正常 1：可疑
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 命中的人脸名称
                     */
                    std::vector<std::string> m_faceNames;
                    bool m_faceNamesHasBeenSet;

                    /**
                     * 命中的logo标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Logo> m_polityLogoDetail;
                    bool m_polityLogoDetailHasBeenSet;

                    /**
                     * 命中的政治物品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_polityItems;
                    bool m_polityItemsHasBeenSet;

                    /**
                     * 政治（人脸）分：分值范围 0-100，分数越高可疑程度越高
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 关键词明细
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_IMAGEPOLITYDETECT_H_
