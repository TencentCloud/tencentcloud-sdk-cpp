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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATEPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PromptTemplateCategory.h>
#include <tencentcloud/adp/v20260520/model/Audit.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 提示词模板基本信息
                */
                class PromptTemplateProfile : public AbstractModel
                {
                public:
                    PromptTemplateProfile();
                    ~PromptTemplateProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category <p>分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PromptTemplateCategory GetCategory() const;

                    /**
                     * 设置<p>分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category <p>分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const PromptTemplateCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模板名称</p>
                     * @return Name <p>模板名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称</p>
                     * @param _name <p>模板名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>提示词模板ID</p>
                     * @return PromptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    std::string GetPromptTemplateId() const;

                    /**
                     * 设置<p>提示词模板ID</p>
                     * @param _promptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    void SetPromptTemplateId(const std::string& _promptTemplateId);

                    /**
                     * 判断参数 PromptTemplateId 是否已赋值
                     * @return PromptTemplateId 是否已赋值
                     * 
                     */
                    bool PromptTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>模板类型。1-预置模板, 2-自定义模板</p>
                     * @return PromptTemplateType <p>模板类型。1-预置模板, 2-自定义模板</p>
                     * 
                     */
                    int64_t GetPromptTemplateType() const;

                    /**
                     * 设置<p>模板类型。1-预置模板, 2-自定义模板</p>
                     * @param _promptTemplateType <p>模板类型。1-预置模板, 2-自定义模板</p>
                     * 
                     */
                    void SetPromptTemplateType(const int64_t& _promptTemplateType);

                    /**
                     * 判断参数 PromptTemplateType 是否已赋值
                     * @return PromptTemplateType 是否已赋值
                     * 
                     */
                    bool PromptTemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>审计信息</p>
                     * @return Audit <p>审计信息</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>审计信息</p>
                     * @param _audit <p>审计信息</p>
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                private:

                    /**
                     * <p>分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PromptTemplateCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>提示词模板ID</p>
                     */
                    std::string m_promptTemplateId;
                    bool m_promptTemplateIdHasBeenSet;

                    /**
                     * <p>模板类型。1-预置模板, 2-自定义模板</p>
                     */
                    int64_t m_promptTemplateType;
                    bool m_promptTemplateTypeHasBeenSet;

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>审计信息</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PROMPTTEMPLATEPROFILE_H_
