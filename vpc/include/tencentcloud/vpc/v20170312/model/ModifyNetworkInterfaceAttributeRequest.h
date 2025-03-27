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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_

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
                * ModifyNetworkInterfaceAttribute请求参数结构体
                */
                class ModifyNetworkInterfaceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyNetworkInterfaceAttributeRequest();
                    ~ModifyNetworkInterfaceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID，例如：eni-pxir56ns。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-pxir56ns。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-pxir56ns。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _networkInterfaceId 弹性网卡实例ID，例如：eni-pxir56ns。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

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
                     * 获取弹性网卡名称，最大长度不能超过60个字节。
                     * @return NetworkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置弹性网卡名称，最大长度不能超过60个字节。
                     * @param _networkInterfaceName 弹性网卡名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @return NetworkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置弹性网卡描述，可任意命名，但不得超过60个字符。
                     * @param _networkInterfaceDescription 弹性网卡描述，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取指定绑定的安全组，例如:['sg-1dd51d']。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。

                     * @return SecurityGroupIds 指定绑定的安全组，例如:['sg-1dd51d']。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。

                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置指定绑定的安全组，例如:['sg-1dd51d']。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。

                     * @param _securityGroupIds 指定绑定的安全组，例如:['sg-1dd51d']。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。

                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取网卡trunking模式设置，Enable-开启，Disable--关闭，默认关闭。
                     * @return TrunkingFlag 网卡trunking模式设置，Enable-开启，Disable--关闭，默认关闭。
                     * 
                     */
                    std::string GetTrunkingFlag() const;

                    /**
                     * 设置网卡trunking模式设置，Enable-开启，Disable--关闭，默认关闭。
                     * @param _trunkingFlag 网卡trunking模式设置，Enable-开启，Disable--关闭，默认关闭。
                     * 
                     */
                    void SetTrunkingFlag(const std::string& _trunkingFlag);

                    /**
                     * 判断参数 TrunkingFlag 是否已赋值
                     * @return TrunkingFlag 是否已赋值
                     * 
                     */
                    bool TrunkingFlagHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-pxir56ns。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 弹性网卡名称，最大长度不能超过60个字节。
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * 弹性网卡描述，可任意命名，但不得超过60个字符。
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * 指定绑定的安全组，例如:['sg-1dd51d']。可通过[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)接口获取。

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 网卡trunking模式设置，Enable-开启，Disable--关闭，默认关闭。
                     */
                    std::string m_trunkingFlag;
                    bool m_trunkingFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
