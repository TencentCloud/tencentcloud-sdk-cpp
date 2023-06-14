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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCPEERCONNECTIONREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCPEERCONNECTIONREQUEST_H_

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
                * CreateVpcPeerConnection请求参数结构体
                */
                class CreateVpcPeerConnectionRequest : public AbstractModel
                {
                public:
                    CreateVpcPeerConnectionRequest();
                    ~CreateVpcPeerConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本端VPC唯一ID
                     * @return VpcId 本端VPC唯一ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置本端VPC唯一ID
                     * @param _vpcId 本端VPC唯一ID
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
                     * 获取对端VPC唯一ID
                     * @return PeerVpcId 对端VPC唯一ID
                     * 
                     */
                    std::string GetPeerVpcId() const;

                    /**
                     * 设置对端VPC唯一ID
                     * @param _peerVpcId 对端VPC唯一ID
                     * 
                     */
                    void SetPeerVpcId(const std::string& _peerVpcId);

                    /**
                     * 判断参数 PeerVpcId 是否已赋值
                     * @return PeerVpcId 是否已赋值
                     * 
                     */
                    bool PeerVpcIdHasBeenSet() const;

                    /**
                     * 获取对端地域，取值范围为gz,sh,bj,hk,cd,de,sh_bm,gz_bm,bj_bm,cq_bm等
                     * @return PeerRegion 对端地域，取值范围为gz,sh,bj,hk,cd,de,sh_bm,gz_bm,bj_bm,cq_bm等
                     * 
                     */
                    std::string GetPeerRegion() const;

                    /**
                     * 设置对端地域，取值范围为gz,sh,bj,hk,cd,de,sh_bm,gz_bm,bj_bm,cq_bm等
                     * @param _peerRegion 对端地域，取值范围为gz,sh,bj,hk,cd,de,sh_bm,gz_bm,bj_bm,cq_bm等
                     * 
                     */
                    void SetPeerRegion(const std::string& _peerRegion);

                    /**
                     * 判断参数 PeerRegion 是否已赋值
                     * @return PeerRegion 是否已赋值
                     * 
                     */
                    bool PeerRegionHasBeenSet() const;

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

                    /**
                     * 获取对端账户OwnerUin（默认值为本端账户）
                     * @return PeerUin 对端账户OwnerUin（默认值为本端账户）
                     * 
                     */
                    std::string GetPeerUin() const;

                    /**
                     * 设置对端账户OwnerUin（默认值为本端账户）
                     * @param _peerUin 对端账户OwnerUin（默认值为本端账户）
                     * 
                     */
                    void SetPeerUin(const std::string& _peerUin);

                    /**
                     * 判断参数 PeerUin 是否已赋值
                     * @return PeerUin 是否已赋值
                     * 
                     */
                    bool PeerUinHasBeenSet() const;

                    /**
                     * 获取跨地域必传，带宽上限值
                     * @return Bandwidth 跨地域必传，带宽上限值
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置跨地域必传，带宽上限值
                     * @param _bandwidth 跨地域必传，带宽上限值
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * 本端VPC唯一ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 对端VPC唯一ID
                     */
                    std::string m_peerVpcId;
                    bool m_peerVpcIdHasBeenSet;

                    /**
                     * 对端地域，取值范围为gz,sh,bj,hk,cd,de,sh_bm,gz_bm,bj_bm,cq_bm等
                     */
                    std::string m_peerRegion;
                    bool m_peerRegionHasBeenSet;

                    /**
                     * 对等连接名称
                     */
                    std::string m_vpcPeerConnectionName;
                    bool m_vpcPeerConnectionNameHasBeenSet;

                    /**
                     * 对端账户OwnerUin（默认值为本端账户）
                     */
                    std::string m_peerUin;
                    bool m_peerUinHasBeenSet;

                    /**
                     * 跨地域必传，带宽上限值
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEVPCPEERCONNECTIONREQUEST_H_
