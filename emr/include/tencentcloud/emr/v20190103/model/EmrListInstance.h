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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/SoftDependInfo.h>
#include <tencentcloud/emr/v20190103/model/McpPasswordInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群列表返回示例
                */
                class EmrListInstance : public AbstractModel
                {
                public:
                    EmrListInstance();
                    ~EmrListInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除</p>
                     * @return StatusDesc <p>常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除</p>
                     * @param _statusDesc <p>常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>集群名字</p>
                     * @return ClusterName <p>集群名字</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名字</p>
                     * @param _clusterName <p>集群名字</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群地域</p>
                     * @return ZoneId <p>集群地域</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>集群地域</p>
                     * @param _zoneId <p>集群地域</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>用户APPID</p>
                     * @return AppId <p>用户APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户APPID</p>
                     * @param _appId <p>用户APPID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _addTime <p>创建时间</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行时间</p>
                     * @return RunTime <p>运行时间</p>
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置<p>运行时间</p>
                     * @param _runTime <p>运行时间</p>
                     * 
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群IP</p>
                     * @return MasterIp <p>集群IP</p>
                     * 
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置<p>集群IP</p>
                     * @param _masterIp <p>集群IP</p>
                     * 
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     * 
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取<p>集群版本</p>
                     * @return EmrVersion <p>集群版本</p>
                     * 
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置<p>集群版本</p>
                     * @param _emrVersion <p>集群版本</p>
                     * 
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     * 
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群计费类型</p>
                     * @return ChargeType <p>集群计费类型</p>
                     * 
                     */
                    uint64_t GetChargeType() const;

                    /**
                     * 设置<p>集群计费类型</p>
                     * @param _chargeType <p>集群计费类型</p>
                     * 
                     */
                    void SetChargeType(const uint64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>emr ID</p>
                     * @return Id <p>emr ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>emr ID</p>
                     * @param _id <p>emr ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>区域</p>
                     * @return RegionId <p>区域</p>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置<p>区域</p>
                     * @param _regionId <p>区域</p>
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    uint64_t GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
                     * 
                     */
                    void SetSubnetId(const uint64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>网络ID</p>
                     * @return VpcId <p>网络ID</p>
                     * 
                     */
                    uint64_t GetVpcId() const;

                    /**
                     * 设置<p>网络ID</p>
                     * @param _vpcId <p>网络ID</p>
                     * 
                     */
                    void SetVpcId(const uint64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>地区</p>
                     * @return Zone <p>地区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>地区</p>
                     * @param _zone <p>地区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)</p>
                     * @return Status <p>状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)</p>
                     * @param _status <p>状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>告警信息</p>
                     * @return AlarmInfo <p>告警信息</p>
                     * 
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置<p>告警信息</p>
                     * @param _alarmInfo <p>告警信息</p>
                     * 
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否是woodpecker集群</p>
                     * @return IsWoodpeckerCluster <p>是否是woodpecker集群</p>
                     * 
                     */
                    uint64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置<p>是否是woodpecker集群</p>
                     * @param _isWoodpeckerCluster <p>是否是woodpecker集群</p>
                     * 
                     */
                    void SetIsWoodpeckerCluster(const uint64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     * 
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取<p>Vpc中文</p>
                     * @return VpcName <p>Vpc中文</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>Vpc中文</p>
                     * @param _vpcName <p>Vpc中文</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>子网中文</p>
                     * @return SubnetName <p>子网中文</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网中文</p>
                     * @param _subnetName <p>子网中文</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>字符串VpcId</p>
                     * @return UniqVpcId <p>字符串VpcId</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>字符串VpcId</p>
                     * @param _uniqVpcId <p>字符串VpcId</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>字符串子网</p>
                     * @return UniqSubnetId <p>字符串子网</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>字符串子网</p>
                     * @param _uniqSubnetId <p>字符串子网</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
                     * @return ClusterClass <p>集群类型</p>
                     * 
                     */
                    std::string GetClusterClass() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _clusterClass <p>集群类型</p>
                     * 
                     */
                    void SetClusterClass(const std::string& _clusterClass);

                    /**
                     * 判断参数 ClusterClass 是否已赋值
                     * @return ClusterClass 是否已赋值
                     * 
                     */
                    bool ClusterClassHasBeenSet() const;

                    /**
                     * 获取<p>是否为跨AZ集群</p>
                     * @return IsMultiZoneCluster <p>是否为跨AZ集群</p>
                     * 
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置<p>是否为跨AZ集群</p>
                     * @param _isMultiZoneCluster <p>是否为跨AZ集群</p>
                     * 
                     */
                    void SetIsMultiZoneCluster(const bool& _isMultiZoneCluster);

                    /**
                     * 判断参数 IsMultiZoneCluster 是否已赋值
                     * @return IsMultiZoneCluster 是否已赋值
                     * 
                     */
                    bool IsMultiZoneClusterHasBeenSet() const;

                    /**
                     * 获取<p>是否手戳集群</p>
                     * @return IsHandsCluster <p>是否手戳集群</p>
                     * 
                     */
                    bool GetIsHandsCluster() const;

                    /**
                     * 设置<p>是否手戳集群</p>
                     * @param _isHandsCluster <p>是否手戳集群</p>
                     * 
                     */
                    void SetIsHandsCluster(const bool& _isHandsCluster);

                    /**
                     * 判断参数 IsHandsCluster 是否已赋值
                     * @return IsHandsCluster 是否已赋值
                     * 
                     */
                    bool IsHandsClusterHasBeenSet() const;

                    /**
                     * 获取<p>体外客户端组件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutSideSoftInfo <p>体外客户端组件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SoftDependInfo> GetOutSideSoftInfo() const;

                    /**
                     * 设置<p>体外客户端组件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outSideSoftInfo <p>体外客户端组件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutSideSoftInfo(const std::vector<SoftDependInfo>& _outSideSoftInfo);

                    /**
                     * 判断参数 OutSideSoftInfo 是否已赋值
                     * @return OutSideSoftInfo 是否已赋值
                     * 
                     */
                    bool OutSideSoftInfoHasBeenSet() const;

                    /**
                     * 获取<p>当前集群的应用场景是否支持体外客户端</p>
                     * @return IsSupportOutsideCluster <p>当前集群的应用场景是否支持体外客户端</p>
                     * 
                     */
                    bool GetIsSupportOutsideCluster() const;

                    /**
                     * 设置<p>当前集群的应用场景是否支持体外客户端</p>
                     * @param _isSupportOutsideCluster <p>当前集群的应用场景是否支持体外客户端</p>
                     * 
                     */
                    void SetIsSupportOutsideCluster(const bool& _isSupportOutsideCluster);

                    /**
                     * 判断参数 IsSupportOutsideCluster 是否已赋值
                     * @return IsSupportOutsideCluster 是否已赋值
                     * 
                     */
                    bool IsSupportOutsideClusterHasBeenSet() const;

                    /**
                     * 获取<p>是否专有集群场景集群</p>
                     * @return IsDedicatedCluster <p>是否专有集群场景集群</p>
                     * 
                     */
                    bool GetIsDedicatedCluster() const;

                    /**
                     * 设置<p>是否专有集群场景集群</p>
                     * @param _isDedicatedCluster <p>是否专有集群场景集群</p>
                     * 
                     */
                    void SetIsDedicatedCluster(const bool& _isDedicatedCluster);

                    /**
                     * 判断参数 IsDedicatedCluster 是否已赋值
                     * @return IsDedicatedCluster 是否已赋值
                     * 
                     */
                    bool IsDedicatedClusterHasBeenSet() const;

                    /**
                     * 获取<p>集群支持克隆</p>
                     * @return IsSupportClone <p>集群支持克隆</p>
                     * 
                     */
                    bool GetIsSupportClone() const;

                    /**
                     * 设置<p>集群支持克隆</p>
                     * @param _isSupportClone <p>集群支持克隆</p>
                     * 
                     */
                    void SetIsSupportClone(const bool& _isSupportClone);

                    /**
                     * 判断参数 IsSupportClone 是否已赋值
                     * @return IsSupportClone 是否已赋值
                     * 
                     */
                    bool IsSupportCloneHasBeenSet() const;

                    /**
                     * 获取<p>集群包含的组件</p>
                     * @return Soft <p>集群包含的组件</p>
                     * 
                     */
                    std::vector<std::string> GetSoft() const;

                    /**
                     * 设置<p>集群包含的组件</p>
                     * @param _soft <p>集群包含的组件</p>
                     * 
                     */
                    void SetSoft(const std::vector<std::string>& _soft);

                    /**
                     * 判断参数 Soft 是否已赋值
                     * @return Soft 是否已赋值
                     * 
                     */
                    bool SoftHasBeenSet() const;

                    /**
                     * 获取<p>是否开启了实例保护</p>
                     * @return IsTerminateProtection <p>是否开启了实例保护</p>
                     * 
                     */
                    bool GetIsTerminateProtection() const;

                    /**
                     * 设置<p>是否开启了实例保护</p>
                     * @param _isTerminateProtection <p>是否开启了实例保护</p>
                     * 
                     */
                    void SetIsTerminateProtection(const bool& _isTerminateProtection);

                    /**
                     * 判断参数 IsTerminateProtection 是否已赋值
                     * @return IsTerminateProtection 是否已赋值
                     * 
                     */
                    bool IsTerminateProtectionHasBeenSet() const;

                    /**
                     * 获取<p>mcp密码信息</p>
                     * @return McpPasswordInfo <p>mcp密码信息</p>
                     * 
                     */
                    McpPasswordInfo GetMcpPasswordInfo() const;

                    /**
                     * 设置<p>mcp密码信息</p>
                     * @param _mcpPasswordInfo <p>mcp密码信息</p>
                     * 
                     */
                    void SetMcpPasswordInfo(const McpPasswordInfo& _mcpPasswordInfo);

                    /**
                     * 判断参数 McpPasswordInfo 是否已赋值
                     * @return McpPasswordInfo 是否已赋值
                     * 
                     */
                    bool McpPasswordInfoHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>集群名字</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群地域</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>用户APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>运行时间</p>
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * <p>集群IP</p>
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * <p>集群版本</p>
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * <p>集群计费类型</p>
                     */
                    uint64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>emr ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>产品ID</p>
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    uint64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>网络ID</p>
                     */
                    uint64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>地区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>告警信息</p>
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * <p>是否是woodpecker集群</p>
                     */
                    uint64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * <p>Vpc中文</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>子网中文</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>字符串VpcId</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>字符串子网</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_clusterClass;
                    bool m_clusterClassHasBeenSet;

                    /**
                     * <p>是否为跨AZ集群</p>
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * <p>是否手戳集群</p>
                     */
                    bool m_isHandsCluster;
                    bool m_isHandsClusterHasBeenSet;

                    /**
                     * <p>体外客户端组件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftDependInfo> m_outSideSoftInfo;
                    bool m_outSideSoftInfoHasBeenSet;

                    /**
                     * <p>当前集群的应用场景是否支持体外客户端</p>
                     */
                    bool m_isSupportOutsideCluster;
                    bool m_isSupportOutsideClusterHasBeenSet;

                    /**
                     * <p>是否专有集群场景集群</p>
                     */
                    bool m_isDedicatedCluster;
                    bool m_isDedicatedClusterHasBeenSet;

                    /**
                     * <p>集群支持克隆</p>
                     */
                    bool m_isSupportClone;
                    bool m_isSupportCloneHasBeenSet;

                    /**
                     * <p>集群包含的组件</p>
                     */
                    std::vector<std::string> m_soft;
                    bool m_softHasBeenSet;

                    /**
                     * <p>是否开启了实例保护</p>
                     */
                    bool m_isTerminateProtection;
                    bool m_isTerminateProtectionHasBeenSet;

                    /**
                     * <p>mcp密码信息</p>
                     */
                    McpPasswordInfo m_mcpPasswordInfo;
                    bool m_mcpPasswordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
