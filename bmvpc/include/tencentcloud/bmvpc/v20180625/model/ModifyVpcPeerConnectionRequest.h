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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCPEERCONNECTIONREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCPEERCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyVpcPeerConnection请求参数结构体
                */
                class ModifyVpcPeerConnectionRequest : public AbstractModel
                {
                public:
                    ModifyVpcPeerConnectionRequest();
                    ~ModifyVpcPeerConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取黑石对等连接唯一ID
                     * @return VpcPeerConnectionId 黑石对等连接唯一ID
                     * 
                     */
                    std::string GetVpcPeerConnectionId() const;

                    /**
                     * 设置黑石对等连接唯一ID
                     * @param _vpcPeerConnectionId 黑石对等连接唯一ID
                     * 
                     */
                    void SetVpcPeerConnectionId(const std::string& _vpcPeerConnectionId);

                    /**
                     * 判断参数 VpcPeerConnectionId 是否已赋值
                     * @return VpcPeerConnectionId 是否已赋值
                     * 
                     */
                    bool VpcPeerConnectionIdHasBeenSet() const;

                    /**
                     * 获取对等连接带宽
                     * @return Bandwidth 对等连接带宽
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置对等连接带宽
                     * @param _bandwidth 对等连接带宽
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取对等连接名称
                     * @return VpcPeerConnectionName 对等连接名称
                     * 
                     */
                    std::string GetVpcPeerConnectionName() const;

                    /**
                     * 设置对等连接名称
                     * @param _vpcPeerConnectionName 对等连接名称
                     * 
                     */
                    void SetVpcPeerConnectionName(const std::string& _vpcPeerConnectionName);

                    /**
                     * 判断参数 VpcPeerConnectionName 是否已赋值
                     * @return VpcPeerConnectionName 是否已赋值
                     * 
                     */
                    bool VpcPeerConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 黑石对等连接唯一ID
                     */
                    std::string m_vpcPeerConnectionId;
                    bool m_vpcPeerConnectionIdHasBeenSet;

                    /**
                     * 对等连接带宽
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 对等连接名称
                     */
                    std::string m_vpcPeerConnectionName;
                    bool m_vpcPeerConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCPEERCONNECTIONREQUEST_H_
