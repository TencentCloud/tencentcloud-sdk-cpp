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
                     * 获取<p>实例类型。- 2：Redis 2.8 内存版（标准架构）。- 6：Redis 4.0 内存版（标准架构）。- 7：Redis 4.0 内存版（集群架构）。- 8：Redis 5.0 内存版（标准架构）。- 9：Redis 5.0 内存版（集群架构）。- 15：Redis 6.2 内存版（标准架构）。- 16：Redis 6.2 内存版（集群架构）。- 17：Redis 7.0 内存版（标准架构）。- 18：Redis 7.0 内存版（集群架构）。- 200:Memcached 1.6 内存版（集群架构）。</p>
                     * @return TypeId <p>实例类型。- 2：Redis 2.8 内存版（标准架构）。- 6：Redis 4.0 内存版（标准架构）。- 7：Redis 4.0 内存版（集群架构）。- 8：Redis 5.0 内存版（标准架构）。- 9：Redis 5.0 内存版（集群架构）。- 15：Redis 6.2 内存版（标准架构）。- 16：Redis 6.2 内存版（集群架构）。- 17：Redis 7.0 内存版（标准架构）。- 18：Redis 7.0 内存版（集群架构）。- 200:Memcached 1.6 内存版（集群架构）。</p>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置<p>实例类型。- 2：Redis 2.8 内存版（标准架构）。- 6：Redis 4.0 内存版（标准架构）。- 7：Redis 4.0 内存版（集群架构）。- 8：Redis 5.0 内存版（标准架构）。- 9：Redis 5.0 内存版（集群架构）。- 15：Redis 6.2 内存版（标准架构）。- 16：Redis 6.2 内存版（集群架构）。- 17：Redis 7.0 内存版（标准架构）。- 18：Redis 7.0 内存版（集群架构）。- 200:Memcached 1.6 内存版（集群架构）。</p>
                     * @param _typeId <p>实例类型。- 2：Redis 2.8 内存版（标准架构）。- 6：Redis 4.0 内存版（标准架构）。- 7：Redis 4.0 内存版（集群架构）。- 8：Redis 5.0 内存版（标准架构）。- 9：Redis 5.0 内存版（集群架构）。- 15：Redis 6.2 内存版（标准架构）。- 16：Redis 6.2 内存版（集群架构）。- 17：Redis 7.0 内存版（标准架构）。- 18：Redis 7.0 内存版（集群架构）。- 200:Memcached 1.6 内存版（集群架构）。</p>
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
                     * 获取<p>内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。</p>
                     * @return MemSize <p>内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。</p>
                     * @param _memSize <p>内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。</p>
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
                     * 获取<p>实例数量，单次购买实例数量以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。</p>
                     * @return GoodsNum <p>实例数量，单次购买实例数量以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，单次购买实例数量以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。</p>
                     * @param _goodsNum <p>实例数量，单次购买实例数量以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。</p>
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
                     * 获取<p>购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * @return Period <p>购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     * @param _period <p>购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
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
                     * 获取<p>付费方式。- 0：按量计费。- 1：包年包月。</p>
                     * @return BillingMode <p>付费方式。- 0：按量计费。- 1：包年包月。</p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>付费方式。- 0：按量计费。- 1：包年包月。</p>
                     * @param _billingMode <p>付费方式。- 0：按量计费。- 1：包年包月。</p>
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
                     * 获取<p>实例所属的可用区 ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * @return ZoneId <p>实例所属的可用区 ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>实例所属的可用区 ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * @param _zoneId <p>实例所属的可用区 ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
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
                     * 获取<p>实例分片数量。- 标准架构需要配置分片数量为1。- 集群架构分片数量支持设置为1、3、5、8、12、16、24、32、40、48、64、80、96、128。</p>
                     * @return RedisShardNum <p>实例分片数量。- 标准架构需要配置分片数量为1。- 集群架构分片数量支持设置为1、3、5、8、12、16、24、32、40、48、64、80、96、128。</p>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>实例分片数量。- 标准架构需要配置分片数量为1。- 集群架构分片数量支持设置为1、3、5、8、12、16、24、32、40、48、64、80、96、128。</p>
                     * @param _redisShardNum <p>实例分片数量。- 标准架构需要配置分片数量为1。- 集群架构分片数量支持设置为1、3、5、8、12、16、24、32、40、48、64、80、96、128。</p>
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
                     * 获取<p>实例副本数量。取值范围为：1、2、3、4、5。</p>
                     * @return RedisReplicasNum <p>实例副本数量。取值范围为：1、2、3、4、5。</p>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>实例副本数量。取值范围为：1、2、3、4、5。</p>
                     * @param _redisReplicasNum <p>实例副本数量。取值范围为：1、2、3、4、5。</p>
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
                     * 获取<p>是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。- true：无需支持副本只读。- false：需支持。</p>
                     * @return ReplicasReadonly <p>是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。- true：无需支持副本只读。- false：需支持。</p>
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置<p>是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。- true：无需支持副本只读。- false：需支持。</p>
                     * @param _replicasReadonly <p>是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。- true：无需支持副本只读。- false：需支持。</p>
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
                     * 获取<p>实例所属的可用区名称，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * @return ZoneName <p>实例所属的可用区名称，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>实例所属的可用区名称，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     * @param _zoneName <p>实例所属的可用区名称，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
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
                     * 获取<p>部署方式。- local：本地盘版，默认为 local。- cloud：云盘版。- cdc：独享集群版。</p>
                     * @return ProductVersion <p>部署方式。- local：本地盘版，默认为 local。- cloud：云盘版。- cdc：独享集群版。</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>部署方式。- local：本地盘版，默认为 local。- cloud：云盘版。- cdc：独享集群版。</p>
                     * @param _productVersion <p>部署方式。- local：本地盘版，默认为 local。- cloud：云盘版。- cdc：独享集群版。</p>
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
                     * <p>实例类型。- 2：Redis 2.8 内存版（标准架构）。- 6：Redis 4.0 内存版（标准架构）。- 7：Redis 4.0 内存版（集群架构）。- 8：Redis 5.0 内存版（标准架构）。- 9：Redis 5.0 内存版（集群架构）。- 15：Redis 6.2 内存版（标准架构）。- 16：Redis 6.2 内存版（集群架构）。- 17：Redis 7.0 内存版（标准架构）。- 18：Redis 7.0 内存版（集群架构）。- 200:Memcached 1.6 内存版（集群架构）。</p>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>内存容量，单位为MB， 数值需为1024的整数倍，具体规格以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。TypeId为标准架构时，MemSize是实例总内存容量；TypeId为集群架构时，MemSize是单分片内存容量。</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>实例数量，单次购买实例数量以 <a href="https://cloud.tencent.com/document/api/239/30600">查询产品售卖规格</a> 返回的规格为准。</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>购买时长，在创建包年包月实例的时候需要填写，按量计费实例填1即可，单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>付费方式。- 0：按量计费。- 1：包年包月。</p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例所属的可用区 ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实例分片数量。- 标准架构需要配置分片数量为1。- 集群架构分片数量支持设置为1、3、5、8、12、16、24、32、40、48、64、80、96、128。</p>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>实例副本数量。取值范围为：1、2、3、4、5。</p>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>是否支持副本只读。Redis2.8标准架构、CKV标准架构无需填写。- true：无需支持副本只读。- false：需支持。</p>
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * <p>实例所属的可用区名称，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。<strong>说明</strong>：请在 <strong>ZoneId</strong> 与 <strong>ZoneName</strong> 中至少指定一个参数。</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>部署方式。- local：本地盘版，默认为 local。- cloud：云盘版。- cdc：独享集群版。</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
