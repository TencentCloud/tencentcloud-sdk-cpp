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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_

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
                * MigratePrivateIpAddress请求参数结构体
                */
                class MigratePrivateIpAddressRequest : public AbstractModel
                {
                public:
                    MigratePrivateIpAddressRequest();
                    ~MigratePrivateIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当内网IP绑定的弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return SourceNetworkInterfaceId 当内网IP绑定的弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::string GetSourceNetworkInterfaceId() const;

                    /**
                     * 设置当内网IP绑定的弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _sourceNetworkInterfaceId 当内网IP绑定的弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    void SetSourceNetworkInterfaceId(const std::string& _sourceNetworkInterfaceId);

                    /**
                     * 判断参数 SourceNetworkInterfaceId 是否已赋值
                     * @return SourceNetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool SourceNetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取待迁移的目的弹性网卡实例ID。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return DestinationNetworkInterfaceId 待迁移的目的弹性网卡实例ID。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::string GetDestinationNetworkInterfaceId() const;

                    /**
                     * 设置待迁移的目的弹性网卡实例ID。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _destinationNetworkInterfaceId 待迁移的目的弹性网卡实例ID。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    void SetDestinationNetworkInterfaceId(const std::string& _destinationNetworkInterfaceId);

                    /**
                     * 判断参数 DestinationNetworkInterfaceId 是否已赋值
                     * @return DestinationNetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool DestinationNetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取迁移的内网IP地址，例如：10.0.0.6。
                     * @return PrivateIpAddress 迁移的内网IP地址，例如：10.0.0.6。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置迁移的内网IP地址，例如：10.0.0.6。
                     * @param _privateIpAddress 迁移的内网IP地址，例如：10.0.0.6。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                private:

                    /**
                     * 当内网IP绑定的弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::string m_sourceNetworkInterfaceId;
                    bool m_sourceNetworkInterfaceIdHasBeenSet;

                    /**
                     * 待迁移的目的弹性网卡实例ID。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::string m_destinationNetworkInterfaceId;
                    bool m_destinationNetworkInterfaceIdHasBeenSet;

                    /**
                     * 迁移的内网IP地址，例如：10.0.0.6。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEPRIVATEIPADDRESSREQUEST_H_
