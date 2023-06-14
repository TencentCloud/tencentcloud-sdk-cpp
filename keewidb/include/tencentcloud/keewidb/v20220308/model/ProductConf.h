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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_PRODUCTCONF_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_PRODUCTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 产品规格信息
                */
                class ProductConf : public AbstractModel
                {
                public:
                    ProductConf();
                    ~ProductConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品类型，13-KeewiDB标准架构，14-KeewiDB集群架构
                     * @return Type 产品类型，13-KeewiDB标准架构，14-KeewiDB集群架构
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置产品类型，13-KeewiDB标准架构，14-KeewiDB集群架构
                     * @param _type 产品类型，13-KeewiDB标准架构，14-KeewiDB集群架构
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
                     * 获取KeewiDB标准架构，KeewiDB集群架构
                     * @return TypeName KeewiDB标准架构，KeewiDB集群架构
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置KeewiDB标准架构，KeewiDB集群架构
                     * @param _typeName KeewiDB标准架构，KeewiDB集群架构
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取购买时的最小数量
                     * @return MinBuyNum 购买时的最小数量
                     * 
                     */
                    int64_t GetMinBuyNum() const;

                    /**
                     * 设置购买时的最小数量
                     * @param _minBuyNum 购买时的最小数量
                     * 
                     */
                    void SetMinBuyNum(const int64_t& _minBuyNum);

                    /**
                     * 判断参数 MinBuyNum 是否已赋值
                     * @return MinBuyNum 是否已赋值
                     * 
                     */
                    bool MinBuyNumHasBeenSet() const;

                    /**
                     * 获取购买时的最大数量
                     * @return MaxBuyNum 购买时的最大数量
                     * 
                     */
                    int64_t GetMaxBuyNum() const;

                    /**
                     * 设置购买时的最大数量
                     * @param _maxBuyNum 购买时的最大数量
                     * 
                     */
                    void SetMaxBuyNum(const int64_t& _maxBuyNum);

                    /**
                     * 判断参数 MaxBuyNum 是否已赋值
                     * @return MaxBuyNum 是否已赋值
                     * 
                     */
                    bool MaxBuyNumHasBeenSet() const;

                    /**
                     * 获取产品是否售罄
                     * @return Saleout 产品是否售罄
                     * 
                     */
                    bool GetSaleout() const;

                    /**
                     * 设置产品是否售罄
                     * @param _saleout 产品是否售罄
                     * 
                     */
                    void SetSaleout(const bool& _saleout);

                    /**
                     * 判断参数 Saleout 是否已赋值
                     * @return Saleout 是否已赋值
                     * 
                     */
                    bool SaleoutHasBeenSet() const;

                    /**
                     * 获取产品引擎，keewidb
                     * @return Engine 产品引擎，keewidb
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置产品引擎，keewidb
                     * @param _engine 产品引擎，keewidb
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
                     * 获取兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * @return Version 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * @param _version 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取副本数量
                     * @return ReplicaNum 副本数量
                     * 
                     */
                    std::vector<std::string> GetReplicaNum() const;

                    /**
                     * 设置副本数量
                     * @param _replicaNum 副本数量
                     * 
                     */
                    void SetReplicaNum(const std::vector<std::string>& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取支持的计费模式，1-包年包月，0-按量计费
                     * @return PayMode 支持的计费模式，1-包年包月，0-按量计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置支持的计费模式，1-包年包月，0-按量计费
                     * @param _payMode 支持的计费模式，1-包年包月，0-按量计费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 产品类型，13-KeewiDB标准架构，14-KeewiDB集群架构
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * KeewiDB标准架构，KeewiDB集群架构
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
                     * 产品引擎，keewidb
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 兼容版本，Redis-2.8，Redis-3.2，Redis-4.0
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 副本数量
                     */
                    std::vector<std::string> m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 支持的计费模式，1-包年包月，0-按量计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_PRODUCTCONF_H_
