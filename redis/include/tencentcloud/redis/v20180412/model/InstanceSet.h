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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceNode.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例详细信息列表
                */
                class InstanceSet : public AbstractModel
                {
                public:
                    InstanceSet();
                    ~InstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param InstanceId 实例Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户的Appid
                     * @return Appid 用户的Appid
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置用户的Appid
                     * @param Appid 用户的Appid
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param ProjectId 项目Id
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取地域id 1--广州 4--上海 5-- 中国香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 21--印度 22--美东（弗吉尼亚）23--泰国 24--俄罗斯 25--日本
                     * @return RegionId 地域id 1--广州 4--上海 5-- 中国香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 21--印度 22--美东（弗吉尼亚）23--泰国 24--俄罗斯 25--日本
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域id 1--广州 4--上海 5-- 中国香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 21--印度 22--美东（弗吉尼亚）23--泰国 24--俄罗斯 25--日本
                     * @param RegionId 地域id 1--广州 4--上海 5-- 中国香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 21--印度 22--美东（弗吉尼亚）23--泰国 24--俄罗斯 25--日本
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域id
                     * @return ZoneId 区域id
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域id
                     * @param ZoneId 区域id
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取vpc网络id 如：75101
                     * @return VpcId vpc网络id 如：75101
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置vpc网络id 如：75101
                     * @param VpcId vpc网络id 如：75101
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网id 如：46315
                     * @return SubnetId vpc网络下子网id 如：46315
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置vpc网络下子网id 如：46315
                     * @param SubnetId vpc网络下子网id 如：46315
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例当前状态，0：待初始化；1：实例在流程中；2：实例运行中；-2：实例已隔离；-3：实例待删除
                     * @return Status 实例当前状态，0：待初始化；1：实例在流程中；2：实例运行中；-2：实例已隔离；-3：实例待删除
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例当前状态，0：待初始化；1：实例在流程中；2：实例运行中；-2：实例已隔离；-3：实例待删除
                     * @param Status 实例当前状态，0：待初始化；1：实例在流程中；2：实例运行中；-2：实例已隔离；-3：实例待删除
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例vip
                     * @return WanIp 实例vip
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置实例vip
                     * @param WanIp 实例vip
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取实例端口号
                     * @return Port 实例端口号
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例端口号
                     * @param Port 实例端口号
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return Createtime 实例创建时间
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置实例创建时间
                     * @param Createtime 实例创建时间
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取实例容量大小，单位：MB
                     * @return Size 实例容量大小，单位：MB
                     */
                    double GetSize() const;

                    /**
                     * 设置实例容量大小，单位：MB
                     * @param Size 实例容量大小，单位：MB
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取该字段已废弃
                     * @return SizeUsed 该字段已废弃
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置该字段已废弃
                     * @param SizeUsed 该字段已废弃
                     */
                    void SetSizeUsed(const double& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取实例类型，1：Redis2.8集群版；2：Redis2.8主从版；3：CKV主从版（Redis3.2）；4：CKV集群版（Redis3.2）；5：Redis2.8单机版；6：Redis4.0主从版；7：Redis4.0集群版；
                     * @return Type 实例类型，1：Redis2.8集群版；2：Redis2.8主从版；3：CKV主从版（Redis3.2）；4：CKV集群版（Redis3.2）；5：Redis2.8单机版；6：Redis4.0主从版；7：Redis4.0集群版；
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型，1：Redis2.8集群版；2：Redis2.8主从版；3：CKV主从版（Redis3.2）；4：CKV集群版（Redis3.2）；5：Redis2.8单机版；6：Redis4.0主从版；7：Redis4.0集群版；
                     * @param Type 实例类型，1：Redis2.8集群版；2：Redis2.8主从版；3：CKV主从版（Redis3.2）；4：CKV集群版（Redis3.2）；5：Redis2.8单机版；6：Redis4.0主从版；7：Redis4.0集群版；
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * @return AutoRenewFlag 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * @param AutoRenewFlag 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取实例到期时间
                     * @return DeadlineTime 实例到期时间
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置实例到期时间
                     * @param DeadlineTime 实例到期时间
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取引擎：社区版Redis、腾讯云CKV
                     * @return Engine 引擎：社区版Redis、腾讯云CKV
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置引擎：社区版Redis、腾讯云CKV
                     * @param Engine 引擎：社区版Redis、腾讯云CKV
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取产品类型：Redis2.8集群版、Redis2.8主从版、Redis3.2主从版（CKV主从版）、Redis3.2集群版（CKV集群版）、Redis2.8单机版、Redis4.0集群版
                     * @return ProductType 产品类型：Redis2.8集群版、Redis2.8主从版、Redis3.2主从版（CKV主从版）、Redis3.2集群版（CKV集群版）、Redis2.8单机版、Redis4.0集群版
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置产品类型：Redis2.8集群版、Redis2.8主从版、Redis3.2主从版（CKV主从版）、Redis3.2集群版（CKV集群版）、Redis2.8单机版、Redis4.0集群版
                     * @param ProductType 产品类型：Redis2.8集群版、Redis2.8主从版、Redis3.2主从版（CKV主从版）、Redis3.2集群版（CKV集群版）、Redis2.8单机版、Redis4.0集群版
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取vpc网络id 如：vpc-fk33jsf43kgv
                     * @return UniqVpcId vpc网络id 如：vpc-fk33jsf43kgv
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc网络id 如：vpc-fk33jsf43kgv
                     * @param UniqVpcId vpc网络id 如：vpc-fk33jsf43kgv
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网id 如：subnet-fd3j6l35mm0
                     * @return UniqSubnetId vpc网络下子网id 如：subnet-fd3j6l35mm0
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置vpc网络下子网id 如：subnet-fd3j6l35mm0
                     * @param UniqSubnetId vpc网络下子网id 如：subnet-fd3j6l35mm0
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取计费模式：0-按量计费，1-包年包月
                     * @return BillingMode 计费模式：0-按量计费，1-包年包月
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置计费模式：0-按量计费，1-包年包月
                     * @param BillingMode 计费模式：0-按量计费，1-包年包月
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取实例运行状态描述：如”实例运行中“
                     * @return InstanceTitle 实例运行状态描述：如”实例运行中“
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置实例运行状态描述：如”实例运行中“
                     * @param InstanceTitle 实例运行状态描述：如”实例运行中“
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取计划下线时间
                     * @return OfflineTime 计划下线时间
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置计划下线时间
                     * @param OfflineTime 计划下线时间
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取流程中的实例，返回子状态
                     * @return SubStatus 流程中的实例，返回子状态
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置流程中的实例，返回子状态
                     * @param SubStatus 流程中的实例，返回子状态
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取反亲和性标签
                     * @return Tags 反亲和性标签
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置反亲和性标签
                     * @param Tags 反亲和性标签
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例节点信息
                     * @return InstanceNode 实例节点信息
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置实例节点信息
                     * @param InstanceNode 实例节点信息
                     */
                    void SetInstanceNode(const std::vector<InstanceNode>& _instanceNode);

                    /**
                     * 判断参数 InstanceNode 是否已赋值
                     * @return InstanceNode 是否已赋值
                     */
                    bool InstanceNodeHasBeenSet() const;

                    /**
                     * 获取分片大小
                     * @return RedisShardSize 分片大小
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置分片大小
                     * @param RedisShardSize 分片大小
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return RedisShardNum 分片数量
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置分片数量
                     * @param RedisShardNum 分片数量
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取副本数量
                     * @return RedisReplicasNum 副本数量
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置副本数量
                     * @param RedisReplicasNum 副本数量
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取计费Id
                     * @return PriceId 计费Id
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置计费Id
                     * @param PriceId 计费Id
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return CloseTime 隔离时间
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置隔离时间
                     * @param CloseTime 隔离时间
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取从节点读取权重
                     * @return SlaveReadWeight 从节点读取权重
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置从节点读取权重
                     * @param SlaveReadWeight 从节点读取权重
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取实例关联的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTags 实例关联的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置实例关联的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceTags 实例关联的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取是否为免密实例，true-免密实例；false-非免密实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoAuth 是否为免密实例，true-免密实例；false-非免密实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置是否为免密实例，true-免密实例；false-非免密实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoAuth 是否为免密实例，true-免密实例；false-非免密实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientLimit 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientLimit 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取DTS状态（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsStatus DTS状态（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置DTS状态（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DtsStatus DTS状态（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取分片带宽上限，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetLimit 分片带宽上限，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置分片带宽上限，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetLimit 分片带宽上限，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取免密实例标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PasswordFree 免密实例标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置免密实例标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PasswordFree 免密实例标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取实例只读标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 实例只读标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置实例只读标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadOnly 实例只读标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip6 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip6 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainBandwidthDuration 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RemainBandwidthDuration 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户的Appid
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域id 1--广州 4--上海 5-- 中国香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 21--印度 22--美东（弗吉尼亚）23--泰国 24--俄罗斯 25--日本
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * vpc网络id 如：75101
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc网络下子网id 如：46315
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例当前状态，0：待初始化；1：实例在流程中；2：实例运行中；-2：实例已隔离；-3：实例待删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例vip
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 实例端口号
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 实例容量大小，单位：MB
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 该字段已废弃
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * 实例类型，1：Redis2.8集群版；2：Redis2.8主从版；3：CKV主从版（Redis3.2）；4：CKV集群版（Redis3.2）；5：Redis2.8单机版；6：Redis4.0主从版；7：Redis4.0集群版；
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 引擎：社区版Redis、腾讯云CKV
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 产品类型：Redis2.8集群版、Redis2.8主从版、Redis3.2主从版（CKV主从版）、Redis3.2集群版（CKV集群版）、Redis2.8单机版、Redis4.0集群版
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * vpc网络id 如：vpc-fk33jsf43kgv
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * vpc网络下子网id 如：subnet-fd3j6l35mm0
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 计费模式：0-按量计费，1-包年包月
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例运行状态描述：如”实例运行中“
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * 计划下线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 流程中的实例，返回子状态
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 反亲和性标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例节点信息
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * 分片大小
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * 分片数量
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 副本数量
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 计费Id
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * 从节点读取权重
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * 实例关联的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 是否为免密实例，true-免密实例；false-非免密实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 客户端连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * DTS状态（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * 分片带宽上限，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * 免密实例标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * 实例只读标识（内部参数，用户可忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
