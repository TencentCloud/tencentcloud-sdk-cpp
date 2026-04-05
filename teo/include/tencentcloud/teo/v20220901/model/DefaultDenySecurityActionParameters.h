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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DenyActionParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 默认拦截动作配置。当安全规则命中并触发拦截处置动作时，若 SecurityAction 仅指定了 Name 为 Deny 且未指定 DenyActionParameters，则按功能模块维度匹配并使用此处定义的默认参数配置：
<li>ManagedRules 托管规则默认拦截处置动作配置。</li>
<li>OtherModules 除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。</li>
                */
                class DefaultDenySecurityActionParameters : public AbstractModel
                {
                public:
                    DefaultDenySecurityActionParameters();
                    ~DefaultDenySecurityActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * @return ManagedRules 托管规则默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * 
                     */
                    DenyActionParameters GetManagedRules() const;

                    /**
                     * 设置托管规则默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * @param _managedRules 托管规则默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * 
                     */
                    void SetManagedRules(const DenyActionParameters& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                    /**
                     * 获取除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * @return OtherModules 除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * 
                     */
                    DenyActionParameters GetOtherModules() const;

                    /**
                     * 设置除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * @param _otherModules 除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     * 
                     */
                    void SetOtherModules(const DenyActionParameters& _otherModules);

                    /**
                     * 判断参数 OtherModules 是否已赋值
                     * @return OtherModules 是否已赋值
                     * 
                     */
                    bool OtherModulesHasBeenSet() const;

                private:

                    /**
                     * 托管规则默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     */
                    DenyActionParameters m_managedRules;
                    bool m_managedRulesHasBeenSet;

                    /**
                     * 除托管规则外的安全防护规则（自定义规则、速率限制 和 Bot 管理功能）默认拦截处置动作配置。	DenyActionParameters 支持的配置参数：<li>ReturnCustomPage：是否使用自定义页面。</li><li>ResponseCode：自定义页面的状态码。</li><li>ErrorPageId：自定义页面的 PageId。</li>
                     */
                    DenyActionParameters m_otherModules;
                    bool m_otherModulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_
