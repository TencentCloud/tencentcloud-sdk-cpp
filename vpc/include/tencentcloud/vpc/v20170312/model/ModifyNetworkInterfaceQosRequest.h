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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEQOSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEQOSREQUEST_H_

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
                * ModifyNetworkInterfaceQos请求参数结构体
                */
                class ModifyNetworkInterfaceQosRequest : public AbstractModel
                {
                public:
                    ModifyNetworkInterfaceQosRequest();
                    ~ModifyNetworkInterfaceQosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡ID，支持批量修改。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @return NetworkInterfaceIds 弹性网卡ID，支持批量修改。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * 
                     */
                    std::vector<std::string> GetNetworkInterfaceIds() const;

                    /**
                     * 设置弹性网卡ID，支持批量修改。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     * @param _networkInterfaceIds 弹性网卡ID，支持批量修改。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

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
                     * 获取服务质量，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。
                     * @return QosLevel 服务质量，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置服务质量，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。
                     * @param _qosLevel 服务质量，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取DirectSend端口范围最大值。最大值: 65535。
                     * @return DirectSendMaxPort DirectSend端口范围最大值。最大值: 65535。
                     * 
                     */
                    uint64_t GetDirectSendMaxPort() const;

                    /**
                     * 设置DirectSend端口范围最大值。最大值: 65535。
                     * @param _directSendMaxPort DirectSend端口范围最大值。最大值: 65535。
                     * 
                     */
                    void SetDirectSendMaxPort(const uint64_t& _directSendMaxPort);

                    /**
                     * 判断参数 DirectSendMaxPort 是否已赋值
                     * @return DirectSendMaxPort 是否已赋值
                     * 
                     */
                    bool DirectSendMaxPortHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡ID，支持批量修改。可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/product/215/15817)接口获取。

                     */
                    std::vector<std::string> m_networkInterfaceIds;
                    bool m_networkInterfaceIdsHasBeenSet;

                    /**
                     * 服务质量，可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * DirectSend端口范围最大值。最大值: 65535。
                     */
                    uint64_t m_directSendMaxPort;
                    bool m_directSendMaxPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYNETWORKINTERFACEQOSREQUEST_H_
