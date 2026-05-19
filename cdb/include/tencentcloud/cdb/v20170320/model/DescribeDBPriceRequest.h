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
                     * 获取<p>实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。</p>
                     * @return Period <p>实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。</p>
                     * @param _period <p>实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。</p>
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
                     * 获取<p>可用区信息，格式如 &quot;ap-guangzhou-2&quot;。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。</p>
                     * @return Zone <p>可用区信息，格式如 &quot;ap-guangzhou-2&quot;。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息，格式如 &quot;ap-guangzhou-2&quot;。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。</p>
                     * @param _zone <p>可用区信息，格式如 &quot;ap-guangzhou-2&quot;。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。</p>
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
                     * 获取<p>实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。</p>
                     * @return GoodsNum <p>实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。</p>
                     * @param _goodsNum <p>实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。</p>
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
                     * 获取<p>实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的实例内存大小范围。</p>
                     * @return Memory <p>实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的实例内存大小范围。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的实例内存大小范围。</p>
                     * @param _memory <p>实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的实例内存大小范围。</p>
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
                     * 获取<p>实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的硬盘大小范围。</p>
                     * @return Volume <p>实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的硬盘大小范围。</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的硬盘大小范围。</p>
                     * @param _volume <p>实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的硬盘大小范围。</p>
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
                     * 获取<p>实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。</p>
                     * @return InstanceRole <p>实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。</p>
                     * @param _instanceRole <p>实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。</p>
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
                     * 获取<p>付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。</p>
                     * @return PayType <p>付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。</p>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。</p>
                     * @param _payType <p>付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。</p>
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
                     * 获取<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @return ProtectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     * @param _protectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
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
                     * 获取<p>实例隔离类型。</p><p>枚举值：</p><ul><li>UNIVERSAL： 通用型实例</li><li>EXCLUSIVE： 独享型实例</li><li>CLOUD_NATIVE_CLUSTER： 云盘版标准型</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE： 云盘版加强型</li><li>CLOUD_NATIVE_CLUSTER_ULTRA： 云盘版旗舰型</li></ul><p>默认值：UNIVERSAL</p><p>如需查询单节点云盘版实例的价格，请设置此参数为 CLOUD_NATIVE_CLUSTER，并且指定参数 InstanceNodes 为1。</p>
                     * @return DeviceType <p>实例隔离类型。</p><p>枚举值：</p><ul><li>UNIVERSAL： 通用型实例</li><li>EXCLUSIVE： 独享型实例</li><li>CLOUD_NATIVE_CLUSTER： 云盘版标准型</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE： 云盘版加强型</li><li>CLOUD_NATIVE_CLUSTER_ULTRA： 云盘版旗舰型</li></ul><p>默认值：UNIVERSAL</p><p>如需查询单节点云盘版实例的价格，请设置此参数为 CLOUD_NATIVE_CLUSTER，并且指定参数 InstanceNodes 为1。</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例隔离类型。</p><p>枚举值：</p><ul><li>UNIVERSAL： 通用型实例</li><li>EXCLUSIVE： 独享型实例</li><li>CLOUD_NATIVE_CLUSTER： 云盘版标准型</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE： 云盘版加强型</li><li>CLOUD_NATIVE_CLUSTER_ULTRA： 云盘版旗舰型</li></ul><p>默认值：UNIVERSAL</p><p>如需查询单节点云盘版实例的价格，请设置此参数为 CLOUD_NATIVE_CLUSTER，并且指定参数 InstanceNodes 为1。</p>
                     * @param _deviceType <p>实例隔离类型。</p><p>枚举值：</p><ul><li>UNIVERSAL： 通用型实例</li><li>EXCLUSIVE： 独享型实例</li><li>CLOUD_NATIVE_CLUSTER： 云盘版标准型</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE： 云盘版加强型</li><li>CLOUD_NATIVE_CLUSTER_ULTRA： 云盘版旗舰型</li></ul><p>默认值：UNIVERSAL</p><p>如需查询单节点云盘版实例的价格，请设置此参数为 CLOUD_NATIVE_CLUSTER，并且指定参数 InstanceNodes 为1。</p>
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
                     * 获取<p>实例节点数。<br>1.查询 RO 实例或者单节点实例价格时，此字段值为1。<br>2.查询双节点实例价格时，此字段值为2。<br>3.查询三节点实例价格时，此字段值为3。<br>4.查询云盘版实例价格时，此字段值范围可输入2 - 6，取值为2表示云盘版实例下对应有1个读写节点 + 1个只读节点；取值为6表示云盘版实例下对应有1个读写节点 + 5个只读节点；其余取值（3 - 5）按1个读写节点 +（取值数 - 1）个只读节点规则类推。</p>
                     * @return InstanceNodes <p>实例节点数。<br>1.查询 RO 实例或者单节点实例价格时，此字段值为1。<br>2.查询双节点实例价格时，此字段值为2。<br>3.查询三节点实例价格时，此字段值为3。<br>4.查询云盘版实例价格时，此字段值范围可输入2 - 6，取值为2表示云盘版实例下对应有1个读写节点 + 1个只读节点；取值为6表示云盘版实例下对应有1个读写节点 + 5个只读节点；其余取值（3 - 5）按1个读写节点 +（取值数 - 1）个只读节点规则类推。</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>实例节点数。<br>1.查询 RO 实例或者单节点实例价格时，此字段值为1。<br>2.查询双节点实例价格时，此字段值为2。<br>3.查询三节点实例价格时，此字段值为3。<br>4.查询云盘版实例价格时，此字段值范围可输入2 - 6，取值为2表示云盘版实例下对应有1个读写节点 + 1个只读节点；取值为6表示云盘版实例下对应有1个读写节点 + 5个只读节点；其余取值（3 - 5）按1个读写节点 +（取值数 - 1）个只读节点规则类推。</p>
                     * @param _instanceNodes <p>实例节点数。<br>1.查询 RO 实例或者单节点实例价格时，此字段值为1。<br>2.查询双节点实例价格时，此字段值为2。<br>3.查询三节点实例价格时，此字段值为3。<br>4.查询云盘版实例价格时，此字段值范围可输入2 - 6，取值为2表示云盘版实例下对应有1个读写节点 + 1个只读节点；取值为6表示云盘版实例下对应有1个读写节点 + 5个只读节点；其余取值（3 - 5）按1个读写节点 +（取值数 - 1）个只读节点规则类推。</p>
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
                     * 获取<p>询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。</p>
                     * @return Cpu <p>询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。</p>
                     * @param _cpu <p>询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。</p>
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
                     * 获取<p>询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。</p>
                     * @return InstanceId <p>询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。</p>
                     * @param _instanceId <p>询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。</p>
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
                     * 获取<p>按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。</p>
                     * @return Ladder <p>按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。</p>
                     * 
                     */
                    uint64_t GetLadder() const;

                    /**
                     * 设置<p>按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。</p>
                     * @param _ladder <p>按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。</p>
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
                     * 获取<p>磁盘类型，查询云盘版、单节点云盘版实例价格可以指定该参数。默认值为 SSD 云硬盘。<br>支持值包括：<br>&quot;CLOUD_SSD&quot; - SSD 云硬盘。<br>&quot;CLOUD_HSSD&quot; - 增强型 SSD 云硬盘。<br>&quot;CLOUD_PREMIUM&quot; - 高性能云硬盘。</p>
                     * @return DiskType <p>磁盘类型，查询云盘版、单节点云盘版实例价格可以指定该参数。默认值为 SSD 云硬盘。<br>支持值包括：<br>&quot;CLOUD_SSD&quot; - SSD 云硬盘。<br>&quot;CLOUD_HSSD&quot; - 增强型 SSD 云硬盘。<br>&quot;CLOUD_PREMIUM&quot; - 高性能云硬盘。</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>磁盘类型，查询云盘版、单节点云盘版实例价格可以指定该参数。默认值为 SSD 云硬盘。<br>支持值包括：<br>&quot;CLOUD_SSD&quot; - SSD 云硬盘。<br>&quot;CLOUD_HSSD&quot; - 增强型 SSD 云硬盘。<br>&quot;CLOUD_PREMIUM&quot; - 高性能云硬盘。</p>
                     * @param _diskType <p>磁盘类型，查询云盘版、单节点云盘版实例价格可以指定该参数。默认值为 SSD 云硬盘。<br>支持值包括：<br>&quot;CLOUD_SSD&quot; - SSD 云硬盘。<br>&quot;CLOUD_HSSD&quot; - 增强型 SSD 云硬盘。<br>&quot;CLOUD_PREMIUM&quot; - 高性能云硬盘。</p>
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
                     * <p>实例时长，单位：月，最小值 1，最大值为 36；查询按量计费价格时，该字段无效。</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>可用区信息，格式如 &quot;ap-guangzhou-2&quot;。具体能设置的值请通过 <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> 接口查询。InstanceId为空时该参数为必填项。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例数量，默认值为 1，最小值 1，最大值为 100。InstanceId为空时该参数为必填项。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>实例内存大小，单位：MB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的实例内存大小范围。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例硬盘大小，单位：GB。InstanceId 为空时该参数为必填项。为保证传入值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的硬盘大小范围。</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>实例类型，默认为 master，支持值包括：master - 表示主实例，ro - 表示只读实例，dr - 表示灾备实例。InstanceId为空时该参数为必填项。</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费。InstanceId为空时该参数为必填项。</p>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>实例隔离类型。</p><p>枚举值：</p><ul><li>UNIVERSAL： 通用型实例</li><li>EXCLUSIVE： 独享型实例</li><li>CLOUD_NATIVE_CLUSTER： 云盘版标准型</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE： 云盘版加强型</li><li>CLOUD_NATIVE_CLUSTER_ULTRA： 云盘版旗舰型</li></ul><p>默认值：UNIVERSAL</p><p>如需查询单节点云盘版实例的价格，请设置此参数为 CLOUD_NATIVE_CLUSTER，并且指定参数 InstanceNodes 为1。</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>实例节点数。<br>1.查询 RO 实例或者单节点实例价格时，此字段值为1。<br>2.查询双节点实例价格时，此字段值为2。<br>3.查询三节点实例价格时，此字段值为3。<br>4.查询云盘版实例价格时，此字段值范围可输入2 - 6，取值为2表示云盘版实例下对应有1个读写节点 + 1个只读节点；取值为6表示云盘版实例下对应有1个读写节点 + 5个只读节点；其余取值（3 - 5）按1个读写节点 +（取值数 - 1）个只读节点规则类推。</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>询价实例的CPU核心数目，单位：核，为保证传入 CPU 值有效，请使用 <a href="https://cloud.tencent.com/document/product/236/17229">获取云数据库可售卖规格</a> 接口获取可售卖的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>询价续费实例ID。如需查询实例续费价格，填写InstanceId和Period即可。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>按量计费阶梯。仅PayType=HOUR_PAID有效，支持值包括：1，2，3。阶梯时长见https://cloud.tencent.com/document/product/236/18335。</p>
                     */
                    uint64_t m_ladder;
                    bool m_ladderHasBeenSet;

                    /**
                     * <p>磁盘类型，查询云盘版、单节点云盘版实例价格可以指定该参数。默认值为 SSD 云硬盘。<br>支持值包括：<br>&quot;CLOUD_SSD&quot; - SSD 云硬盘。<br>&quot;CLOUD_HSSD&quot; - 增强型 SSD 云硬盘。<br>&quot;CLOUD_PREMIUM&quot; - 高性能云硬盘。</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
