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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/Tag.h>
#include <tencentcloud/goosefs/v20220519/model/GooseFSxBuildElement.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * CreateFileSystem请求参数结构体
                */
                class CreateFileSystemRequest : public AbstractModel
                {
                public:
                    CreateFileSystemRequest();
                    ~CreateFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统类型, 可填goosefs和goosefsx
                     * @return Type 文件系统类型, 可填goosefs和goosefsx
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件系统类型, 可填goosefs和goosefsx
                     * @param _type 文件系统类型, 可填goosefs和goosefsx
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文件系统名
                     * @return Name 文件系统名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件系统名
                     * @param _name 文件系统名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件系统备注描述
                     * @return Description 文件系统备注描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件系统备注描述
                     * @param _description 文件系统备注描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取vpc网络ID
                     * @return VpcId vpc网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc网络ID
                     * @param _vpcId vpc网络ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取子网所在的可用区
                     * @return Zone 子网所在的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在的可用区
                     * @param _zone 子网所在的可用区
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
                     * 获取文件系统关联的tag
                     * @return Tag 文件系统关联的tag
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置文件系统关联的tag
                     * @param _tag 文件系统关联的tag
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取GooseFSx构建时要传递的参数
                     * @return GooseFSxBuildElements GooseFSx构建时要传递的参数
                     * 
                     */
                    GooseFSxBuildElement GetGooseFSxBuildElements() const;

                    /**
                     * 设置GooseFSx构建时要传递的参数
                     * @param _gooseFSxBuildElements GooseFSx构建时要传递的参数
                     * 
                     */
                    void SetGooseFSxBuildElements(const GooseFSxBuildElement& _gooseFSxBuildElements);

                    /**
                     * 判断参数 GooseFSxBuildElements 是否已赋值
                     * @return GooseFSxBuildElements 是否已赋值
                     * 
                     */
                    bool GooseFSxBuildElementsHasBeenSet() const;

                    /**
                     * 获取客户端集群所属的安全组
                     * @return SecurityGroupId 客户端集群所属的安全组
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置客户端集群所属的安全组
                     * @param _securityGroupId 客户端集群所属的安全组
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取集群ssh通信端口，默认是22
                     * @return ClusterPort 集群ssh通信端口，默认是22
                     * 
                     */
                    uint64_t GetClusterPort() const;

                    /**
                     * 设置集群ssh通信端口，默认是22
                     * @param _clusterPort 集群ssh通信端口，默认是22
                     * 
                     */
                    void SetClusterPort(const uint64_t& _clusterPort);

                    /**
                     * 判断参数 ClusterPort 是否已赋值
                     * @return ClusterPort 是否已赋值
                     * 
                     */
                    bool ClusterPortHasBeenSet() const;

                private:

                    /**
                     * 文件系统类型, 可填goosefs和goosefsx
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件系统名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件系统备注描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * vpc网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网所在的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 文件系统关联的tag
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * GooseFSx构建时要传递的参数
                     */
                    GooseFSxBuildElement m_gooseFSxBuildElements;
                    bool m_gooseFSxBuildElementsHasBeenSet;

                    /**
                     * 客户端集群所属的安全组
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 集群ssh通信端口，默认是22
                     */
                    uint64_t m_clusterPort;
                    bool m_clusterPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESYSTEMREQUEST_H_
