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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWSWITCHDETAILS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWSWITCHDETAILS_H_

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
                * NAT防火墙开关详情
                */
                class NatFwSwitchDetailS : public AbstractModel
                {
                public:
                    NatFwSwitchDetailS();
                    ~NatFwSwitchDetailS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>NAT实例ID</p>
                     * @return InsObj <p>NAT实例ID</p>
                     * 
                     */
                    std::string GetInsObj() const;

                    /**
                     * 设置<p>NAT实例ID</p>
                     * @param _insObj <p>NAT实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return ObjName <p>实例名称</p>
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _objName <p>实例名称</p>
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
                     * 获取<p>防火墙类型</p>
                     * @return FwType <p>防火墙类型</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>防火墙类型</p>
                     * @param _fwType <p>防火墙类型</p>
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
                     * 获取<p>资产类型，nat-VPC内防护，nat_ccn-CCN集群模式</p>
                     * @return AssetType <p>资产类型，nat-VPC内防护，nat_ccn-CCN集群模式</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型，nat-VPC内防护，nat_ccn-CCN集群模式</p>
                     * @param _assetType <p>资产类型，nat-VPC内防护，nat_ccn-CCN集群模式</p>
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
                     * 获取<p>开关接入模式，1-自动接入，2-手动接入</p>
                     * @return SwitchMode <p>开关接入模式，1-自动接入，2-手动接入</p>
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置<p>开关接入模式，1-自动接入，2-手动接入</p>
                     * @param _switchMode <p>开关接入模式，1-自动接入，2-手动接入</p>
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取<p>引流路由方法，0-多路由表，1-策略路由</p>
                     * @return RoutingMode <p>引流路由方法，0-多路由表，1-策略路由</p>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置<p>引流路由方法，0-多路由表，1-策略路由</p>
                     * @param _routingMode <p>引流路由方法，0-多路由表，1-策略路由</p>
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
                     * 获取<p>开关状态，0-未开启，1-已开启，2-开启中，3-关闭中</p>
                     * @return Status <p>开关状态，0-未开启，1-已开启，2-开启中，3-关闭中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关状态，0-未开启，1-已开启，2-开启中，3-关闭中</p>
                     * @param _status <p>开关状态，0-未开启，1-已开启，2-开启中，3-关闭中</p>
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
                     * 获取<p>是否非集群模式，0-集群模式，1-非集群模式</p>
                     * @return NonCluster <p>是否非集群模式，0-集群模式，1-非集群模式</p>
                     * 
                     */
                    int64_t GetNonCluster() const;

                    /**
                     * 设置<p>是否非集群模式，0-集群模式，1-非集群模式</p>
                     * @param _nonCluster <p>是否非集群模式，0-集群模式，1-非集群模式</p>
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
                     * 获取<p>入侵防御动作</p>
                     * @return IpsAction <p>入侵防御动作</p>
                     * 
                     */
                    int64_t GetIpsAction() const;

                    /**
                     * 设置<p>入侵防御动作</p>
                     * @param _ipsAction <p>入侵防御动作</p>
                     * 
                     */
                    void SetIpsAction(const int64_t& _ipsAction);

                    /**
                     * 判断参数 IpsAction 是否已赋值
                     * @return IpsAction 是否已赋值
                     * 
                     */
                    bool IpsActionHasBeenSet() const;

                    /**
                     * 获取<p>流量监控开关</p>
                     * @return TransEnable <p>流量监控开关</p>
                     * 
                     */
                    int64_t GetTransEnable() const;

                    /**
                     * 设置<p>流量监控开关</p>
                     * @param _transEnable <p>流量监控开关</p>
                     * 
                     */
                    void SetTransEnable(const int64_t& _transEnable);

                    /**
                     * 判断参数 TransEnable 是否已赋值
                     * @return TransEnable 是否已赋值
                     * 
                     */
                    bool TransEnableHasBeenSet() const;

                    /**
                     * 获取<p>Bypass状态，0-关闭，1-开启</p>
                     * @return Bypass <p>Bypass状态，0-关闭，1-开启</p>
                     * 
                     */
                    int64_t GetBypass() const;

                    /**
                     * 设置<p>Bypass状态，0-关闭，1-开启</p>
                     * @param _bypass <p>Bypass状态，0-关闭，1-开启</p>
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
                     * 获取<p>关联ID，nat_ccn资产类型时为云联网实例ID, nat资产类型时为空</p>
                     * @return AttachId <p>关联ID，nat_ccn资产类型时为云联网实例ID, nat资产类型时为空</p>
                     * 
                     */
                    std::string GetAttachId() const;

                    /**
                     * 设置<p>关联ID，nat_ccn资产类型时为云联网实例ID, nat资产类型时为空</p>
                     * @param _attachId <p>关联ID，nat_ccn资产类型时为云联网实例ID, nat资产类型时为空</p>
                     * 
                     */
                    void SetAttachId(const std::string& _attachId);

                    /**
                     * 判断参数 AttachId 是否已赋值
                     * @return AttachId 是否已赋值
                     * 
                     */
                    bool AttachIdHasBeenSet() const;

                    /**
                     * 获取<p>关联ID的实例名称，nat_ccn资产类型时为云联网名称</p>
                     * @return AttachName <p>关联ID的实例名称，nat_ccn资产类型时为云联网名称</p>
                     * 
                     */
                    std::string GetAttachName() const;

                    /**
                     * 设置<p>关联ID的实例名称，nat_ccn资产类型时为云联网名称</p>
                     * @param _attachName <p>关联ID的实例名称，nat_ccn资产类型时为云联网名称</p>
                     * 
                     */
                    void SetAttachName(const std::string& _attachName);

                    /**
                     * 判断参数 AttachName 是否已赋值
                     * @return AttachName 是否已赋值
                     * 
                     */
                    bool AttachNameHasBeenSet() const;

                    /**
                     * 获取<p>NAT防火墙所在VPC ID</p>
                     * @return NatVpcId <p>NAT防火墙所在VPC ID</p>
                     * 
                     */
                    std::string GetNatVpcId() const;

                    /**
                     * 设置<p>NAT防火墙所在VPC ID</p>
                     * @param _natVpcId <p>NAT防火墙所在VPC ID</p>
                     * 
                     */
                    void SetNatVpcId(const std::string& _natVpcId);

                    /**
                     * 判断参数 NatVpcId 是否已赋值
                     * @return NatVpcId 是否已赋值
                     * 
                     */
                    bool NatVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>NAT防火墙所在VPC的VPC名称</p>
                     * @return NatVpcName <p>NAT防火墙所在VPC的VPC名称</p>
                     * 
                     */
                    std::string GetNatVpcName() const;

                    /**
                     * 设置<p>NAT防火墙所在VPC的VPC名称</p>
                     * @param _natVpcName <p>NAT防火墙所在VPC的VPC名称</p>
                     * 
                     */
                    void SetNatVpcName(const std::string& _natVpcName);

                    /**
                     * 判断参数 NatVpcName 是否已赋值
                     * @return NatVpcName 是否已赋值
                     * 
                     */
                    bool NatVpcNameHasBeenSet() const;

                    /**
                     * 获取<p>CCN关联实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachIns <p>CCN关联实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttachInsInfo> GetAttachIns() const;

                    /**
                     * 设置<p>CCN关联实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachIns <p>CCN关联实例列表</p>
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
                     * 获取<p>终端节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoints <p>终端节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EndpointInfo> GetEndpoints() const;

                    /**
                     * 设置<p>终端节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoints <p>终端节点列表</p>
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
                     * 获取<p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot;      // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot;     // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot;    // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot;   // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot;  // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * @return Progress <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot;      // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot;     // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot;    // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot;   // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot;  // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置<p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot;      // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot;     // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot;    // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot;   // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot;  // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     * @param _progress <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot;      // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot;     // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot;    // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot;   // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot;  // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
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
                     * <p>NAT实例ID</p>
                     */
                    std::string m_insObj;
                    bool m_insObjHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * <p>防火墙类型</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>资产类型，nat-VPC内防护，nat_ccn-CCN集群模式</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>开关接入模式，1-自动接入，2-手动接入</p>
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * <p>引流路由方法，0-多路由表，1-策略路由</p>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * <p>开关状态，0-未开启，1-已开启，2-开启中，3-关闭中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ip版本，0：ipv4；1：ipv6</p>
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>是否非集群模式，0-集群模式，1-非集群模式</p>
                     */
                    int64_t m_nonCluster;
                    bool m_nonClusterHasBeenSet;

                    /**
                     * <p>入侵防御动作</p>
                     */
                    int64_t m_ipsAction;
                    bool m_ipsActionHasBeenSet;

                    /**
                     * <p>流量监控开关</p>
                     */
                    int64_t m_transEnable;
                    bool m_transEnableHasBeenSet;

                    /**
                     * <p>Bypass状态，0-关闭，1-开启</p>
                     */
                    int64_t m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * <p>关联ID，nat_ccn资产类型时为云联网实例ID, nat资产类型时为空</p>
                     */
                    std::string m_attachId;
                    bool m_attachIdHasBeenSet;

                    /**
                     * <p>关联ID的实例名称，nat_ccn资产类型时为云联网名称</p>
                     */
                    std::string m_attachName;
                    bool m_attachNameHasBeenSet;

                    /**
                     * <p>NAT防火墙所在VPC ID</p>
                     */
                    std::string m_natVpcId;
                    bool m_natVpcIdHasBeenSet;

                    /**
                     * <p>NAT防火墙所在VPC的VPC名称</p>
                     */
                    std::string m_natVpcName;
                    bool m_natVpcNameHasBeenSet;

                    /**
                     * <p>CCN关联实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttachInsInfo> m_attachIns;
                    bool m_attachInsHasBeenSet;

                    /**
                     * <p>终端节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndpointInfo> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * <p>防火墙开关操作时的进度状态：</p><p>// 开启 — 自动模式（3步）<br>&quot;AUTO_OPEN_ORCHESTRATING&quot;      // 步骤1: 预编排策略路由<br>&quot;AUTO_OPEN_CREATING_RESOURCES&quot; // 步骤2: 创建引流网络和资源<br>&quot;AUTO_OPEN_PUSHING_ROUTES&quot;     // 步骤3: 创建策略路由</p><p>// 开启 — 手动模式（1步）<br>&quot;MANUAL_OPEN_CREATING_RESOURCES&quot; // 步骤1: 创建引流网络和资源</p><p>// 关闭 — 自动模式（2步）<br>&quot;AUTO_CLOSE_DELETING_ROUTES&quot;    // 步骤1: 删除策略路由<br>&quot;AUTO_CLOSE_DELETING_RESOURCES&quot; // 步骤2: 删除引流网络和资源<br>// 关闭 — 手动模式（1步）<br>&quot;MANUAL_CLOSE_DELETING_RESOURCES&quot; // 步骤1: 删除引流网络和资源</p><p>// 修改 — 自动模式（3步）<br>&quot;AUTO_MODIFY_ORCHESTRATING&quot;   // 步骤1: 预编排策略路由<br>&quot;AUTO_MODIFY_DELETING_ROUTES&quot; // 步骤2: 删除旧策略路由<br>&quot;AUTO_MODIFY_PUSHING_ROUTES&quot;  // 步骤3: 创建新策略路由</p><p>// 修改 — 手动模式（1步，仅 VPC 防火墙存在手动模式修改）<br>&quot;MANUAL_MODIFY_UPDATING_RESOURCES&quot; // 步骤1: 更新引流网络和资源</p>
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWSWITCHDETAILS_H_
