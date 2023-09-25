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
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
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
                     * 获取绑定的域名
                     * @return BindDomains 绑定的域名
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置绑定的域名
                     * @param _bindDomains 绑定的域名
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
                     * 获取ssl平台证书 Id
                     * @return CertId ssl平台证书 Id
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl平台证书 Id
                     * @param _certId ssl平台证书 Id
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
                     * 获取证书名称
                     * @return Name 证书名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置证书名称
                     * @param _name 证书名称
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
                     * 获取证书私钥
                     * @return Key 证书私钥
                     * @deprecated
                     */
                    std::string GetKey() const;

                    /**
                     * 设置证书私钥
                     * @param _key 证书私钥
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
                     * 获取证书pem格式
                     * @return Crt 证书pem格式
                     * @deprecated
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置证书pem格式
                     * @param _crt 证书pem格式
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
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 绑定的域名
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * ssl平台证书 Id
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证书私钥
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 证书pem格式
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
