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

#ifndef TENCENTCLOUD_WSS_V20180426_MODEL_UPLOADCERTREQUEST_H_
#define TENCENTCLOUD_WSS_V20180426_MODEL_UPLOADCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            namespace Model
            {
                /**
                * UploadCert请求参数结构体
                */
                class UploadCertRequest : public AbstractModel
                {
                public:
                    UploadCertRequest();
                    ~UploadCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书内容。
                     * @return Cert 证书内容。
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置证书内容。
                     * @param _cert 证书内容。
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取证书类型（目前支持：CA 为客户端证书，SVR 为服务器证书）。
                     * @return CertType 证书类型（目前支持：CA 为客户端证书，SVR 为服务器证书）。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型（目前支持：CA 为客户端证书，SVR 为服务器证书）。
                     * @param _certType 证书类型（目前支持：CA 为客户端证书，SVR 为服务器证书）。
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
                     * 获取项目ID，详见用户指南的 [项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                     * @return ProjectId 项目ID，详见用户指南的 [项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID，详见用户指南的 [项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                     * @param _projectId 项目ID，详见用户指南的 [项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取模块名称，应填 ssl。
                     * @return ModuleType 模块名称，应填 ssl。
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块名称，应填 ssl。
                     * @param _moduleType 模块名称，应填 ssl。
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取证书私钥，certType=SVR 时必填。
                     * @return Key 证书私钥，certType=SVR 时必填。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置证书私钥，certType=SVR 时必填。
                     * @param _key 证书私钥，certType=SVR 时必填。
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
                     * 获取证书备注。
                     * @return Alias 证书备注。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书备注。
                     * @param _alias 证书备注。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * 证书内容。
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 证书类型（目前支持：CA 为客户端证书，SVR 为服务器证书）。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 项目ID，详见用户指南的 [项目与标签](https://cloud.tencent.com/document/product/598/32738)。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模块名称，应填 ssl。
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 证书私钥，certType=SVR 时必填。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 证书备注。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_MODEL_UPLOADCERTREQUEST_H_
