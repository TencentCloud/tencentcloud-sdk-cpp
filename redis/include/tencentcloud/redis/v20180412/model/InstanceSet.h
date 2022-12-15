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
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例详细信息列表。
                */
                class InstanceSet : public AbstractModel
                {
                public:
                    InstanceSet();
                    ~InstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param InstanceName 实例名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param InstanceId 实例 ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户的 AppID。
                     * @return Appid 用户的 AppID。
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置用户的 AppID。
                     * @param Appid 用户的 AppID。
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param ProjectId 项目 ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>6：多伦多。</li> <li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>21：孟买。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>24：莫斯科。</li><li>25：东京。</li></ul>
                     * @return RegionId 地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>6：多伦多。</li> <li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>21：孟买。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>24：莫斯科。</li><li>25：东京。</li></ul>
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>6：多伦多。</li> <li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>21：孟买。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>24：莫斯科。</li><li>25：东京。</li></ul>
                     * @param RegionId 地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>6：多伦多。</li> <li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>21：孟买。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>24：莫斯科。</li><li>25：东京。</li></ul>
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域 ID。
                     * @return ZoneId 区域 ID。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域 ID。
                     * @param ZoneId 区域 ID。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取vpc网络 ID，例如75101。
                     * @return VpcId vpc网络 ID，例如75101。
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置vpc网络 ID，例如75101。
                     * @param VpcId vpc网络 ID，例如75101。
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网ID，如：46315。
                     * @return SubnetId vpc网络下子网ID，如：46315。
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置vpc网络下子网ID，如：46315。
                     * @param SubnetId vpc网络下子网ID，如：46315。
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul>
                     * @return Status 实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul>
                     * @param Status 实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul>
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例 VIP。
                     * @return WanIp 实例 VIP。
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置实例 VIP。
                     * @param WanIp 实例 VIP。
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取实例端口号。
                     * @return Port 实例端口号。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例端口号。
                     * @param Port 实例端口号。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例创建时间。
                     * @return Createtime 实例创建时间。
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置实例创建时间。
                     * @param Createtime 实例创建时间。
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取实例容量大小，单位：MB。
                     * @return Size 实例容量大小，单位：MB。
                     */
                    double GetSize() const;

                    /**
                     * 设置实例容量大小，单位：MB。
                     * @param Size 实例容量大小，单位：MB。
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。可使用云监控 API 接口 [GetMonitorData](https://cloud.tencent.com/document/product/248/31014) 获取实例已使用的内容容量。
                     * @return SizeUsed 该字段已废弃。可使用云监控 API 接口 [GetMonitorData](https://cloud.tencent.com/document/product/248/31014) 获取实例已使用的内容容量。
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置该字段已废弃。可使用云监控 API 接口 [GetMonitorData](https://cloud.tencent.com/document/product/248/31014) 获取实例已使用的内容容量。
                     * @param SizeUsed 该字段已废弃。可使用云监控 API 接口 [GetMonitorData](https://cloud.tencent.com/document/product/248/31014) 获取实例已使用的内容容量。
                     */
                    void SetSizeUsed(const double& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取实例类型：<ul><li>1：Redis2.8内存版（集群架构）。</li><li>2：Redis2.8内存版（标准架构）。</li><li>3：CKV 3.2内存版(标准架构)。</li><li>4：CKV 3.2内存版(集群架构)。</li><li>5：Redis2.8内存版（单机）。</li></li><li>6：Redis4.0内存版（标准架构）。</li></li><li>7：Redis4.0内存版（集群架构）。</li></li><li>8：Redis5.0内存版（标准架构）。</li></li><li>9：Redis5.0内存版（集群架构）。</li></ul>
                     * @return Type 实例类型：<ul><li>1：Redis2.8内存版（集群架构）。</li><li>2：Redis2.8内存版（标准架构）。</li><li>3：CKV 3.2内存版(标准架构)。</li><li>4：CKV 3.2内存版(集群架构)。</li><li>5：Redis2.8内存版（单机）。</li></li><li>6：Redis4.0内存版（标准架构）。</li></li><li>7：Redis4.0内存版（集群架构）。</li></li><li>8：Redis5.0内存版（标准架构）。</li></li><li>9：Redis5.0内存版（集群架构）。</li></ul>
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型：<ul><li>1：Redis2.8内存版（集群架构）。</li><li>2：Redis2.8内存版（标准架构）。</li><li>3：CKV 3.2内存版(标准架构)。</li><li>4：CKV 3.2内存版(集群架构)。</li><li>5：Redis2.8内存版（单机）。</li></li><li>6：Redis4.0内存版（标准架构）。</li></li><li>7：Redis4.0内存版（集群架构）。</li></li><li>8：Redis5.0内存版（标准架构）。</li></li><li>9：Redis5.0内存版（集群架构）。</li></ul>
                     * @param Type 实例类型：<ul><li>1：Redis2.8内存版（集群架构）。</li><li>2：Redis2.8内存版（标准架构）。</li><li>3：CKV 3.2内存版(标准架构)。</li><li>4：CKV 3.2内存版(集群架构)。</li><li>5：Redis2.8内存版（单机）。</li></li><li>6：Redis4.0内存版（标准架构）。</li></li><li>7：Redis4.0内存版（集群架构）。</li></li><li>8：Redis5.0内存版（标准架构）。</li></li><li>9：Redis5.0内存版（集群架构）。</li></ul>
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul>
                     * @return AutoRenewFlag 实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul>
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul>
                     * @param AutoRenewFlag 实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul>
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取实例到期时间。
                     * @return DeadlineTime 实例到期时间。
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置实例到期时间。
                     * @param DeadlineTime 实例到期时间。
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取引擎：社区版Redis、腾讯云CKV。
                     * @return Engine 引擎：社区版Redis、腾讯云CKV。
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置引擎：社区版Redis、腾讯云CKV。
                     * @param Engine 引擎：社区版Redis、腾讯云CKV。
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul>
                     * @return ProductType 产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul>
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul>
                     * @param ProductType 产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul>
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取vpc网络id，例如vpc-fk33jsf43kgv。
                     * @return UniqVpcId vpc网络id，例如vpc-fk33jsf43kgv。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc网络id，例如vpc-fk33jsf43kgv。
                     * @param UniqVpcId vpc网络id，例如vpc-fk33jsf43kgv。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网id，例如：subnet-fd3j6l35mm0。
                     * @return UniqSubnetId vpc网络下子网id，例如：subnet-fd3j6l35mm0。
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置vpc网络下子网id，例如：subnet-fd3j6l35mm0。
                     * @param UniqSubnetId vpc网络下子网id，例如：subnet-fd3j6l35mm0。
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @return BillingMode 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @param BillingMode 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取实例运行状态描述：如”实例运行中“。
                     * @return InstanceTitle 实例运行状态描述：如”实例运行中“。
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置实例运行状态描述：如”实例运行中“。
                     * @param InstanceTitle 实例运行状态描述：如”实例运行中“。
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取计划下线时间。
                     * @return OfflineTime 计划下线时间。
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置计划下线时间。
                     * @param OfflineTime 计划下线时间。
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取流程中的实例，返回子状态。
                     * @return SubStatus 流程中的实例，返回子状态。
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置流程中的实例，返回子状态。
                     * @param SubStatus 流程中的实例，返回子状态。
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取反亲和性标签。
                     * @return Tags 反亲和性标签。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置反亲和性标签。
                     * @param Tags 反亲和性标签。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例节点信息。
                     * @return InstanceNode 实例节点信息。
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置实例节点信息。
                     * @param InstanceNode 实例节点信息。
                     */
                    void SetInstanceNode(const std::vector<InstanceNode>& _instanceNode);

                    /**
                     * 判断参数 InstanceNode 是否已赋值
                     * @return InstanceNode 是否已赋值
                     */
                    bool InstanceNodeHasBeenSet() const;

                    /**
                     * 获取分片大小。
                     * @return RedisShardSize 分片大小。
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置分片大小。
                     * @param RedisShardSize 分片大小。
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取分片数量。
                     * @return RedisShardNum 分片数量。
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置分片数量。
                     * @param RedisShardNum 分片数量。
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取副本数量。
                     * @return RedisReplicasNum 副本数量。
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置副本数量。
                     * @param RedisReplicasNum 副本数量。
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取计费 ID。
                     * @return PriceId 计费 ID。
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置计费 ID。
                     * @param PriceId 计费 ID。
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取隔离时间。
                     * @return CloseTime 隔离时间。
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置隔离时间。
                     * @param CloseTime 隔离时间。
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取从节点读取权重。
                     * @return SlaveReadWeight 从节点读取权重。
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置从节点读取权重。
                     * @param SlaveReadWeight 从节点读取权重。
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取实例关联的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTags 实例关联的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置实例关联的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceTags 实例关联的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取项目名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectName 项目名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoAuth 是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoAuth 是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取客户端连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientLimit 客户端连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置客户端连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientLimit 客户端连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取DTS状态（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsStatus DTS状态（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置DTS状态（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DtsStatus DTS状态（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取分片带宽上限，单位MB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetLimit 分片带宽上限，单位MB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置分片带宽上限，单位MB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetLimit 分片带宽上限，单位MB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取免密实例标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PasswordFree 免密实例标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置免密实例标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PasswordFree 免密实例标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip6 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip6 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取实例只读标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 实例只读标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置实例只读标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadOnly 实例只读标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainBandwidthDuration 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RemainBandwidthDuration 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                    /**
                     * 获取Redis实例请忽略该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize Redis实例请忽略该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Redis实例请忽略该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskSize Redis实例请忽略该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorVersion 监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonitorVersion 监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取客户端最大连接数可设置的最小值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientLimitMin 客户端最大连接数可设置的最小值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 设置客户端最大连接数可设置的最小值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientLimitMin 客户端最大连接数可设置的最小值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientLimitMin(const int64_t& _clientLimitMin);

                    /**
                     * 判断参数 ClientLimitMin 是否已赋值
                     * @return ClientLimitMin 是否已赋值
                     */
                    bool ClientLimitMinHasBeenSet() const;

                    /**
                     * 获取客户端最大连接数可设置的最大值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientLimitMax 客户端最大连接数可设置的最大值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 设置客户端最大连接数可设置的最大值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientLimitMax 客户端最大连接数可设置的最大值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientLimitMax(const int64_t& _clientLimitMax);

                    /**
                     * 判断参数 ClientLimitMax 是否已赋值
                     * @return ClientLimitMax 是否已赋值
                     */
                    bool ClientLimitMaxHasBeenSet() const;

                    /**
                     * 获取实例的节点详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeSet 实例的节点详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置实例的节点详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeSet 实例的节点详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取实例所在的地域信息，比如ap-guangzhou。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 实例所在的地域信息，比如ap-guangzhou。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在的地域信息，比如ap-guangzhou。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 实例所在的地域信息，比如ap-guangzhou。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanAddress 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanAddress 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanAddress(const std::string& _wanAddress);

                    /**
                     * 判断参数 WanAddress 是否已赋值
                     * @return WanAddress 是否已赋值
                     */
                    bool WanAddressHasBeenSet() const;

                    /**
                     * 获取北极星服务地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolarisServer 北极星服务地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolarisServer() const;

                    /**
                     * 设置北极星服务地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolarisServer 北极星服务地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolarisServer(const std::string& _polarisServer);

                    /**
                     * 判断参数 PolarisServer 是否已赋值
                     * @return PolarisServer 是否已赋值
                     */
                    bool PolarisServerHasBeenSet() const;

                    /**
                     * 获取实例当前Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentProxyVersion 实例当前Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置实例当前Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentProxyVersion 实例当前Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取实例当前Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentRedisVersion 实例当前Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置实例当前Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentRedisVersion 实例当前Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentRedisVersion(const std::string& _currentRedisVersion);

                    /**
                     * 判断参数 CurrentRedisVersion 是否已赋值
                     * @return CurrentRedisVersion 是否已赋值
                     */
                    bool CurrentRedisVersionHasBeenSet() const;

                    /**
                     * 获取实例可升级Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeProxyVersion 实例可升级Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpgradeProxyVersion() const;

                    /**
                     * 设置实例可升级Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpgradeProxyVersion 实例可升级Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpgradeProxyVersion(const std::string& _upgradeProxyVersion);

                    /**
                     * 判断参数 UpgradeProxyVersion 是否已赋值
                     * @return UpgradeProxyVersion 是否已赋值
                     */
                    bool UpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取实例可升级Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeRedisVersion 实例可升级Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置实例可升级Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpgradeRedisVersion 实例可升级Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpgradeRedisVersion(const std::string& _upgradeRedisVersion);

                    /**
                     * 判断参数 UpgradeRedisVersion 是否已赋值
                     * @return UpgradeRedisVersion 是否已赋值
                     */
                    bool UpgradeRedisVersionHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户的 AppID。
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>6：多伦多。</li> <li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>21：孟买。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>24：莫斯科。</li><li>25：东京。</li></ul>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域 ID。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * vpc网络 ID，例如75101。
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc网络下子网ID，如：46315。
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例 VIP。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 实例端口号。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例创建时间。
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 实例容量大小，单位：MB。
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 该字段已废弃。可使用云监控 API 接口 [GetMonitorData](https://cloud.tencent.com/document/product/248/31014) 获取实例已使用的内容容量。
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * 实例类型：<ul><li>1：Redis2.8内存版（集群架构）。</li><li>2：Redis2.8内存版（标准架构）。</li><li>3：CKV 3.2内存版(标准架构)。</li><li>4：CKV 3.2内存版(集群架构)。</li><li>5：Redis2.8内存版（单机）。</li></li><li>6：Redis4.0内存版（标准架构）。</li></li><li>7：Redis4.0内存版（集群架构）。</li></li><li>8：Redis5.0内存版（标准架构）。</li></li><li>9：Redis5.0内存版（集群架构）。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 实例到期时间。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 引擎：社区版Redis、腾讯云CKV。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * vpc网络id，例如vpc-fk33jsf43kgv。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * vpc网络下子网id，例如：subnet-fd3j6l35mm0。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例运行状态描述：如”实例运行中“。
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * 计划下线时间。
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 流程中的实例，返回子状态。
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 反亲和性标签。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例节点信息。
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * 分片大小。
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * 分片数量。
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 副本数量。
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 计费 ID。
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * 隔离时间。
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * 从节点读取权重。
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * 实例关联的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 项目名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 客户端连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * DTS状态（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * 分片带宽上限，单位MB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * 免密实例标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * 实例只读标识（内部参数，用户可忽略）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                    /**
                     * Redis实例请忽略该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 监控版本。<ul><li>1m：分钟粒度监控。</li><li>5s：5秒粒度监控。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * 客户端最大连接数可设置的最小值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * 客户端最大连接数可设置的最大值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                    /**
                     * 实例的节点详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * 实例所在的地域信息，比如ap-guangzhou。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 外网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * 北极星服务地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_polarisServer;
                    bool m_polarisServerHasBeenSet;

                    /**
                     * 实例当前Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * 实例当前Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * 实例可升级Proxy版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upgradeProxyVersion;
                    bool m_upgradeProxyVersionHasBeenSet;

                    /**
                     * 实例可升级Cache小版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
