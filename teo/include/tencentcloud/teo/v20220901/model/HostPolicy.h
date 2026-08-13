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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 域名级策略。
                */
                class HostPolicy : public AbstractModel
                {
                public:
                    HostPolicy();
                    ~HostPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>站点级策略，针对站点下所有域名生效的策略，详情见 站点级策略。</p>
                     * @return Host <p>站点级策略，针对站点下所有域名生效的策略，详情见 站点级策略。</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>站点级策略，针对站点下所有域名生效的策略，详情见 站点级策略。</p>
                     * @param _host <p>站点级策略，针对站点下所有域名生效的策略，详情见 站点级策略。</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>当前域名使用的策略类型。取值有：<li>ZoneDefault：使用站点级策略，即 ZoneDefaultPolicy 中定义的策略配置。</li><li>Custom：使用域名级策略。使用该选项时，必须同时配置 Policy 字段，指定详细策略配置。</li><li>Template：使用策略模板。使用该选项时，必须同时配置 TemplateId 字段，指定当前域名使用的策略模板。</li></p>
                     * @return PolicyType <p>当前域名使用的策略类型。取值有：<li>ZoneDefault：使用站点级策略，即 ZoneDefaultPolicy 中定义的策略配置。</li><li>Custom：使用域名级策略。使用该选项时，必须同时配置 Policy 字段，指定详细策略配置。</li><li>Template：使用策略模板。使用该选项时，必须同时配置 TemplateId 字段，指定当前域名使用的策略模板。</li></p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>当前域名使用的策略类型。取值有：<li>ZoneDefault：使用站点级策略，即 ZoneDefaultPolicy 中定义的策略配置。</li><li>Custom：使用域名级策略。使用该选项时，必须同时配置 Policy 字段，指定详细策略配置。</li><li>Template：使用策略模板。使用该选项时，必须同时配置 TemplateId 字段，指定当前域名使用的策略模板。</li></p>
                     * @param _policyType <p>当前域名使用的策略类型。取值有：<li>ZoneDefault：使用站点级策略，即 ZoneDefaultPolicy 中定义的策略配置。</li><li>Custom：使用域名级策略。使用该选项时，必须同时配置 Policy 字段，指定详细策略配置。</li><li>Template：使用策略模板。使用该选项时，必须同时配置 TemplateId 字段，指定当前域名使用的策略模板。</li></p>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>可选。当 PolicyType 为 Custom 时，该字段为当前域名的详细策略配置，对当前域名生效。</p>
                     * @return Policy <p>可选。当 PolicyType 为 Custom 时，该字段为当前域名的详细策略配置，对当前域名生效。</p>
                     * 
                     */
                    SecurityPolicy GetPolicy() const;

                    /**
                     * 设置<p>可选。当 PolicyType 为 Custom 时，该字段为当前域名的详细策略配置，对当前域名生效。</p>
                     * @param _policy <p>可选。当 PolicyType 为 Custom 时，该字段为当前域名的详细策略配置，对当前域名生效。</p>
                     * 
                     */
                    void SetPolicy(const SecurityPolicy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>可选。当 PolicyType 为 Template 时，该字段用于指定当前域名所使用的策略模板的 Id。</p>
                     * @return TemplateId <p>可选。当 PolicyType 为 Template 时，该字段用于指定当前域名所使用的策略模板的 Id。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>可选。当 PolicyType 为 Template 时，该字段用于指定当前域名所使用的策略模板的 Id。</p>
                     * @param _templateId <p>可选。当 PolicyType 为 Template 时，该字段用于指定当前域名所使用的策略模板的 Id。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>站点级策略，针对站点下所有域名生效的策略，详情见 站点级策略。</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>当前域名使用的策略类型。取值有：<li>ZoneDefault：使用站点级策略，即 ZoneDefaultPolicy 中定义的策略配置。</li><li>Custom：使用域名级策略。使用该选项时，必须同时配置 Policy 字段，指定详细策略配置。</li><li>Template：使用策略模板。使用该选项时，必须同时配置 TemplateId 字段，指定当前域名使用的策略模板。</li></p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>可选。当 PolicyType 为 Custom 时，该字段为当前域名的详细策略配置，对当前域名生效。</p>
                     */
                    SecurityPolicy m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>可选。当 PolicyType 为 Template 时，该字段用于指定当前域名所使用的策略模板的 Id。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTPOLICY_H_
