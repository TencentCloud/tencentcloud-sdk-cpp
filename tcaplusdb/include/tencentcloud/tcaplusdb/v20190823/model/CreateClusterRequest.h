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
                     * 获取集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * @return IdlType 集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * 
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * @param _idlType 集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
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
                     * 获取集群名称，可使用中文或英文字符，最大长度32个字符
                     * @return ClusterName 集群名称，可使用中文或英文字符，最大长度32个字符
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，可使用中文或英文字符，最大长度32个字符
                     * @param _clusterName 集群名称，可使用中文或英文字符，最大长度32个字符
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
                     * 获取集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @return VpcId 集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @param _vpcId 集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
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
                     * 获取集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @return SubnetId 集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @param _subnetId 集群所绑定的子网实例ID，形如：subnet-pxir56ns
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
                     * 获取集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @return Password 集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @param _password 集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
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
                     * 获取集群标签列表
                     * @return ResourceTags 集群标签列表
                     * 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置集群标签列表
                     * @param _resourceTags 集群标签列表
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
                     * 获取集群是否开启IPv6功能
                     * @return Ipv6Enable 集群是否开启IPv6功能
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置集群是否开启IPv6功能
                     * @param _ipv6Enable 集群是否开启IPv6功能
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
                     * 获取独占集群占用的svr机器
                     * @return ServerList 独占集群占用的svr机器
                     * 
                     */
                    std::vector<MachineInfo> GetServerList() const;

                    /**
                     * 设置独占集群占用的svr机器
                     * @param _serverList 独占集群占用的svr机器
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
                     * 获取独占集群占用的proxy机器
                     * @return ProxyList 独占集群占用的proxy机器
                     * 
                     */
                    std::vector<MachineInfo> GetProxyList() const;

                    /**
                     * 设置独占集群占用的proxy机器
                     * @param _proxyList 独占集群占用的proxy机器
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
                     * 获取集群类型1共享2独占
                     * @return ClusterType 集群类型1共享2独占
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型1共享2独占
                     * @param _clusterType 集群类型1共享2独占
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
                     * 获取密码认证类型，0 静态认证， 1 签名认证
                     * @return AuthType 密码认证类型，0 静态认证， 1 签名认证
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置密码认证类型，0 静态认证， 1 签名认证
                     * @param _authType 密码认证类型，0 静态认证， 1 签名认证
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
                     * 集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * 集群名称，可使用中文或英文字符，最大长度32个字符
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 集群标签列表
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 集群是否开启IPv6功能
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                    /**
                     * 独占集群占用的svr机器
                     */
                    std::vector<MachineInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * 独占集群占用的proxy机器
                     */
                    std::vector<MachineInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * 集群类型1共享2独占
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 密码认证类型，0 静态认证， 1 签名认证
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
