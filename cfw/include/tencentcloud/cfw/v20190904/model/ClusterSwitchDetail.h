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
                     * 获取<p>实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等</p>
                     * @return InsObj <p>实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等</p>
                     * 
                     */
                    std::string GetInsObj() const;

                    /**
                     * 设置<p>实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等</p>
                     * @param _insObj <p>实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等</p>
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
                     * 获取<p>实例对象名称</p>
                     * @return ObjName <p>实例对象名称</p>
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置<p>实例对象名称</p>
                     * @param _objName <p>实例对象名称</p>
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
                     * 获取<p>防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙</p>
                     * @return FwType <p>防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙</p>
                     * @param _fwType <p>防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙</p>
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
                     * 获取<p>资产类型，ccn：ccn实例类型；nat：nat网关类型</p>
                     * @return AssetType <p>资产类型，ccn：ccn实例类型；nat：nat网关类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型，ccn：ccn实例类型；nat：nat网关类型</p>
                     * @param _assetType <p>资产类型，ccn：ccn实例类型；nat：nat网关类型</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>开关状态<br>0 : 关闭<br>1 : 开启<br>2 : 开启中<br>3 : 关闭中<br>4 : 异常</p>
                     * @return Status <p>开关状态<br>0 : 关闭<br>1 : 开启<br>2 : 开启中<br>3 : 关闭中<br>4 : 异常</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关状态<br>0 : 关闭<br>1 : 开启<br>2 : 开启中<br>3 : 关闭中<br>4 : 异常</p>
                     * @param _status <p>开关状态<br>0 : 关闭<br>1 : 开启<br>2 : 开启中<br>3 : 关闭中<br>4 : 异常</p>
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
                     * 获取<p>开关接入模式，1：自动接入；2，手动接入，0：未选择</p>
                     * @return SwitchMode <p>开关接入模式，1：自动接入；2，手动接入，0：未选择</p>
                     * 
                     */
                    uint64_t GetSwitchMode() const;

                    /**
                     * 设置<p>开关接入模式，1：自动接入；2，手动接入，0：未选择</p>
                     * @param _switchMode <p>开关接入模式，1：自动接入；2，手动接入，0：未选择</p>
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
                     * 获取<p>实例对象是否处于非集群接入场景（主备模式）</p>
                     * @return NonCluster <p>实例对象是否处于非集群接入场景（主备模式）</p>
                     * 
                     */
                    int64_t GetNonCluster() const;

                    /**
                     * 设置<p>实例对象是否处于非集群接入场景（主备模式）</p>
                     * @param _nonCluster <p>实例对象是否处于非集群接入场景（主备模式）</p>
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
                     * 获取<p>ip版本，0：ipv4；1：ipv6</p>
                     * @return IpVersion <p>ip版本，0：ipv4；1：ipv6</p>
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置<p>ip版本，0：ipv4；1：ipv6</p>
                     * @param _ipVersion <p>ip版本，0：ipv4；1：ipv6</p>
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
                     * 获取<p>关联实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachIns <p>关联实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttachInsInfo> GetAttachIns() const;

                    /**
                     * 设置<p>关联实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachIns <p>关联实例</p>
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
                     * 获取<p>引流私有网络端点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoints <p>引流私有网络端点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EndpointInfo> GetEndpoints() const;

                    /**
                     * 设置<p>引流私有网络端点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoints <p>引流私有网络端点信息</p>
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
                     * 获取<p>入侵防护模式,0:观察;1:拦截;2:严格;3:关闭</p>
                     * @return Idpsaction <p>入侵防护模式,0:观察;1:拦截;2:严格;3:关闭</p>
                     * 
                     */
                    uint64_t GetIdpsaction() const;

                    /**
                     * 设置<p>入侵防护模式,0:观察;1:拦截;2:严格;3:关闭</p>
                     * @param _idpsaction <p>入侵防护模式,0:观察;1:拦截;2:严格;3:关闭</p>
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
                     * 获取<p>//透明模式开关,0:未开启,1:已开启</p>
                     * @return TransEnable <p>//透明模式开关,0:未开启,1:已开启</p>
                     * 
                     */
                    uint64_t GetTransEnable() const;

                    /**
                     * 设置<p>//透明模式开关,0:未开启,1:已开启</p>
                     * @param _transEnable <p>//透明模式开关,0:未开启,1:已开启</p>
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
                     * 获取<p>开关状态 0关闭 1开启</p>
                     * @return Enable <p>开关状态 0关闭 1开启</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>开关状态 0关闭 1开启</p>
                     * @param _enable <p>开关状态 0关闭 1开启</p>
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
                     * 获取<p>路由模式：0：多路由表，1：策略路由</p>
                     * @return RoutingMode <p>路由模式：0：多路由表，1：策略路由</p>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置<p>路由模式：0：多路由表，1：策略路由</p>
                     * @param _routingMode <p>路由模式：0：多路由表，1：策略路由</p>
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
                     * 获取<p>是否跨租户开关 1是 0不是</p>
                     * @return IsPeer <p>是否跨租户开关 1是 0不是</p>
                     * 
                     */
                    int64_t GetIsPeer() const;

                    /**
                     * 设置<p>是否跨租户开关 1是 0不是</p>
                     * @param _isPeer <p>是否跨租户开关 1是 0不是</p>
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
                     * 获取<p>跨租户appid</p>
                     * @return PeerAppid <p>跨租户appid</p>
                     * 
                     */
                    std::string GetPeerAppid() const;

                    /**
                     * 设置<p>跨租户appid</p>
                     * @param _peerAppid <p>跨租户appid</p>
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
                     * 获取<p>跨租户操作状态 1不允许操作 0可以</p>
                     * @return PeerStatus <p>跨租户操作状态 1不允许操作 0可以</p>
                     * 
                     */
                    int64_t GetPeerStatus() const;

                    /**
                     * 设置<p>跨租户操作状态 1不允许操作 0可以</p>
                     * @param _peerStatus <p>跨租户操作状态 1不允许操作 0可以</p>
                     * 
                     */
                    void SetPeerStatus(const int64_t& _peerStatus);

                    /**
                     * 判断参数 PeerStatus 是否已赋值
                     * @return PeerStatus 是否已赋值
                     * 
                     */
                    bool PeerStatusHasBeenSet() const;

                    /**
                     * 获取<p>Bypass状态</p>
                     * @return Bypass <p>Bypass状态</p>
                     * 
                     */
                    int64_t GetBypass() const;

                    /**
                     * 设置<p>Bypass状态</p>
                     * @param _bypass <p>Bypass状态</p>
                     * 
                     */
                    void SetBypass(const int64_t& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取<p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot; // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot; // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot; // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * @return Progress <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot; // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot; // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot; // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置<p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot; // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot; // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot; // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * @param _progress <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot; // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot; // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot; // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>实例对象可以是ccnid类型:ccn-ad21xuds形式;nat网关类型:nat-da12daxd形式;ip类型:1.1.1.1形式等</p>
                     */
                    std::string m_insObj;
                    bool m_insObjHasBeenSet;

                    /**
                     * <p>实例对象名称</p>
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * <p>防火墙类型，ew：vpc间防火墙；nat：nat防火墙；border：互联网边界防火墙</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>资产类型，ccn：ccn实例类型；nat：nat网关类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>开关状态<br>0 : 关闭<br>1 : 开启<br>2 : 开启中<br>3 : 关闭中<br>4 : 异常</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>开关接入模式，1：自动接入；2，手动接入，0：未选择</p>
                     */
                    uint64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * <p>实例对象是否处于非集群接入场景（主备模式）</p>
                     */
                    int64_t m_nonCluster;
                    bool m_nonClusterHasBeenSet;

                    /**
                     * <p>ip版本，0：ipv4；1：ipv6</p>
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>关联实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttachInsInfo> m_attachIns;
                    bool m_attachInsHasBeenSet;

                    /**
                     * <p>引流私有网络端点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndpointInfo> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * <p>入侵防护模式,0:观察;1:拦截;2:严格;3:关闭</p>
                     */
                    uint64_t m_idpsaction;
                    bool m_idpsactionHasBeenSet;

                    /**
                     * <p>//透明模式开关,0:未开启,1:已开启</p>
                     */
                    uint64_t m_transEnable;
                    bool m_transEnableHasBeenSet;

                    /**
                     * <p>开关状态 0关闭 1开启</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>路由模式：0：多路由表，1：策略路由</p>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * <p>是否跨租户开关 1是 0不是</p>
                     */
                    int64_t m_isPeer;
                    bool m_isPeerHasBeenSet;

                    /**
                     * <p>跨租户appid</p>
                     */
                    std::string m_peerAppid;
                    bool m_peerAppidHasBeenSet;

                    /**
                     * <p>跨租户操作状态 1不允许操作 0可以</p>
                     */
                    int64_t m_peerStatus;
                    bool m_peerStatusHasBeenSet;

                    /**
                     * <p>Bypass状态</p>
                     */
                    int64_t m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot; // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot; // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot; // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot; // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERSWITCHDETAIL_H_
