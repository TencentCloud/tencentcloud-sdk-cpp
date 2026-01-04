/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERSWITCHDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERSWITCHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AttachInsInfo.h>
#include <tencentcloud/cfw/v20190904/model/EndpointInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 集群模式防火墙开关数据详情
                */
                class ClusterSwitchDetail : public AbstractModel
                {
                public:
                    ClusterSwitchDetail();
                    ~ClusterSwitchDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等
                     * @return InsObj 实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等
                     * 
                     */
                    std::string GetInsObj() const;

                    /**
                     * 设置实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等
                     * @param _insObj 实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等
                     * 
                     */
                    void SetInsObj(const std::string& _insObj);

                    /**
                     * 判断参数 InsObj 是否已赋值
                     * @return InsObj 是否已赋值
                     * 
                     */
                    bool InsObjHasBeenSet() const;

                    /**
                     * 获取实例对象名称
                     * @return ObjName 实例对象名称
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置实例对象名称
                     * @param _objName 实例对象名称
                     * 
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     * 
                     */
                    bool ObjNameHasBeenSet() const;

                    /**
                     * 获取防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙
                     * @return FwType 防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙
                     * @param _fwType 防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取资产类型，ccn：ccn实例类型；nat：nat网关类型
                     * @return AssetType 资产类型，ccn：ccn实例类型；nat：nat网关类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型，ccn：ccn实例类型；nat：nat网关类型
                     * @param _assetType 资产类型，ccn：ccn实例类型；nat：nat网关类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * @return Status 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * @param _status 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开关接入模式，1：自动接入；2，手动接入，0：未选择
                     * @return SwitchMode 开关接入模式，1：自动接入；2，手动接入，0：未选择
                     * 
                     */
                    uint64_t GetSwitchMode() const;

                    /**
                     * 设置开关接入模式，1：自动接入；2，手动接入，0：未选择
                     * @param _switchMode 开关接入模式，1：自动接入；2，手动接入，0：未选择
                     * 
                     */
                    void SetSwitchMode(const uint64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取实例对象是否处于非集群接入场景（主备模式）
                     * @return NonCluster 实例对象是否处于非集群接入场景（主备模式）
                     * 
                     */
                    int64_t GetNonCluster() const;

                    /**
                     * 设置实例对象是否处于非集群接入场景（主备模式）
                     * @param _nonCluster 实例对象是否处于非集群接入场景（主备模式）
                     * 
                     */
                    void SetNonCluster(const int64_t& _nonCluster);

                    /**
                     * 判断参数 NonCluster 是否已赋值
                     * @return NonCluster 是否已赋值
                     * 
                     */
                    bool NonClusterHasBeenSet() const;

                    /**
                     * 获取ip版本，0：ipv4；1：ipv6
                     * @return IpVersion ip版本，0：ipv4；1：ipv6
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置ip版本，0：ipv4；1：ipv6
                     * @param _ipVersion ip版本，0：ipv4；1：ipv6
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachIns 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttachInsInfo> GetAttachIns() const;

                    /**
                     * 设置关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachIns 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachIns(const std::vector<AttachInsInfo>& _attachIns);

                    /**
                     * 判断参数 AttachIns 是否已赋值
                     * @return AttachIns 是否已赋值
                     * 
                     */
                    bool AttachInsHasBeenSet() const;

                    /**
                     * 获取引流私有网络端点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoints 引流私有网络端点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EndpointInfo> GetEndpoints() const;

                    /**
                     * 设置引流私有网络端点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoints 引流私有网络端点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoints(const std::vector<EndpointInfo>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取入侵防护模式,0:观察;1:拦截;2:严格;3:关闭
                     * @return Idpsaction 入侵防护模式,0:观察;1:拦截;2:严格;3:关闭
                     * 
                     */
                    uint64_t GetIdpsaction() const;

                    /**
                     * 设置入侵防护模式,0:观察;1:拦截;2:严格;3:关闭
                     * @param _idpsaction 入侵防护模式,0:观察;1:拦截;2:严格;3:关闭
                     * 
                     */
                    void SetIdpsaction(const uint64_t& _idpsaction);

                    /**
                     * 判断参数 Idpsaction 是否已赋值
                     * @return Idpsaction 是否已赋值
                     * 
                     */
                    bool IdpsactionHasBeenSet() const;

                    /**
                     * 获取//透明模式开关,0:未开启,1:已开启
                     * @return TransEnable //透明模式开关,0:未开启,1:已开启
                     * 
                     */
                    uint64_t GetTransEnable() const;

                    /**
                     * 设置//透明模式开关,0:未开启,1:已开启
                     * @param _transEnable //透明模式开关,0:未开启,1:已开启
                     * 
                     */
                    void SetTransEnable(const uint64_t& _transEnable);

                    /**
                     * 判断参数 TransEnable 是否已赋值
                     * @return TransEnable 是否已赋值
                     * 
                     */
                    bool TransEnableHasBeenSet() const;

                    /**
                     * 获取开关状态 0关闭 1开启
                     * @return Enable 开关状态 0关闭 1开启
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开关状态 0关闭 1开启
                     * @param _enable 开关状态 0关闭 1开启
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取路由模式：0：多路由表，1：策略路由
                     * @return RoutingMode 路由模式：0：多路由表，1：策略路由
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置路由模式：0：多路由表，1：策略路由
                     * @param _routingMode 路由模式：0：多路由表，1：策略路由
                     * 
                     */
                    void SetRoutingMode(const int64_t& _routingMode);

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                    /**
                     * 获取是否跨租户开关 1是 0不是
                     * @return IsPeer 是否跨租户开关 1是 0不是
                     * 
                     */
                    int64_t GetIsPeer() const;

                    /**
                     * 设置是否跨租户开关 1是 0不是
                     * @param _isPeer 是否跨租户开关 1是 0不是
                     * 
                     */
                    void SetIsPeer(const int64_t& _isPeer);

                    /**
                     * 判断参数 IsPeer 是否已赋值
                     * @return IsPeer 是否已赋值
                     * 
                     */
                    bool IsPeerHasBeenSet() const;

                    /**
                     * 获取跨租户appid
                     * @return PeerAppid 跨租户appid
                     * 
                     */
                    std::string GetPeerAppid() const;

                    /**
                     * 设置跨租户appid
                     * @param _peerAppid 跨租户appid
                     * 
                     */
                    void SetPeerAppid(const std::string& _peerAppid);

                    /**
                     * 判断参数 PeerAppid 是否已赋值
                     * @return PeerAppid 是否已赋值
                     * 
                     */
                    bool PeerAppidHasBeenSet() const;

                    /**
                     * 获取跨租户操作状态 1不允许操作 0可以
                     * @return PeerStatus 跨租户操作状态 1不允许操作 0可以
                     * 
                     */
                    int64_t GetPeerStatus() const;

                    /**
                     * 设置跨租户操作状态 1不允许操作 0可以
                     * @param _peerStatus 跨租户操作状态 1不允许操作 0可以
                     * 
                     */
                    void SetPeerStatus(const int64_t& _peerStatus);

                    /**
                     * 判断参数 PeerStatus 是否已赋值
                     * @return PeerStatus 是否已赋值
                     * 
                     */
                    bool PeerStatusHasBeenSet() const;

                private:

                    /**
                     * 实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等
                     */
                    std::string m_insObj;
                    bool m_insObjHasBeenSet;

                    /**
                     * 实例对象名称
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * 防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 资产类型，ccn：ccn实例类型；nat：nat网关类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开关接入模式，1：自动接入；2，手动接入，0：未选择
                     */
                    uint64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * 实例对象是否处于非集群接入场景（主备模式）
                     */
                    int64_t m_nonCluster;
                    bool m_nonClusterHasBeenSet;

                    /**
                     * ip版本，0：ipv4；1：ipv6
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttachInsInfo> m_attachIns;
                    bool m_attachInsHasBeenSet;

                    /**
                     * 引流私有网络端点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndpointInfo> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * 入侵防护模式,0:观察;1:拦截;2:严格;3:关闭
                     */
                    uint64_t m_idpsaction;
                    bool m_idpsactionHasBeenSet;

                    /**
                     * //透明模式开关,0:未开启,1:已开启
                     */
                    uint64_t m_transEnable;
                    bool m_transEnableHasBeenSet;

                    /**
                     * 开关状态 0关闭 1开启
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 路由模式：0：多路由表，1：策略路由
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * 是否跨租户开关 1是 0不是
                     */
                    int64_t m_isPeer;
                    bool m_isPeerHasBeenSet;

                    /**
                     * 跨租户appid
                     */
                    std::string m_peerAppid;
                    bool m_peerAppidHasBeenSet;

                    /**
                     * 跨租户操作状态 1不允许操作 0可以
                     */
                    int64_t m_peerStatus;
                    bool m_peerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERSWITCHDETAIL_H_
