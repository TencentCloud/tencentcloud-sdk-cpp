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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBPrice请求参数结构体
                */
                class DescribeDBPriceRequest : public AbstractModel
                {
                public:
                    DescribeDBPriceRequest();
                    ~DescribeDBPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。
                     * @return Period 实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。
                     * @param _period 实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取可用区信息，格式如 "ap-guangzhou-2"。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。
                     * @return Zone 可用区信息，格式如 "ap-guangzhou-2"。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，格式如 "ap-guangzhou-2"。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。
                     * @param _zone 可用区信息，格式如 "ap-guangzhou-2"。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。
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
                     * 获取实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。
                     * @return GoodsNum 实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。
                     * @param _goodsNum 实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。
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
                     * 获取实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的实例内存大小范围。
                     * @return Memory 实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的实例内存大小范围。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的实例内存大小范围。
                     * @param _memory 实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的实例内存大小范围。
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
                     * 获取实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的硬盘大小范围。
                     * @return Volume 实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的硬盘大小范围。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的硬盘大小范围。
                     * @param _volume 实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的硬盘大小范围。
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
                     * 获取实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。
                     * @return InstanceRole 实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。
                     * @param _instanceRole 实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。
                     * @return PayType 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。
                     * @param _payType 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * @return ProtectMode 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * @param _protectMode 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取实例隔离类型。支持值包括： "UNIVERSAL" - 通用型实例， "EXCLUSIVE" - 独享型实例， "BASIC_V2" - 单节点云盘版实例。 "CLOUD_NATIVE_CLUSTER" - 集群版标准型， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。   不指定则默认为通用型实例。
                     * @return DeviceType 实例隔离类型。支持值包括： "UNIVERSAL" - 通用型实例， "EXCLUSIVE" - 独享型实例， "BASIC_V2" - 单节点云盘版实例。 "CLOUD_NATIVE_CLUSTER" - 集群版标准型， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。   不指定则默认为通用型实例。
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例隔离类型。支持值包括： "UNIVERSAL" - 通用型实例， "EXCLUSIVE" - 独享型实例， "BASIC_V2" - 单节点云盘版实例。 "CLOUD_NATIVE_CLUSTER" - 集群版标准型， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。   不指定则默认为通用型实例。
                     * @param _deviceType 实例隔离类型。支持值包括： "UNIVERSAL" - 通用型实例， "EXCLUSIVE" - 独享型实例， "BASIC_V2" - 单节点云盘版实例。 "CLOUD_NATIVE_CLUSTER" - 集群版标准型， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。   不指定则默认为通用型实例。
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
                     * 获取实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要询价三节点实例， 请将该值设置为3。其余主实例该值默认为2。
                     * @return InstanceNodes 实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要询价三节点实例， 请将该值设置为3。其余主实例该值默认为2。
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要询价三节点实例， 请将该值设置为3。其余主实例该值默认为2。
                     * @param _instanceNodes 实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要询价三节点实例， 请将该值设置为3。其余主实例该值默认为2。
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。
                     * @return Cpu 询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。
                     * @param _cpu 询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。
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
                     * 获取询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。
                     * @return InstanceId 询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。
                     * @param _instanceId 询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。
                     * @return Ladder 按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。
                     * 
                     */
                    uint64_t GetLadder() const;

                    /**
                     * 设置按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。
                     * @param _ladder 按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。
                     * 
                     */
                    void SetLadder(const uint64_t& _ladder);

                    /**
                     * 判断参数 Ladder 是否已赋值
                     * @return Ladder 是否已赋值
                     * 
                     */
                    bool LadderHasBeenSet() const;

                    /**
                     * 获取磁盘类型，查询集群版、单节点云盘版实例价格可以指定该参数。支持值包括： "CLOUD_SSD" - SSD云硬盘， "CLOUD_HSSD" - 增强型SSD云硬盘。  默认为 SSD云硬盘。
                     * @return DiskType 磁盘类型，查询集群版、单节点云盘版实例价格可以指定该参数。支持值包括： "CLOUD_SSD" - SSD云硬盘， "CLOUD_HSSD" - 增强型SSD云硬盘。  默认为 SSD云硬盘。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型，查询集群版、单节点云盘版实例价格可以指定该参数。支持值包括： "CLOUD_SSD" - SSD云硬盘， "CLOUD_HSSD" - 增强型SSD云硬盘。  默认为 SSD云硬盘。
                     * @param _diskType 磁盘类型，查询集群版、单节点云盘版实例价格可以指定该参数。支持值包括： "CLOUD_SSD" - SSD云硬盘， "CLOUD_HSSD" - 增强型SSD云硬盘。  默认为 SSD云硬盘。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * 实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 可用区信息，格式如 "ap-guangzhou-2"。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的实例内存大小范围。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的硬盘大小范围。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 实例隔离类型。支持值包括： "UNIVERSAL" - 通用型实例， "EXCLUSIVE" - 独享型实例， "BASIC_V2" - 单节点云盘版实例。 "CLOUD_NATIVE_CLUSTER" - 集群版标准型， "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - 集群版加强型。   不指定则默认为通用型实例。
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要询价三节点实例， 请将该值设置为3。其余主实例该值默认为2。
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * 询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 [获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229) 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。
                     */
                    uint64_t m_ladder;
                    bool m_ladderHasBeenSet;

                    /**
                     * 磁盘类型，查询集群版、单节点云盘版实例价格可以指定该参数。支持值包括： "CLOUD_SSD" - SSD云硬盘， "CLOUD_HSSD" - 增强型SSD云硬盘。  默认为 SSD云硬盘。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
