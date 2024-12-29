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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 售卖配置详情
                */
                class CdbSellConfig : public AbstractModel
                {
                public:
                    CdbSellConfig();
                    ~CdbSellConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内存大小，单位为MB
                     * @return Memory 内存大小，单位为MB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位为MB
                     * @param _memory 内存大小，单位为MB
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
                     * 获取CPU核心数
                     * @return Cpu CPU核心数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核心数
                     * @param _cpu CPU核心数
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
                     * 获取磁盘最小规格，单位为GB
                     * @return VolumeMin 磁盘最小规格，单位为GB
                     * 
                     */
                    int64_t GetVolumeMin() const;

                    /**
                     * 设置磁盘最小规格，单位为GB
                     * @param _volumeMin 磁盘最小规格，单位为GB
                     * 
                     */
                    void SetVolumeMin(const int64_t& _volumeMin);

                    /**
                     * 判断参数 VolumeMin 是否已赋值
                     * @return VolumeMin 是否已赋值
                     * 
                     */
                    bool VolumeMinHasBeenSet() const;

                    /**
                     * 获取磁盘最大规格，单位为GB
                     * @return VolumeMax 磁盘最大规格，单位为GB
                     * 
                     */
                    int64_t GetVolumeMax() const;

                    /**
                     * 设置磁盘最大规格，单位为GB
                     * @param _volumeMax 磁盘最大规格，单位为GB
                     * 
                     */
                    void SetVolumeMax(const int64_t& _volumeMax);

                    /**
                     * 判断参数 VolumeMax 是否已赋值
                     * @return VolumeMax 是否已赋值
                     * 
                     */
                    bool VolumeMaxHasBeenSet() const;

                    /**
                     * 获取磁盘步长，单位为GB
                     * @return VolumeStep 磁盘步长，单位为GB
                     * 
                     */
                    int64_t GetVolumeStep() const;

                    /**
                     * 设置磁盘步长，单位为GB
                     * @param _volumeStep 磁盘步长，单位为GB
                     * 
                     */
                    void SetVolumeStep(const int64_t& _volumeStep);

                    /**
                     * 判断参数 VolumeStep 是否已赋值
                     * @return VolumeStep 是否已赋值
                     * 
                     */
                    bool VolumeStepHasBeenSet() const;

                    /**
                     * 获取每秒IO数量
                     * @return Iops 每秒IO数量
                     * 
                     */
                    int64_t GetIops() const;

                    /**
                     * 设置每秒IO数量
                     * @param _iops 每秒IO数量
                     * 
                     */
                    void SetIops(const int64_t& _iops);

                    /**
                     * 判断参数 Iops 是否已赋值
                     * @return Iops 是否已赋值
                     * 
                     */
                    bool IopsHasBeenSet() const;

                    /**
                     * 获取应用场景描述
                     * @return Info 应用场景描述
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置应用场景描述
                     * @param _info 应用场景描述
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取状态值，0 表示该规格对外售卖
                     * @return Status 状态值，0 表示该规格对外售卖
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态值，0 表示该规格对外售卖
                     * @param _status 状态值，0 表示该规格对外售卖
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
                     * 获取实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型), BASIC_V2 (基础型v2)
                     * @return DeviceType 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型), BASIC_V2 (基础型v2)
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型), BASIC_V2 (基础型v2)
                     * @param _deviceType 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型), BASIC_V2 (基础型v2)
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取引擎类型描述，可能的取值范围有：Innodb，RocksDB
                     * @return EngineType 引擎类型描述，可能的取值范围有：Innodb，RocksDB
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型描述，可能的取值范围有：Innodb，RocksDB
                     * @param _engineType 引擎类型描述，可能的取值范围有：Innodb，RocksDB
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取售卖规格Id
                     * @return Id 售卖规格Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置售卖规格Id
                     * @param _id 售卖规格Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 内存大小，单位为MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 磁盘最小规格，单位为GB
                     */
                    int64_t m_volumeMin;
                    bool m_volumeMinHasBeenSet;

                    /**
                     * 磁盘最大规格，单位为GB
                     */
                    int64_t m_volumeMax;
                    bool m_volumeMaxHasBeenSet;

                    /**
                     * 磁盘步长，单位为GB
                     */
                    int64_t m_volumeStep;
                    bool m_volumeStepHasBeenSet;

                    /**
                     * 每秒IO数量
                     */
                    int64_t m_iops;
                    bool m_iopsHasBeenSet;

                    /**
                     * 应用场景描述
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 状态值，0 表示该规格对外售卖
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型), BASIC_V2 (基础型v2)
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 引擎类型描述，可能的取值范围有：Innodb，RocksDB
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 售卖规格Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_
