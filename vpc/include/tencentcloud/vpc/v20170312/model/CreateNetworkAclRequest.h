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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateNetworkAcl请求参数结构体
                */
                class CreateNetworkAclRequest : public AbstractModel
                {
                public:
                    CreateNetworkAclRequest();
                    ~CreateNetworkAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取。
                     * @return VpcId VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取。
                     * @param _vpcId VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取。
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
                     * 获取网络ACL名称，最大长度不能超过60个字节。
                     * @return NetworkAclName 网络ACL名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetNetworkAclName() const;

                    /**
                     * 设置网络ACL名称，最大长度不能超过60个字节。
                     * @param _networkAclName 网络ACL名称，最大长度不能超过60个字节。
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
                     * 获取网络ACL类型，三元组(TRIPLE)或五元组(QUINTUPLE)。默认值三元组(TRIPLE)。
                     * @return NetworkAclType 网络ACL类型，三元组(TRIPLE)或五元组(QUINTUPLE)。默认值三元组(TRIPLE)。
                     * 
                     */
                    std::string GetNetworkAclType() const;

                    /**
                     * 设置网络ACL类型，三元组(TRIPLE)或五元组(QUINTUPLE)。默认值三元组(TRIPLE)。
                     * @param _networkAclType 网络ACL类型，三元组(TRIPLE)或五元组(QUINTUPLE)。默认值三元组(TRIPLE)。
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
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络ACL名称，最大长度不能超过60个字节。
                     */
                    std::string m_networkAclName;
                    bool m_networkAclNameHasBeenSet;

                    /**
                     * 网络ACL类型，三元组(TRIPLE)或五元组(QUINTUPLE)。默认值三元组(TRIPLE)。
                     */
                    std::string m_networkAclType;
                    bool m_networkAclTypeHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKACLREQUEST_H_
