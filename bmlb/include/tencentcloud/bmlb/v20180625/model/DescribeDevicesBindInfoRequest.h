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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEDEVICESBINDINFOREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEDEVICESBINDINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeDevicesBindInfo请求参数结构体
                */
                class DescribeDevicesBindInfoRequest : public AbstractModel
                {
                public:
                    DescribeDevicesBindInfoRequest();
                    ~DescribeDevicesBindInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取黑石私有网络唯一ID。
                     * @return VpcId 黑石私有网络唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置黑石私有网络唯一ID。
                     * @param _vpcId 黑石私有网络唯一ID。
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
                     * 获取主机ID或虚机IP列表，可用于获取绑定了该主机的负载均衡列表。
                     * @return InstanceIds 主机ID或虚机IP列表，可用于获取绑定了该主机的负载均衡列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置主机ID或虚机IP列表，可用于获取绑定了该主机的负载均衡列表。
                     * @param _instanceIds 主机ID或虚机IP列表，可用于获取绑定了该主机的负载均衡列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 黑石私有网络唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 主机ID或虚机IP列表，可用于获取绑定了该主机的负载均衡列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEDEVICESBINDINFOREQUEST_H_
