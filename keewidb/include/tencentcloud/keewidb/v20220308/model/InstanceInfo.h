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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/InstanceTagInfo.h>
#include <tencentcloud/keewidb/v20220308/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户的Appid。</p>
                     * @return Appid <p>用户的Appid。</p>
                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置<p>用户的Appid。</p>
                     * @param _appid <p>用户的Appid。</p>
                     * 
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID。</p>
                     * @return ProjectId <p>项目 ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。</p>
                     * @param _projectId <p>项目 ID。</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li>8：北京。</li></ul></p>
                     * @return RegionId <p>地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li>8：北京。</li></ul></p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li>8：北京。</li></ul></p>
                     * @param _regionId <p>地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li>8：北京。</li></ul></p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区 ID。</p>
                     * @return ZoneId <p>可用区 ID。</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区 ID。</p>
                     * @param _zoneId <p>可用区 ID。</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC 网络 ID， 如：75101。该参数当前暂保留，可忽略。</p>
                     * @return VpcId <p>VPC 网络 ID， 如：75101。该参数当前暂保留，可忽略。</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>VPC 网络 ID， 如：75101。该参数当前暂保留，可忽略。</p>
                     * @param _vpcId <p>VPC 网络 ID， 如：75101。该参数当前暂保留，可忽略。</p>
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * @return Status <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * @param _status <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
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
                     * 获取<p>VPC 网络下子网 ID， 如：46315。该参数当前暂保留，可忽略。</p>
                     * @return SubnetId <p>VPC 网络下子网 ID， 如：46315。该参数当前暂保留，可忽略。</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>VPC 网络下子网 ID， 如：46315。该参数当前暂保留，可忽略。</p>
                     * @param _subnetId <p>VPC 网络下子网 ID， 如：46315。该参数当前暂保留，可忽略。</p>
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>实例 VIP。</p>
                     * @return WanIp <p>实例 VIP。</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>实例 VIP。</p>
                     * @param _wanIp <p>实例 VIP。</p>
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取<p>实例端口号。</p>
                     * @return Port <p>实例端口号。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>实例端口号。</p>
                     * @param _port <p>实例端口号。</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>实例创建时间。</p>
                     * @return Createtime <p>实例创建时间。</p>
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置<p>实例创建时间。</p>
                     * @param _createtime <p>实例创建时间。</p>
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取<p>实例持久内存总容量大小，单位：MB。</p>
                     * @return Size <p>实例持久内存总容量大小，单位：MB。</p>
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置<p>实例持久内存总容量大小，单位：MB。</p>
                     * @param _size <p>实例持久内存总容量大小，单位：MB。</p>
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * @return Type <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * @param _type <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * @return AutoRenewFlag <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * @param _autoRenewFlag <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例到期时间。</p>
                     * @return DeadlineTime <p>实例到期时间。</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>实例到期时间。</p>
                     * @param _deadlineTime <p>实例到期时间。</p>
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>存储引擎。</p>
                     * @return Engine <p>存储引擎。</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>存储引擎。</p>
                     * @param _engine <p>存储引擎。</p>
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>产品类型。<ul><li>standalone ：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * @return ProductType <p>产品类型。<ul><li>standalone ：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>产品类型。<ul><li>standalone ：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * @param _productType <p>产品类型。<ul><li>standalone ：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>VPC 网络 ID， 如：vpc-fk33jsf4****。</p>
                     * @return UniqVpcId <p>VPC 网络 ID， 如：vpc-fk33jsf4****。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC 网络 ID， 如：vpc-fk33jsf4****。</p>
                     * @param _uniqVpcId <p>VPC 网络 ID， 如：vpc-fk33jsf4****。</p>
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
                     * 获取<p>VPC 网络下子网 ID，如：subnet-fd3j6l3****。</p>
                     * @return UniqSubnetId <p>VPC 网络下子网 ID，如：subnet-fd3j6l3****。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>VPC 网络下子网 ID，如：subnet-fd3j6l3****。</p>
                     * @param _uniqSubnetId <p>VPC 网络下子网 ID，如：subnet-fd3j6l3****。</p>
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
                     * 获取<p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @return BillingMode <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @param _billingMode <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>实例运行状态描述：如”实例运行中“。</p>
                     * @return InstanceTitle <p>实例运行状态描述：如”实例运行中“。</p>
                     * 
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置<p>实例运行状态描述：如”实例运行中“。</p>
                     * @param _instanceTitle <p>实例运行状态描述：如”实例运行中“。</p>
                     * 
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     * 
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取<p>计划下线时间。</p>
                     * @return OfflineTime <p>计划下线时间。</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>计划下线时间。</p>
                     * @param _offlineTime <p>计划下线时间。</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>流程中的实例，返回子状态。</p>
                     * @return SubStatus <p>流程中的实例，返回子状态。</p>
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置<p>流程中的实例，返回子状态。</p>
                     * @param _subStatus <p>流程中的实例，返回子状态。</p>
                     * 
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>反亲和性标签</p>
                     * @return Tags <p>反亲和性标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>反亲和性标签</p>
                     * @param _tags <p>反亲和性标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>分片大小。</p>
                     * @return RedisShardSize <p>分片大小。</p>
                     * 
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置<p>分片大小。</p>
                     * @param _redisShardSize <p>分片大小。</p>
                     * 
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     * 
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取<p>分片数量。</p>
                     * @return RedisShardNum <p>分片数量。</p>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>分片数量。</p>
                     * @param _redisShardNum <p>分片数量。</p>
                     * 
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取<p>副本数量。</p>
                     * @return RedisReplicasNum <p>副本数量。</p>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>副本数量。</p>
                     * @param _redisReplicasNum <p>副本数量。</p>
                     * 
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>计费 ID。</p>
                     * @return PriceId <p>计费 ID。</p>
                     * 
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置<p>计费 ID。</p>
                     * @param _priceId <p>计费 ID。</p>
                     * 
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     * 
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间。</p>
                     * @return CloseTime <p>隔离时间。</p>
                     * 
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置<p>隔离时间。</p>
                     * @param _closeTime <p>隔离时间。</p>
                     * 
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     * 
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取<p>从节点读取权重。</p>
                     * @return SlaveReadWeight <p>从节点读取权重。</p>
                     * 
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置<p>从节点读取权重。</p>
                     * @param _slaveReadWeight <p>从节点读取权重。</p>
                     * 
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     * 
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取<p>实例关联的标签信息。</p>
                     * @return InstanceTags <p>实例关联的标签信息。</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>实例关联的标签信息。</p>
                     * @param _instanceTags <p>实例关联的标签信息。</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>项目名称。</p>
                     * @return ProjectName <p>项目名称。</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称。</p>
                     * @param _projectName <p>项目名称。</p>
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为免密实例；<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * @return NoAuth <p>是否为免密实例；<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>是否为免密实例；<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * @param _noAuth <p>是否为免密实例；<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取<p>客户端连接数。</p>
                     * @return ClientLimit <p>客户端连接数。</p>
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置<p>客户端连接数。</p>
                     * @param _clientLimit <p>客户端连接数。</p>
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取<p>DTS状态（内部参数，用户可忽略）。</p>
                     * @return DtsStatus <p>DTS状态（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置<p>DTS状态（内部参数，用户可忽略）。</p>
                     * @param _dtsStatus <p>DTS状态（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     * 
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取<p>分片带宽上限，单位 MB。</p>
                     * @return NetLimit <p>分片带宽上限，单位 MB。</p>
                     * 
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置<p>分片带宽上限，单位 MB。</p>
                     * @param _netLimit <p>分片带宽上限，单位 MB。</p>
                     * 
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     * 
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取<p>免密实例标识（内部参数，用户可忽略）。</p>
                     * @return PasswordFree <p>免密实例标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置<p>免密实例标识（内部参数，用户可忽略）。</p>
                     * @param _passwordFree <p>免密实例标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     * 
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取<p>实例只读标识（内部参数，用户可忽略）。</p>
                     * @return ReadOnly <p>实例只读标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置<p>实例只读标识（内部参数，用户可忽略）。</p>
                     * @param _readOnly <p>实例只读标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return Vip6 <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _vip6 <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return RemainBandwidthDuration <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _remainBandwidthDuration <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     * 
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                    /**
                     * 获取<p>实例的磁盘容量大小。</p>
                     * @return DiskSize <p>实例的磁盘容量大小。</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>实例的磁盘容量大小。</p>
                     * @param _diskSize <p>实例的磁盘容量大小。</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * @return MonitorVersion <p>监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * @param _monitorVersion <p>监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取<p>客户端最大连接数可设置的最小值。</p>
                     * @return ClientLimitMin <p>客户端最大连接数可设置的最小值。</p>
                     * 
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 设置<p>客户端最大连接数可设置的最小值。</p>
                     * @param _clientLimitMin <p>客户端最大连接数可设置的最小值。</p>
                     * 
                     */
                    void SetClientLimitMin(const int64_t& _clientLimitMin);

                    /**
                     * 判断参数 ClientLimitMin 是否已赋值
                     * @return ClientLimitMin 是否已赋值
                     * 
                     */
                    bool ClientLimitMinHasBeenSet() const;

                    /**
                     * 获取<p>客户端最大连接数可设置的最大值。</p>
                     * @return ClientLimitMax <p>客户端最大连接数可设置的最大值。</p>
                     * 
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 设置<p>客户端最大连接数可设置的最大值。</p>
                     * @param _clientLimitMax <p>客户端最大连接数可设置的最大值。</p>
                     * 
                     */
                    void SetClientLimitMax(const int64_t& _clientLimitMax);

                    /**
                     * 判断参数 ClientLimitMax 是否已赋值
                     * @return ClientLimitMax 是否已赋值
                     * 
                     */
                    bool ClientLimitMaxHasBeenSet() const;

                    /**
                     * 获取<p>实例的节点详细信息。</p>
                     * @return NodeSet <p>实例的节点详细信息。</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>实例的节点详细信息。</p>
                     * @param _nodeSet <p>实例的节点详细信息。</p>
                     * 
                     */
                    void SetNodeSet(const std::vector<NodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取<p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * @return Region <p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * @param _region <p>实例所在的地域信息，比如ap-guangzhou。</p>
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
                     * 获取<p>实例内存容量，单位：GB。KeeWiDB 内存容量</p>
                     * @return MachineMemory <p>实例内存容量，单位：GB。KeeWiDB 内存容量</p>
                     * 
                     */
                    int64_t GetMachineMemory() const;

                    /**
                     * 设置<p>实例内存容量，单位：GB。KeeWiDB 内存容量</p>
                     * @param _machineMemory <p>实例内存容量，单位：GB。KeeWiDB 内存容量</p>
                     * 
                     */
                    void SetMachineMemory(const int64_t& _machineMemory);

                    /**
                     * 判断参数 MachineMemory 是否已赋值
                     * @return MachineMemory 是否已赋值
                     * 
                     */
                    bool MachineMemoryHasBeenSet() const;

                    /**
                     * 获取<p>单分片磁盘大小，单位：MB</p>
                     * @return DiskShardSize <p>单分片磁盘大小，单位：MB</p>
                     * 
                     */
                    int64_t GetDiskShardSize() const;

                    /**
                     * 设置<p>单分片磁盘大小，单位：MB</p>
                     * @param _diskShardSize <p>单分片磁盘大小，单位：MB</p>
                     * 
                     */
                    void SetDiskShardSize(const int64_t& _diskShardSize);

                    /**
                     * 判断参数 DiskShardSize 是否已赋值
                     * @return DiskShardSize 是否已赋值
                     * 
                     */
                    bool DiskShardSizeHasBeenSet() const;

                    /**
                     * 获取<p>分片数量</p>
                     * @return DiskShardNum <p>分片数量</p>
                     * 
                     */
                    int64_t GetDiskShardNum() const;

                    /**
                     * 设置<p>分片数量</p>
                     * @param _diskShardNum <p>分片数量</p>
                     * 
                     */
                    void SetDiskShardNum(const int64_t& _diskShardNum);

                    /**
                     * 判断参数 DiskShardNum 是否已赋值
                     * @return DiskShardNum 是否已赋值
                     * 
                     */
                    bool DiskShardNumHasBeenSet() const;

                    /**
                     * 获取<p>副本数量</p>
                     * @return DiskReplicasNum <p>副本数量</p>
                     * 
                     */
                    int64_t GetDiskReplicasNum() const;

                    /**
                     * 设置<p>副本数量</p>
                     * @param _diskReplicasNum <p>副本数量</p>
                     * 
                     */
                    void SetDiskReplicasNum(const int64_t& _diskReplicasNum);

                    /**
                     * 判断参数 DiskReplicasNum 是否已赋值
                     * @return DiskReplicasNum 是否已赋值
                     * 
                     */
                    bool DiskReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>数据压缩开关。<ul><li>ON：开启。</li><li>OFF：关闭。</li></ul></p>
                     * @return Compression <p>数据压缩开关。<ul><li>ON：开启。</li><li>OFF：关闭。</li></ul></p>
                     * 
                     */
                    std::string GetCompression() const;

                    /**
                     * 设置<p>数据压缩开关。<ul><li>ON：开启。</li><li>OFF：关闭。</li></ul></p>
                     * @param _compression <p>数据压缩开关。<ul><li>ON：开启。</li><li>OFF：关闭。</li></ul></p>
                     * 
                     */
                    void SetCompression(const std::string& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户的Appid。</p>
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>项目 ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li>8：北京。</li></ul></p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区 ID。</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>VPC 网络 ID， 如：75101。该参数当前暂保留，可忽略。</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>VPC 网络下子网 ID， 如：46315。该参数当前暂保留，可忽略。</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例 VIP。</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>实例端口号。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>实例创建时间。</p>
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * <p>实例持久内存总容量大小，单位：MB。</p>
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>实例类型。</p><p>枚举值：</p><ul><li>11： 存储版标准架构。</li><li>12： 存储版集群架构。</li><li>13： 极速版标准架构。</li><li>14： 极速版集群架构。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>实例到期时间。</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>存储引擎。</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>产品类型。<ul><li>standalone ：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>VPC 网络 ID， 如：vpc-fk33jsf4****。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>VPC 网络下子网 ID，如：subnet-fd3j6l3****。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例运行状态描述：如”实例运行中“。</p>
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * <p>计划下线时间。</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>流程中的实例，返回子状态。</p>
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>反亲和性标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>分片大小。</p>
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * <p>分片数量。</p>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>副本数量。</p>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>计费 ID。</p>
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * <p>隔离时间。</p>
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * <p>从节点读取权重。</p>
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * <p>实例关联的标签信息。</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>项目名称。</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>是否为免密实例；<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>客户端连接数。</p>
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * <p>DTS状态（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * <p>分片带宽上限，单位 MB。</p>
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * <p>免密实例标识（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * <p>实例只读标识（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                    /**
                     * <p>实例的磁盘容量大小。</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul></p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>客户端最大连接数可设置的最小值。</p>
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * <p>客户端最大连接数可设置的最大值。</p>
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                    /**
                     * <p>实例的节点详细信息。</p>
                     */
                    std::vector<NodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>实例所在的地域信息，比如ap-guangzhou。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例内存容量，单位：GB。KeeWiDB 内存容量</p>
                     */
                    int64_t m_machineMemory;
                    bool m_machineMemoryHasBeenSet;

                    /**
                     * <p>单分片磁盘大小，单位：MB</p>
                     */
                    int64_t m_diskShardSize;
                    bool m_diskShardSizeHasBeenSet;

                    /**
                     * <p>分片数量</p>
                     */
                    int64_t m_diskShardNum;
                    bool m_diskShardNumHasBeenSet;

                    /**
                     * <p>副本数量</p>
                     */
                    int64_t m_diskReplicasNum;
                    bool m_diskReplicasNumHasBeenSet;

                    /**
                     * <p>数据压缩开关。<ul><li>ON：开启。</li><li>OFF：关闭。</li></ul></p>
                     */
                    std::string m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINFO_H_
