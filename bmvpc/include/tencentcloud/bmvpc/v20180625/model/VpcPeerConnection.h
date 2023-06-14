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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCPEERCONNECTION_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCPEERCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 对等连接对象
                */
                class VpcPeerConnection : public AbstractModel
                {
                public:
                    VpcPeerConnection();
                    ~VpcPeerConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取本端APPID
                     * @return AppId 本端APPID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置本端APPID
                     * @param _appId 本端APPID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取对端APPID
                     * @return PeerAppId 对端APPID
                     * 
                     */
                    std::string GetPeerAppId() const;

                    /**
                     * 设置对端APPID
                     * @param _peerAppId 对端APPID
                     * 
                     */
                    void SetPeerAppId(const std::string& _peerAppId);

                    /**
                     * 判断参数 PeerAppId 是否已赋值
                     * @return PeerAppId 是否已赋值
                     * 
                     */
                    bool PeerAppIdHasBeenSet() const;

                    /**
                     * 获取对等连接唯一ID
                     * @return VpcPeerConnectionId 对等连接唯一ID
                     * 
                     */
                    std::string GetVpcPeerConnectionId() const;

                    /**
                     * 设置对等连接唯一ID
                     * @param _vpcPeerConnectionId 对等连接唯一ID
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
                     * 获取对等连接状态。pending:申请中,available:运行中,expired:已过期,rejected:已拒绝,deleted:已删除
                     * @return State 对等连接状态。pending:申请中,available:运行中,expired:已过期,rejected:已拒绝,deleted:已删除
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置对等连接状态。pending:申请中,available:运行中,expired:已过期,rejected:已拒绝,deleted:已删除
                     * @param _state 对等连接状态。pending:申请中,available:运行中,expired:已过期,rejected:已拒绝,deleted:已删除
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取本端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcZone 本端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcZone() const;

                    /**
                     * 设置本端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcZone 本端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcZone(const std::string& _vpcZone);

                    /**
                     * 判断参数 VpcZone 是否已赋值
                     * @return VpcZone 是否已赋值
                     * 
                     */
                    bool VpcZoneHasBeenSet() const;

                    /**
                     * 获取对端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeerVpcZone 对端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeerVpcZone() const;

                    /**
                     * 设置对端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peerVpcZone 对端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeerVpcZone(const std::string& _peerVpcZone);

                    /**
                     * 判断参数 PeerVpcZone 是否已赋值
                     * @return PeerVpcZone 是否已赋值
                     * 
                     */
                    bool PeerVpcZoneHasBeenSet() const;

                    /**
                     * 获取本端Uin
                     * @return Uin 本端Uin
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置本端Uin
                     * @param _uin 本端Uin
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取对端Uin
                     * @return PeerUin 对端Uin
                     * 
                     */
                    uint64_t GetPeerUin() const;

                    /**
                     * 设置对端Uin
                     * @param _peerUin 对端Uin
                     * 
                     */
                    void SetPeerUin(const uint64_t& _peerUin);

                    /**
                     * 判断参数 PeerUin 是否已赋值
                     * @return PeerUin 是否已赋值
                     * 
                     */
                    bool PeerUinHasBeenSet() const;

                    /**
                     * 获取对等连接类型
                     * @return PeerType 对等连接类型
                     * 
                     */
                    uint64_t GetPeerType() const;

                    /**
                     * 设置对等连接类型
                     * @param _peerType 对等连接类型
                     * 
                     */
                    void SetPeerType(const uint64_t& _peerType);

                    /**
                     * 判断参数 PeerType 是否已赋值
                     * @return PeerType 是否已赋值
                     * 
                     */
                    bool PeerTypeHasBeenSet() const;

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
                     * 获取本端VPC地域
                     * @return Region 本端VPC地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置本端VPC地域
                     * @param _region 本端VPC地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取对端VPC地域
                     * @return PeerRegion 对端VPC地域
                     * 
                     */
                    std::string GetPeerRegion() const;

                    /**
                     * 设置对端VPC地域
                     * @param _peerRegion 对端VPC地域
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
                     * 获取是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeleteFlag() const;

                    /**
                     * 设置是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteFlag 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteFlag(const uint64_t& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 本端APPID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 对端APPID
                     */
                    std::string m_peerAppId;
                    bool m_peerAppIdHasBeenSet;

                    /**
                     * 对等连接唯一ID
                     */
                    std::string m_vpcPeerConnectionId;
                    bool m_vpcPeerConnectionIdHasBeenSet;

                    /**
                     * 对等连接名称
                     */
                    std::string m_vpcPeerConnectionName;
                    bool m_vpcPeerConnectionNameHasBeenSet;

                    /**
                     * 对等连接状态。pending:申请中,available:运行中,expired:已过期,rejected:已拒绝,deleted:已删除
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 本端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcZone;
                    bool m_vpcZoneHasBeenSet;

                    /**
                     * 对端VPC所属可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_peerVpcZone;
                    bool m_peerVpcZoneHasBeenSet;

                    /**
                     * 本端Uin
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 对端Uin
                     */
                    uint64_t m_peerUin;
                    bool m_peerUinHasBeenSet;

                    /**
                     * 对等连接类型
                     */
                    uint64_t m_peerType;
                    bool m_peerTypeHasBeenSet;

                    /**
                     * 对等连接带宽
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 本端VPC地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 对端VPC地域
                     */
                    std::string m_peerRegion;
                    bool m_peerRegionHasBeenSet;

                    /**
                     * 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCPEERCONNECTION_H_
