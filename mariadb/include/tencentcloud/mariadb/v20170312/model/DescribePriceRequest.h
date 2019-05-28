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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrice请求参数结构体
                */
                class DescribePriceRequest : public AbstractModel
                {
                public:
                    DescribePriceRequest();
                    ~DescribePriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取欲新购实例的可用区ID。
                     * @return Zone 欲新购实例的可用区ID。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置欲新购实例的可用区ID。
                     * @param Zone 欲新购实例的可用区ID。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例节点个数，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @return NodeCount 实例节点个数，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置实例节点个数，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @param NodeCount 实例节点个数，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @return Memory 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     * @param Memory 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @return Storage 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     * @param Storage 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取欲购买的时长，单位：月。
                     * @return Period 欲购买的时长，单位：月。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置欲购买的时长，单位：月。
                     * @param Period 欲购买的时长，单位：月。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取欲购买的数量，默认查询购买1个实例的价格。
                     * @return Count 欲购买的数量，默认查询购买1个实例的价格。
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置欲购买的数量，默认查询购买1个实例的价格。
                     * @param Count 欲购买的数量，默认查询购买1个实例的价格。
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 欲新购实例的可用区ID。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例节点个数，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 内存大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储空间大小，单位：GB，可以通过 DescribeDBInstanceSpecs
 查询实例规格获得不同内存大小对应的磁盘规格下限和上限。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 欲购买的时长，单位：月。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 欲购买的数量，默认查询购买1个实例的价格。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEPRICEREQUEST_H_
