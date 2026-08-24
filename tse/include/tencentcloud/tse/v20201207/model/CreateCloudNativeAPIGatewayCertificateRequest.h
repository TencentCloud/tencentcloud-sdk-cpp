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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayCertificate请求参数结构体
                */
                class CreateCloudNativeAPIGatewayCertificateRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayCertificateRequest();
                    ~CreateCloudNativeAPIGatewayCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>ssl平台证书 Id</p>
                     * @return CertId <p>ssl平台证书 Id</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>ssl平台证书 Id</p>
                     * @param _certId <p>ssl平台证书 Id</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定的域名</p>
                     * @return BindDomains <p>绑定的域名</p>
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置<p>绑定的域名</p>
                     * @param _bindDomains <p>绑定的域名</p>
                     * 
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取<p>证书名称</p>
                     * @return Name <p>证书名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>证书名称</p>
                     * @param _name <p>证书名称</p>
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
                     * 获取<p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * @return CertType <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置<p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * @param _certType <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * @return CertUsage <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * 
                     */
                    std::string GetCertUsage() const;

                    /**
                     * 设置<p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * @param _certUsage <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * 
                     */
                    void SetCertUsage(const std::string& _certUsage);

                    /**
                     * 判断参数 CertUsage 是否已赋值
                     * @return CertUsage 是否已赋值
                     * 
                     */
                    bool CertUsageHasBeenSet() const;

                    /**
                     * 获取<p>证书私钥</p>
                     * @return Key <p>证书私钥</p>
                     * @deprecated
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>证书私钥</p>
                     * @param _key <p>证书私钥</p>
                     * @deprecated
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * @deprecated
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>证书pem格式</p>
                     * @return Crt <p>证书pem格式</p>
                     * @deprecated
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置<p>证书pem格式</p>
                     * @param _crt <p>证书pem格式</p>
                     * @deprecated
                     */
                    void SetCrt(const std::string& _crt);

                    /**
                     * 判断参数 Crt 是否已赋值
                     * @return Crt 是否已赋值
                     * @deprecated
                     */
                    bool CrtHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>ssl平台证书 Id</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>绑定的域名</p>
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * <p>证书名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     */
                    std::string m_certUsage;
                    bool m_certUsageHasBeenSet;

                    /**
                     * <p>证书私钥</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>证书pem格式</p>
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
