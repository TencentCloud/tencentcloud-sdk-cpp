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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 复制组实例
                */
                class Instances : public AbstractModel
                {
                public:
                    Instances();
                    ~Instances() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * @return AppId 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * @param _appId 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
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
                     * 获取地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li> 5：香港。</li>  <li> 7：上海金融。</li> <li> 8：北京。</li> <li> 9：新加坡。</li> <li> 11：深圳金融。</li> <li> 15：美西（硅谷）。</li> </ul>
                     * @return RegionId 地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li> 5：香港。</li>  <li> 7：上海金融。</li> <li> 8：北京。</li> <li> 9：新加坡。</li> <li> 11：深圳金融。</li> <li> 15：美西（硅谷）。</li> </ul>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li> 5：香港。</li>  <li> 7：上海金融。</li> <li> 8：北京。</li> <li> 9：新加坡。</li> <li> 11：深圳金融。</li> <li> 15：美西（硅谷）。</li> </ul>
                     * @param _regionId 地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li> 5：香港。</li>  <li> 7：上海金融。</li> <li> 8：北京。</li> <li> 9：新加坡。</li> <li> 11：深圳金融。</li> <li> 15：美西（硅谷）。</li> </ul>
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
                     * 获取区域 ID。
                     * @return ZoneId 区域 ID。
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置区域 ID。
                     * @param _zoneId 区域 ID。
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
                     * 获取副本数量。
                     * @return RedisReplicasNum 副本数量。
                     * 
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置副本数量。
                     * @param _redisReplicasNum 副本数量。
                     * 
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取分片数量。
                     * @return RedisShardNum 分片数量。
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置分片数量。
                     * @param _redisShardNum 分片数量。
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
                     * 获取分片内存大小。
                     * @return RedisShardSize 分片内存大小。
                     * 
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置分片内存大小。
                     * @param _redisShardSize 分片内存大小。
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
                     * 获取实例的磁盘大小。
                     * @return DiskSize 实例的磁盘大小。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置实例的磁盘大小。
                     * @param _diskSize 实例的磁盘大小。
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
                     * 获取引擎：社区版Redis、腾讯云CKV。
                     * @return Engine 引擎：社区版Redis、腾讯云CKV。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置引擎：社区版Redis、腾讯云CKV。
                     * @param _engine 引擎：社区版Redis、腾讯云CKV。
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
                     * 获取实例读写权限。<ul><li>rw：可读写。</li><li>r：只读。</li></ul>
                     * @return Role 实例读写权限。<ul><li>rw：可读写。</li><li>r：只读。</li></ul>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置实例读写权限。<ul><li>rw：可读写。</li><li>r：只读。</li></ul>
                     * @param _role 实例读写权限。<ul><li>rw：可读写。</li><li>r：只读。</li></ul>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取实例 VIP 地址。
                     * @return Vip 实例 VIP 地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例 VIP 地址。
                     * @param _vip 实例 VIP 地址。
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
                     * 获取该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。
                     * @return Vip6 该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。
                     * @param _vip6 该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。
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
                     * 获取内部参数，用户可忽略。
                     * @return IPv6 内部参数，用户可忽略。
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 设置内部参数，用户可忽略。
                     * @param _iPv6 内部参数，用户可忽略。
                     * 
                     */
                    void SetIPv6(const std::string& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取VPC 网络ID，如：75101。
                     * @return VpcID VPC 网络ID，如：75101。
                     * 
                     */
                    int64_t GetVpcID() const;

                    /**
                     * 设置VPC 网络ID，如：75101。
                     * @param _vpcID VPC 网络ID，如：75101。
                     * 
                     */
                    void SetVpcID(const int64_t& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取实例端口。
                     * @return VPort 实例端口。
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置实例端口。
                     * @param _vPort 实例端口。
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @return Status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @param _status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
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
                     * 获取仓库ID。
                     * @return GrocerySysId 仓库ID。
                     * 
                     */
                    int64_t GetGrocerySysId() const;

                    /**
                     * 设置仓库ID。
                     * @param _grocerySysId 仓库ID。
                     * 
                     */
                    void SetGrocerySysId(const int64_t& _grocerySysId);

                    /**
                     * 判断参数 GrocerySysId 是否已赋值
                     * @return GrocerySysId 是否已赋值
                     * 
                     */
                    bool GrocerySysIdHasBeenSet() const;

                    /**
                     * 获取实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * @return ProductType 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * @param _productType 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取实例加入复制组的时间。
                     * @return CreateTime 实例加入复制组的时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例加入复制组的时间。
                     * @param _createTime 实例加入复制组的时间。
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
                     * 获取复制组中实例更新的时间。
                     * @return UpdateTime 复制组中实例更新的时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置复制组中实例更新的时间。
                     * @param _updateTime 复制组中实例更新的时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域ID。<ul><li>1：广州。</li><li>4：上海。</li><li> 5：香港。</li>  <li> 7：上海金融。</li> <li> 8：北京。</li> <li> 9：新加坡。</li> <li> 11：深圳金融。</li> <li> 15：美西（硅谷）。</li> </ul>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域 ID。
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 副本数量。
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 分片数量。
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 分片内存大小。
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * 实例的磁盘大小。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 引擎：社区版Redis、腾讯云CKV。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 实例读写权限。<ul><li>rw：可读写。</li><li>r：只读。</li></ul>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 实例 VIP 地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * VPC 网络ID，如：75101。
                     */
                    int64_t m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * 实例端口。
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 仓库ID。
                     */
                    int64_t m_grocerySysId;
                    bool m_grocerySysIdHasBeenSet;

                    /**
                     * 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 实例加入复制组的时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 复制组中实例更新的时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
