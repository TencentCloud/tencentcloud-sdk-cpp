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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_

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
                class SellConfig : public AbstractModel
                {
                public:
                    SellConfig();
                    ~SellConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备类型（废弃）
                     * @return Device 设备类型（废弃）
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置设备类型（废弃）
                     * @param Device 设备类型（废弃）
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取售卖规格描述（废弃）
                     * @return Type 售卖规格描述（废弃）
                     */
                    std::string GetType() const;

                    /**
                     * 设置售卖规格描述（废弃）
                     * @param Type 售卖规格描述（废弃）
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例类型（废弃）
                     * @return CdbType 实例类型（废弃）
                     */
                    std::string GetCdbType() const;

                    /**
                     * 设置实例类型（废弃）
                     * @param CdbType 实例类型（废弃）
                     */
                    void SetCdbType(const std::string& _cdbType);

                    /**
                     * 判断参数 CdbType 是否已赋值
                     * @return CdbType 是否已赋值
                     */
                    bool CdbTypeHasBeenSet() const;

                    /**
                     * 获取内存大小，单位为MB
                     * @return Memory 内存大小，单位为MB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位为MB
                     * @param Memory 内存大小，单位为MB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CPU核心数
                     * @return Cpu CPU核心数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核心数
                     * @param Cpu CPU核心数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取磁盘最小规格，单位为GB
                     * @return VolumeMin 磁盘最小规格，单位为GB
                     */
                    int64_t GetVolumeMin() const;

                    /**
                     * 设置磁盘最小规格，单位为GB
                     * @param VolumeMin 磁盘最小规格，单位为GB
                     */
                    void SetVolumeMin(const int64_t& _volumeMin);

                    /**
                     * 判断参数 VolumeMin 是否已赋值
                     * @return VolumeMin 是否已赋值
                     */
                    bool VolumeMinHasBeenSet() const;

                    /**
                     * 获取磁盘最大规格，单位为GB
                     * @return VolumeMax 磁盘最大规格，单位为GB
                     */
                    int64_t GetVolumeMax() const;

                    /**
                     * 设置磁盘最大规格，单位为GB
                     * @param VolumeMax 磁盘最大规格，单位为GB
                     */
                    void SetVolumeMax(const int64_t& _volumeMax);

                    /**
                     * 判断参数 VolumeMax 是否已赋值
                     * @return VolumeMax 是否已赋值
                     */
                    bool VolumeMaxHasBeenSet() const;

                    /**
                     * 获取磁盘步长，单位为GB
                     * @return VolumeStep 磁盘步长，单位为GB
                     */
                    int64_t GetVolumeStep() const;

                    /**
                     * 设置磁盘步长，单位为GB
                     * @param VolumeStep 磁盘步长，单位为GB
                     */
                    void SetVolumeStep(const int64_t& _volumeStep);

                    /**
                     * 判断参数 VolumeStep 是否已赋值
                     * @return VolumeStep 是否已赋值
                     */
                    bool VolumeStepHasBeenSet() const;

                    /**
                     * 获取链接数
                     * @return Connection 链接数
                     */
                    int64_t GetConnection() const;

                    /**
                     * 设置链接数
                     * @param Connection 链接数
                     */
                    void SetConnection(const int64_t& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     */
                    bool ConnectionHasBeenSet() const;

                    /**
                     * 获取每秒查询数量
                     * @return Qps 每秒查询数量
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置每秒查询数量
                     * @param Qps 每秒查询数量
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取每秒IO数量
                     * @return Iops 每秒IO数量
                     */
                    int64_t GetIops() const;

                    /**
                     * 设置每秒IO数量
                     * @param Iops 每秒IO数量
                     */
                    void SetIops(const int64_t& _iops);

                    /**
                     * 判断参数 Iops 是否已赋值
                     * @return Iops 是否已赋值
                     */
                    bool IopsHasBeenSet() const;

                    /**
                     * 获取应用场景描述
                     * @return Info 应用场景描述
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置应用场景描述
                     * @param Info 应用场景描述
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取状态值，0 表示该规格对外售卖
                     * @return Status 状态值，0 表示该规格对外售卖
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态值，0 表示该规格对外售卖
                     * @param Status 状态值，0 表示该规格对外售卖
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签值（废弃）
                     * @return Tag 标签值（废弃）
                     */
                    int64_t GetTag() const;

                    /**
                     * 设置标签值（废弃）
                     * @param Tag 标签值（废弃）
                     */
                    void SetTag(const int64_t& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceType 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceType 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取实例类型描述，可能的取值范围有：通用型， 独享型， 基础型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceTypeName 实例类型描述，可能的取值范围有：通用型， 独享型， 基础型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceTypeName() const;

                    /**
                     * 设置实例类型描述，可能的取值范围有：通用型， 独享型， 基础型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceTypeName 实例类型描述，可能的取值范围有：通用型， 独享型， 基础型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceTypeName(const std::string& _deviceTypeName);

                    /**
                     * 判断参数 DeviceTypeName 是否已赋值
                     * @return DeviceTypeName 是否已赋值
                     */
                    bool DeviceTypeNameHasBeenSet() const;

                    /**
                     * 获取引擎类型描述，可能的取值范围有：Innodb，RocksDB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 引擎类型描述，可能的取值范围有：Innodb，RocksDB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型描述，可能的取值范围有：Innodb，RocksDB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineType 引擎类型描述，可能的取值范围有：Innodb，RocksDB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 设备类型（废弃）
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 售卖规格描述（废弃）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例类型（废弃）
                     */
                    std::string m_cdbType;
                    bool m_cdbTypeHasBeenSet;

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
                     * 链接数
                     */
                    int64_t m_connection;
                    bool m_connectionHasBeenSet;

                    /**
                     * 每秒查询数量
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

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
                     * 标签值（废弃）
                     */
                    int64_t m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 实例类型，可能的取值范围有：UNIVERSAL (通用型), EXCLUSIVE (独享型), BASIC (基础型)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 实例类型描述，可能的取值范围有：通用型， 独享型， 基础型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceTypeName;
                    bool m_deviceTypeNameHasBeenSet;

                    /**
                     * 引擎类型描述，可能的取值范围有：Innodb，RocksDB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_
