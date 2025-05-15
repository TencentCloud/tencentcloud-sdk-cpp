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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_

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
                * EnableVpcEndPointConnect请求参数结构体
                */
                class EnableVpcEndPointConnectRequest : public AbstractModel
                {
                public:
                    EnableVpcEndPointConnectRequest();
                    ~EnableVpcEndPointConnectRequest() = default;
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
                     * 获取终端节点ID。可通过[DescribeVpcEndPoint](https://cloud.tencent.com/document/product/215/54679) 获取。
                     * @return EndPointId 终端节点ID。可通过[DescribeVpcEndPoint](https://cloud.tencent.com/document/product/215/54679) 获取。
                     * 
                     */
                    std::vector<std::string> GetEndPointId() const;

                    /**
                     * 设置终端节点ID。可通过[DescribeVpcEndPoint](https://cloud.tencent.com/document/product/215/54679) 获取。
                     * @param _endPointId 终端节点ID。可通过[DescribeVpcEndPoint](https://cloud.tencent.com/document/product/215/54679) 获取。
                     * 
                     */
                    void SetEndPointId(const std::vector<std::string>& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取是否接受终端节点连接请求。
<li> true：自动接受。</li> <li> false：不自动接受。</li>
                     * @return AcceptFlag 是否接受终端节点连接请求。
<li> true：自动接受。</li> <li> false：不自动接受。</li>
                     * 
                     */
                    bool GetAcceptFlag() const;

                    /**
                     * 设置是否接受终端节点连接请求。
<li> true：自动接受。</li> <li> false：不自动接受。</li>
                     * @param _acceptFlag 是否接受终端节点连接请求。
<li> true：自动接受。</li> <li> false：不自动接受。</li>
                     * 
                     */
                    void SetAcceptFlag(const bool& _acceptFlag);

                    /**
                     * 判断参数 AcceptFlag 是否已赋值
                     * @return AcceptFlag 是否已赋值
                     * 
                     */
                    bool AcceptFlagHasBeenSet() const;

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
                     * 终端节点ID。可通过[DescribeVpcEndPoint](https://cloud.tencent.com/document/product/215/54679) 获取。
                     */
                    std::vector<std::string> m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * 是否接受终端节点连接请求。
<li> true：自动接受。</li> <li> false：不自动接受。</li>
                     */
                    bool m_acceptFlag;
                    bool m_acceptFlagHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_
