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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RoAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceSet.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeAnalysisInstanceVersionInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra集群详情
                */
                class LibraDBClusterDetail : public AbstractModel
                {
                public:
                    LibraDBClusterDetail();
                    ~LibraDBClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>状态描述</p>
                     * @return StatusDesc <p>状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>状态描述</p>
                     * @param _statusDesc <p>状态描述</p>
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
                     * 获取<p>存储大小</p>
                     * @return Storage <p>存储大小</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>存储大小</p>
                     * @param _storage <p>存储大小</p>
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>VPC名称</p>
                     * @return VpcName <p>VPC名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC名称</p>
                     * @param _vpcName <p>VPC名称</p>
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
                     * 获取<p>vpc唯一id</p>
                     * @return VpcId <p>vpc唯一id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc唯一id</p>
                     * @param _vpcId <p>vpc唯一id</p>
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
                     * 获取<p>子网名称</p>
                     * @return SubnetName <p>子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subnetName <p>子网名称</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本</p>
                     * @return DbVersion <p>数据库版本</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>数据库版本</p>
                     * @param _dbVersion <p>数据库版本</p>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取<p>使用容量</p>
                     * @return UsedStorage <p>使用容量</p>
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置<p>使用容量</p>
                     * @param _usedStorage <p>使用容量</p>
                     * 
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     * 
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取<p>vip地址</p>
                     * @return Vip <p>vip地址</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip地址</p>
                     * @param _vip <p>vip地址</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>vport端口</p>
                     * @return Vport <p>vport端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>vport端口</p>
                     * @param _vport <p>vport端口</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>集群只读实例的vip地址和vport端口</p>
                     * @return RoAddr <p>集群只读实例的vip地址和vport端口</p>
                     * 
                     */
                    std::vector<RoAddr> GetRoAddr() const;

                    /**
                     * 设置<p>集群只读实例的vip地址和vport端口</p>
                     * @param _roAddr <p>集群只读实例的vip地址和vport端口</p>
                     * 
                     */
                    void SetRoAddr(const std::vector<RoAddr>& _roAddr);

                    /**
                     * 判断参数 RoAddr 是否已赋值
                     * @return RoAddr 是否已赋值
                     * 
                     */
                    bool RoAddrHasBeenSet() const;

                    /**
                     * 获取<p>cynos版本</p>
                     * @return CynosVersion <p>cynos版本</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>cynos版本</p>
                     * @param _cynosVersion <p>cynos版本</p>
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否冻结</p>
                     * @return IsFreeze <p>是否冻结</p>
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置<p>是否冻结</p>
                     * @param _isFreeze <p>是否冻结</p>
                     * 
                     */
                    void SetIsFreeze(const std::string& _isFreeze);

                    /**
                     * 判断参数 IsFreeze 是否已赋值
                     * @return IsFreeze 是否已赋值
                     * 
                     */
                    bool IsFreezeHasBeenSet() const;

                    /**
                     * 获取<p>任务列表</p>
                     * @return Tasks <p>任务列表</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>任务列表</p>
                     * @param _tasks <p>任务列表</p>
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>主可用区</p>
                     * @return MasterZone <p>主可用区</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>主可用区</p>
                     * @param _masterZone <p>主可用区</p>
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取<p>实例集合</p>
                     * @return InstanceSet <p>实例集合</p>
                     * 
                     */
                    std::vector<InstanceSet> GetInstanceSet() const;

                    /**
                     * 设置<p>实例集合</p>
                     * @param _instanceSet <p>实例集合</p>
                     * 
                     */
                    void SetInstanceSet(const std::vector<InstanceSet>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>到期时间</p>
                     * @return PeriodEndTime <p>到期时间</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>到期时间</p>
                     * @param _periodEndTime <p>到期时间</p>
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectID <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectID <p>项目id</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识</p>
                     * @return RenewFlag <p>自动续费标识</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识</p>
                     * @param _renewFlag <p>自动续费标识</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>版本标签</p>
                     * @return CynosVersionTag <p>版本标签</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>版本标签</p>
                     * @param _cynosVersionTag <p>版本标签</p>
                     * 
                     */
                    void SetCynosVersionTag(const std::string& _cynosVersionTag);

                    /**
                     * 判断参数 CynosVersionTag 是否已赋值
                     * @return CynosVersionTag 是否已赋值
                     * 
                     */
                    bool CynosVersionTagHasBeenSet() const;

                    /**
                     * 获取<p>不支持添加ro yes-不支持添加ro， no/null/&quot;&quot; 支持添加ro</p>
                     * @return NoSupportAddRo <p>不支持添加ro yes-不支持添加ro， no/null/&quot;&quot; 支持添加ro</p>
                     * 
                     */
                    std::string GetNoSupportAddRo() const;

                    /**
                     * 设置<p>不支持添加ro yes-不支持添加ro， no/null/&quot;&quot; 支持添加ro</p>
                     * @param _noSupportAddRo <p>不支持添加ro yes-不支持添加ro， no/null/&quot;&quot; 支持添加ro</p>
                     * 
                     */
                    void SetNoSupportAddRo(const std::string& _noSupportAddRo);

                    /**
                     * 判断参数 NoSupportAddRo 是否已赋值
                     * @return NoSupportAddRo 是否已赋值
                     * 
                     */
                    bool NoSupportAddRoHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>物理可用区</p>
                     * @return PhysicalZone <p>物理可用区</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>物理可用区</p>
                     * @param _physicalZone <p>物理可用区</p>
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取<p>版本升级灰度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisUpgradeVersionInfo <p>版本升级灰度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpgradeAnalysisInstanceVersionInfo GetAnalysisUpgradeVersionInfo() const;

                    /**
                     * 设置<p>版本升级灰度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisUpgradeVersionInfo <p>版本升级灰度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnalysisUpgradeVersionInfo(const UpgradeAnalysisInstanceVersionInfo& _analysisUpgradeVersionInfo);

                    /**
                     * 判断参数 AnalysisUpgradeVersionInfo 是否已赋值
                     * @return AnalysisUpgradeVersionInfo 是否已赋值
                     * 
                     */
                    bool AnalysisUpgradeVersionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>存储大小</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>VPC名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>vpc唯一id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>使用容量</p>
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * <p>vip地址</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>vport端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>集群只读实例的vip地址和vport端口</p>
                     */
                    std::vector<RoAddr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * <p>cynos版本</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>是否冻结</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>任务列表</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>主可用区</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>实例集合</p>
                     */
                    std::vector<InstanceSet> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>到期时间</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>自动续费标识</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>版本标签</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>不支持添加ro yes-不支持添加ro， no/null/&quot;&quot; 支持添加ro</p>
                     */
                    std::string m_noSupportAddRo;
                    bool m_noSupportAddRoHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>物理可用区</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>版本升级灰度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpgradeAnalysisInstanceVersionInfo m_analysisUpgradeVersionInfo;
                    bool m_analysisUpgradeVersionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_
