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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MIGRATECLUSTERROINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MIGRATECLUSTERROINFO_H_

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
                * 一键迁移集群版只读实例信息
                */
                class MigrateClusterRoInfo : public AbstractModel
                {
                public:
                    MigrateClusterRoInfo();
                    ~MigrateClusterRoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读实例名称
                     * @return RoInstanceId 只读实例名称
                     * 
                     */
                    std::string GetRoInstanceId() const;

                    /**
                     * 设置只读实例名称
                     * @param _roInstanceId 只读实例名称
                     * 
                     */
                    void SetRoInstanceId(const std::string& _roInstanceId);

                    /**
                     * 判断参数 RoInstanceId 是否已赋值
                     * @return RoInstanceId 是否已赋值
                     * 
                     */
                    bool RoInstanceIdHasBeenSet() const;

                    /**
                     * 获取只读实例CPU核数
                     * @return Cpu 只读实例CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置只读实例CPU核数
                     * @param _cpu 只读实例CPU核数
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
                     * 获取只读实例内存大小，单位：MB
                     * @return Memory 只读实例内存大小，单位：MB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置只读实例内存大小，单位：MB
                     * @param _memory 只读实例内存大小，单位：MB
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
                     * 获取只读实例硬盘大小，单位：GB
                     * @return Volume 只读实例硬盘大小，单位：GB
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置只读实例硬盘大小，单位：GB
                     * @param _volume 只读实例硬盘大小，单位：GB
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取磁盘类型。 CLOUD_SSD: SSD云硬盘; CLOUD_HSSD: 增强型SSD云硬盘
                     * @return DiskType 磁盘类型。 CLOUD_SSD: SSD云硬盘; CLOUD_HSSD: 增强型SSD云硬盘
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型。 CLOUD_SSD: SSD云硬盘; CLOUD_HSSD: 增强型SSD云硬盘
                     * @param _diskType 磁盘类型。 CLOUD_SSD: SSD云硬盘; CLOUD_HSSD: 增强型SSD云硬盘
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取迁移实例类型。支持值包括： "CLOUD_NATIVE_CLUSTER" - 标准型集群版实例， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 加强型集群版实例。
                     * @return DeviceType 迁移实例类型。支持值包括： "CLOUD_NATIVE_CLUSTER" - 标准型集群版实例， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 加强型集群版实例。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置迁移实例类型。支持值包括： "CLOUD_NATIVE_CLUSTER" - 标准型集群版实例， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 加强型集群版实例。
                     * @param _deviceType 迁移实例类型。支持值包括： "CLOUD_NATIVE_CLUSTER" - 标准型集群版实例， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 加强型集群版实例。
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
                     * 获取只读实例所在ro组，例：cdbrg-xxx
                     * @return RoGroupId 只读实例所在ro组，例：cdbrg-xxx
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置只读实例所在ro组，例：cdbrg-xxx
                     * @param _roGroupId 只读实例所在ro组，例：cdbrg-xxx
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取实例当前告警策略id数组
                     * @return SrcAlarmPolicyList 实例当前告警策略id数组
                     * 
                     */
                    std::vector<int64_t> GetSrcAlarmPolicyList() const;

                    /**
                     * 设置实例当前告警策略id数组
                     * @param _srcAlarmPolicyList 实例当前告警策略id数组
                     * 
                     */
                    void SetSrcAlarmPolicyList(const std::vector<int64_t>& _srcAlarmPolicyList);

                    /**
                     * 判断参数 SrcAlarmPolicyList 是否已赋值
                     * @return SrcAlarmPolicyList 是否已赋值
                     * 
                     */
                    bool SrcAlarmPolicyListHasBeenSet() const;

                private:

                    /**
                     * 只读实例名称
                     */
                    std::string m_roInstanceId;
                    bool m_roInstanceIdHasBeenSet;

                    /**
                     * 只读实例CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 只读实例内存大小，单位：MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 只读实例硬盘大小，单位：GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 磁盘类型。 CLOUD_SSD: SSD云硬盘; CLOUD_HSSD: 增强型SSD云硬盘
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 迁移实例类型。支持值包括： "CLOUD_NATIVE_CLUSTER" - 标准型集群版实例， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 加强型集群版实例。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 只读实例所在ro组，例：cdbrg-xxx
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * 实例当前告警策略id数组
                     */
                    std::vector<int64_t> m_srcAlarmPolicyList;
                    bool m_srcAlarmPolicyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MIGRATECLUSTERROINFO_H_
