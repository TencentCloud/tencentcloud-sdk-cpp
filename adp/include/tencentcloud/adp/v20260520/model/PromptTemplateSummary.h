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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PromptTemplateProfile.h>
#include <tencentcloud/adp/v20260520/model/PromptTemplateLabel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 提示词模板摘要信息
                */
                class PromptTemplateSummary : public AbstractModel
                {
                public:
                    PromptTemplateSummary();
                    ~PromptTemplateSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>提示词模板Profile</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profile <p>提示词模板Profile</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PromptTemplateProfile GetProfile() const;

                    /**
                     * 设置<p>提示词模板Profile</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profile <p>提示词模板Profile</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfile(const PromptTemplateProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return LabelList <p>标签列表</p>
                     * 
                     */
                    std::vector<PromptTemplateLabel> GetLabelList() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _labelList <p>标签列表</p>
                     * 
                     */
                    void SetLabelList(const std::vector<PromptTemplateLabel>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>是否已收藏</p>
                     * @return IsFavorite <p>是否已收藏</p>
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置<p>是否已收藏</p>
                     * @param _isFavorite <p>是否已收藏</p>
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
                     * 获取<p>权限列表</p>
                     * @return PermissionIdList <p>权限列表</p>
                     * 
                     */
                    std::vector<std::string> GetPermissionIdList() const;

                    /**
                     * 设置<p>权限列表</p>
                     * @param _permissionIdList <p>权限列表</p>
                     * 
                     */
                    void SetPermissionIdList(const std::vector<std::string>& _permissionIdList);

                    /**
                     * 判断参数 PermissionIdList 是否已赋值
                     * @return PermissionIdList 是否已赋值
                     * 
                     */
                    bool PermissionIdListHasBeenSet() const;

                private:

                    /**
                     * <p>提示词模板Profile</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PromptTemplateProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<PromptTemplateLabel> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>是否已收藏</p>
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * <p>权限列表</p>
                     */
                    std::vector<std::string> m_permissionIdList;
                    bool m_permissionIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATESUMMARY_H_
