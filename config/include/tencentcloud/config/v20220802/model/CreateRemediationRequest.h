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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEREMEDIATIONREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEREMEDIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * CreateRemediation请求参数结构体
                */
                class CreateRemediationRequest : public AbstractModel
                {
                public:
                    CreateRemediationRequest();
                    ~CreateRemediationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则 ID</p>
                     * @return RuleId <p>规则 ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _ruleId <p>规则 ID</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>修正类型取值：   SCF：云函数（自定义修正）。</p>
                     * @return RemediationType <p>修正类型取值：   SCF：云函数（自定义修正）。</p>
                     * 
                     */
                    std::string GetRemediationType() const;

                    /**
                     * 设置<p>修正类型取值：   SCF：云函数（自定义修正）。</p>
                     * @param _remediationType <p>修正类型取值：   SCF：云函数（自定义修正）。</p>
                     * 
                     */
                    void SetRemediationType(const std::string& _remediationType);

                    /**
                     * 判断参数 RemediationType 是否已赋值
                     * @return RemediationType 是否已赋值
                     * 
                     */
                    bool RemediationTypeHasBeenSet() const;

                    /**
                     * 获取<p>修正模板 ID</p>
                     * @return RemediationTemplateId <p>修正模板 ID</p>
                     * 
                     */
                    std::string GetRemediationTemplateId() const;

                    /**
                     * 设置<p>修正模板 ID</p>
                     * @param _remediationTemplateId <p>修正模板 ID</p>
                     * 
                     */
                    void SetRemediationTemplateId(const std::string& _remediationTemplateId);

                    /**
                     * 判断参数 RemediationTemplateId 是否已赋值
                     * @return RemediationTemplateId 是否已赋值
                     * 
                     */
                    bool RemediationTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>修正执行方式。<br>取值：   MANUAL_EXECUTION：手动执行</p>
                     * @return InvokeType <p>修正执行方式。<br>取值：   MANUAL_EXECUTION：手动执行</p>
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置<p>修正执行方式。<br>取值：   MANUAL_EXECUTION：手动执行</p>
                     * @param _invokeType <p>修正执行方式。<br>取值：   MANUAL_EXECUTION：手动执行</p>
                     * 
                     */
                    void SetInvokeType(const std::string& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行修正的模板来源<br>CUSTOM：自定义模板。</p>
                     * @return SourceType <p>执行修正的模板来源<br>CUSTOM：自定义模板。</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>执行修正的模板来源<br>CUSTOM：自定义模板。</p>
                     * @param _sourceType <p>执行修正的模板来源<br>CUSTOM：自定义模板。</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>规则 ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>修正类型取值：   SCF：云函数（自定义修正）。</p>
                     */
                    std::string m_remediationType;
                    bool m_remediationTypeHasBeenSet;

                    /**
                     * <p>修正模板 ID</p>
                     */
                    std::string m_remediationTemplateId;
                    bool m_remediationTemplateIdHasBeenSet;

                    /**
                     * <p>修正执行方式。<br>取值：   MANUAL_EXECUTION：手动执行</p>
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * <p>执行修正的模板来源<br>CUSTOM：自定义模板。</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CREATEREMEDIATIONREQUEST_H_
