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
                     * 获取用户AppID
                     * @return AppId 用户AppID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppID
                     * @param AppId 用户AppID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取地域ID 1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）
                     * @return RegionId 地域ID 1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID 1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）
                     * @param RegionId 地域ID 1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域ID
                     * @return ZoneId 区域ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置区域ID
                     * @param ZoneId 区域ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取副本数量
                     * @return RedisReplicasNum 副本数量
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置副本数量
                     * @param RedisReplicasNum 副本数量
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

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
                     * 获取实例的磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 实例的磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置实例的磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskSize 实例的磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

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
                     * 获取实例角色，rw可读写，r只读
                     * @return Role 实例角色，rw可读写，r只读
                     */
                    std::string GetRole() const;

                    /**
                     * 设置实例角色，rw可读写，r只读
                     * @param Role 实例角色，rw可读写，r只读
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取实例VIP
                     * @return Vip 实例VIP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例VIP
                     * @param Vip 实例VIP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

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
                     * 获取vpc网络ID 如：75101
                     * @return VpcID vpc网络ID 如：75101
                     */
                    int64_t GetVpcID() const;

                    /**
                     * 设置vpc网络ID 如：75101
                     * @param VpcID vpc网络ID 如：75101
                     */
                    void SetVpcID(const int64_t& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取实例端口
                     * @return VPort 实例端口
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置实例端口
                     * @param VPort 实例端口
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     * @return Status 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     * @param Status 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取仓库ID
                     * @return GrocerySysId 仓库ID
                     */
                    int64_t GetGrocerySysId() const;

                    /**
                     * 设置仓库ID
                     * @param GrocerySysId 仓库ID
                     */
                    void SetGrocerySysId(const int64_t& _grocerySysId);

                    /**
                     * 判断参数 GrocerySysId 是否已赋值
                     * @return GrocerySysId 是否已赋值
                     */
                    bool GrocerySysIdHasBeenSet() const;

                    /**
                     * 获取实例类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     * @return ProductType 实例类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置实例类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     * @param ProductType 实例类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

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
                     * 获取更新实例
                     * @return UpdateTime 更新实例
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新实例
                     * @param UpdateTime 更新实例
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域ID 1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 副本数量
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 分片数量
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 分片大小
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * 实例的磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 引擎：社区版Redis、腾讯云CKV
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 实例角色，rw可读写，r只读
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 实例VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 内部参数，用户可忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * vpc网络ID 如：75101
                     */
                    int64_t m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * 实例端口
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 实例状态：0-待初始化，1-流程中，2-运行中，-2-已隔离，-3-待删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 仓库ID
                     */
                    int64_t m_grocerySysId;
                    bool m_grocerySysIdHasBeenSet;

                    /**
                     * 实例类型：1 – Redis2.8内存版（集群架构），2 – Redis2.8内存版（标准架构），3 – CKV 3.2内存版(标准架构)，4 – CKV 3.2内存版(集群架构)，5 – Redis2.8内存版（单机），6 – Redis4.0内存版（标准架构），7 – Redis4.0内存版（集群架构），8 – Redis5.0内存版（标准架构），9 – Redis5.0内存版（集群架构）
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新实例
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
