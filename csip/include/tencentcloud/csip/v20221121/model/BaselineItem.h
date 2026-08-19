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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线检测项。
                */
                class BaselineItem : public AbstractModel
                {
                public:
                    BaselineItem();
                    ~BaselineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基线检测项 ID。</p>
                     * @return ID <p>基线检测项 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>基线检测项 ID。</p>
                     * @param _iD <p>基线检测项 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>内置规则 ID。</p>
                     * @return RuleID <p>内置规则 ID。</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>内置规则 ID。</p>
                     * @param _ruleID <p>内置规则 ID。</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>检测对象描述，例如配置文件路径、内核参数、Kubernetes 资源等。</p>
                     * @return CheckObject <p>检测对象描述，例如配置文件路径、内核参数、Kubernetes 资源等。</p>
                     * 
                     */
                    std::vector<std::string> GetCheckObject() const;

                    /**
                     * 设置<p>检测对象描述，例如配置文件路径、内核参数、Kubernetes 资源等。</p>
                     * @param _checkObject <p>检测对象描述，例如配置文件路径、内核参数、Kubernetes 资源等。</p>
                     * 
                     */
                    void SetCheckObject(const std::vector<std::string>& _checkObject);

                    /**
                     * 判断参数 CheckObject 是否已赋值
                     * @return CheckObject 是否已赋值
                     * 
                     */
                    bool CheckObjectHasBeenSet() const;

                    /**
                     * 获取<p>风险等级。取值：</p><ul><li>LOW：低危</li><li>MEDIUM：中危</li><li>HIGH：高危</li><li>CRITICAL：严重</li></ul>
                     * @return RiskLevel <p>风险等级。取值：</p><ul><li>LOW：低危</li><li>MEDIUM：中危</li><li>HIGH：高危</li><li>CRITICAL：严重</li></ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级。取值：</p><ul><li>LOW：低危</li><li>MEDIUM：中危</li><li>HIGH：高危</li><li>CRITICAL：严重</li></ul>
                     * @param _riskLevel <p>风险等级。取值：</p><ul><li>LOW：低危</li><li>MEDIUM：中危</li><li>HIGH：高危</li><li>CRITICAL：严重</li></ul>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>检测项名称（中文）。</p>
                     * @return Name <p>检测项名称（中文）。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>检测项名称（中文）。</p>
                     * @param _name <p>检测项名称（中文）。</p>
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
                     * 获取<p>检测项描述（中文，说明检测背景与判定逻辑）。</p>
                     * @return Description <p>检测项描述（中文，说明检测背景与判定逻辑）。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>检测项描述（中文，说明检测背景与判定逻辑）。</p>
                     * @param _description <p>检测项描述（中文，说明检测背景与判定逻辑）。</p>
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
                     * 获取<p>检测项修复建议（中文，含建议的配置参考值或加固命令）。</p>
                     * @return FixSuggestion <p>检测项修复建议（中文，含建议的配置参考值或加固命令）。</p>
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>检测项修复建议（中文，含建议的配置参考值或加固命令）。</p>
                     * @param _fixSuggestion <p>检测项修复建议（中文，含建议的配置参考值或加固命令）。</p>
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                    /**
                     * 获取<p>检测项的参考链接列表。</p>
                     * @return ReferenceLink <p>检测项的参考链接列表。</p>
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置<p>检测项的参考链接列表。</p>
                     * @param _referenceLink <p>检测项的参考链接列表。</p>
                     * 
                     */
                    void SetReferenceLink(const std::string& _referenceLink);

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                    /**
                     * 获取<p>所属系统父分类信息。</p>
                     * @return SystemCategory <p>所属系统父分类信息。</p>
                     * 
                     */
                    BaselineCategory GetSystemCategory() const;

                    /**
                     * 设置<p>所属系统父分类信息。</p>
                     * @param _systemCategory <p>所属系统父分类信息。</p>
                     * 
                     */
                    void SetSystemCategory(const BaselineCategory& _systemCategory);

                    /**
                     * 判断参数 SystemCategory 是否已赋值
                     * @return SystemCategory 是否已赋值
                     * 
                     */
                    bool SystemCategoryHasBeenSet() const;

                    /**
                     * 获取<p>所属子分类信息。</p>
                     * @return Category <p>所属子分类信息。</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>所属子分类信息。</p>
                     * @param _category <p>所属子分类信息。</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>是否支持一键修复。true 支持，false 不支持。</p>
                     * @return SupportFix <p>是否支持一键修复。true 支持，false 不支持。</p>
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置<p>是否支持一键修复。true 支持，false 不支持。</p>
                     * @param _supportFix <p>是否支持一键修复。true 支持，false 不支持。</p>
                     * 
                     */
                    void SetSupportFix(const bool& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取<p>是否支持用户自定义判定值。true 支持，false 不支持。</p>
                     * @return SupportCustomValue <p>是否支持用户自定义判定值。true 支持，false 不支持。</p>
                     * 
                     */
                    bool GetSupportCustomValue() const;

                    /**
                     * 设置<p>是否支持用户自定义判定值。true 支持，false 不支持。</p>
                     * @param _supportCustomValue <p>是否支持用户自定义判定值。true 支持，false 不支持。</p>
                     * 
                     */
                    void SetSupportCustomValue(const bool& _supportCustomValue);

                    /**
                     * 判断参数 SupportCustomValue 是否已赋值
                     * @return SupportCustomValue 是否已赋值
                     * 
                     */
                    bool SupportCustomValueHasBeenSet() const;

                    /**
                     * 获取<p>该检测项适用的操作系统/组件版本列表。</p>
                     * @return AffectedVersionList <p>该检测项适用的操作系统/组件版本列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAffectedVersionList() const;

                    /**
                     * 设置<p>该检测项适用的操作系统/组件版本列表。</p>
                     * @param _affectedVersionList <p>该检测项适用的操作系统/组件版本列表。</p>
                     * 
                     */
                    void SetAffectedVersionList(const std::vector<std::string>& _affectedVersionList);

                    /**
                     * 判断参数 AffectedVersionList 是否已赋值
                     * @return AffectedVersionList 是否已赋值
                     * 
                     */
                    bool AffectedVersionListHasBeenSet() const;

                    /**
                     * 获取<p>编辑自定义判定值时的参数定义（如取值范围、控件类型等）。</p>
                     * @return WebEditParam <p>编辑自定义判定值时的参数定义（如取值范围、控件类型等）。</p>
                     * 
                     */
                    std::string GetWebEditParam() const;

                    /**
                     * 设置<p>编辑自定义判定值时的参数定义（如取值范围、控件类型等）。</p>
                     * @param _webEditParam <p>编辑自定义判定值时的参数定义（如取值范围、控件类型等）。</p>
                     * 
                     */
                    void SetWebEditParam(const std::string& _webEditParam);

                    /**
                     * 判断参数 WebEditParam 是否已赋值
                     * @return WebEditParam 是否已赋值
                     * 
                     */
                    bool WebEditParamHasBeenSet() const;

                    /**
                     * 获取<p>检测项默认判定值列表。</p>
                     * @return DefaultValueList <p>检测项默认判定值列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDefaultValueList() const;

                    /**
                     * 设置<p>检测项默认判定值列表。</p>
                     * @param _defaultValueList <p>检测项默认判定值列表。</p>
                     * 
                     */
                    void SetDefaultValueList(const std::vector<std::string>& _defaultValueList);

                    /**
                     * 判断参数 DefaultValueList 是否已赋值
                     * @return DefaultValueList 是否已赋值
                     * 
                     */
                    bool DefaultValueListHasBeenSet() const;

                    /**
                     * 获取<p>是否已被用户自定义。true 已自定义，false 仍使用默认值。</p>
                     * @return IsCustomConf <p>是否已被用户自定义。true 已自定义，false 仍使用默认值。</p>
                     * 
                     */
                    bool GetIsCustomConf() const;

                    /**
                     * 设置<p>是否已被用户自定义。true 已自定义，false 仍使用默认值。</p>
                     * @param _isCustomConf <p>是否已被用户自定义。true 已自定义，false 仍使用默认值。</p>
                     * 
                     */
                    void SetIsCustomConf(const bool& _isCustomConf);

                    /**
                     * 判断参数 IsCustomConf 是否已赋值
                     * @return IsCustomConf 是否已赋值
                     * 
                     */
                    bool IsCustomConfHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义配置记录 ID，未自定义时为 0。</p>
                     * @return CustomItemID <p>用户自定义配置记录 ID，未自定义时为 0。</p>
                     * 
                     */
                    uint64_t GetCustomItemID() const;

                    /**
                     * 设置<p>用户自定义配置记录 ID，未自定义时为 0。</p>
                     * @param _customItemID <p>用户自定义配置记录 ID，未自定义时为 0。</p>
                     * 
                     */
                    void SetCustomItemID(const uint64_t& _customItemID);

                    /**
                     * 判断参数 CustomItemID 是否已赋值
                     * @return CustomItemID 是否已赋值
                     * 
                     */
                    bool CustomItemIDHasBeenSet() const;

                private:

                    /**
                     * <p>基线检测项 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>内置规则 ID。</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>检测对象描述，例如配置文件路径、内核参数、Kubernetes 资源等。</p>
                     */
                    std::vector<std::string> m_checkObject;
                    bool m_checkObjectHasBeenSet;

                    /**
                     * <p>风险等级。取值：</p><ul><li>LOW：低危</li><li>MEDIUM：中危</li><li>HIGH：高危</li><li>CRITICAL：严重</li></ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>检测项名称（中文）。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>检测项描述（中文，说明检测背景与判定逻辑）。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>检测项修复建议（中文，含建议的配置参考值或加固命令）。</p>
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                    /**
                     * <p>检测项的参考链接列表。</p>
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * <p>所属系统父分类信息。</p>
                     */
                    BaselineCategory m_systemCategory;
                    bool m_systemCategoryHasBeenSet;

                    /**
                     * <p>所属子分类信息。</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>是否支持一键修复。true 支持，false 不支持。</p>
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * <p>是否支持用户自定义判定值。true 支持，false 不支持。</p>
                     */
                    bool m_supportCustomValue;
                    bool m_supportCustomValueHasBeenSet;

                    /**
                     * <p>该检测项适用的操作系统/组件版本列表。</p>
                     */
                    std::vector<std::string> m_affectedVersionList;
                    bool m_affectedVersionListHasBeenSet;

                    /**
                     * <p>编辑自定义判定值时的参数定义（如取值范围、控件类型等）。</p>
                     */
                    std::string m_webEditParam;
                    bool m_webEditParamHasBeenSet;

                    /**
                     * <p>检测项默认判定值列表。</p>
                     */
                    std::vector<std::string> m_defaultValueList;
                    bool m_defaultValueListHasBeenSet;

                    /**
                     * <p>是否已被用户自定义。true 已自定义，false 仍使用默认值。</p>
                     */
                    bool m_isCustomConf;
                    bool m_isCustomConfHasBeenSet;

                    /**
                     * <p>用户自定义配置记录 ID，未自定义时为 0。</p>
                     */
                    uint64_t m_customItemID;
                    bool m_customItemIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEM_H_
