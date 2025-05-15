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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDisks请求参数结构体
                */
                class DescribeDisksRequest : public AbstractModel
                {
                public:
                    DescribeDisksRequest();
                    ~DescribeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘ID列表。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值字段KeyPairSet获取。列表长度最大值为100。
                     * @return DiskIds 云硬盘ID列表。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值字段KeyPairSet获取。列表长度最大值为100。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置云硬盘ID列表。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值字段KeyPairSet获取。列表长度最大值为100。
                     * @param _diskIds 云硬盘ID列表。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值字段KeyPairSet获取。列表长度最大值为100。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取过滤器列表。
disk-id
按照【云硬盘 ID】进行过滤。
类型：String
必选：否
instance-id
按照【实例ID】进行过滤。
类型：String
必选：否
disk-name
按照【云硬盘名称】进行过滤。
类型：String
必选：否
zone
按照【可用区】进行过滤。
类型：String
必选：否
disk-usage
按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：SYSTEM_DISK（系统盘）或 DATA_DISK（数据盘）
disk-state
按照【云硬盘状态】进行过滤。
类型：String
必选：否
取值：参考数据结构[Disk](https://cloud.tencent.com/document/api/1207/47576#Disk)中DiskState取值。
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 DiskIds 和 Filters。
                     * @return Filters 过滤器列表。
disk-id
按照【云硬盘 ID】进行过滤。
类型：String
必选：否
instance-id
按照【实例ID】进行过滤。
类型：String
必选：否
disk-name
按照【云硬盘名称】进行过滤。
类型：String
必选：否
zone
按照【可用区】进行过滤。
类型：String
必选：否
disk-usage
按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：SYSTEM_DISK（系统盘）或 DATA_DISK（数据盘）
disk-state
按照【云硬盘状态】进行过滤。
类型：String
必选：否
取值：参考数据结构[Disk](https://cloud.tencent.com/document/api/1207/47576#Disk)中DiskState取值。
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 DiskIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
disk-id
按照【云硬盘 ID】进行过滤。
类型：String
必选：否
instance-id
按照【实例ID】进行过滤。
类型：String
必选：否
disk-name
按照【云硬盘名称】进行过滤。
类型：String
必选：否
zone
按照【可用区】进行过滤。
类型：String
必选：否
disk-usage
按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：SYSTEM_DISK（系统盘）或 DATA_DISK（数据盘）
disk-state
按照【云硬盘状态】进行过滤。
类型：String
必选：否
取值：参考数据结构[Disk](https://cloud.tencent.com/document/api/1207/47576#Disk)中DiskState取值。
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 DiskIds 和 Filters。
                     * @param _filters 过滤器列表。
disk-id
按照【云硬盘 ID】进行过滤。
类型：String
必选：否
instance-id
按照【实例ID】进行过滤。
类型：String
必选：否
disk-name
按照【云硬盘名称】进行过滤。
类型：String
必选：否
zone
按照【可用区】进行过滤。
类型：String
必选：否
disk-usage
按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：SYSTEM_DISK（系统盘）或 DATA_DISK（数据盘）
disk-state
按照【云硬盘状态】进行过滤。
类型：String
必选：否
取值：参考数据结构[Disk](https://cloud.tencent.com/document/api/1207/47576#Disk)中DiskState取值。
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 DiskIds 和 Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取云硬盘列表排序的依据字段。取值范围："CREATED_TIME"：依据云硬盘的创建时间排序。 "EXPIRED_TIME"：依据云硬盘的到期时间排序。"DISK_SIZE"：依据云硬盘的大小排序。默认按云硬盘创建时间排序。
                     * @return OrderField 云硬盘列表排序的依据字段。取值范围："CREATED_TIME"：依据云硬盘的创建时间排序。 "EXPIRED_TIME"：依据云硬盘的到期时间排序。"DISK_SIZE"：依据云硬盘的大小排序。默认按云硬盘创建时间排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置云硬盘列表排序的依据字段。取值范围："CREATED_TIME"：依据云硬盘的创建时间排序。 "EXPIRED_TIME"：依据云硬盘的到期时间排序。"DISK_SIZE"：依据云硬盘的大小排序。默认按云硬盘创建时间排序。
                     * @param _orderField 云硬盘列表排序的依据字段。取值范围："CREATED_TIME"：依据云硬盘的创建时间排序。 "EXPIRED_TIME"：依据云硬盘的到期时间排序。"DISK_SIZE"：依据云硬盘的大小排序。默认按云硬盘创建时间排序。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取输出云硬盘列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * @return Order 输出云硬盘列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出云硬盘列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * @param _order 输出云硬盘列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID列表。可通过[DescribeDisks](https://cloud.tencent.com/document/product/1207/66093)接口返回值字段KeyPairSet获取。列表长度最大值为100。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 过滤器列表。
disk-id
按照【云硬盘 ID】进行过滤。
类型：String
必选：否
instance-id
按照【实例ID】进行过滤。
类型：String
必选：否
disk-name
按照【云硬盘名称】进行过滤。
类型：String
必选：否
zone
按照【可用区】进行过滤。
类型：String
必选：否
disk-usage
按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：SYSTEM_DISK（系统盘）或 DATA_DISK（数据盘）
disk-state
按照【云硬盘状态】进行过滤。
类型：String
必选：否
取值：参考数据结构[Disk](https://cloud.tencent.com/document/api/1207/47576#Disk)中DiskState取值。
每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 DiskIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 云硬盘列表排序的依据字段。取值范围："CREATED_TIME"：依据云硬盘的创建时间排序。 "EXPIRED_TIME"：依据云硬盘的到期时间排序。"DISK_SIZE"：依据云硬盘的大小排序。默认按云硬盘创建时间排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 输出云硬盘列表的排列顺序。取值范围："ASC"：升序排列。 "DESC"：降序排列。默认按降序排列。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_
