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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ServerlessZoneStockInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * serverless规格
                */
                class ServerlessSpec : public AbstractModel
                {
                public:
                    ServerlessSpec();
                    ~ServerlessSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu最小值
                     * @return MinCpu cpu最小值
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置cpu最小值
                     * @param _minCpu cpu最小值
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取cpu最大值
                     * @return MaxCpu cpu最大值
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置cpu最大值
                     * @param _maxCpu cpu最大值
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取最大存储空间
                     * @return MaxStorageSize 最大存储空间
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置最大存储空间
                     * @param _maxStorageSize 最大存储空间
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
                     * 获取是否为默认规格
                     * @return IsDefault 是否为默认规格
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否为默认规格
                     * @param _isDefault 是否为默认规格
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否有库存
                     * @return HasStock 是否有库存
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置是否有库存
                     * @param _hasStock 是否有库存
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                    /**
                     * 获取库存数量
                     * @return StockCount 库存数量
                     * 
                     */
                    int64_t GetStockCount() const;

                    /**
                     * 设置库存数量
                     * @param _stockCount 库存数量
                     * 
                     */
                    void SetStockCount(const int64_t& _stockCount);

                    /**
                     * 判断参数 StockCount 是否已赋值
                     * @return StockCount 是否已赋值
                     * 
                     */
                    bool StockCountHasBeenSet() const;

                    /**
                     * 获取可用区库存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneStockInfos 可用区库存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServerlessZoneStockInfo> GetZoneStockInfos() const;

                    /**
                     * 设置可用区库存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneStockInfos 可用区库存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneStockInfos(const std::vector<ServerlessZoneStockInfo>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     * 
                     */
                    bool ZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * cpu最小值
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * cpu最大值
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * 最大存储空间
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 是否为默认规格
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否有库存
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * 库存数量
                     */
                    int64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * 可用区库存信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessZoneStockInfo> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSSPEC_H_
