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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntry.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络ACL
                */
                class NetworkAcl : public AbstractModel
                {
                public:
                    NetworkAcl();
                    ~NetworkAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><code>VPC</code>实例<code>ID</code>。</p>
                     * @return VpcId <p><code>VPC</code>实例<code>ID</code>。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p><code>VPC</code>实例<code>ID</code>。</p>
                     * @param _vpcId <p><code>VPC</code>实例<code>ID</code>。</p>
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
                     * 获取<p>网络ACL实例<code>ID</code>。</p>
                     * @return NetworkAclId <p>网络ACL实例<code>ID</code>。</p>
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置<p>网络ACL实例<code>ID</code>。</p>
                     * @param _networkAclId <p>网络ACL实例<code>ID</code>。</p>
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取<p>网络ACL名称，最大长度为60。</p>
                     * @return NetworkAclName <p>网络ACL名称，最大长度为60。</p>
                     * 
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置<p>网络ACL名称，最大长度为60。</p>
                     * @param _networkAclName <p>网络ACL名称，最大长度为60。</p>
                     * 
                     */
                    void SetNetworkAclName(const std::string& _networkAclName);

                    /**
                     * 判断参数 NetworkAclName 是否已赋值
                     * @return NetworkAclName 是否已赋值
                     * 
                     */
                    bool NetworkAclNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>网络ACL关联的子网数组。</p>
                     * @return SubnetSet <p>网络ACL关联的子网数组。</p>
                     * 
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置<p>网络ACL关联的子网数组。</p>
                     * @param _subnetSet <p>网络ACL关联的子网数组。</p>
                     * 
                     */
                    void SetSubnetSet(const std::vector<Subnet>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                    /**
                     * 获取<p>该参数仅对三元组ACL有效，网络ACl入站规则。</p>
                     * @return IngressEntries <p>该参数仅对三元组ACL有效，网络ACl入站规则。</p>
                     * 
                     */
                    std::vector<NetworkAclEntry> GetIngressEntries() const;

                    /**
                     * 设置<p>该参数仅对三元组ACL有效，网络ACl入站规则。</p>
                     * @param _ingressEntries <p>该参数仅对三元组ACL有效，网络ACl入站规则。</p>
                     * 
                     */
                    void SetIngressEntries(const std::vector<NetworkAclEntry>& _ingressEntries);

                    /**
                     * 判断参数 IngressEntries 是否已赋值
                     * @return IngressEntries 是否已赋值
                     * 
                     */
                    bool IngressEntriesHasBeenSet() const;

                    /**
                     * 获取<p>该参数仅对三元组ACL有效，网络ACL出站规则。</p>
                     * @return EgressEntries <p>该参数仅对三元组ACL有效，网络ACL出站规则。</p>
                     * 
                     */
                    std::vector<NetworkAclEntry> GetEgressEntries() const;

                    /**
                     * 设置<p>该参数仅对三元组ACL有效，网络ACL出站规则。</p>
                     * @param _egressEntries <p>该参数仅对三元组ACL有效，网络ACL出站规则。</p>
                     * 
                     */
                    void SetEgressEntries(const std::vector<NetworkAclEntry>& _egressEntries);

                    /**
                     * 判断参数 EgressEntries 是否已赋值
                     * @return EgressEntries 是否已赋值
                     * 
                     */
                    bool EgressEntriesHasBeenSet() const;

                    /**
                     * 获取<p>网络ACL类型。三元组：&#39;TRIPLE&#39;   五元组：&#39;QUINTUPLE&#39;</p>
                     * @return NetworkAclType <p>网络ACL类型。三元组：&#39;TRIPLE&#39;   五元组：&#39;QUINTUPLE&#39;</p>
                     * 
                     */
                    std::string GetNetworkAclType() const;

                    /**
                     * 设置<p>网络ACL类型。三元组：&#39;TRIPLE&#39;   五元组：&#39;QUINTUPLE&#39;</p>
                     * @param _networkAclType <p>网络ACL类型。三元组：&#39;TRIPLE&#39;   五元组：&#39;QUINTUPLE&#39;</p>
                     * 
                     */
                    void SetNetworkAclType(const std::string& _networkAclType);

                    /**
                     * 判断参数 NetworkAclType 是否已赋值
                     * @return NetworkAclType 是否已赋值
                     * 
                     */
                    bool NetworkAclTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签键值对</p>
                     * @return TagSet <p>标签键值对</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对</p>
                     * @param _tagSet <p>标签键值对</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p><code>VPC</code>实例<code>ID</code>。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>网络ACL实例<code>ID</code>。</p>
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * <p>网络ACL名称，最大长度为60。</p>
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>网络ACL关联的子网数组。</p>
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                    /**
                     * <p>该参数仅对三元组ACL有效，网络ACl入站规则。</p>
                     */
                    std::vector<NetworkAclEntry> m_ingressEntries;
                    bool m_ingressEntriesHasBeenSet;

                    /**
                     * <p>该参数仅对三元组ACL有效，网络ACL出站规则。</p>
                     */
                    std::vector<NetworkAclEntry> m_egressEntries;
                    bool m_egressEntriesHasBeenSet;

                    /**
                     * <p>网络ACL类型。三元组：&#39;TRIPLE&#39;   五元组：&#39;QUINTUPLE&#39;</p>
                     */
                    std::string m_networkAclType;
                    bool m_networkAclTypeHasBeenSet;

                    /**
                     * <p>标签键值对</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACL_H_
