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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleStructuredTestItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyRuleTestResult请求参数结构体
                */
                class DescribeDspmIdentifyRuleTestResultRequest : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyRuleTestResultRequest();
                    ~DescribeDspmIdentifyRuleTestResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则类型</p><p>枚举值：</p><ul><li>structured： 结构化规则</li><li>unstructrued： 非结构化规则</li></ul>
                     * @return RuleType <p>规则类型</p><p>枚举值：</p><ul><li>structured： 结构化规则</li><li>unstructrued： 非结构化规则</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则类型</p><p>枚举值：</p><ul><li>structured： 结构化规则</li><li>unstructrued： 非结构化规则</li></ul>
                     * @param _ruleType <p>规则类型</p><p>枚举值：</p><ul><li>structured： 结构化规则</li><li>unstructrued： 非结构化规则</li></ul>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则内容</p>
                     * @return RuleContent <p>规则内容</p>
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置<p>规则内容</p>
                     * @param _ruleContent <p>规则内容</p>
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取<p>数据项id</p>
                     * @return RuleId <p>数据项id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>数据项id</p>
                     * @param _ruleId <p>数据项id</p>
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>结构化测试内容</p>
                     * @return StructuredTestContent <p>结构化测试内容</p>
                     * 
                     */
                    std::vector<DspmIdentifyRuleStructuredTestItem> GetStructuredTestContent() const;

                    /**
                     * 设置<p>结构化测试内容</p>
                     * @param _structuredTestContent <p>结构化测试内容</p>
                     * 
                     */
                    void SetStructuredTestContent(const std::vector<DspmIdentifyRuleStructuredTestItem>& _structuredTestContent);

                    /**
                     * 判断参数 StructuredTestContent 是否已赋值
                     * @return StructuredTestContent 是否已赋值
                     * 
                     */
                    bool StructuredTestContentHasBeenSet() const;

                    /**
                     * 获取<p>非结构化测试内容</p>
                     * @return UnStructuredTestContent <p>非结构化测试内容</p>
                     * 
                     */
                    std::string GetUnStructuredTestContent() const;

                    /**
                     * 设置<p>非结构化测试内容</p>
                     * @param _unStructuredTestContent <p>非结构化测试内容</p>
                     * 
                     */
                    void SetUnStructuredTestContent(const std::string& _unStructuredTestContent);

                    /**
                     * 判断参数 UnStructuredTestContent 是否已赋值
                     * @return UnStructuredTestContent 是否已赋值
                     * 
                     */
                    bool UnStructuredTestContentHasBeenSet() const;

                private:

                    /**
                     * <p>规则类型</p><p>枚举值：</p><ul><li>structured： 结构化规则</li><li>unstructrued： 非结构化规则</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>规则内容</p>
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * <p>数据项id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>结构化测试内容</p>
                     */
                    std::vector<DspmIdentifyRuleStructuredTestItem> m_structuredTestContent;
                    bool m_structuredTestContentHasBeenSet;

                    /**
                     * <p>非结构化测试内容</p>
                     */
                    std::string m_unStructuredTestContent;
                    bool m_unStructuredTestContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_
