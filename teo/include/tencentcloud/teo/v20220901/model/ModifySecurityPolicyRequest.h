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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityPolicy请求参数结构体
                */
                class ModifySecurityPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityPolicyRequest();
                    ~ModifySecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param _zoneId 站点Id。
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
                     * 获取安全配置。
                     * @return SecurityConfig 安全配置。
                     * 
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置安全配置。
                     * @param _securityConfig 安全配置。
                     * 
                     */
                    void SetSecurityConfig(const SecurityConfig& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     * 
                     */
                    bool SecurityConfigHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。

注意：当同时指定本参数和 TemplateId 参数时，本参数不生效。请勿同时指定本参数和 TemplateId 参数。
                     * @return Entity 子域名/应用名。

注意：当同时指定本参数和 TemplateId 参数时，本参数不生效。请勿同时指定本参数和 TemplateId 参数。
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。

注意：当同时指定本参数和 TemplateId 参数时，本参数不生效。请勿同时指定本参数和 TemplateId 参数。
                     * @param _entity 子域名/应用名。

注意：当同时指定本参数和 TemplateId 参数时，本参数不生效。请勿同时指定本参数和 TemplateId 参数。
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取指定模板策略 ID，或指定站点全局策略。
- 如需配置策略模板，请指定策略模板 ID。
- 如需配置站点全局策略，请使用 @ZoneLevel@Domain 参数值

注意：当使用本参数时，Entity 参数不生效。请勿同时使用本参数和 Entity 参数。
                     * @return TemplateId 指定模板策略 ID，或指定站点全局策略。
- 如需配置策略模板，请指定策略模板 ID。
- 如需配置站点全局策略，请使用 @ZoneLevel@Domain 参数值

注意：当使用本参数时，Entity 参数不生效。请勿同时使用本参数和 Entity 参数。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置指定模板策略 ID，或指定站点全局策略。
- 如需配置策略模板，请指定策略模板 ID。
- 如需配置站点全局策略，请使用 @ZoneLevel@Domain 参数值

注意：当使用本参数时，Entity 参数不生效。请勿同时使用本参数和 Entity 参数。
                     * @param _templateId 指定模板策略 ID，或指定站点全局策略。
- 如需配置策略模板，请指定策略模板 ID。
- 如需配置站点全局策略，请使用 @ZoneLevel@Domain 参数值

注意：当使用本参数时，Entity 参数不生效。请勿同时使用本参数和 Entity 参数。
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
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 安全配置。
                     */
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * 子域名/应用名。

注意：当同时指定本参数和 TemplateId 参数时，本参数不生效。请勿同时指定本参数和 TemplateId 参数。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 指定模板策略 ID，或指定站点全局策略。
- 如需配置策略模板，请指定策略模板 ID。
- 如需配置站点全局策略，请使用 @ZoneLevel@Domain 参数值

注意：当使用本参数时，Entity 参数不生效。请勿同时使用本参数和 Entity 参数。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
