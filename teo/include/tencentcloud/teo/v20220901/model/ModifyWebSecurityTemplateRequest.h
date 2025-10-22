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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWebSecurityTemplate请求参数结构体
                */
                class ModifyWebSecurityTemplateRequest : public AbstractModel
                {
                public:
                    ModifyWebSecurityTemplateRequest();
                    ~ModifyWebSecurityTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。需要传入目标策略模板在访问权限上归属的站点，可使用 DescribeWebSecurityTemplates 接口查询策略模板归属的站点。
                     * @return ZoneId 站点 ID。需要传入目标策略模板在访问权限上归属的站点，可使用 DescribeWebSecurityTemplates 接口查询策略模板归属的站点。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。需要传入目标策略模板在访问权限上归属的站点，可使用 DescribeWebSecurityTemplates 接口查询策略模板归属的站点。
                     * @param _zoneId 站点 ID。需要传入目标策略模板在访问权限上归属的站点，可使用 DescribeWebSecurityTemplates 接口查询策略模板归属的站点。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取策略模板 ID。
                     * @return TemplateId 策略模板 ID。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置策略模板 ID。
                     * @param _templateId 策略模板 ID。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取修改后的策略模板名称。由中文、英文、数字和下划线组成，不能以下划线开头，且长度不能超过32个字符。字段为空时则不修改。
                     * @return TemplateName 修改后的策略模板名称。由中文、英文、数字和下划线组成，不能以下划线开头，且长度不能超过32个字符。字段为空时则不修改。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置修改后的策略模板名称。由中文、英文、数字和下划线组成，不能以下划线开头，且长度不能超过32个字符。字段为空时则不修改。
                     * @param _templateName 修改后的策略模板名称。由中文、英文、数字和下划线组成，不能以下划线开头，且长度不能超过32个字符。字段为空时则不修改。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取安全策略模板配置内容。值为空时不修改；没有传入的子模块结构不会被修改。目前支持 Web 防护模块中的例外规则、自定义规则、速率限制规则和托管规则配置，通过表达式语法对安全策略进行配置。 Bot 管理规则配置暂不支持，正在开发中。
特别说明：当入参某个子模块结构时，请确保携带所有需要保留的规则内容，未传入规则内容视为删除。
                     * @return SecurityPolicy 安全策略模板配置内容。值为空时不修改；没有传入的子模块结构不会被修改。目前支持 Web 防护模块中的例外规则、自定义规则、速率限制规则和托管规则配置，通过表达式语法对安全策略进行配置。 Bot 管理规则配置暂不支持，正在开发中。
特别说明：当入参某个子模块结构时，请确保携带所有需要保留的规则内容，未传入规则内容视为删除。
                     * 
                     */
                    SecurityPolicy GetSecurityPolicy() const;

                    /**
                     * 设置安全策略模板配置内容。值为空时不修改；没有传入的子模块结构不会被修改。目前支持 Web 防护模块中的例外规则、自定义规则、速率限制规则和托管规则配置，通过表达式语法对安全策略进行配置。 Bot 管理规则配置暂不支持，正在开发中。
特别说明：当入参某个子模块结构时，请确保携带所有需要保留的规则内容，未传入规则内容视为删除。
                     * @param _securityPolicy 安全策略模板配置内容。值为空时不修改；没有传入的子模块结构不会被修改。目前支持 Web 防护模块中的例外规则、自定义规则、速率限制规则和托管规则配置，通过表达式语法对安全策略进行配置。 Bot 管理规则配置暂不支持，正在开发中。
特别说明：当入参某个子模块结构时，请确保携带所有需要保留的规则内容，未传入规则内容视为删除。
                     * 
                     */
                    void SetSecurityPolicy(const SecurityPolicy& _securityPolicy);

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。需要传入目标策略模板在访问权限上归属的站点，可使用 DescribeWebSecurityTemplates 接口查询策略模板归属的站点。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 策略模板 ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 修改后的策略模板名称。由中文、英文、数字和下划线组成，不能以下划线开头，且长度不能超过32个字符。字段为空时则不修改。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 安全策略模板配置内容。值为空时不修改；没有传入的子模块结构不会被修改。目前支持 Web 防护模块中的例外规则、自定义规则、速率限制规则和托管规则配置，通过表达式语法对安全策略进行配置。 Bot 管理规则配置暂不支持，正在开发中。
特别说明：当入参某个子模块结构时，请确保携带所有需要保留的规则内容，未传入规则内容视为删除。
                     */
                    SecurityPolicy m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYWEBSECURITYTEMPLATEREQUEST_H_
