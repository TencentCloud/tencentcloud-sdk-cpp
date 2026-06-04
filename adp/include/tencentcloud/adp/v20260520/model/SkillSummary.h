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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillClassification.h>
#include <tencentcloud/adp/v20260520/model/SkillVersion.h>
#include <tencentcloud/adp/v20260520/model/SkillProfile.h>
#include <tencentcloud/adp/v20260520/model/SkillShare.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillSummary 列表中的 Skill 摘要。
                */
                class SkillSummary : public AbstractModel
                {
                public:
                    SkillSummary();
                    ~SkillSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationInfo 分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillClassification GetClassificationInfo() const;

                    /**
                     * 设置分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationInfo 分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationInfo(const SkillClassification& _classificationInfo);

                    /**
                     * 判断参数 ClassificationInfo 是否已赋值
                     * @return ClassificationInfo 是否已赋值
                     * 
                     */
                    bool ClassificationInfoHasBeenSet() const;

                    /**
                     * 获取当前版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentVersionInfo 当前版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillVersion GetCurrentVersionInfo() const;

                    /**
                     * 设置当前版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentVersionInfo 当前版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentVersionInfo(const SkillVersion& _currentVersionInfo);

                    /**
                     * 判断参数 CurrentVersionInfo 是否已赋值
                     * @return CurrentVersionInfo 是否已赋值
                     * 
                     */
                    bool CurrentVersionInfoHasBeenSet() const;

                    /**
                     * 获取当前用户是否收藏
                     * @return IsFavorite 当前用户是否收藏
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置当前用户是否收藏
                     * @param _isFavorite 当前用户是否收藏
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profile 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillProfile GetProfile() const;

                    /**
                     * 设置基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profile 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfile(const SkillProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Skill ID
                     * @return SkillId Skill ID
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置Skill ID
                     * @param _skillId Skill ID
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取共享信息；可能有两条，一条是已共享的，一条是审核中的
                     * @return ShareList 共享信息；可能有两条，一条是已共享的，一条是审核中的
                     * 
                     */
                    std::vector<SkillShare> GetShareList() const;

                    /**
                     * 设置共享信息；可能有两条，一条是已共享的，一条是审核中的
                     * @param _shareList 共享信息；可能有两条，一条是已共享的，一条是审核中的
                     * 
                     */
                    void SetShareList(const std::vector<SkillShare>& _shareList);

                    /**
                     * 判断参数 ShareList 是否已赋值
                     * @return ShareList 是否已赋值
                     * 
                     */
                    bool ShareListHasBeenSet() const;

                private:

                    /**
                     * 分类信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillClassification m_classificationInfo;
                    bool m_classificationInfoHasBeenSet;

                    /**
                     * 当前版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillVersion m_currentVersionInfo;
                    bool m_currentVersionInfoHasBeenSet;

                    /**
                     * 当前用户是否收藏
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * 基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Skill ID
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * 共享信息；可能有两条，一条是已共享的，一条是审核中的
                     */
                    std::vector<SkillShare> m_shareList;
                    bool m_shareListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSUMMARY_H_
