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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATECUSTOMDOMAINREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATECUSTOMDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/EndpointsConf.h>
#include <tencentcloud/scf/v20180416/model/CertConf.h>
#include <tencentcloud/scf/v20180416/model/WafConf.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateCustomDomain请求参数结构体
                */
                class CreateCustomDomainRequest : public AbstractModel
                {
                public:
                    CreateCustomDomainRequest();
                    ~CreateCustomDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名，不支持泛域名
                     * @return Domain 域名，不支持泛域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，不支持泛域名
                     * @param _domain 域名，不支持泛域名
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
                     * 获取协议，取值范围：HTTP, HTTPS, HTTP&HTTPS
                     * @return Protocol 协议，取值范围：HTTP, HTTPS, HTTP&HTTPS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值范围：HTTP, HTTPS, HTTP&HTTPS
                     * @param _protocol 协议，取值范围：HTTP, HTTPS, HTTP&HTTPS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取路由配置
                     * @return EndpointsConfig 路由配置
                     * 
                     */
                    std::vector<EndpointsConf> GetEndpointsConfig() const;

                    /**
                     * 设置路由配置
                     * @param _endpointsConfig 路由配置
                     * 
                     */
                    void SetEndpointsConfig(const std::vector<EndpointsConf>& _endpointsConfig);

                    /**
                     * 判断参数 EndpointsConfig 是否已赋值
                     * @return EndpointsConfig 是否已赋值
                     * 
                     */
                    bool EndpointsConfigHasBeenSet() const;

                    /**
                     * 获取证书配置信息，有使用HTTPS协议时候必须传
                     * @return CertConfig 证书配置信息，有使用HTTPS协议时候必须传
                     * 
                     */
                    CertConf GetCertConfig() const;

                    /**
                     * 设置证书配置信息，有使用HTTPS协议时候必须传
                     * @param _certConfig 证书配置信息，有使用HTTPS协议时候必须传
                     * 
                     */
                    void SetCertConfig(const CertConf& _certConfig);

                    /**
                     * 判断参数 CertConfig 是否已赋值
                     * @return CertConfig 是否已赋值
                     * 
                     */
                    bool CertConfigHasBeenSet() const;

                    /**
                     * 获取web 应用防火墙配置
                     * @return WafConfig web 应用防火墙配置
                     * 
                     */
                    WafConf GetWafConfig() const;

                    /**
                     * 设置web 应用防火墙配置
                     * @param _wafConfig web 应用防火墙配置
                     * 
                     */
                    void SetWafConfig(const WafConf& _wafConfig);

                    /**
                     * 判断参数 WafConfig 是否已赋值
                     * @return WafConfig 是否已赋值
                     * 
                     */
                    bool WafConfigHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 域名，不支持泛域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议，取值范围：HTTP, HTTPS, HTTP&HTTPS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 路由配置
                     */
                    std::vector<EndpointsConf> m_endpointsConfig;
                    bool m_endpointsConfigHasBeenSet;

                    /**
                     * 证书配置信息，有使用HTTPS协议时候必须传
                     */
                    CertConf m_certConfig;
                    bool m_certConfigHasBeenSet;

                    /**
                     * web 应用防火墙配置
                     */
                    WafConf m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATECUSTOMDOMAINREQUEST_H_
