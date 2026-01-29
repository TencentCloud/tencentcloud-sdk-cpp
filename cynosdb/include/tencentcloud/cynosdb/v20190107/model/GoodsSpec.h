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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 商品规格
                */
                class GoodsSpec : public AbstractModel
                {
                public:
                    GoodsSpec();
                    ~GoodsSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsNum 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _goodsNum 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取CPU核数，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU核数，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu CPU核数，PREPAID与POSTPAID实例类型必传
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
                     * 获取内存大小，单位G，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存大小，单位G，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位G，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存大小，单位G，PREPAID与POSTPAID实例类型必传
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
                     * 获取Ccu大小，serverless类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ccu Ccu大小，serverless类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置Ccu大小，serverless类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccu Ccu大小，serverless类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcu(const double& _ccu);

                    /**
                     * 判断参数 Ccu 是否已赋值
                     * @return Ccu 是否已赋值
                     * 
                     */
                    bool CcuHasBeenSet() const;

                    /**
                     * 获取存储大小，PREPAID存储类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimit 存储大小，PREPAID存储类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储大小，PREPAID存储类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLimit 存储大小，PREPAID存储类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeSpan 购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeSpan 购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时长单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeUnit 时长单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时长单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeUnit 时长单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取实例机器类型
1. common，通用型。
2. exclusive，独享型。
                     * @return DeviceType 实例机器类型
1. common，通用型。
2. exclusive，独享型。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
1. common，通用型。
2. exclusive，独享型。
                     * @param _deviceType 实例机器类型
1. common，通用型。
2. exclusive，独享型。
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * CPU核数，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位G，PREPAID与POSTPAID实例类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Ccu大小，serverless类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * 存储大小，PREPAID存储类型必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 购买时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 实例机器类型
1. common，通用型。
2. exclusive，独享型。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_
