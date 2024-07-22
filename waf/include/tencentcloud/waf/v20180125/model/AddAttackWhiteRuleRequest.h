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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDATTACKWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDATTACKWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/UserWhiteRuleItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddAttackWhiteRule请求参数结构体
                */
                class AddAttackWhiteRuleRequest : public AbstractModel
                {
                public:
                    AddAttackWhiteRuleRequest();
                    ~AddAttackWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则状态
                     * @return Status 规则状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态
                     * @param _status 规则状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取匹配规则项列表
                     * @return Rules 匹配规则项列表
                     * 
                     */
                    std::vector<UserWhiteRuleItem> GetRules() const;

                    /**
                     * 设置匹配规则项列表
                     * @param _rules 匹配规则项列表
                     * 
                     */
                    void SetRules(const std::vector<UserWhiteRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取规则序号
                     * @return RuleId 规则序号
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则序号
                     * @param _ruleId 规则序号
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return SignatureId 规则Id
                     * 
                     */
                    std::string GetSignatureId() const;

                    /**
                     * 设置规则Id
                     * @param _signatureId 规则Id
                     * 
                     */
                    void SetSignatureId(const std::string& _signatureId);

                    /**
                     * 判断参数 SignatureId 是否已赋值
                     * @return SignatureId 是否已赋值
                     * 
                     */
                    bool SignatureIdHasBeenSet() const;

                    /**
                     * 获取加白的规则ID列表
                     * @return SignatureIds 加白的规则ID列表
                     * 
                     */
                    std::vector<std::string> GetSignatureIds() const;

                    /**
                     * 设置加白的规则ID列表
                     * @param _signatureIds 加白的规则ID列表
                     * 
                     */
                    void SetSignatureIds(const std::vector<std::string>& _signatureIds);

                    /**
                     * 判断参数 SignatureIds 是否已赋值
                     * @return SignatureIds 是否已赋值
                     * 
                     */
                    bool SignatureIdsHasBeenSet() const;

                    /**
                     * 获取加白的大类规则ID
                     * @return TypeIds 加白的大类规则ID
                     * 
                     */
                    std::vector<std::string> GetTypeIds() const;

                    /**
                     * 设置加白的大类规则ID
                     * @param _typeIds 加白的大类规则ID
                     * 
                     */
                    void SetTypeIds(const std::vector<std::string>& _typeIds);

                    /**
                     * 判断参数 TypeIds 是否已赋值
                     * @return TypeIds 是否已赋值
                     * 
                     */
                    bool TypeIdsHasBeenSet() const;

                    /**
                     * 获取0:按照特定规则ID加白, 1:按照规则类型加白
                     * @return Mode 0:按照特定规则ID加白, 1:按照规则类型加白
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置0:按照特定规则ID加白, 1:按照规则类型加白
                     * @param _mode 0:按照特定规则ID加白, 1:按照规则类型加白
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return Name 规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
                     * @param _name 规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 匹配规则项列表
                     */
                    std::vector<UserWhiteRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 规则序号
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则Id
                     */
                    std::string m_signatureId;
                    bool m_signatureIdHasBeenSet;

                    /**
                     * 加白的规则ID列表
                     */
                    std::vector<std::string> m_signatureIds;
                    bool m_signatureIdsHasBeenSet;

                    /**
                     * 加白的大类规则ID
                     */
                    std::vector<std::string> m_typeIds;
                    bool m_typeIdsHasBeenSet;

                    /**
                     * 0:按照特定规则ID加白, 1:按照规则类型加白
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDATTACKWHITERULEREQUEST_H_
