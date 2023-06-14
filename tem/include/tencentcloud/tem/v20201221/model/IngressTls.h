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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSTLS_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSTLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * ingress tls 配置
                */
                class IngressTls : public AbstractModel
                {
                public:
                    IngressTls();
                    ~IngressTls() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取host 数组, 空数组表示全部域名的默认证书
                     * @return Hosts host 数组, 空数组表示全部域名的默认证书
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置host 数组, 空数组表示全部域名的默认证书
                     * @param _hosts host 数组, 空数组表示全部域名的默认证书
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取secret name，如使用证书，则填空字符串
                     * @return SecretName secret name，如使用证书，则填空字符串
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret name，如使用证书，则填空字符串
                     * @param _secretName secret name，如使用证书，则填空字符串
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取SSL Certificate Id
                     * @return CertificateId SSL Certificate Id
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置SSL Certificate Id
                     * @param _certificateId SSL Certificate Id
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                private:

                    /**
                     * host 数组, 空数组表示全部域名的默认证书
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * secret name，如使用证书，则填空字符串
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * SSL Certificate Id
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSTLS_H_
