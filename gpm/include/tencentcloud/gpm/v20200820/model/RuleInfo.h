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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/StringKV.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 规则信息
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称 [a-zA-Z0-9-\.]*
                     * @return RuleName 规则名称 [a-zA-Z0-9-\.]*
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称 [a-zA-Z0-9-\.]*
                     * @param _ruleName 规则名称 [a-zA-Z0-9-\.]*
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleDesc 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleDesc 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取规则脚本
                     * @return RuleScript 规则脚本
                     * 
                     */
                    std::string GetRuleScript() const;

                    /**
                     * 设置规则脚本
                     * @param _ruleScript 规则脚本
                     * 
                     */
                    void SetRuleScript(const std::string& _ruleScript);

                    /**
                     * 判断参数 RuleScript 是否已赋值
                     * @return RuleScript 是否已赋值
                     * 
                     */
                    bool RuleScriptHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取关联匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchCodeList 关联匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKV> GetMatchCodeList() const;

                    /**
                     * 设置关联匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchCodeList 关联匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchCodeList(const std::vector<StringKV>& _matchCodeList);

                    /**
                     * 判断参数 MatchCodeList 是否已赋值
                     * @return MatchCodeList 是否已赋值
                     * 
                     */
                    bool MatchCodeListHasBeenSet() const;

                    /**
                     * 获取规则code
                     * @return RuleCode 规则code
                     * 
                     */
                    std::string GetRuleCode() const;

                    /**
                     * 设置规则code
                     * @param _ruleCode 规则code
                     * 
                     */
                    void SetRuleCode(const std::string& _ruleCode);

                    /**
                     * 判断参数 RuleCode 是否已赋值
                     * @return RuleCode 是否已赋值
                     * 
                     */
                    bool RuleCodeHasBeenSet() const;

                    /**
                     * 获取地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户OwnerUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 用户OwnerUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置用户OwnerUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin 用户OwnerUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                private:

                    /**
                     * 规则名称 [a-zA-Z0-9-\.]*
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * 规则脚本
                     */
                    std::string m_ruleScript;
                    bool m_ruleScriptHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 关联匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKV> m_matchCodeList;
                    bool m_matchCodeListHasBeenSet;

                    /**
                     * 规则code
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * 地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户OwnerUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_RULEINFO_H_
