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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPDATESSLCERTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPDATESSLCERTREQUEST_H_

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
                * UpdateSSLCert请求参数结构体
                */
                class UpdateSSLCertRequest : public AbstractModel
                {
                public:
                    UpdateSSLCertRequest();
                    ~UpdateSSLCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 用户自定义KMS</li></ul>
                     * @return CertSource <p>密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 用户自定义KMS</li></ul>
                     * 
                     */
                    int64_t GetCertSource() const;

                    /**
                     * 设置<p>密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 用户自定义KMS</li></ul>
                     * @param _certSource <p>密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 用户自定义KMS</li></ul>
                     * 
                     */
                    void SetCertSource(const int64_t& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取<p>切换时间。（该参数废弃，不再生效）</p><p>枚举值：</p><ul><li>1： 维护时间窗操作：指开启SSL加密在设置的维护时间窗内执行。请通过接口DescribeMaintenanceWindow查询设置的维护时间窗时间段</li><li>2： 立即操作：操作将立即执行，无需等待维护时间窗。系统默认设置为立即操作。</li></ul>
                     * @return SwitchOption <p>切换时间。（该参数废弃，不再生效）</p><p>枚举值：</p><ul><li>1： 维护时间窗操作：指开启SSL加密在设置的维护时间窗内执行。请通过接口DescribeMaintenanceWindow查询设置的维护时间窗时间段</li><li>2： 立即操作：操作将立即执行，无需等待维护时间窗。系统默认设置为立即操作。</li></ul>
                     * @deprecated
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置<p>切换时间。（该参数废弃，不再生效）</p><p>枚举值：</p><ul><li>1： 维护时间窗操作：指开启SSL加密在设置的维护时间窗内执行。请通过接口DescribeMaintenanceWindow查询设置的维护时间窗时间段</li><li>2： 立即操作：操作将立即执行，无需等待维护时间窗。系统默认设置为立即操作。</li></ul>
                     * @param _switchOption <p>切换时间。（该参数废弃，不再生效）</p><p>枚举值：</p><ul><li>1： 维护时间窗操作：指开启SSL加密在设置的维护时间窗内执行。请通过接口DescribeMaintenanceWindow查询设置的维护时间窗时间段</li><li>2： 立即操作：操作将立即执行，无需等待维护时间窗。系统默认设置为立即操作。</li></ul>
                     * @deprecated
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * @deprecated
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取<p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul>
                     * @return AddressType <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul>
                     * 
                     */
                    int64_t GetAddressType() const;

                    /**
                     * 设置<p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul>
                     * @param _addressType <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul>
                     * 
                     */
                    void SetAddressType(const int64_t& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>KMS的密钥ID。（该参数废弃，不再生效）</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @return KmsKeyId <p>KMS的密钥ID。（该参数废弃，不再生效）</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @deprecated
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置<p>KMS的密钥ID。（该参数废弃，不再生效）</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @param _kmsKeyId <p>KMS的密钥ID。（该参数废弃，不再生效）</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @deprecated
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * @deprecated
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>KMS地域信息。（该参数废弃，不再生效）</p><p>参数格式：ap-xxxx</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/573/34406#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">KMS支持的地域列表</a></p>
                     * @return KmsRegion <p>KMS地域信息。（该参数废弃，不再生效）</p><p>参数格式：ap-xxxx</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/573/34406#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">KMS支持的地域列表</a></p>
                     * @deprecated
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置<p>KMS地域信息。（该参数废弃，不再生效）</p><p>参数格式：ap-xxxx</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/573/34406#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">KMS支持的地域列表</a></p>
                     * @param _kmsRegion <p>KMS地域信息。（该参数废弃，不再生效）</p><p>参数格式：ap-xxxx</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/573/34406#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">KMS支持的地域列表</a></p>
                     * @deprecated
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * @deprecated
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取<p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     * @return CertId <p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     * @param _certId <p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
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
                     * 获取<p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * @return SSLMinVersion <p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * 
                     */
                    std::string GetSSLMinVersion() const;

                    /**
                     * 设置<p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * @param _sSLMinVersion <p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     * 
                     */
                    void SetSSLMinVersion(const std::string& _sSLMinVersion);

                    /**
                     * 判断参数 SSLMinVersion 是否已赋值
                     * @return SSLMinVersion 是否已赋值
                     * 
                     */
                    bool SSLMinVersionHasBeenSet() const;

                    /**
                     * 获取<p>目标加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * @return EncryptionMode <p>目标加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * 
                     */
                    std::string GetEncryptionMode() const;

                    /**
                     * 设置<p>目标加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * @param _encryptionMode <p>目标加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     * 
                     */
                    void SetEncryptionMode(const std::string& _encryptionMode);

                    /**
                     * 判断参数 EncryptionMode 是否已赋值
                     * @return EncryptionMode 是否已赋值
                     * 
                     */
                    bool EncryptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云提供</li><li>1： 用户自定义KMS</li></ul>
                     */
                    int64_t m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * <p>切换时间。（该参数废弃，不再生效）</p><p>枚举值：</p><ul><li>1： 维护时间窗操作：指开启SSL加密在设置的维护时间窗内执行。请通过接口DescribeMaintenanceWindow查询设置的维护时间窗时间段</li><li>2： 立即操作：操作将立即执行，无需等待维护时间窗。系统默认设置为立即操作。</li></ul>
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul>
                     */
                    int64_t m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>KMS的密钥ID。（该参数废弃，不再生效）</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>KMS地域信息。（该参数废弃，不再生效）</p><p>参数格式：ap-xxxx</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/573/34406#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">KMS支持的地域列表</a></p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * <p>SSL 证书服务的证书 ID，CertSource=1 时必填</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>最低 TLS 版本</p><p>枚举值：</p><ul><li>TLSv1.0： TLSv1.0</li><li>TLSv1.1： TLSv1.1</li><li>TLSv1.2： TLSv1.2</li></ul>
                     */
                    std::string m_sSLMinVersion;
                    bool m_sSLMinVersionHasBeenSet;

                    /**
                     * <p>目标加密模式</p><p>枚举值：</p><ul><li>required： 强制加密</li><li>flexible： 兼容模式</li></ul>
                     */
                    std::string m_encryptionMode;
                    bool m_encryptionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPDATESSLCERTREQUEST_H_
