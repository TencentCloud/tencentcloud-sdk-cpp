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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENETWORKINTERFACESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENETWORKINTERFACESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DisassociateNetworkInterfaceSecurityGroups请求参数结构体
                */
                class DisassociateNetworkInterfaceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateNetworkInterfaceSecurityGroupsRequest();
                    ~DisassociateNetworkInterfaceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID。形如：eni-pxir56ns。每次请求的实例的上限为100。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return NetworkInterfaceIds 弹性网卡实例ID。形如：eni-pxir56ns。每次请求的实例的上限为100。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::vector<std::string> GetNetworkInterfaceIds() const;

                    /**
                     * 设置弹性网卡实例ID。形如：eni-pxir56ns。每次请求的实例的上限为100。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _networkInterfaceIds 弹性网卡实例ID。形如：eni-pxir56ns。每次请求的实例的上限为100。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    void SetNetworkInterfaceIds(const std::vector<std::string>& _networkInterfaceIds);

                    /**
                     * 判断参数 NetworkInterfaceIds 是否已赋值
                     * @return NetworkInterfaceIds 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdsHasBeenSet() const;

                    /**
                     * 获取安全组实例ID，例如：sg-33ocnj9n，可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。每次请求的实例的上限为100。
                     * @return SecurityGroupIds 安全组实例ID，例如：sg-33ocnj9n，可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。每次请求的实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组实例ID，例如：sg-33ocnj9n，可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。每次请求的实例的上限为100。
                     * @param _securityGroupIds 安全组实例ID，例如：sg-33ocnj9n，可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。每次请求的实例的上限为100。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID。形如：eni-pxir56ns。每次请求的实例的上限为100。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::vector<std::string> m_networkInterfaceIds;
                    bool m_networkInterfaceIdsHasBeenSet;

                    /**
                     * 安全组实例ID，例如：sg-33ocnj9n，可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。每次请求的实例的上限为100。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATENETWORKINTERFACESECURITYGROUPSREQUEST_H_
