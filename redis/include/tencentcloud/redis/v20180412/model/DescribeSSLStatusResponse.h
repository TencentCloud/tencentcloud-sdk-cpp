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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus返回参数结构体
                */
                class DescribeSSLStatusResponse : public AbstractModel
                {
                public:
                    DescribeSSLStatusResponse();
                    ~DescribeSSLStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL 证书下载地址。</p>
                     * @return CertDownloadUrl <p>SSL 证书下载地址。</p>
                     * 
                     */
                    std::string GetCertDownloadUrl() const;

                    /**
                     * 判断参数 CertDownloadUrl 是否已赋值
                     * @return CertDownloadUrl 是否已赋值
                     * 
                     */
                    bool CertDownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>证书下载链接到期时间。</p>
                     * @return UrlExpiredTime <p>证书下载链接到期时间。</p>
                     * 
                     */
                    std::string GetUrlExpiredTime() const;

                    /**
                     * 判断参数 UrlExpiredTime 是否已赋值
                     * @return UrlExpiredTime 是否已赋值
                     * 
                     */
                    bool UrlExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>标识实例开启 SSL 功能。</p><ul><li>true：开启 。</li><li>false：关闭。</li></ul>
                     * @return SSLConfig <p>标识实例开启 SSL 功能。</p><ul><li>true：开启 。</li><li>false：关闭。</li></ul>
                     * 
                     */
                    bool GetSSLConfig() const;

                    /**
                     * 判断参数 SSLConfig 是否已赋值
                     * @return SSLConfig 是否已赋值
                     * 
                     */
                    bool SSLConfigHasBeenSet() const;

                    /**
                     * 获取<p>标识实例是否支持 SSL特性。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * @return FeatureSupport <p>标识实例是否支持 SSL特性。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * 
                     */
                    bool GetFeatureSupport() const;

                    /**
                     * 判断参数 FeatureSupport 是否已赋值
                     * @return FeatureSupport 是否已赋值
                     * 
                     */
                    bool FeatureSupportHasBeenSet() const;

                    /**
                     * 获取<p>说明配置 SSL 的状态。</p><ul><li>1: 配置中。</li><li>2：配置成功。</li></ul>
                     * @return Status <p>说明配置 SSL 的状态。</p><ul><li>1: 配置中。</li><li>2：配置成功。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>地址类型</p><p>枚举值：</p><ul><li>0： 不限</li><li>1： 内网IPv4</li><li>2： 内网IPv6</li><li>3： 外网</li><li>-1： 未指定</li></ul>
                     * @return AddressType <p>地址类型</p><p>枚举值：</p><ul><li>0： 不限</li><li>1： 内网IPv4</li><li>2： 内网IPv6</li><li>3： 外网</li><li>-1： 未指定</li></ul>
                     * 
                     */
                    int64_t GetAddressType() const;

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前加密连接地址</p>
                     * @return EncryptAddress <p>当前加密连接地址</p>
                     * 
                     */
                    std::string GetEncryptAddress() const;

                    /**
                     * 判断参数 EncryptAddress 是否已赋值
                     * @return EncryptAddress 是否已赋值
                     * 
                     */
                    bool EncryptAddressHasBeenSet() const;

                    /**
                     * 获取<p>密钥来源</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 自定义证书</li></ul>
                     * @return CertSource <p>密钥来源</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 自定义证书</li></ul>
                     * 
                     */
                    uint64_t GetCertSource() const;

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取<p>证书有效性</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 即将过期（30天内）</li><li>2： 已过期</li><li>404： 证书已被删除</li><li>500： 查询异常</li></ul>
                     * @return CertStatus <p>证书有效性</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 即将过期（30天内）</li><li>2： 已过期</li><li>404： 证书已被删除</li><li>500： 查询异常</li></ul>
                     * 
                     */
                    uint64_t GetCertStatus() const;

                    /**
                     * 判断参数 CertStatus 是否已赋值
                     * @return CertStatus 是否已赋值
                     * 
                     */
                    bool CertStatusHasBeenSet() const;

                    /**
                     * 获取<p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     * @return CertId <p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>证书别名</p>
                     * @return CertAlias <p>证书别名</p>
                     * 
                     */
                    std::string GetCertAlias() const;

                    /**
                     * 判断参数 CertAlias 是否已赋值
                     * @return CertAlias 是否已赋值
                     * 
                     */
                    bool CertAliasHasBeenSet() const;

                    /**
                     * 获取<p>证书到期时间</p><p>参数格式：时间格式YYYY-MM-DD hh:mm:ss</p>
                     * @return CertExpireTime <p>证书到期时间</p><p>参数格式：时间格式YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书关联域名（SAN）</p><p>包括了IP</p>
                     * @return Domain <p>证书关联域名（SAN）</p><p>包括了IP</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * @return SSLMinVersion <p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * 
                     */
                    std::string GetSSLMinVersion() const;

                    /**
                     * 判断参数 SSLMinVersion 是否已赋值
                     * @return SSLMinVersion 是否已赋值
                     * 
                     */
                    bool SSLMinVersionHasBeenSet() const;

                    /**
                     * 获取<p>当前加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * @return EncryptionMode <p>当前加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * 
                     */
                    std::string GetEncryptionMode() const;

                    /**
                     * 判断参数 EncryptionMode 是否已赋值
                     * @return EncryptionMode 是否已赋值
                     * 
                     */
                    bool EncryptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>SSL 证书下载地址。</p>
                     */
                    std::string m_certDownloadUrl;
                    bool m_certDownloadUrlHasBeenSet;

                    /**
                     * <p>证书下载链接到期时间。</p>
                     */
                    std::string m_urlExpiredTime;
                    bool m_urlExpiredTimeHasBeenSet;

                    /**
                     * <p>标识实例开启 SSL 功能。</p><ul><li>true：开启 。</li><li>false：关闭。</li></ul>
                     */
                    bool m_sSLConfig;
                    bool m_sSLConfigHasBeenSet;

                    /**
                     * <p>标识实例是否支持 SSL特性。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     */
                    bool m_featureSupport;
                    bool m_featureSupportHasBeenSet;

                    /**
                     * <p>说明配置 SSL 的状态。</p><ul><li>1: 配置中。</li><li>2：配置成功。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>地址类型</p><p>枚举值：</p><ul><li>0： 不限</li><li>1： 内网IPv4</li><li>2： 内网IPv6</li><li>3： 外网</li><li>-1： 未指定</li></ul>
                     */
                    int64_t m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>当前加密连接地址</p>
                     */
                    std::string m_encryptAddress;
                    bool m_encryptAddressHasBeenSet;

                    /**
                     * <p>密钥来源</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 自定义证书</li></ul>
                     */
                    uint64_t m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * <p>证书有效性</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 即将过期（30天内）</li><li>2： 已过期</li><li>404： 证书已被删除</li><li>500： 查询异常</li></ul>
                     */
                    uint64_t m_certStatus;
                    bool m_certStatusHasBeenSet;

                    /**
                     * <p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>证书别名</p>
                     */
                    std::string m_certAlias;
                    bool m_certAliasHasBeenSet;

                    /**
                     * <p>证书到期时间</p><p>参数格式：时间格式YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * <p>证书关联域名（SAN）</p><p>包括了IP</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     */
                    std::string m_sSLMinVersion;
                    bool m_sSLMinVersionHasBeenSet;

                    /**
                     * <p>当前加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     */
                    std::string m_encryptionMode;
                    bool m_encryptionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
