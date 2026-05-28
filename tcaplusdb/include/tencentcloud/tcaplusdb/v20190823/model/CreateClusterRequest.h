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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MachineInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群数据描述语言类型，统一填<code>MIX</code></p><p>枚举值：</p><ul><li>MIX： 同时支持<code>PROTO</code>，<code>TDR</code>表</li></ul>
                     * @return IdlType <p>集群数据描述语言类型，统一填<code>MIX</code></p><p>枚举值：</p><ul><li>MIX： 同时支持<code>PROTO</code>，<code>TDR</code>表</li></ul>
                     * 
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置<p>集群数据描述语言类型，统一填<code>MIX</code></p><p>枚举值：</p><ul><li>MIX： 同时支持<code>PROTO</code>，<code>TDR</code>表</li></ul>
                     * @param _idlType <p>集群数据描述语言类型，统一填<code>MIX</code></p><p>枚举值：</p><ul><li>MIX： 同时支持<code>PROTO</code>，<code>TDR</code>表</li></ul>
                     * 
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     * 
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群名称，可使用中文或英文字符，最大长度32个字符</p>
                     * @return ClusterName <p>集群名称，可使用中文或英文字符，最大长度32个字符</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称，可使用中文或英文字符，最大长度32个字符</p>
                     * @param _clusterName <p>集群名称，可使用中文或英文字符，最大长度32个字符</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z</p>
                     * @return VpcId <p>集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z</p>
                     * @param _vpcId <p>集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>集群所绑定的子网实例ID，形如：subnet-pxir56ns</p>
                     * @return SubnetId <p>集群所绑定的子网实例ID，形如：subnet-pxir56ns</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>集群所绑定的子网实例ID，形如：subnet-pxir56ns</p>
                     * @param _subnetId <p>集群所绑定的子网实例ID，形如：subnet-pxir56ns</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母</p>
                     * @return Password <p>集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母</p>
                     * @param _password <p>集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母</p>
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
                     * 获取<p>集群标签列表</p>
                     * @return ResourceTags <p>集群标签列表</p>
                     * 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置<p>集群标签列表</p>
                     * @param _resourceTags <p>集群标签列表</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>集群是否开启IPv6功能</p>
                     * @return Ipv6Enable <p>集群是否开启IPv6功能</p>
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置<p>集群是否开启IPv6功能</p>
                     * @param _ipv6Enable <p>集群是否开启IPv6功能</p>
                     * 
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                    /**
                     * 获取<p>独占集群占用的svr机器</p>
                     * @return ServerList <p>独占集群占用的svr机器</p>
                     * 
                     */
                    std::vector<MachineInfo> GetServerList() const;

                    /**
                     * 设置<p>独占集群占用的svr机器</p>
                     * @param _serverList <p>独占集群占用的svr机器</p>
                     * 
                     */
                    void SetServerList(const std::vector<MachineInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取<p>独占集群占用的proxy机器</p>
                     * @return ProxyList <p>独占集群占用的proxy机器</p>
                     * 
                     */
                    std::vector<MachineInfo> GetProxyList() const;

                    /**
                     * 设置<p>独占集群占用的proxy机器</p>
                     * @param _proxyList <p>独占集群占用的proxy机器</p>
                     * 
                     */
                    void SetProxyList(const std::vector<MachineInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取<p>集群类型1共享2独占</p>
                     * @return ClusterType <p>集群类型1共享2独占</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>集群类型1共享2独占</p>
                     * @param _clusterType <p>集群类型1共享2独占</p>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>密码认证类型，0 静态认证， 1 签名认证</p>
                     * @return AuthType <p>密码认证类型，0 静态认证， 1 签名认证</p>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>密码认证类型，0 静态认证， 1 签名认证</p>
                     * @param _authType <p>密码认证类型，0 静态认证， 1 签名认证</p>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                private:

                    /**
                     * <p>集群数据描述语言类型，统一填<code>MIX</code></p><p>枚举值：</p><ul><li>MIX： 同时支持<code>PROTO</code>，<code>TDR</code>表</li></ul>
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * <p>集群名称，可使用中文或英文字符，最大长度32个字符</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>集群所绑定的子网实例ID，形如：subnet-pxir56ns</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>集群标签列表</p>
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>集群是否开启IPv6功能</p>
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                    /**
                     * <p>独占集群占用的svr机器</p>
                     */
                    std::vector<MachineInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * <p>独占集群占用的proxy机器</p>
                     */
                    std::vector<MachineInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * <p>集群类型1共享2独占</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>密码认证类型，0 静态认证， 1 签名认证</p>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
