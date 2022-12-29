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
#include <tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/Ability.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


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
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param Status 状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param StatusDesc 状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param VpcName VPC名称
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取vpc唯一id
                     * @return VpcId vpc唯一id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc唯一id
                     * @param VpcId vpc唯一id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网名称
                     * @return SubnetName 子网名称
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
                     * @param SubnetName 子网名称
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param SubnetId 子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取字符集
                     * @return Charset 字符集
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置字符集
                     * @param Charset 字符集
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param DbType 数据库类型
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取数据库版本
                     * @return DbVersion 数据库版本
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本
                     * @param DbVersion 数据库版本
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取使用容量
                     * @return UsedStorage 使用容量
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置使用容量
                     * @param UsedStorage 使用容量
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取读写分离Vport
                     * @return RoAddr 读写分离Vport
                     */
                    std::vector<Addr> GetRoAddr() const;

                    /**
                     * 设置读写分离Vport
                     * @param RoAddr 读写分离Vport
                     */
                    void SetRoAddr(const std::vector<Addr>& _roAddr);

                    /**
                     * 判断参数 RoAddr 是否已赋值
                     * @return RoAddr 是否已赋值
                     */
                    bool RoAddrHasBeenSet() const;

                    /**
                     * 获取实例信息
                     * @return InstanceSet 实例信息
                     */
                    std::vector<ClusterInstanceDetail> GetInstanceSet() const;

                    /**
                     * 设置实例信息
                     * @param InstanceSet 实例信息
                     */
                    void SetInstanceSet(const std::vector<ClusterInstanceDetail>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param PayMode 付费模式
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return PeriodEndTime 到期时间
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置到期时间
                     * @param PeriodEndTime 到期时间
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取vip地址
                     * @return Vip vip地址
                     */
                    std::string GetVip() const;

                    /**
                     * 设置vip地址
                     * @param Vip vip地址
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取vport端口
                     * @return Vport vport端口
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置vport端口
                     * @param Vport vport端口
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectID 项目id
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目id
                     * @param ProjectID 项目id
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例绑定的tag数组信息
                     * @return ResourceTags 实例绑定的tag数组信息
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置实例绑定的tag数组信息
                     * @param ResourceTags 实例绑定的tag数组信息
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

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
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     * @param ServerlessStatus 当Db类型为SERVERLESS时，serverless集群状态，可选值:
resume
resuming
pause
pausing
                     */
                    void SetServerlessStatus(const std::string& _serverlessStatus);

                    /**
                     * 判断参数 ServerlessStatus 是否已赋值
                     * @return ServerlessStatus 是否已赋值
                     */
                    bool ServerlessStatusHasBeenSet() const;

                    /**
                     * 获取binlog开关，可选值：ON, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogBin binlog开关，可选值：ON, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogBin() const;

                    /**
                     * 设置binlog开关，可选值：ON, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogBin binlog开关，可选值：ON, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogBin(const std::string& _logBin);

                    /**
                     * 判断参数 LogBin 是否已赋值
                     * @return LogBin 是否已赋值
                     */
                    bool LogBinHasBeenSet() const;

                    /**
                     * 获取pitr类型，可选值：normal, redo_pitr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PitrType pitr类型，可选值：normal, redo_pitr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPitrType() const;

                    /**
                     * 设置pitr类型，可选值：normal, redo_pitr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PitrType pitr类型，可选值：normal, redo_pitr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPitrType(const std::string& _pitrType);

                    /**
                     * 判断参数 PitrType 是否已赋值
                     * @return PitrType 是否已赋值
                     */
                    bool PitrTypeHasBeenSet() const;

                    /**
                     * 获取物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalZone 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PhysicalZone 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取存储Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageId 存储Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置存储Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageId 存储Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取存储大小，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Storage 存储大小，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Storage 存储大小，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取最大存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStorageSize 最大存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置最大存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxStorageSize 最大存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取最小存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinStorageSize 最小存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置最小存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinStorageSize 最小存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取存储付费类型，1为包年包月，0为按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoragePayMode 存储付费类型，1为包年包月，0为按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置存储付费类型，1为包年包月，0为按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StoragePayMode 存储付费类型，1为包年包月，0为按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取数据库类型，normal，serverless
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbMode 数据库类型，normal，serverless
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置数据库类型，normal，serverless
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbMode 数据库类型，normal，serverless
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取存储空间上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimit 存储空间上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储空间上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageLimit 存储空间上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取集群支持的功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ability 集群支持的功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置集群支持的功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ability 集群支持的功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAbility(const Ability& _ability);

                    /**
                     * 判断参数 Ability 是否已赋值
                     * @return Ability 是否已赋值
                     */
                    bool AbilityHasBeenSet() const;

                    /**
                     * 获取cynos版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CynosVersion cynos版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置cynos版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CynosVersion cynos版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessType 商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BusinessType 商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasSlaveZone 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HasSlaveZone 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHasSlaveZone(const std::string& _hasSlaveZone);

                    /**
                     * 判断参数 HasSlaveZone 是否已赋值
                     * @return HasSlaveZone 是否已赋值
                     */
                    bool HasSlaveZoneHasBeenSet() const;

                    /**
                     * 获取是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFreeze 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsFreeze 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsFreeze(const std::string& _isFreeze);

                    /**
                     * 判断参数 IsFreeze 是否已赋值
                     * @return IsFreeze 是否已赋值
                     */
                    bool IsFreezeHasBeenSet() const;

                    /**
                     * 获取任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tasks 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取从可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZones 从可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置从可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SlaveZones 从可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSlaveZones(const std::vector<std::string>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取Proxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyStatus Proxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置Proxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyStatus Proxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyStatus(const std::string& _proxyStatus);

                    /**
                     * 判断参数 ProxyStatus 是否已赋值
                     * @return ProxyStatus 是否已赋值
                     */
                    bool ProxyStatusHasBeenSet() const;

                    /**
                     * 获取是否跳过交易
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSkipTrade 是否跳过交易
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsSkipTrade() const;

                    /**
                     * 设置是否跳过交易
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSkipTrade 是否跳过交易
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSkipTrade(const std::string& _isSkipTrade);

                    /**
                     * 判断参数 IsSkipTrade 是否已赋值
                     * @return IsSkipTrade 是否已赋值
                     */
                    bool IsSkipTradeHasBeenSet() const;

                    /**
                     * 获取是否打开密码复杂度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpenPasswordComplexity 是否打开密码复杂度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsOpenPasswordComplexity() const;

                    /**
                     * 设置是否打开密码复杂度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsOpenPasswordComplexity 是否打开密码复杂度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsOpenPasswordComplexity(const std::string& _isOpenPasswordComplexity);

                    /**
                     * 判断参数 IsOpenPasswordComplexity 是否已赋值
                     * @return IsOpenPasswordComplexity 是否已赋值
                     */
                    bool IsOpenPasswordComplexityHasBeenSet() const;

                    /**
                     * 获取网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkStatus 网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNetworkStatus() const;

                    /**
                     * 设置网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetworkStatus 网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetworkStatus(const std::string& _networkStatus);

                    /**
                     * 判断参数 NetworkStatus 是否已赋值
                     * @return NetworkStatus 是否已赋值
                     */
                    bool NetworkStatusHasBeenSet() const;

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
                     * 数据库版本
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 使用容量
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * 读写分离Vport
                     */
                    std::vector<Addr> m_roAddr;
                    bool m_roAddrHasBeenSet;

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
                     * 项目id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例绑定的tag数组信息
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

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
                     * binlog开关，可选值：ON, OFF
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logBin;
                    bool m_logBinHasBeenSet;

                    /**
                     * pitr类型，可选值：normal, redo_pitr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pitrType;
                    bool m_pitrTypeHasBeenSet;

                    /**
                     * 物理可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * 存储Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 存储大小，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 最大存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 最小存储规格，单位为G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * 存储付费类型，1为包年包月，0为按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 数据库类型，normal，serverless
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 存储空间上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 集群支持的功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * cynos版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 商业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 是否有从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

                    /**
                     * 是否冻结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 从可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * Proxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                    /**
                     * 是否跳过交易
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isSkipTrade;
                    bool m_isSkipTradeHasBeenSet;

                    /**
                     * 是否打开密码复杂度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isOpenPasswordComplexity;
                    bool m_isOpenPasswordComplexityHasBeenSet;

                    /**
                     * 网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
