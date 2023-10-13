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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_

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
                * ModifyCloudNativeAPIGatewayCertificate请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayCertificateRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayCertificateRequest();
                    ~ModifyCloudNativeAPIGatewayCertificateRequest() = default;
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
                     * 获取证书id
                     * @return Id 证书id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置证书id
                     * @param _id 证书id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取证书名称，即将废弃
                     * @return Name 证书名称，即将废弃
                     * @deprecated
                     */
                    std::string GetName() const;

                    /**
                     * 设置证书名称，即将废弃
                     * @param _name 证书名称，即将废弃
                     * @deprecated
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * @deprecated
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取证书私钥，CertSource为native时必填。
                     * @return Key 证书私钥，CertSource为native时必填。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置证书私钥，CertSource为native时必填。
                     * @param _key 证书私钥，CertSource为native时必填。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取证书pem格式，CertSource为native时必填。
                     * @return Crt 证书pem格式，CertSource为native时必填。
                     * 
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置证书pem格式，CertSource为native时必填。
                     * @param _crt 证书pem格式，CertSource为native时必填。
                     * 
                     */
                    void SetCrt(const std::string& _crt);

                    /**
                     * 判断参数 Crt 是否已赋值
                     * @return Crt 是否已赋值
                     * 
                     */
                    bool CrtHasBeenSet() const;

                    /**
                     * 获取绑定的域名，即将废弃
                     * @return BindDomains 绑定的域名，即将废弃
                     * @deprecated
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置绑定的域名，即将废弃
                     * @param _bindDomains 绑定的域名，即将废弃
                     * @deprecated
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * @deprecated
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取ssl平台证书 Id，CertSource为ssl时必填。
                     * @return CertId ssl平台证书 Id，CertSource为ssl时必填。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl平台证书 Id，CertSource为ssl时必填。
                     * @param _certId ssl平台证书 Id，CertSource为ssl时必填。
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
                     * 获取证书来源
- ssl (ssl平台证书)，默认值
- native (kong自定义证书) 

                     * @return CertSource 证书来源
- ssl (ssl平台证书)，默认值
- native (kong自定义证书) 

                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置证书来源
- ssl (ssl平台证书)，默认值
- native (kong自定义证书) 

                     * @param _certSource 证书来源
- ssl (ssl平台证书)，默认值
- native (kong自定义证书) 

                     * 
                     */
                    void SetCertSource(const std::string& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 证书id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 证书名称，即将废弃
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证书私钥，CertSource为native时必填。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 证书pem格式，CertSource为native时必填。
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                    /**
                     * 绑定的域名，即将废弃
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * ssl平台证书 Id，CertSource为ssl时必填。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书来源
- ssl (ssl平台证书)，默认值
- native (kong自定义证书) 

                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
