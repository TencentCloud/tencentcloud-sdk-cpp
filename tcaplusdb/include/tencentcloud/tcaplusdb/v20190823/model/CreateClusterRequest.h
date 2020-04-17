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
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * @param IdlType 集群数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取集群名称，可使用中文或英文字符，最大长度32个字符
                     * @return ClusterName 集群名称，可使用中文或英文字符，最大长度32个字符
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，可使用中文或英文字符，最大长度32个字符
                     * @param ClusterName 集群名称，可使用中文或英文字符，最大长度32个字符
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @return VpcId 集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @param VpcId 集群所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @return SubnetId 集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @param SubnetId 集群所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @return Password 集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     * @param Password 集群访问密码，必须是a-zA-Z0-9的字符,且必须包含数字和大小写字母
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATECLUSTERREQUEST_H_
