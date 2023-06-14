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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SSLCLIENTCONFIG_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SSLCLIENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DownloadVpnGatewaySslClientCert 使用
                */
                class SslClientConfig : public AbstractModel
                {
                public:
                    SslClientConfig();
                    ~SslClientConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端配置
                     * @return SslVpnClientConfiguration 客户端配置
                     * 
                     */
                    std::string GetSslVpnClientConfiguration() const;

                    /**
                     * 设置客户端配置
                     * @param _sslVpnClientConfiguration 客户端配置
                     * 
                     */
                    void SetSslVpnClientConfiguration(const std::string& _sslVpnClientConfiguration);

                    /**
                     * 判断参数 SslVpnClientConfiguration 是否已赋值
                     * @return SslVpnClientConfiguration 是否已赋值
                     * 
                     */
                    bool SslVpnClientConfigurationHasBeenSet() const;

                    /**
                     * 获取更证书
                     * @return SslVpnRootCert 更证书
                     * 
                     */
                    std::string GetSslVpnRootCert() const;

                    /**
                     * 设置更证书
                     * @param _sslVpnRootCert 更证书
                     * 
                     */
                    void SetSslVpnRootCert(const std::string& _sslVpnRootCert);

                    /**
                     * 判断参数 SslVpnRootCert 是否已赋值
                     * @return SslVpnRootCert 是否已赋值
                     * 
                     */
                    bool SslVpnRootCertHasBeenSet() const;

                    /**
                     * 获取客户端密钥
                     * @return SslVpnKey 客户端密钥
                     * 
                     */
                    std::string GetSslVpnKey() const;

                    /**
                     * 设置客户端密钥
                     * @param _sslVpnKey 客户端密钥
                     * 
                     */
                    void SetSslVpnKey(const std::string& _sslVpnKey);

                    /**
                     * 判断参数 SslVpnKey 是否已赋值
                     * @return SslVpnKey 是否已赋值
                     * 
                     */
                    bool SslVpnKeyHasBeenSet() const;

                    /**
                     * 获取客户端证书
                     * @return SslVpnCert 客户端证书
                     * 
                     */
                    std::string GetSslVpnCert() const;

                    /**
                     * 设置客户端证书
                     * @param _sslVpnCert 客户端证书
                     * 
                     */
                    void SetSslVpnCert(const std::string& _sslVpnCert);

                    /**
                     * 判断参数 SslVpnCert 是否已赋值
                     * @return SslVpnCert 是否已赋值
                     * 
                     */
                    bool SslVpnCertHasBeenSet() const;

                    /**
                     * 获取SSL-VPN-CLIENT 实例ID。
                     * @return SslVpnClientId SSL-VPN-CLIENT 实例ID。
                     * 
                     */
                    std::string GetSslVpnClientId() const;

                    /**
                     * 设置SSL-VPN-CLIENT 实例ID。
                     * @param _sslVpnClientId SSL-VPN-CLIENT 实例ID。
                     * 
                     */
                    void SetSslVpnClientId(const std::string& _sslVpnClientId);

                    /**
                     * 判断参数 SslVpnClientId 是否已赋值
                     * @return SslVpnClientId 是否已赋值
                     * 
                     */
                    bool SslVpnClientIdHasBeenSet() const;

                private:

                    /**
                     * 客户端配置
                     */
                    std::string m_sslVpnClientConfiguration;
                    bool m_sslVpnClientConfigurationHasBeenSet;

                    /**
                     * 更证书
                     */
                    std::string m_sslVpnRootCert;
                    bool m_sslVpnRootCertHasBeenSet;

                    /**
                     * 客户端密钥
                     */
                    std::string m_sslVpnKey;
                    bool m_sslVpnKeyHasBeenSet;

                    /**
                     * 客户端证书
                     */
                    std::string m_sslVpnCert;
                    bool m_sslVpnCertHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT 实例ID。
                     */
                    std::string m_sslVpnClientId;
                    bool m_sslVpnClientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SSLCLIENTCONFIG_H_
