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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_

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
                * ModifyVpcEndPointServiceAttribute请求参数结构体
                */
                class ModifyVpcEndPointServiceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcEndPointServiceAttributeRequest();
                    ~ModifyVpcEndPointServiceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * @return EndPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * @param _endPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VPC唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * @return VpcId VPC唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     * @param _vpcId VPC唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
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
                     * 获取终端节点服务名称。长度不超过60个字符。
                     * @return EndPointServiceName 终端节点服务名称。长度不超过60个字符。
                     * 
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置终端节点服务名称。长度不超过60个字符。
                     * @param _endPointServiceName 终端节点服务名称。长度不超过60个字符。
                     * 
                     */
                    void SetEndPointServiceName(const std::string& _endPointServiceName);

                    /**
                     * 判断参数 EndPointServiceName 是否已赋值
                     * @return EndPointServiceName 是否已赋值
                     * 
                     */
                    bool EndPointServiceNameHasBeenSet() const;

                    /**
                     * 获取是否自动接受终端节点的连接请求。<ul><li>true：自动接受</li><li>false：不自动接受</li></ul>
                     * @return AutoAcceptFlag 是否自动接受终端节点的连接请求。<ul><li>true：自动接受</li><li>false：不自动接受</li></ul>
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置是否自动接受终端节点的连接请求。<ul><li>true：自动接受</li><li>false：不自动接受</li></ul>
                     * @param _autoAcceptFlag 是否自动接受终端节点的连接请求。<ul><li>true：自动接受</li><li>false：不自动接受</li></ul>
                     * 
                     */
                    void SetAutoAcceptFlag(const bool& _autoAcceptFlag);

                    /**
                     * 判断参数 AutoAcceptFlag 是否已赋值
                     * @return AutoAcceptFlag 是否已赋值
                     * 
                     */
                    bool AutoAcceptFlagHasBeenSet() const;

                    /**
                     * 获取后端服务的ID，比如lb-p1hiksdg。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取

                     * @return ServiceInstanceId 后端服务的ID，比如lb-p1hiksdg。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取

                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务的ID，比如lb-p1hiksdg。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取

                     * @param _serviceInstanceId 后端服务的ID，比如lb-p1hiksdg。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取

                     * 
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     * 
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                    /**
                     * 获取协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * @return IpAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * 
                     */
                    std::string GetIpAddressType() const;

                    /**
                     * 设置协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * @param _ipAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * 
                     */
                    void SetIpAddressType(const std::string& _ipAddressType);

                    /**
                     * 判断参数 IpAddressType 是否已赋值
                     * @return IpAddressType 是否已赋值
                     * 
                     */
                    bool IpAddressTypeHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VPC唯一ID。可通过[DescribeVpcs](https://cloud.tencent.com/document/product/1108/43663)接口获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 终端节点服务名称。长度不超过60个字符。
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * 是否自动接受终端节点的连接请求。<ul><li>true：自动接受</li><li>false：不自动接受</li></ul>
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 后端服务的ID，比如lb-p1hiksdg。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取

                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     */
                    std::string m_ipAddressType;
                    bool m_ipAddressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
