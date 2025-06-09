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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskBackups请求参数结构体
                */
                class DescribeDiskBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDiskBackupsRequest();
                    ~DescribeDiskBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询备份点的ID列表。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * @return DiskBackupIds 要查询备份点的ID列表。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * 
                     */
                    std::vector<std::string> GetDiskBackupIds() const;

                    /**
                     * 设置要查询备份点的ID列表。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * @param _diskBackupIds 要查询备份点的ID列表。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * 
                     */
                    void SetDiskBackupIds(const std::vector<std::string>& _diskBackupIds);

                    /**
                     * 判断参数 DiskBackupIds 是否已赋值
                     * @return DiskBackupIds 是否已赋值
                     * 
                     */
                    bool DiskBackupIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定 DiskBackupIds 和 Filters。过滤条件：<br><li>disk-backup-id - Array of String - 是否必填：否 -（过滤条件）按照备份点的ID过滤。备份点ID形如：dbp-11112222。</li><br><li>disk-id - Array of String - 是否必填：否 -（过滤条件）按照创建备份点的云硬盘ID过滤。云硬盘ID形如：disk-srftydert。</li><br><li>disk-usage - Array of String - 是否必填：否 -（过滤条件）按创建备份点的云硬盘类型过滤。 (SYSTEM_DISK：代表系统盘 | DATA_DISK：代表数据盘。)</li>
                     * @return Filters 过滤条件，参数不支持同时指定 DiskBackupIds 和 Filters。过滤条件：<br><li>disk-backup-id - Array of String - 是否必填：否 -（过滤条件）按照备份点的ID过滤。备份点ID形如：dbp-11112222。</li><br><li>disk-id - Array of String - 是否必填：否 -（过滤条件）按照创建备份点的云硬盘ID过滤。云硬盘ID形如：disk-srftydert。</li><br><li>disk-usage - Array of String - 是否必填：否 -（过滤条件）按创建备份点的云硬盘类型过滤。 (SYSTEM_DISK：代表系统盘 | DATA_DISK：代表数据盘。)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定 DiskBackupIds 和 Filters。过滤条件：<br><li>disk-backup-id - Array of String - 是否必填：否 -（过滤条件）按照备份点的ID过滤。备份点ID形如：dbp-11112222。</li><br><li>disk-id - Array of String - 是否必填：否 -（过滤条件）按照创建备份点的云硬盘ID过滤。云硬盘ID形如：disk-srftydert。</li><br><li>disk-usage - Array of String - 是否必填：否 -（过滤条件）按创建备份点的云硬盘类型过滤。 (SYSTEM_DISK：代表系统盘 | DATA_DISK：代表数据盘。)</li>
                     * @param _filters 过滤条件，参数不支持同时指定 DiskBackupIds 和 Filters。过滤条件：<br><li>disk-backup-id - Array of String - 是否必填：否 -（过滤条件）按照备份点的ID过滤。备份点ID形如：dbp-11112222。</li><br><li>disk-id - Array of String - 是否必填：否 -（过滤条件）按照创建备份点的云硬盘ID过滤。云硬盘ID形如：disk-srftydert。</li><br><li>disk-usage - Array of String - 是否必填：否 -（过滤条件）按创建备份点的云硬盘类型过滤。 (SYSTEM_DISK：代表系统盘 | DATA_DISK：代表数据盘。)</li>
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
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取输出云硬盘备份点列表的排列顺序，默认排序：ASC。取值范围：<br><li>ASC：升序排列</li><br><li>DESC：降序排列。</li>
                     * @return Order 输出云硬盘备份点列表的排列顺序，默认排序：ASC。取值范围：<br><li>ASC：升序排列</li><br><li>DESC：降序排列。</li>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出云硬盘备份点列表的排列顺序，默认排序：ASC。取值范围：<br><li>ASC：升序排列</li><br><li>DESC：降序排列。</li>
                     * @param _order 输出云硬盘备份点列表的排列顺序，默认排序：ASC。取值范围：<br><li>ASC：升序排列</li><br><li>DESC：降序排列。</li>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据云硬盘备份点的创建时间排序</li><br>默认按创建时间排序。
                     * @return OrderField 云硬盘备份点列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据云硬盘备份点的创建时间排序</li><br>默认按创建时间排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置云硬盘备份点列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据云硬盘备份点的创建时间排序</li><br>默认按创建时间排序。
                     * @param _orderField 云硬盘备份点列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据云硬盘备份点的创建时间排序</li><br>默认按创建时间排序。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 要查询备份点的ID列表。参数不支持同时指定 DiskBackupIds 和 Filters。
                     */
                    std::vector<std::string> m_diskBackupIds;
                    bool m_diskBackupIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定 DiskBackupIds 和 Filters。过滤条件：<br><li>disk-backup-id - Array of String - 是否必填：否 -（过滤条件）按照备份点的ID过滤。备份点ID形如：dbp-11112222。</li><br><li>disk-id - Array of String - 是否必填：否 -（过滤条件）按照创建备份点的云硬盘ID过滤。云硬盘ID形如：disk-srftydert。</li><br><li>disk-usage - Array of String - 是否必填：否 -（过滤条件）按创建备份点的云硬盘类型过滤。 (SYSTEM_DISK：代表系统盘 | DATA_DISK：代表数据盘。)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出云硬盘备份点列表的排列顺序，默认排序：ASC。取值范围：<br><li>ASC：升序排列</li><br><li>DESC：降序排列。</li>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 云硬盘备份点列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据云硬盘备份点的创建时间排序</li><br>默认按创建时间排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
