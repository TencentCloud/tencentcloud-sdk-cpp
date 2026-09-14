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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCMODIFYFIELDS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCMODIFYFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/DocExternalLink.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentity.h>
#include <tencentcloud/adp/v20260520/model/DocParseConfig.h>
#include <tencentcloud/adp/v20260520/model/DocSwitch.h>
#include <tencentcloud/adp/v20260520/model/DocUpdatePeriod.h>
#include <tencentcloud/adp/v20260520/model/UserAccessConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档可修改字段集合（配合 update_mask 使用）
                */
                class DocModifyFields : public AbstractModel
                {
                public:
                    DocModifyFields();
                    ~DocModifyFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>归属分类 ID</p>
                     * @return CategoryId <p>归属分类 ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>归属分类 ID</p>
                     * @param _categoryId <p>归属分类 ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     * 
                     */
                    void SetEffectiveDomain(const int64_t& _effectiveDomain);

                    /**
                     * 判断参数 EffectiveDomain 是否已赋值
                     * @return EffectiveDomain 是否已赋值
                     * 
                     */
                    bool EffectiveDomainHasBeenSet() const;

                    /**
                     * 获取<p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expirationPolicy <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalLink <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocExternalLink GetExternalLink() const;

                    /**
                     * 设置<p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalLink <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalLink(const DocExternalLink& _externalLink);

                    /**
                     * 判断参数 ExternalLink 是否已赋值
                     * @return ExternalLink 是否已赋值
                     * 
                     */
                    bool ExternalLinkHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return LabelRefList <p>标签列表</p>
                     * 
                     */
                    std::vector<LabelRefIdentity> GetLabelRefList() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _labelRefList <p>标签列表</p>
                     * 
                     */
                    void SetLabelRefList(const std::vector<LabelRefIdentity>& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                    /**
                     * 获取<p>文档名</p>
                     * @return Name <p>文档名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>文档名</p>
                     * @param _name <p>文档名</p>
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
                     * 获取<p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParseConfig <p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocParseConfig GetParseConfig() const;

                    /**
                     * 设置<p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parseConfig <p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParseConfig(const DocParseConfig& _parseConfig);

                    /**
                     * 判断参数 ParseConfig 是否已赋值
                     * @return ParseConfig 是否已赋值
                     * 
                     */
                    bool ParseConfigHasBeenSet() const;

                    /**
                     * 获取<p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch <p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocSwitch GetSwitch() const;

                    /**
                     * 设置<p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch <p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const DocSwitch& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>更新周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatePeriod <p>更新周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocUpdatePeriod GetUpdatePeriod() const;

                    /**
                     * 设置<p>更新周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatePeriod <p>更新周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatePeriod(const DocUpdatePeriod& _updatePeriod);

                    /**
                     * 判断参数 UpdatePeriod 是否已赋值
                     * @return UpdatePeriod 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHasBeenSet() const;

                    /**
                     * 获取<p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAccessConfig <p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserAccessConfig GetUserAccessConfig() const;

                    /**
                     * 设置<p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAccessConfig <p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAccessConfig(const UserAccessConfig& _userAccessConfig);

                    /**
                     * 判断参数 UserAccessConfig 是否已赋值
                     * @return UserAccessConfig 是否已赋值
                     * 
                     */
                    bool UserAccessConfigHasBeenSet() const;

                private:

                    /**
                     * <p>归属分类 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>生效作用域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>停用</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>仅开发域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>仅发布域</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>全域</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>过期策略（有效时间与超过有效时间后的行为）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>外部链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocExternalLink m_externalLink;
                    bool m_externalLinkHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<LabelRefIdentity> m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                    /**
                     * <p>文档名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocParseConfig m_parseConfig;
                    bool m_parseConfigHasBeenSet;

                    /**
                     * <p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocSwitch m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>更新周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocUpdatePeriod m_updatePeriod;
                    bool m_updatePeriodHasBeenSet;

                    /**
                     * <p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserAccessConfig m_userAccessConfig;
                    bool m_userAccessConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCMODIFYFIELDS_H_
