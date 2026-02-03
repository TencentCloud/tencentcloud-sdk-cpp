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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo4Libra.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 该地域实例规格信息
                */
                class RegionInstanceSpecInfo : public AbstractModel
                {
                public:
                    RegionInstanceSpecInfo();
                    ~RegionInstanceSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu cpu核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu cpu核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取最小存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinStorageSize 最小存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置最小存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minStorageSize 最小存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取最大存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStorageSize 最大存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置最大存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxStorageSize 最大存储大小
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否有库存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasStock 是否有库存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置是否有库存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasStock 是否有库存
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取最小副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinReplicaNum 最小副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinReplicaNum() const;

                    /**
                     * 设置最小副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minReplicaNum 最小副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinReplicaNum(const uint64_t& _minReplicaNum);

                    /**
                     * 判断参数 MinReplicaNum 是否已赋值
                     * @return MinReplicaNum 是否已赋值
                     * 
                     */
                    bool MinReplicaNumHasBeenSet() const;

                    /**
                     * 获取最大副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReplicaNum 最大副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxReplicaNum() const;

                    /**
                     * 设置最大副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxReplicaNum 最大副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxReplicaNum(const uint64_t& _maxReplicaNum);

                    /**
                     * 判断参数 MaxReplicaNum 是否已赋值
                     * @return MaxReplicaNum 是否已赋值
                     * 
                     */
                    bool MaxReplicaNumHasBeenSet() const;

                    /**
                     * 获取可用区库存信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneStockInfos 可用区库存信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneStockInfo4Libra> GetZoneStockInfos() const;

                    /**
                     * 设置可用区库存信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneStockInfos 可用区库存信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneStockInfos(const std::vector<ZoneStockInfo4Libra>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     * 
                     */
                    bool ZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * cpu核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 最小存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * 最大存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * 是否有库存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * 实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 最小副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minReplicaNum;
                    bool m_minReplicaNumHasBeenSet;

                    /**
                     * 最大副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxReplicaNum;
                    bool m_maxReplicaNumHasBeenSet;

                    /**
                     * 可用区库存信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneStockInfo4Libra> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_
