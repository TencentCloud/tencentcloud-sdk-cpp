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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateIdentifyRuleAnotherName请求参数结构体
                */
                class CreateIdentifyRuleAnotherNameRequest : public AbstractModel
                {
                public:
                    CreateIdentifyRuleAnotherNameRequest();
                    ~CreateIdentifyRuleAnotherNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceId 合规组ID
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceId 合规组ID
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取规则绑定的分类id
                     * @return CategoryId 规则绑定的分类id
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置规则绑定的分类id
                     * @param _categoryId 规则绑定的分类id
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取规则别名
                     * @return AnotherName 规则别名
                     * 
                     */
                    std::string GetAnotherName() const;

                    /**
                     * 设置规则别名
                     * @param _anotherName 规则别名
                     * 
                     */
                    void SetAnotherName(const std::string& _anotherName);

                    /**
                     * 判断参数 AnotherName 是否已赋值
                     * @return AnotherName 是否已赋值
                     * 
                     */
                    bool AnotherNameHasBeenSet() const;

                    /**
                     * 获取别名规则id
                     * @return AliasRuleId 别名规则id
                     * 
                     */
                    int64_t GetAliasRuleId() const;

                    /**
                     * 设置别名规则id
                     * @param _aliasRuleId 别名规则id
                     * 
                     */
                    void SetAliasRuleId(const int64_t& _aliasRuleId);

                    /**
                     * 判断参数 AliasRuleId 是否已赋值
                     * @return AliasRuleId 是否已赋值
                     * 
                     */
                    bool AliasRuleIdHasBeenSet() const;

                    /**
                     * 获取别名规则名称
                     * @return AliasRuleName 别名规则名称
                     * 
                     */
                    std::string GetAliasRuleName() const;

                    /**
                     * 设置别名规则名称
                     * @param _aliasRuleName 别名规则名称
                     * 
                     */
                    void SetAliasRuleName(const std::string& _aliasRuleName);

                    /**
                     * 判断参数 AliasRuleName 是否已赋值
                     * @return AliasRuleName 是否已赋值
                     * 
                     */
                    bool AliasRuleNameHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 规则绑定的分类id
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则别名
                     */
                    std::string m_anotherName;
                    bool m_anotherNameHasBeenSet;

                    /**
                     * 别名规则id
                     */
                    int64_t m_aliasRuleId;
                    bool m_aliasRuleIdHasBeenSet;

                    /**
                     * 别名规则名称
                     */
                    std::string m_aliasRuleName;
                    bool m_aliasRuleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMEREQUEST_H_
