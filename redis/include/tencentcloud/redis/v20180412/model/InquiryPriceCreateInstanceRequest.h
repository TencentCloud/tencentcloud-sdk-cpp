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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * InquiryPriceCreateInstance请求参数结构体
                */
                class InquiryPriceCreateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceRequest();
                    ~InquiryPriceCreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型。
- 2：Redis 2.8 内存版（标准架构）。
- 6：Redis 4.0 内存版（标准架构）。
- 7：Redis 4.0 内存版（集群架构）。
- 8：Redis 5.0 内存版（标准架构）。
- 9：Redis 5.0 内存版（集群架构）。
- 15：Redis 6.2 内存版（标准架构）。
- 16：Redis 6.2 内存版（集群架构）。
- 17：Redis 7.0 内存版（标准架构）。
- 18：Redis 7.0 内存版（集群架构）。
                     * @return TypeId 实例类型。
- 2：Redis 2.8 内存版（标准架构）。
- 6：Redis 4.0 内存版（标准架构）。
- 7：Redis 4.0 内存版（集群架构）。
- 8：Redis 5.0 内存版（标准架构）。
- 9：Redis 5.0 内存版（集群架构）。
- 15：Redis 6.2 内存版（标准架构）。
- 16：Redis 6.2 内存版（集群架构）。
- 17：Redis 7.0 内存版（标准架构）。
- 18：Redis 7.0 内存版（集群架构）。
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置实例类型。
- 2：Redis 2.8 内存版（标准架构）。
- 6：Redis 4.0 内存版（标准架构）。
- 7：Redis 4.0 内存版（集群架构）。
- 8：Redis 5.0 内存版（标准架构）。
- 9：Redis 5.0 内存版（集群架构）。
- 15：Redis 6.2 内存版（标准架构）。
- 16：Redis 6.2 内存版（集群架构）。
- 17：Redis 7.0 内存版（标准架构）。
- 18：Redis 7.0 内存版（集群架构）。
                     * @param _typeId 实例类型。
- 2：Redis 2.8 内存版（标准架构）。
- 6：Redis 4.0 内存版（标准架构）。
- 7：Redis 4.0 内存版（集群架构）。
- 8：Redis 5.0 内存版（标准架构）。
- 9：Redis 5.0 内存版（集群架构）。
- 15：Redis 6.2 内存版（标准架构）。
- 16：Redis 6.2 内存版（集群架构）。
- 17：Redis 7.0 内存版（标准架构）。
- 18：Redis 7.0 内存版（集群架构）。
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。
                     * @return MemSize 内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。
                     * @param _memSize 内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取实例数量，单次购买实例数量以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
                     * @return GoodsNum 实例数量，单次购买实例数量以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，单次购买实例数量以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
                     * @param _goodsNum 实例数量，单次购买实例数量以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @return Period 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * @param _period 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取付费方式。
- 0：按量计费。
- 1：包年包月。
                     * @return BillingMode 付费方式。
- 0：按量计费。
- 1：包年包月。
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置付费方式。
- 0：按量计费。
- 1：包年包月。
                     * @param _billingMode 付费方式。
- 0：按量计费。
- 1：包年包月。
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
                     * 获取实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @return ZoneId 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @param _zoneId 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
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
                     * 获取实例分片数量。2.8 标准架构无需配置分片，其余版本标准架构需要配置分片数量为1。集群架构需指定需购买的分片数量。
                     * @return RedisShardNum 实例分片数量。2.8 标准架构无需配置分片，其余版本标准架构需要配置分片数量为1。集群架构需指定需购买的分片数量。
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置实例分片数量。2.8 标准架构无需配置分片，其余版本标准架构需要配置分片数量为1。集群架构需指定需购买的分片数量。
                     * @param _redisShardNum 实例分片数量。2.8 标准架构无需配置分片，其余版本标准架构需要配置分片数量为1。集群架构需指定需购买的分片数量。
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
                     * 获取实例副本数量。2.8 标准架构无需配置副本数量。
                     * @return RedisReplicasNum 实例副本数量。2.8 标准架构无需配置副本数量。
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置实例副本数量。2.8 标准架构无需配置副本数量。
                     * @param _redisReplicasNum 实例副本数量。2.8 标准架构无需配置副本数量。
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
                     * 获取是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。
- true：无需支持副本只读。
- false：需支持。
                     * @return ReplicasReadonly 是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。
- true：无需支持副本只读。
- false：需支持。
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。
- true：无需支持副本只读。
- false：需支持。
                     * @param _replicasReadonly 是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。
- true：无需支持副本只读。
- false：需支持。
                     * 
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     * 
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取实例所属的可用区名称，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @return ZoneName 实例所属的可用区名称，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置实例所属的可用区名称，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @param _zoneName 实例所属的可用区名称，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取部署方式。
- local：本地盘版，默认为 local。
- cloud：云盘版。
- cdc：独享集群版。
                     * @return ProductVersion 部署方式。
- local：本地盘版，默认为 local。
- cloud：云盘版。
- cdc：独享集群版。
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置部署方式。
- local：本地盘版，默认为 local。
- cloud：云盘版。
- cdc：独享集群版。
                     * @param _productVersion 部署方式。
- local：本地盘版，默认为 local。
- cloud：云盘版。
- cdc：独享集群版。
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                private:

                    /**
                     * 实例类型。
- 2：Redis 2.8 内存版（标准架构）。
- 6：Redis 4.0 内存版（标准架构）。
- 7：Redis 4.0 内存版（集群架构）。
- 8：Redis 5.0 内存版（标准架构）。
- 9：Redis 5.0 内存版（集群架构）。
- 15：Redis 6.2 内存版（标准架构）。
- 16：Redis 6.2 内存版（集群架构）。
- 17：Redis 7.0 内存版（标准架构）。
- 18：Redis 7.0 内存版（集群架构）。
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 实例数量，单次购买实例数量以 [查询产品售卖规格](https://cloud.tencent.com/document/api/239/30600) 返回的规格为准。
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 付费方式。
- 0：按量计费。
- 1：包年包月。
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例分片数量。2.8 标准架构无需配置分片，其余版本标准架构需要配置分片数量为1。集群架构需指定需购买的分片数量。
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 实例副本数量。2.8 标准架构无需配置副本数量。
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。
- true：无需支持副本只读。
- false：需支持。
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * 实例所属的可用区名称，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 部署方式。
- local：本地盘版，默认为 local。
- cloud：云盘版。
- cdc：独享集群版。
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
