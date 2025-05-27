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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Addr.h>
#include <tencentcloud/cynosdb/v20190107/model/Ability.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ResourcePackage.h>
#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneAttrItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群详情详细信息
                */
                class CynosdbClusterDetail : public AbstractModel
                {
                public:
                    CynosdbClusterDetail();
                    ~CynosdbClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取物理可用区
                     * @return PhysicalZone 物理可用区
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置物理可用区
                     * @param _physicalZone 物理可用区
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param _statusDesc 状态描述
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
                     * 获取当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     * @return ServerlessStatus 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     * @param _serverlessStatus 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     * 
                     */
                    void SetServerlessStatus(const std::string& _serverlessStatus);

                    /**
                     * 判断参数 ServerlessStatus 是否已赋值
                     * @return ServerlessStatus 是否已赋值
                     * 
                     */
                    bool ServerlessStatusHasBeenSet() const;

                    /**
                     * 获取存储Id
                     * @return StorageId 存储Id
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置存储Id
                     * @param _storageId 存储Id
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取存储大小，单位为G
                     * @return Storage 存储大小，单位为G
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位为G
                     * @param _storage 存储大小，单位为G
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
                     * 获取最大存储规格，单位为G
                     * @return MaxStorageSize 最大存储规格，单位为G
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置最大存储规格，单位为G
                     * @param _maxStorageSize 最大存储规格，单位为G
                     * 
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取最小存储规格，单位为G
                     * @return MinStorageSize 最小存储规格，单位为G
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置最小存储规格，单位为G
                     * @param _minStorageSize 最小存储规格，单位为G
                     * 
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取存储付费类型，1为包年包月，0为按量计费
                     * @return StoragePayMode 存储付费类型，1为包年包月，0为按量计费
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置存储付费类型，1为包年包月，0为按量计费
                     * @param _storagePayMode 存储付费类型，1为包年包月，0为按量计费
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param _vpcName VPC名称
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
                     * 获取vpc唯一id
                     * @return VpcId vpc唯一id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc唯一id
                     * @param _vpcId vpc唯一id
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
                     * 获取子网名称
                     * @return SubnetName 子网名称
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
                     * @param _subnetName 子网名称
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取字符集
                     * @return Charset 字符集
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集
                     * @param _charset 字符集
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

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

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param _dbType 数据库类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Db类型：<li>NORMAL</li><li>SERVERLESS</li>
                     * @return DbMode Db类型：<li>NORMAL</li><li>SERVERLESS</li>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db类型：<li>NORMAL</li><li>SERVERLESS</li>
                     * @param _dbMode Db类型：<li>NORMAL</li><li>SERVERLESS</li>
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取数据库版本
                     * @return DbVersion 数据库版本
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本
                     * @param _dbVersion 数据库版本
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
                     * 获取存储空间上限
                     * @return StorageLimit 存储空间上限
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储空间上限
                     * @param _storageLimit 存储空间上限
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取使用容量
                     * @return UsedStorage 使用容量
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置使用容量
                     * @param _usedStorage 使用容量
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
                     * 获取vip地址
                     * @return Vip vip地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置vip地址
                     * @param _vip vip地址
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
                     * 获取vport端口
                     * @return Vport vport端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置vport端口
                     * @param _vport vport端口
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
                     * 获取集群只读实例的vip地址和vport端口
                     * @return RoAddr 集群只读实例的vip地址和vport端口
                     * 
                     */
                    std::vector<Addr> GetRoAddr() const;

                    /**
                     * 设置集群只读实例的vip地址和vport端口
                     * @param _roAddr 集群只读实例的vip地址和vport端口
                     * 
                     */
                    void SetRoAddr(const std::vector<Addr>& _roAddr);

                    /**
                     * 判断参数 RoAddr 是否已赋值
                     * @return RoAddr 是否已赋值
                     * 
                     */
                    bool RoAddrHasBeenSet() const;

                    /**
                     * 获取集群支持的功能
                     * @return Ability 集群支持的功能
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置集群支持的功能
                     * @param _ability 集群支持的功能
                     * 
                     */
                    void SetAbility(const Ability& _ability);

                    /**
                     * 判断参数 Ability 是否已赋值
                     * @return Ability 是否已赋值
                     * 
                     */
                    bool AbilityHasBeenSet() const;

                    /**
                     * 获取cynos版本
                     * @return CynosVersion cynos版本
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置cynos版本
                     * @param _cynosVersion cynos版本
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
                     * 获取商业类型
                     * @return BusinessType 商业类型
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置商业类型
                     * @param _businessType 商业类型
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取是否有从可用区
                     * @return HasSlaveZone 是否有从可用区
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置是否有从可用区
                     * @param _hasSlaveZone 是否有从可用区
                     * 
                     */
                    void SetHasSlaveZone(const std::string& _hasSlaveZone);

                    /**
                     * 判断参数 HasSlaveZone 是否已赋值
                     * @return HasSlaveZone 是否已赋值
                     * 
                     */
                    bool HasSlaveZoneHasBeenSet() const;

                    /**
                     * 获取是否冻结
                     * @return IsFreeze 是否冻结
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置是否冻结
                     * @param _isFreeze 是否冻结
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
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置任务列表
                     * @param _tasks 任务列表
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
                     * 获取主可用区
                     * @return MasterZone 主可用区
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区
                     * @param _masterZone 主可用区
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
                     * 获取从可用区列表
                     * @return SlaveZones 从可用区列表
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置从可用区列表
                     * @param _slaveZones 从可用区列表
                     * 
                     */
                    void SetSlaveZones(const std::vector<std::string>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取实例信息
                     * @return InstanceSet 实例信息
                     * 
                     */
                    std::vector<ClusterInstanceDetail> GetInstanceSet() const;

                    /**
                     * 设置实例信息
                     * @param _instanceSet 实例信息
                     * 
                     */
                    void SetInstanceSet(const std::vector<ClusterInstanceDetail>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
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
                     * 获取到期时间
                     * @return PeriodEndTime 到期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置到期时间
                     * @param _periodEndTime 到期时间
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
                     * 获取项目id
                     * @return ProjectID 项目id
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
                     * @param _projectID 项目id
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
                     * 获取实例绑定的tag数组信息
                     * @return ResourceTags 实例绑定的tag数组信息
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置实例绑定的tag数组信息
                     * @param _resourceTags 实例绑定的tag数组信息
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Proxy状态
                     * @return ProxyStatus Proxy状态
                     * 
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置Proxy状态
                     * @param _proxyStatus Proxy状态
                     * 
                     */
                    void SetProxyStatus(const std::string& _proxyStatus);

                    /**
                     * 判断参数 ProxyStatus 是否已赋值
                     * @return ProxyStatus 是否已赋值
                     * 
                     */
                    bool ProxyStatusHasBeenSet() const;

                    /**
                     * 获取binlog开关，可选值：ON, OFF
                     * @return LogBin binlog开关，可选值：ON, OFF
                     * 
                     */
                    std::string GetLogBin() const;

                    /**
                     * 设置binlog开关，可选值：ON, OFF
                     * @param _logBin binlog开关，可选值：ON, OFF
                     * 
                     */
                    void SetLogBin(const std::string& _logBin);

                    /**
                     * 判断参数 LogBin 是否已赋值
                     * @return LogBin 是否已赋值
                     * 
                     */
                    bool LogBinHasBeenSet() const;

                    /**
                     * 获取是否跳过交易
                     * @return IsSkipTrade 是否跳过交易
                     * 
                     */
                    std::string GetIsSkipTrade() const;

                    /**
                     * 设置是否跳过交易
                     * @param _isSkipTrade 是否跳过交易
                     * 
                     */
                    void SetIsSkipTrade(const std::string& _isSkipTrade);

                    /**
                     * 判断参数 IsSkipTrade 是否已赋值
                     * @return IsSkipTrade 是否已赋值
                     * 
                     */
                    bool IsSkipTradeHasBeenSet() const;

                    /**
                     * 获取pitr类型，可选值：normal, redo_pitr
                     * @return PitrType pitr类型，可选值：normal, redo_pitr
                     * 
                     */
                    std::string GetPitrType() const;

                    /**
                     * 设置pitr类型，可选值：normal, redo_pitr
                     * @param _pitrType pitr类型，可选值：normal, redo_pitr
                     * 
                     */
                    void SetPitrType(const std::string& _pitrType);

                    /**
                     * 判断参数 PitrType 是否已赋值
                     * @return PitrType 是否已赋值
                     * 
                     */
                    bool PitrTypeHasBeenSet() const;

                    /**
                     * 获取是否打开密码复杂度
                     * @return IsOpenPasswordComplexity 是否打开密码复杂度
                     * 
                     */
                    std::string GetIsOpenPasswordComplexity() const;

                    /**
                     * 设置是否打开密码复杂度
                     * @param _isOpenPasswordComplexity 是否打开密码复杂度
                     * 
                     */
                    void SetIsOpenPasswordComplexity(const std::string& _isOpenPasswordComplexity);

                    /**
                     * 判断参数 IsOpenPasswordComplexity 是否已赋值
                     * @return IsOpenPasswordComplexity 是否已赋值
                     * 
                     */
                    bool IsOpenPasswordComplexityHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetworkStatus 网络类型
                     * 
                     */
                    std::string GetNetworkStatus() const;

                    /**
                     * 设置网络类型
                     * @param _networkStatus 网络类型
                     * 
                     */
                    void SetNetworkStatus(const std::string& _networkStatus);

                    /**
                     * 判断参数 NetworkStatus 是否已赋值
                     * @return NetworkStatus 是否已赋值
                     * 
                     */
                    bool NetworkStatusHasBeenSet() const;

                    /**
                     * 获取集群绑定的资源包信息	
                     * @return ResourcePackages 集群绑定的资源包信息	
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置集群绑定的资源包信息	
                     * @param _resourcePackages 集群绑定的资源包信息	
                     * 
                     */
                    void SetResourcePackages(const std::vector<ResourcePackage>& _resourcePackages);

                    /**
                     * 判断参数 ResourcePackages 是否已赋值
                     * @return ResourcePackages 是否已赋值
                     * 
                     */
                    bool ResourcePackagesHasBeenSet() const;

                    /**
                     * 获取自动续费标识，1为自动续费，0为到期不续
                     * @return RenewFlag 自动续费标识，1为自动续费，0为到期不续
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标识，1为自动续费，0为到期不续
                     * @param _renewFlag 自动续费标识，1为自动续费，0为到期不续
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
                     * 获取节点网络类型
                     * @return NetworkType 节点网络类型
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置节点网络类型
                     * @param _networkType 节点网络类型
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取备可用区属性
                     * @return SlaveZoneAttr 备可用区属性
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetSlaveZoneAttr() const;

                    /**
                     * 设置备可用区属性
                     * @param _slaveZoneAttr 备可用区属性
                     * 
                     */
                    void SetSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _slaveZoneAttr);

                    /**
                     * 判断参数 SlaveZoneAttr 是否已赋值
                     * @return SlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool SlaveZoneAttrHasBeenSet() const;

                    /**
                     * 获取版本标签
                     * @return CynosVersionTag 版本标签
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置版本标签
                     * @param _cynosVersionTag 版本标签
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
                     * 获取全球数据库网络唯一标识
                     * @return GdnId 全球数据库网络唯一标识
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置全球数据库网络唯一标识
                     * @param _gdnId 全球数据库网络唯一标识
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取集群在全球数据网络中的角色。
主集群- primary
从集群 - standby
如为空，该字段无效
                     * @return GdnRole 集群在全球数据网络中的角色。
主集群- primary
从集群 - standby
如为空，该字段无效
                     * 
                     */
                    std::string GetGdnRole() const;

                    /**
                     * 设置集群在全球数据网络中的角色。
主集群- primary
从集群 - standby
如为空，该字段无效
                     * @param _gdnRole 集群在全球数据网络中的角色。
主集群- primary
从集群 - standby
如为空，该字段无效
                     * 
                     */
                    void SetGdnRole(const std::string& _gdnRole);

                    /**
                     * 判断参数 GdnRole 是否已赋值
                     * @return GdnRole 是否已赋值
                     * 
                     */
                    bool GdnRoleHasBeenSet() const;

                    /**
                     * 获取二级存储使用量，单位：G
                     * @return UsedArchiveStorage 二级存储使用量，单位：G
                     * 
                     */
                    int64_t GetUsedArchiveStorage() const;

                    /**
                     * 设置二级存储使用量，单位：G
                     * @param _usedArchiveStorage 二级存储使用量，单位：G
                     * 
                     */
                    void SetUsedArchiveStorage(const int64_t& _usedArchiveStorage);

                    /**
                     * 判断参数 UsedArchiveStorage 是否已赋值
                     * @return UsedArchiveStorage 是否已赋值
                     * 
                     */
                    bool UsedArchiveStorageHasBeenSet() const;

                    /**
                     * 获取归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li>
                     * @return ArchiveStatus 归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li>
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li>
                     * @param _archiveStatus 归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li>
                     * 
                     */
                    void SetArchiveStatus(const std::string& _archiveStatus);

                    /**
                     * 判断参数 ArchiveStatus 是否已赋值
                     * @return ArchiveStatus 是否已赋值
                     * 
                     */
                    bool ArchiveStatusHasBeenSet() const;

                    /**
                     * 获取归档进度，百分比。
                     * @return ArchiveProgress 归档进度，百分比。
                     * 
                     */
                    int64_t GetArchiveProgress() const;

                    /**
                     * 设置归档进度，百分比。
                     * @param _archiveProgress 归档进度，百分比。
                     * 
                     */
                    void SetArchiveProgress(const int64_t& _archiveProgress);

                    /**
                     * 判断参数 ArchiveProgress 是否已赋值
                     * @return ArchiveProgress 是否已赋值
                     * 
                     */
                    bool ArchiveProgressHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 物理可用区
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * 存储Id
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 存储大小，单位为G
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 最大存储规格，单位为G
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 最小存储规格，单位为G
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * 存储付费类型，1为包年包月，0为按量计费
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * VPC名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * vpc唯一id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 字符集
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Db类型：<li>NORMAL</li><li>SERVERLESS</li>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 数据库版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 存储空间上限
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 使用容量
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * vip地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * vport端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 集群只读实例的vip地址和vport端口
                     */
                    std::vector<Addr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * 集群支持的功能
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * cynos版本
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 商业类型
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 是否有从可用区
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * 是否冻结
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * 任务列表
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 主可用区
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 从可用区列表
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * 实例信息
                     */
                    std::vector<ClusterInstanceDetail> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 实例绑定的tag数组信息
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Proxy状态
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                    /**
                     * binlog开关，可选值：ON, OFF
                     */
                    std::string m_logBin;
                    bool m_logBinHasBeenSet;

                    /**
                     * 是否跳过交易
                     */
                    std::string m_isSkipTrade;
                    bool m_isSkipTradeHasBeenSet;

                    /**
                     * pitr类型，可选值：normal, redo_pitr
                     */
                    std::string m_pitrType;
                    bool m_pitrTypeHasBeenSet;

                    /**
                     * 是否打开密码复杂度
                     */
                    std::string m_isOpenPasswordComplexity;
                    bool m_isOpenPasswordComplexityHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                    /**
                     * 集群绑定的资源包信息	
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * 自动续费标识，1为自动续费，0为到期不续
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 节点网络类型
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 备可用区属性
                     */
                    std::vector<SlaveZoneAttrItem> m_slaveZoneAttr;
                    bool m_slaveZoneAttrHasBeenSet;

                    /**
                     * 版本标签
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * 全球数据库网络唯一标识
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * 集群在全球数据网络中的角色。
主集群- primary
从集群 - standby
如为空，该字段无效
                     */
                    std::string m_gdnRole;
                    bool m_gdnRoleHasBeenSet;

                    /**
                     * 二级存储使用量，单位：G
                     */
                    int64_t m_usedArchiveStorage;
                    bool m_usedArchiveStorageHasBeenSet;

                    /**
                     * 归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li>
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * 归档进度，百分比。
                     */
                    int64_t m_archiveProgress;
                    bool m_archiveProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
