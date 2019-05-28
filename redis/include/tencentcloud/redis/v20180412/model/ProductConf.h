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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_

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
                * 产品信息
                */
                class ProductConf : public AbstractModel
                {
                public:
                    ProductConf();
                    ~ProductConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品类型，2-Redis主从版，3-CKV主从版，4-CKV集群版，5-Redis单机版，7-Redis集群版
                     * @return Type 产品类型，2-Redis主从版，3-CKV主从版，4-CKV集群版，5-Redis单机版，7-Redis集群版
                     */
                    int64_t GetType() const;

                    /**
                     * 设置产品类型，2-Redis主从版，3-CKV主从版，4-CKV集群版，5-Redis单机版，7-Redis集群版
                     * @param Type 产品类型，2-Redis主从版，3-CKV主从版，4-CKV集群版，5-Redis单机版，7-Redis集群版
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取产品名称，Redis主从版，CKV主从版，CKV集群版，Redis单机版，Redis集群版
                     * @return TypeName 产品名称，Redis主从版，CKV主从版，CKV集群版，Redis单机版，Redis集群版
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置产品名称，Redis主从版，CKV主从版，CKV集群版，Redis单机版，Redis集群版
                     * @param TypeName 产品名称，Redis主从版，CKV主从版，CKV集群版，Redis单机版，Redis集群版
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取购买时的最小数量
                     * @return MinBuyNum 购买时的最小数量
                     */
                    int64_t GetMinBuyNum() const;

                    /**
                     * 设置购买时的最小数量
                     * @param MinBuyNum 购买时的最小数量
                     */
                    void SetMinBuyNum(const int64_t& _minBuyNum);

                    /**
                     * 判断参数 MinBuyNum 是否已赋值
                     * @return MinBuyNum 是否已赋值
                     */
                    bool MinBuyNumHasBeenSet() const;

                    /**
                     * 获取购买时的最大数量
                     * @return MaxBuyNum 购买时的最大数量
                     */
                    int64_t GetMaxBuyNum() const;

                    /**
                     * 设置购买时的最大数量
                     * @param MaxBuyNum 购买时的最大数量
                     */
                    void SetMaxBuyNum(const int64_t& _maxBuyNum);

                    /**
                     * 判断参数 MaxBuyNum 是否已赋值
                     * @return MaxBuyNum 是否已赋值
                     */
                    bool MaxBuyNumHasBeenSet() const;

                    /**
                     * 获取产品是否售罄
                     * @return Saleout 产品是否售罄
                     */
                    bool GetSaleout() const;

                    /**
                     * 设置产品是否售罄
                     * @param Saleout 产品是否售罄
                     */
                    void SetSaleout(const bool& _saleout);

                    /**
                     * 判断参数 Saleout 是否已赋值
                     * @return Saleout 是否已赋值
                     */
                    bool SaleoutHasBeenSet() const;

                    /**
                     * 获取产品引擎，腾讯云CKV或者社区版Redis
                     * @return Engine 产品引擎，腾讯云CKV或者社区版Redis
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置产品引擎，腾讯云CKV或者社区版Redis
                     * @param Engine 产品引擎，腾讯云CKV或者社区版Redis
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * @return Version 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * @param Version 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取规格总大小，单位G
                     * @return TotalSize 规格总大小，单位G
                     */
                    std::vector<std::string> GetTotalSize() const;

                    /**
                     * 设置规格总大小，单位G
                     * @param TotalSize 规格总大小，单位G
                     */
                    void SetTotalSize(const std::vector<std::string>& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取每个分片大小，单位G
                     * @return ShardSize 每个分片大小，单位G
                     */
                    std::vector<std::string> GetShardSize() const;

                    /**
                     * 设置每个分片大小，单位G
                     * @param ShardSize 每个分片大小，单位G
                     */
                    void SetShardSize(const std::vector<std::string>& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     */
                    bool ShardSizeHasBeenSet() const;

                    /**
                     * 获取副本数量
                     * @return ReplicaNum 副本数量
                     */
                    std::vector<std::string> GetReplicaNum() const;

                    /**
                     * 设置副本数量
                     * @param ReplicaNum 副本数量
                     */
                    void SetReplicaNum(const std::vector<std::string>& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return ShardNum 分片数量
                     */
                    std::vector<std::string> GetShardNum() const;

                    /**
                     * 设置分片数量
                     * @param ShardNum 分片数量
                     */
                    void SetShardNum(const std::vector<std::string>& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取支持的计费模式，1-包年包月，0-按量计费
                     * @return PayMode 支持的计费模式，1-包年包月，0-按量计费
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置支持的计费模式，1-包年包月，0-按量计费
                     * @param PayMode 支持的计费模式，1-包年包月，0-按量计费
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取是否支持副本只读
                     * @return EnableRepicaReadOnly 是否支持副本只读
                     */
                    bool GetEnableRepicaReadOnly() const;

                    /**
                     * 设置是否支持副本只读
                     * @param EnableRepicaReadOnly 是否支持副本只读
                     */
                    void SetEnableRepicaReadOnly(const bool& _enableRepicaReadOnly);

                    /**
                     * 判断参数 EnableRepicaReadOnly 是否已赋值
                     * @return EnableRepicaReadOnly 是否已赋值
                     */
                    bool EnableRepicaReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 产品类型，2-Redis主从版，3-CKV主从版，4-CKV集群版，5-Redis单机版，7-Redis集群版
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 产品名称，Redis主从版，CKV主从版，CKV集群版，Redis单机版，Redis集群版
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 购买时的最小数量
                     */
                    int64_t m_minBuyNum;
                    bool m_minBuyNumHasBeenSet;

                    /**
                     * 购买时的最大数量
                     */
                    int64_t m_maxBuyNum;
                    bool m_maxBuyNumHasBeenSet;

                    /**
                     * 产品是否售罄
                     */
                    bool m_saleout;
                    bool m_saleoutHasBeenSet;

                    /**
                     * 产品引擎，腾讯云CKV或者社区版Redis
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 规格总大小，单位G
                     */
                    std::vector<std::string> m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 每个分片大小，单位G
                     */
                    std::vector<std::string> m_shardSize;
                    bool m_shardSizeHasBeenSet;

                    /**
                     * 副本数量
                     */
                    std::vector<std::string> m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 分片数量
                     */
                    std::vector<std::string> m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 支持的计费模式，1-包年包月，0-按量计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否支持副本只读
                     */
                    bool m_enableRepicaReadOnly;
                    bool m_enableRepicaReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_
