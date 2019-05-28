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
                     * 获取可用区信息，格式如"ap-guangzhou-2"。具体能设置的值请通过<a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a>接口查询。
                     * @return Zone 可用区信息，格式如"ap-guangzhou-2"。具体能设置的值请通过<a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a>接口查询。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，格式如"ap-guangzhou-2"。具体能设置的值请通过<a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a>接口查询。
                     * @param Zone 可用区信息，格式如"ap-guangzhou-2"。具体能设置的值请通过<a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a>接口查询。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例数量，默认值为1, 最小值1，最大值为100
                     * @return GoodsNum 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，默认值为1, 最小值1，最大值为100
                     * @param GoodsNum 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位：MB
                     * @return Memory 实例内存大小，单位：MB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：MB
                     * @param Memory 实例内存大小，单位：MB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB
                     * @return Volume 实例硬盘大小，单位：GB
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB
                     * @param Volume 实例硬盘大小，单位：GB
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费
                     * @return PayType 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费
                     * @param PayType 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取实例时长，单位：月，最小值1，最大值为36；查询按量计费价格时，该字段无效
                     * @return Period 实例时长，单位：月，最小值1，最大值为36；查询按量计费价格时，该字段无效
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置实例时长，单位：月，最小值1，最大值为36；查询按量计费价格时，该字段无效
                     * @param Period 实例时长，单位：月，最小值1，最大值为36；查询按量计费价格时，该字段无效
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取实例类型，默认为 master，支持值包括：master-表示主实例，ro-表示只读实例，dr-表示灾备实例
                     * @return InstanceRole 实例类型，默认为 master，支持值包括：master-表示主实例，ro-表示只读实例，dr-表示灾备实例
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例类型，默认为 master，支持值包括：master-表示主实例，ro-表示只读实例，dr-表示灾备实例
                     * @param InstanceRole 实例类型，默认为 master，支持值包括：master-表示主实例，ro-表示只读实例，dr-表示灾备实例
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制
                     * @return ProtectMode 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制
                     * @param ProtectMode 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                private:

                    /**
                     * 可用区信息，格式如"ap-guangzhou-2"。具体能设置的值请通过<a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a>接口查询。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 实例内存大小，单位：MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 付费类型，支持值包括：PRE_PAID - 包年包月，HOUR_PAID - 按量计费
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 实例时长，单位：月，最小值1，最大值为36；查询按量计费价格时，该字段无效
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 实例类型，默认为 master，支持值包括：master-表示主实例，ro-表示只读实例，dr-表示灾备实例
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
