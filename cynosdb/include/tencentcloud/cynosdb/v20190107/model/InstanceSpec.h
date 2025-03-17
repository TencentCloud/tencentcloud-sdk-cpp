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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例可售卖规格详细信息，创建实例时Cpu/Memory确定实例规格，存储可选大小为[MinStorageSize,MaxStorageSize]
                */
                class InstanceSpec : public AbstractModel
                {
                public:
                    InstanceSpec();
                    ~InstanceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例CPU，单位：核
                     * @return Cpu 实例CPU，单位：核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置实例CPU，单位：核
                     * @param _cpu 实例CPU，单位：核
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例内存，单位：GB
                     * @return Memory 实例内存，单位：GB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存，单位：GB
                     * @param _memory 实例内存，单位：GB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例最大可用存储，单位：GB
                     * @return MaxStorageSize 实例最大可用存储，单位：GB
                     * 
                     */
                    uint64_t GetMaxStorageSize() const;

                    /**
                     * 设置实例最大可用存储，单位：GB
                     * @param _maxStorageSize 实例最大可用存储，单位：GB
                     * 
                     */
                    void SetMaxStorageSize(const uint64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取实例最小可用存储，单位：GB
                     * @return MinStorageSize 实例最小可用存储，单位：GB
                     * 
                     */
                    uint64_t GetMinStorageSize() const;

                    /**
                     * 设置实例最小可用存储，单位：GB
                     * @param _minStorageSize 实例最小可用存储，单位：GB
                     * 
                     */
                    void SetMinStorageSize(const uint64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

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
                     * 获取机器类型
                     * @return MachineType 机器类型
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型
                     * @param _machineType 机器类型
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取最大IOPS
                     * @return MaxIops 最大IOPS
                     * 
                     */
                    int64_t GetMaxIops() const;

                    /**
                     * 设置最大IOPS
                     * @param _maxIops 最大IOPS
                     * 
                     */
                    void SetMaxIops(const int64_t& _maxIops);

                    /**
                     * 判断参数 MaxIops 是否已赋值
                     * @return MaxIops 是否已赋值
                     * 
                     */
                    bool MaxIopsHasBeenSet() const;

                    /**
                     * 获取最大IO带宽
                     * @return MaxIoBandWidth 最大IO带宽
                     * 
                     */
                    int64_t GetMaxIoBandWidth() const;

                    /**
                     * 设置最大IO带宽
                     * @param _maxIoBandWidth 最大IO带宽
                     * 
                     */
                    void SetMaxIoBandWidth(const int64_t& _maxIoBandWidth);

                    /**
                     * 判断参数 MaxIoBandWidth 是否已赋值
                     * @return MaxIoBandWidth 是否已赋值
                     * 
                     */
                    bool MaxIoBandWidthHasBeenSet() const;

                    /**
                     * 获取地域库存信息
                     * @return ZoneStockInfos 地域库存信息
                     * 
                     */
                    std::vector<ZoneStockInfo> GetZoneStockInfos() const;

                    /**
                     * 设置地域库存信息
                     * @param _zoneStockInfos 地域库存信息
                     * 
                     */
                    void SetZoneStockInfos(const std::vector<ZoneStockInfo>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     * 
                     */
                    bool ZoneStockInfosHasBeenSet() const;

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

                private:

                    /**
                     * 实例CPU，单位：核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存，单位：GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例最大可用存储，单位：GB
                     */
                    uint64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 实例最小可用存储，单位：GB
                     */
                    uint64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * 是否有库存
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 最大IOPS
                     */
                    int64_t m_maxIops;
                    bool m_maxIopsHasBeenSet;

                    /**
                     * 最大IO带宽
                     */
                    int64_t m_maxIoBandWidth;
                    bool m_maxIoBandWidthHasBeenSet;

                    /**
                     * 地域库存信息
                     */
                    std::vector<ZoneStockInfo> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                    /**
                     * 库存数量
                     */
                    int64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCESPEC_H_
