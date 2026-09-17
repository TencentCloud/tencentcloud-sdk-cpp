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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区代码，如 ap-guangzhou-1。</p>
                     * @return Zone <p>可用区代码，如 ap-guangzhou-1。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区代码，如 ap-guangzhou-1。</p>
                     * @param _zone <p>可用区代码，如 ap-guangzhou-1。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>机型规格，如 BMS5.MEDIUM8。</p>
                     * @return InstanceType <p>机型规格，如 BMS5.MEDIUM8。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>机型规格，如 BMS5.MEDIUM8。</p>
                     * @param _instanceType <p>机型规格，如 BMS5.MEDIUM8。</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>内网网络实例ID，格式如 net-xxx。</p>
                     * @return PrivateNetworkId <p>内网网络实例ID，格式如 net-xxx。</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>内网网络实例ID，格式如 net-xxx。</p>
                     * @param _privateNetworkId <p>内网网络实例ID，格式如 net-xxx。</p>
                     * 
                     */
                    void SetPrivateNetworkId(const std::string& _privateNetworkId);

                    /**
                     * 判断参数 PrivateNetworkId 是否已赋值
                     * @return PrivateNetworkId 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>公网网络实例ID，格式如 net-xxx。</p>
                     * @return PublicNetworkId <p>公网网络实例ID，格式如 net-xxx。</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>公网网络实例ID，格式如 net-xxx。</p>
                     * @param _publicNetworkId <p>公网网络实例ID，格式如 net-xxx。</p>
                     * 
                     */
                    void SetPublicNetworkId(const std::string& _publicNetworkId);

                    /**
                     * 判断参数 PublicNetworkId 是否已赋值
                     * @return PublicNetworkId 是否已赋值
                     * 
                     */
                    bool PublicNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID，如 img-centos-7.9。</p>
                     * @return ImageId <p>镜像ID，如 img-centos-7.9。</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID，如 img-centos-7.9。</p>
                     * @param _imageId <p>镜像ID，如 img-centos-7.9。</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>创建数量，默认1，最大50。</p>
                     * @return InstanceCount <p>创建数量，默认1，最大50。</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>创建数量，默认1，最大50。</p>
                     * @param _instanceCount <p>创建数量，默认1，最大50。</p>
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>登录密码，与SSHKey二选一</p>
                     * @return Password <p>登录密码，与SSHKey二选一</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>登录密码，与SSHKey二选一</p>
                     * @param _password <p>登录密码，与SSHKey二选一</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>SSH密钥公钥字符串，与Password二选一</p>
                     * @return SSHKey <p>SSH密钥公钥字符串，与Password二选一</p>
                     * 
                     */
                    std::string GetSSHKey() const;

                    /**
                     * 设置<p>SSH密钥公钥字符串，与Password二选一</p>
                     * @param _sSHKey <p>SSH密钥公钥字符串，与Password二选一</p>
                     * 
                     */
                    void SetSSHKey(const std::string& _sSHKey);

                    /**
                     * 判断参数 SSHKey 是否已赋值
                     * @return SSHKey 是否已赋值
                     * 
                     */
                    bool SSHKeyHasBeenSet() const;

                    /**
                     * 获取<p>镜像版本号，仅公共镜像有版本概念。</p>
                     * @return VersionNumber <p>镜像版本号，仅公共镜像有版本概念。</p>
                     * @deprecated
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>镜像版本号，仅公共镜像有版本概念。</p>
                     * @param _versionNumber <p>镜像版本号，仅公共镜像有版本概念。</p>
                     * @deprecated
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * @deprecated
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>是否启用公网IPv6，默认false。启用后系统会在分配IPv4后额外分配一个IPv6地址。</p>
                     * @return EnableIpv6 <p>是否启用公网IPv6，默认false。启用后系统会在分配IPv4后额外分配一个IPv6地址。</p>
                     * @deprecated
                     */
                    bool GetEnableIpv6() const;

                    /**
                     * 设置<p>是否启用公网IPv6，默认false。启用后系统会在分配IPv4后额外分配一个IPv6地址。</p>
                     * @param _enableIpv6 <p>是否启用公网IPv6，默认false。启用后系统会在分配IPv4后额外分配一个IPv6地址。</p>
                     * @deprecated
                     */
                    void SetEnableIpv6(const bool& _enableIpv6);

                    /**
                     * 判断参数 EnableIpv6 是否已赋值
                     * @return EnableIpv6 是否已赋值
                     * @deprecated
                     */
                    bool EnableIpv6HasBeenSet() const;

                private:

                    /**
                     * <p>可用区代码，如 ap-guangzhou-1。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>机型规格，如 BMS5.MEDIUM8。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>内网网络实例ID，格式如 net-xxx。</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>公网网络实例ID，格式如 net-xxx。</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>镜像ID，如 img-centos-7.9。</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>创建数量，默认1，最大50。</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>登录密码，与SSHKey二选一</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>SSH密钥公钥字符串，与Password二选一</p>
                     */
                    std::string m_sSHKey;
                    bool m_sSHKeyHasBeenSet;

                    /**
                     * <p>镜像版本号，仅公共镜像有版本概念。</p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>是否启用公网IPv6，默认false。启用后系统会在分配IPv4后额外分配一个IPv6地址。</p>
                     */
                    bool m_enableIpv6;
                    bool m_enableIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_
