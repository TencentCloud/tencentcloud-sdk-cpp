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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_

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
                * AttachNetworkInterface请求参数结构体
                */
                class AttachNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    AttachNetworkInterfaceRequest();
                    ~AttachNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _networkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @return InstanceId CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @param _instanceId CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取网卡的挂载类型：0 标准型，1扩展型，默认值0。
                     * @return AttachType 网卡的挂载类型：0 标准型，1扩展型，默认值0。
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置网卡的挂载类型：0 标准型，1扩展型，默认值0。
                     * @param _attachType 网卡的挂载类型：0 标准型，1扩展型，默认值0。
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。	
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。	
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。	
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。	
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 网卡的挂载类型：0 标准型，1扩展型，默认值0。
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。	
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_
