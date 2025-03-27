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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_

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
                * MigrateNetworkInterface请求参数结构体
                */
                class MigrateNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    MigrateNetworkInterfaceRequest();
                    ~MigrateNetworkInterfaceRequest() = default;
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
                     * 获取弹性网卡当前绑定的CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @return SourceInstanceId 弹性网卡当前绑定的CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置弹性网卡当前绑定的CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @param _sourceInstanceId 弹性网卡当前绑定的CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取待迁移的目的CVM实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @return DestinationInstanceId 待迁移的目的CVM实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    std::string GetDestinationInstanceId() const;

                    /**
                     * 设置待迁移的目的CVM实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * @param _destinationInstanceId 待迁移的目的CVM实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     * 
                     */
                    void SetDestinationInstanceId(const std::string& _destinationInstanceId);

                    /**
                     * 判断参数 DestinationInstanceId 是否已赋值
                     * @return DestinationInstanceId 是否已赋值
                     * 
                     */
                    bool DestinationInstanceIdHasBeenSet() const;

                    /**
                     * 获取网卡绑定类型：0 标准型 1 扩展型。默认：0。
                     * @return AttachType 网卡绑定类型：0 标准型 1 扩展型。默认：0。
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置网卡绑定类型：0 标准型 1 扩展型。默认：0。
                     * @param _attachType 网卡绑定类型：0 标准型 1 扩展型。默认：0。
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 弹性网卡当前绑定的CVM实例ID。形如：ins-r8hr2upy。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * 待迁移的目的CVM实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)接口获取。

                     */
                    std::string m_destinationInstanceId;
                    bool m_destinationInstanceIdHasBeenSet;

                    /**
                     * 网卡绑定类型：0 标准型 1 扩展型。默认：0。
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATENETWORKINTERFACEREQUEST_H_
