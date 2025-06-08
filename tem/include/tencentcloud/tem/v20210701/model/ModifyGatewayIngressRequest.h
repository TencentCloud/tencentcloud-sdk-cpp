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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYGATEWAYINGRESSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYGATEWAYINGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRule.h>
#include <tencentcloud/tem/v20210701/model/IngressTls.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ModifyGatewayIngress请求参数结构体
                */
                class ModifyGatewayIngressRequest : public AbstractModel
                {
                public:
                    ModifyGatewayIngressRequest();
                    ~ModifyGatewayIngressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID
                     * @return EnvironmentId 环境 ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境 ID
                     * @param _environmentId 环境 ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return GatewayName 网关名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置网关名称
                     * @param _gatewayName 网关名称
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取网关类型，如 clb
                     * @return GatewayType 网关类型，如 clb
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型，如 clb
                     * @param _gatewayType 网关类型，如 clb
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取转发配置名称
                     * @return Name 转发配置名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置转发配置名称
                     * @param _name 转发配置名称
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
                     * 获取rules 配置
                     * @return Rules rules 配置
                     * 
                     */
                    std::vector<IngressRule> GetRules() const;

                    /**
                     * 设置rules 配置
                     * @param _rules rules 配置
                     * 
                     */
                    void SetRules(const std::vector<IngressRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @return Mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    bool GetMixed() const;

                    /**
                     * 设置是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @param _mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    void SetMixed(const bool& _mixed);

                    /**
                     * 判断参数 Mixed 是否已赋值
                     * @return Mixed 是否已赋值
                     * 
                     */
                    bool MixedHasBeenSet() const;

                    /**
                     * 获取tls 配置
                     * @return Tls tls 配置
                     * 
                     */
                    std::vector<IngressTls> GetTls() const;

                    /**
                     * 设置tls 配置
                     * @param _tls tls 配置
                     * 
                     */
                    void SetTls(const std::vector<IngressTls>& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * @return RewriteType 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * 
                     */
                    std::string GetRewriteType() const;

                    /**
                     * 设置重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * @param _rewriteType 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * 
                     */
                    void SetRewriteType(const std::string& _rewriteType);

                    /**
                     * 判断参数 RewriteType 是否已赋值
                     * @return RewriteType 是否已赋值
                     * 
                     */
                    bool RewriteTypeHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 网关类型，如 clb
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 转发配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * rules 配置
                     */
                    std::vector<IngressRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     */
                    bool m_mixed;
                    bool m_mixedHasBeenSet;

                    /**
                     * tls 配置
                     */
                    std::vector<IngressTls> m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     */
                    std::string m_rewriteType;
                    bool m_rewriteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYGATEWAYINGRESSREQUEST_H_
