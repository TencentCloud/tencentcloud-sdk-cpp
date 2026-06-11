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
                     * 获取<p>状态，支持的值如下：</p><ul><li>creating：创建中</li><li>running：运行中</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>activating：从回收站重新恢复</li><li>offlining：下线中</li><li>offlined：已下线</li><li>deleting：删除中</li><li>deleted：已删除</li></ul>
                     * @return Status <p>状态，支持的值如下：</p><ul><li>creating：创建中</li><li>running：运行中</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>activating：从回收站重新恢复</li><li>offlining：下线中</li><li>offlined：已下线</li><li>deleting：删除中</li><li>deleted：已删除</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态，支持的值如下：</p><ul><li>creating：创建中</li><li>running：运行中</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>activating：从回收站重新恢复</li><li>offlining：下线中</li><li>offlined：已下线</li><li>deleting：删除中</li><li>deleted：已删除</li></ul>
                     * @param _status <p>状态，支持的值如下：</p><ul><li>creating：创建中</li><li>running：运行中</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>activating：从回收站重新恢复</li><li>offlining：下线中</li><li>offlined：已下线</li><li>deleting：删除中</li><li>deleted：已删除</li></ul>
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
                     * 获取<p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * @return ServerlessStatus <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置<p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>resuming<br>pause<br>pausing</p>
                     * @param _serverlessStatus <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>resuming<br>pause<br>pausing</p>
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
                     * 获取<p>存储Id</p>
                     * @return StorageId <p>存储Id</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>存储Id</p>
                     * @param _storageId <p>存储Id</p>
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
                     * 获取<p>存储大小，单位为G</p>
                     * @return Storage <p>存储大小，单位为G</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>存储大小，单位为G</p>
                     * @param _storage <p>存储大小，单位为G</p>
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
                     * 获取<p>最大存储规格，单位为G</p>
                     * @return MaxStorageSize <p>最大存储规格，单位为G</p>
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置<p>最大存储规格，单位为G</p>
                     * @param _maxStorageSize <p>最大存储规格，单位为G</p>
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
                     * 获取<p>最小存储规格，单位为G</p>
                     * @return MinStorageSize <p>最小存储规格，单位为G</p>
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置<p>最小存储规格，单位为G</p>
                     * @param _minStorageSize <p>最小存储规格，单位为G</p>
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
                     * 获取<p>存储付费类型，1为包年包月，0为按量计费</p>
                     * @return StoragePayMode <p>存储付费类型，1为包年包月，0为按量计费</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>存储付费类型，1为包年包月，0为按量计费</p>
                     * @param _storagePayMode <p>存储付费类型，1为包年包月，0为按量计费</p>
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
                     * 获取<p>字符集</p>
                     * @return Charset <p>字符集</p>
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置<p>字符集</p>
                     * @param _charset <p>字符集</p>
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
                     * 获取<p>数据库类型</p>
                     * @return DbType <p>数据库类型</p>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型</p>
                     * @param _dbType <p>数据库类型</p>
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
                     * 获取<p>Db类型：<li>NORMAL</li><li>SERVERLESS</li></p>
                     * @return DbMode <p>Db类型：<li>NORMAL</li><li>SERVERLESS</li></p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db类型：<li>NORMAL</li><li>SERVERLESS</li></p>
                     * @param _dbMode <p>Db类型：<li>NORMAL</li><li>SERVERLESS</li></p>
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
                     * 获取<p>存储空间上限</p>
                     * @return StorageLimit <p>存储空间上限</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>存储空间上限</p>
                     * @param _storageLimit <p>存储空间上限</p>
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
                    std::vector<Addr> GetRoAddr() const;

                    /**
                     * 设置<p>集群只读实例的vip地址和vport端口</p>
                     * @param _roAddr <p>集群只读实例的vip地址和vport端口</p>
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
                     * 获取<p>集群支持的功能</p>
                     * @return Ability <p>集群支持的功能</p>
                     * 
                     */
                    Ability GetAbility() const;

                    /**
                     * 设置<p>集群支持的功能</p>
                     * @param _ability <p>集群支持的功能</p>
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
                     * 获取<p>商业类型</p>
                     * @return BusinessType <p>商业类型</p>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>商业类型</p>
                     * @param _businessType <p>商业类型</p>
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
                     * 获取<p>是否有从可用区</p>
                     * @return HasSlaveZone <p>是否有从可用区</p>
                     * 
                     */
                    std::string GetHasSlaveZone() const;

                    /**
                     * 设置<p>是否有从可用区</p>
                     * @param _hasSlaveZone <p>是否有从可用区</p>
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
                     * 获取<p>从可用区列表</p>
                     * @return SlaveZones <p>从可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>从可用区列表</p>
                     * @param _slaveZones <p>从可用区列表</p>
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
                     * 获取<p>实例信息</p>
                     * @return InstanceSet <p>实例信息</p>
                     * 
                     */
                    std::vector<ClusterInstanceDetail> GetInstanceSet() const;

                    /**
                     * 设置<p>实例信息</p>
                     * @param _instanceSet <p>实例信息</p>
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
                     * 获取<p>实例绑定的tag数组信息</p>
                     * @return ResourceTags <p>实例绑定的tag数组信息</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>实例绑定的tag数组信息</p>
                     * @param _resourceTags <p>实例绑定的tag数组信息</p>
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
                     * 获取<p>Proxy状态</p>
                     * @return ProxyStatus <p>Proxy状态</p>
                     * 
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置<p>Proxy状态</p>
                     * @param _proxyStatus <p>Proxy状态</p>
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
                     * 获取<p>binlog开关，可选值：ON, OFF</p>
                     * @return LogBin <p>binlog开关，可选值：ON, OFF</p>
                     * 
                     */
                    std::string GetLogBin() const;

                    /**
                     * 设置<p>binlog开关，可选值：ON, OFF</p>
                     * @param _logBin <p>binlog开关，可选值：ON, OFF</p>
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
                     * 获取<p>是否跳过交易</p>
                     * @return IsSkipTrade <p>是否跳过交易</p>
                     * 
                     */
                    std::string GetIsSkipTrade() const;

                    /**
                     * 设置<p>是否跳过交易</p>
                     * @param _isSkipTrade <p>是否跳过交易</p>
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
                     * 获取<p>pitr类型，可选值：normal, redo_pitr</p>
                     * @return PitrType <p>pitr类型，可选值：normal, redo_pitr</p>
                     * 
                     */
                    std::string GetPitrType() const;

                    /**
                     * 设置<p>pitr类型，可选值：normal, redo_pitr</p>
                     * @param _pitrType <p>pitr类型，可选值：normal, redo_pitr</p>
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
                     * 获取<p>是否打开密码复杂度</p>
                     * @return IsOpenPasswordComplexity <p>是否打开密码复杂度</p>
                     * 
                     */
                    std::string GetIsOpenPasswordComplexity() const;

                    /**
                     * 设置<p>是否打开密码复杂度</p>
                     * @param _isOpenPasswordComplexity <p>是否打开密码复杂度</p>
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
                     * 获取<p>网络类型</p>
                     * @return NetworkStatus <p>网络类型</p>
                     * 
                     */
                    std::string GetNetworkStatus() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _networkStatus <p>网络类型</p>
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
                     * 获取<p>集群绑定的资源包信息</p>
                     * @return ResourcePackages <p>集群绑定的资源包信息</p>
                     * 
                     */
                    std::vector<ResourcePackage> GetResourcePackages() const;

                    /**
                     * 设置<p>集群绑定的资源包信息</p>
                     * @param _resourcePackages <p>集群绑定的资源包信息</p>
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
                     * 获取<p>自动续费标识，1为自动续费，0为到期不续</p>
                     * @return RenewFlag <p>自动续费标识，1为自动续费，0为到期不续</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识，1为自动续费，0为到期不续</p>
                     * @param _renewFlag <p>自动续费标识，1为自动续费，0为到期不续</p>
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
                     * 获取<p>节点网络类型</p>
                     * @return NetworkType <p>节点网络类型</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>节点网络类型</p>
                     * @param _networkType <p>节点网络类型</p>
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
                     * 获取<p>备可用区属性</p>
                     * @return SlaveZoneAttr <p>备可用区属性</p>
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetSlaveZoneAttr() const;

                    /**
                     * 设置<p>备可用区属性</p>
                     * @param _slaveZoneAttr <p>备可用区属性</p>
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
                     * 获取<p>全球数据库网络唯一标识</p>
                     * @return GdnId <p>全球数据库网络唯一标识</p>
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置<p>全球数据库网络唯一标识</p>
                     * @param _gdnId <p>全球数据库网络唯一标识</p>
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
                     * 获取<p>集群在全球数据网络中的角色。<br>主集群- primary<br>从集群 - standby<br>如为空，该字段无效</p>
                     * @return GdnRole <p>集群在全球数据网络中的角色。<br>主集群- primary<br>从集群 - standby<br>如为空，该字段无效</p>
                     * 
                     */
                    std::string GetGdnRole() const;

                    /**
                     * 设置<p>集群在全球数据网络中的角色。<br>主集群- primary<br>从集群 - standby<br>如为空，该字段无效</p>
                     * @param _gdnRole <p>集群在全球数据网络中的角色。<br>主集群- primary<br>从集群 - standby<br>如为空，该字段无效</p>
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
                     * 获取<p>二级存储使用量，单位：G</p>
                     * @return UsedArchiveStorage <p>二级存储使用量，单位：G</p>
                     * 
                     */
                    int64_t GetUsedArchiveStorage() const;

                    /**
                     * 设置<p>二级存储使用量，单位：G</p>
                     * @param _usedArchiveStorage <p>二级存储使用量，单位：G</p>
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
                     * 获取<p>归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li></p>
                     * @return ArchiveStatus <p>归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li></p>
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置<p>归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li></p>
                     * @param _archiveStatus <p>归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li></p>
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
                     * 获取<p>归档进度，百分比。</p>
                     * @return ArchiveProgress <p>归档进度，百分比。</p>
                     * 
                     */
                    int64_t GetArchiveProgress() const;

                    /**
                     * 设置<p>归档进度，百分比。</p>
                     * @param _archiveProgress <p>归档进度，百分比。</p>
                     * 
                     */
                    void SetArchiveProgress(const int64_t& _archiveProgress);

                    /**
                     * 判断参数 ArchiveProgress 是否已赋值
                     * @return ArchiveProgress 是否已赋值
                     * 
                     */
                    bool ArchiveProgressHasBeenSet() const;

                    /**
                     * 获取<p>集群级别。例如 P0, P1</p>
                     * @return ClusterLevel <p>集群级别。例如 P0, P1</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>集群级别。例如 P0, P1</p>
                     * @param _clusterLevel <p>集群级别。例如 P0, P1</p>
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取<p>是否开启透明加密</p>
                     * @return IsOpenTDE <p>是否开启透明加密</p>
                     * 
                     */
                    bool GetIsOpenTDE() const;

                    /**
                     * 设置<p>是否开启透明加密</p>
                     * @param _isOpenTDE <p>是否开启透明加密</p>
                     * 
                     */
                    void SetIsOpenTDE(const bool& _isOpenTDE);

                    /**
                     * 判断参数 IsOpenTDE 是否已赋值
                     * @return IsOpenTDE 是否已赋值
                     * 
                     */
                    bool IsOpenTDEHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
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
                     * <p>状态，支持的值如下：</p><ul><li>creating：创建中</li><li>running：运行中</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>activating：从回收站重新恢复</li><li>offlining：下线中</li><li>offlined：已下线</li><li>deleting：删除中</li><li>deleted：已删除</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>当Db类型为SERVERLESS时，serverless集群状态，可选值:<br>resume<br>resuming<br>pause<br>pausing</p>
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                    /**
                     * <p>存储Id</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>存储大小，单位为G</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>最大存储规格，单位为G</p>
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * <p>最小存储规格，单位为G</p>
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * <p>存储付费类型，1为包年包月，0为按量计费</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

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
                     * <p>字符集</p>
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>数据库类型</p>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Db类型：<li>NORMAL</li><li>SERVERLESS</li></p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>数据库版本</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>存储空间上限</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

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
                    std::vector<Addr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * <p>集群支持的功能</p>
                     */
                    Ability m_ability;
                    bool m_abilityHasBeenSet;

                    /**
                     * <p>cynos版本</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>商业类型</p>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>是否有从可用区</p>
                     */
                    std::string m_hasSlaveZone;
                    bool m_hasSlaveZoneHasBeenSet;

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
                     * <p>从可用区列表</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>实例信息</p>
                     */
                    std::vector<ClusterInstanceDetail> m_instanceSet;
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
                     * <p>实例绑定的tag数组信息</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Proxy状态</p>
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                    /**
                     * <p>binlog开关，可选值：ON, OFF</p>
                     */
                    std::string m_logBin;
                    bool m_logBinHasBeenSet;

                    /**
                     * <p>是否跳过交易</p>
                     */
                    std::string m_isSkipTrade;
                    bool m_isSkipTradeHasBeenSet;

                    /**
                     * <p>pitr类型，可选值：normal, redo_pitr</p>
                     */
                    std::string m_pitrType;
                    bool m_pitrTypeHasBeenSet;

                    /**
                     * <p>是否打开密码复杂度</p>
                     */
                    std::string m_isOpenPasswordComplexity;
                    bool m_isOpenPasswordComplexityHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_networkStatus;
                    bool m_networkStatusHasBeenSet;

                    /**
                     * <p>集群绑定的资源包信息</p>
                     */
                    std::vector<ResourcePackage> m_resourcePackages;
                    bool m_resourcePackagesHasBeenSet;

                    /**
                     * <p>自动续费标识，1为自动续费，0为到期不续</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>节点网络类型</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>备可用区属性</p>
                     */
                    std::vector<SlaveZoneAttrItem> m_slaveZoneAttr;
                    bool m_slaveZoneAttrHasBeenSet;

                    /**
                     * <p>版本标签</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>全球数据库网络唯一标识</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>集群在全球数据网络中的角色。<br>主集群- primary<br>从集群 - standby<br>如为空，该字段无效</p>
                     */
                    std::string m_gdnRole;
                    bool m_gdnRoleHasBeenSet;

                    /**
                     * <p>二级存储使用量，单位：G</p>
                     */
                    int64_t m_usedArchiveStorage;
                    bool m_usedArchiveStorageHasBeenSet;

                    /**
                     * <p>归档状态，枚举值<li>normal:正常</li><li>archiving:归档中</li><li>resuming:恢复中</li><li>archived :已归档</li></p>
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * <p>归档进度，百分比。</p>
                     */
                    int64_t m_archiveProgress;
                    bool m_archiveProgressHasBeenSet;

                    /**
                     * <p>集群级别。例如 P0, P1</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>是否开启透明加密</p>
                     */
                    bool m_isOpenTDE;
                    bool m_isOpenTDEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBCLUSTERDETAIL_H_
