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
                     * 获取弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @param NetworkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例ID。形如：ins-r8hr2upy。
                     * @return InstanceId CVM实例ID。形如：ins-r8hr2upy。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM实例ID。形如：ins-r8hr2upy。
                     * @param InstanceId CVM实例ID。形如：ins-r8hr2upy。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * CVM实例ID。形如：ins-r8hr2upy。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHNETWORKINTERFACEREQUEST_H_
