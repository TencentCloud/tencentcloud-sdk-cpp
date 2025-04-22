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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

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
                * DescribeSnapshots请求参数结构体
                */
                class DescribeSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotsRequest();
                    ~DescribeSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询快照的ID列表。参数不支持同时指定`SnapshotIds`和`Filters`。
                     * @return SnapshotIds 要查询快照的ID列表。参数不支持同时指定`SnapshotIds`和`Filters`。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置要查询快照的ID列表。参数不支持同时指定`SnapshotIds`和`Filters`。
                     * @param _snapshotIds 要查询快照的ID列表。参数不支持同时指定`SnapshotIds`和`Filters`。
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。参数不支持同时指定SnapshotIds和Filters。<br><ul><li>snapshot-id<ul><li>按照云硬盘快照ID进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-name<ul><li>按照云硬盘快照名称进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-state<ul><li>按照云硬盘快照状态进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>NORMAL</code>：正常 </li><li><code>CREATING</code>：创建中 </li><li><code>ROLLBACKING</code>：回滚中 </li><li><code>COPYING_FROM_REMOTE</code>：跨地域复制中 </li><li><code>CHECKING_COPIED</code>：复制校验中</li><li><code>TORECYCLE</code>：待回收</li></ul></li></ul></li><li>disk-usage<ul><li>按照云硬盘使用用途进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SYSTEM_DISK</code>：代表系统盘</li><li><code>DATA_DISK</code>：代表数据盘</li></ul></li></ul></li><li>project-id<ul><li>按云硬盘所属项目ID过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>disk-id<ul><li>按照云硬盘ID进行过滤，一次最多只能传入10个值</li><li>类型：String</li><li>必选：否</li></ul></li><li>encrypt<ul><li>按是否加密进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-type<ul><li>按快照归属类型查询</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SHARED_SNAPSHOT</code>：表示共享过来的快照</li><li><code>PRIVATE_SNAPSHOT</code>：表示自己的私有快照</li></ul></li></ul></li></ul>
                     * @return Filters 过滤条件。参数不支持同时指定SnapshotIds和Filters。<br><ul><li>snapshot-id<ul><li>按照云硬盘快照ID进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-name<ul><li>按照云硬盘快照名称进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-state<ul><li>按照云硬盘快照状态进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>NORMAL</code>：正常 </li><li><code>CREATING</code>：创建中 </li><li><code>ROLLBACKING</code>：回滚中 </li><li><code>COPYING_FROM_REMOTE</code>：跨地域复制中 </li><li><code>CHECKING_COPIED</code>：复制校验中</li><li><code>TORECYCLE</code>：待回收</li></ul></li></ul></li><li>disk-usage<ul><li>按照云硬盘使用用途进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SYSTEM_DISK</code>：代表系统盘</li><li><code>DATA_DISK</code>：代表数据盘</li></ul></li></ul></li><li>project-id<ul><li>按云硬盘所属项目ID过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>disk-id<ul><li>按照云硬盘ID进行过滤，一次最多只能传入10个值</li><li>类型：String</li><li>必选：否</li></ul></li><li>encrypt<ul><li>按是否加密进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-type<ul><li>按快照归属类型查询</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SHARED_SNAPSHOT</code>：表示共享过来的快照</li><li><code>PRIVATE_SNAPSHOT</code>：表示自己的私有快照</li></ul></li></ul></li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。参数不支持同时指定SnapshotIds和Filters。<br><ul><li>snapshot-id<ul><li>按照云硬盘快照ID进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-name<ul><li>按照云硬盘快照名称进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-state<ul><li>按照云硬盘快照状态进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>NORMAL</code>：正常 </li><li><code>CREATING</code>：创建中 </li><li><code>ROLLBACKING</code>：回滚中 </li><li><code>COPYING_FROM_REMOTE</code>：跨地域复制中 </li><li><code>CHECKING_COPIED</code>：复制校验中</li><li><code>TORECYCLE</code>：待回收</li></ul></li></ul></li><li>disk-usage<ul><li>按照云硬盘使用用途进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SYSTEM_DISK</code>：代表系统盘</li><li><code>DATA_DISK</code>：代表数据盘</li></ul></li></ul></li><li>project-id<ul><li>按云硬盘所属项目ID过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>disk-id<ul><li>按照云硬盘ID进行过滤，一次最多只能传入10个值</li><li>类型：String</li><li>必选：否</li></ul></li><li>encrypt<ul><li>按是否加密进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-type<ul><li>按快照归属类型查询</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SHARED_SNAPSHOT</code>：表示共享过来的快照</li><li><code>PRIVATE_SNAPSHOT</code>：表示自己的私有快照</li></ul></li></ul></li></ul>
                     * @param _filters 过滤条件。参数不支持同时指定SnapshotIds和Filters。<br><ul><li>snapshot-id<ul><li>按照云硬盘快照ID进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-name<ul><li>按照云硬盘快照名称进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-state<ul><li>按照云硬盘快照状态进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>NORMAL</code>：正常 </li><li><code>CREATING</code>：创建中 </li><li><code>ROLLBACKING</code>：回滚中 </li><li><code>COPYING_FROM_REMOTE</code>：跨地域复制中 </li><li><code>CHECKING_COPIED</code>：复制校验中</li><li><code>TORECYCLE</code>：待回收</li></ul></li></ul></li><li>disk-usage<ul><li>按照云硬盘使用用途进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SYSTEM_DISK</code>：代表系统盘</li><li><code>DATA_DISK</code>：代表数据盘</li></ul></li></ul></li><li>project-id<ul><li>按云硬盘所属项目ID过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>disk-id<ul><li>按照云硬盘ID进行过滤，一次最多只能传入10个值</li><li>类型：String</li><li>必选：否</li></ul></li><li>encrypt<ul><li>按是否加密进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-type<ul><li>按快照归属类型查询</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SHARED_SNAPSHOT</code>：表示共享过来的快照</li><li><code>PRIVATE_SNAPSHOT</code>：表示自己的私有快照</li></ul></li></ul></li></ul>
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
                     * 获取快照列表排序的依据字段。取值范围：
<ul>
<li>CREATE_TIME：依据快照的创建时间排序</li>
<li>默认按创建时间排序</li>
</ul>
                     * @return OrderField 快照列表排序的依据字段。取值范围：
<ul>
<li>CREATE_TIME：依据快照的创建时间排序</li>
<li>默认按创建时间排序</li>
</ul>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置快照列表排序的依据字段。取值范围：
<ul>
<li>CREATE_TIME：依据快照的创建时间排序</li>
<li>默认按创建时间排序</li>
</ul>
                     * @param _orderField 快照列表排序的依据字段。取值范围：
<ul>
<li>CREATE_TIME：依据快照的创建时间排序</li>
<li>默认按创建时间排序</li>
</ul>
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
                     * 获取输出云盘列表的排列顺序。取值范围：
<ul>
    <li>ASC：升序排列</li>
    <li>DESC：降序排列。</li>
</ul>

                     * @return Order 输出云盘列表的排列顺序。取值范围：
<ul>
    <li>ASC：升序排列</li>
    <li>DESC：降序排列。</li>
</ul>

                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出云盘列表的排列顺序。取值范围：
<ul>
    <li>ASC：升序排列</li>
    <li>DESC：降序排列。</li>
</ul>

                     * @param _order 输出云盘列表的排列顺序。取值范围：
<ul>
    <li>ASC：升序排列</li>
    <li>DESC：降序排列。</li>
</ul>

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
                     * 要查询快照的ID列表。参数不支持同时指定`SnapshotIds`和`Filters`。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 过滤条件。参数不支持同时指定SnapshotIds和Filters。<br><ul><li>snapshot-id<ul><li>按照云硬盘快照ID进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-name<ul><li>按照云硬盘快照名称进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-state<ul><li>按照云硬盘快照状态进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>NORMAL</code>：正常 </li><li><code>CREATING</code>：创建中 </li><li><code>ROLLBACKING</code>：回滚中 </li><li><code>COPYING_FROM_REMOTE</code>：跨地域复制中 </li><li><code>CHECKING_COPIED</code>：复制校验中</li><li><code>TORECYCLE</code>：待回收</li></ul></li></ul></li><li>disk-usage<ul><li>按照云硬盘使用用途进行过滤</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SYSTEM_DISK</code>：代表系统盘</li><li><code>DATA_DISK</code>：代表数据盘</li></ul></li></ul></li><li>project-id<ul><li>按云硬盘所属项目ID过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>disk-id<ul><li>按照云硬盘ID进行过滤，一次最多只能传入10个值</li><li>类型：String</li><li>必选：否</li></ul></li><li>encrypt<ul><li>按是否加密进行过滤</li><li>类型：String</li><li>必选：否</li></ul></li><li>snapshot-type<ul><li>按快照归属类型查询</li><li>类型：String</li><li>必选：否</li><li>取值范围：<ul><li><code>SHARED_SNAPSHOT</code>：表示共享过来的快照</li><li><code>PRIVATE_SNAPSHOT</code>：表示自己的私有快照</li></ul></li></ul></li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 快照列表排序的依据字段。取值范围：
<ul>
<li>CREATE_TIME：依据快照的创建时间排序</li>
<li>默认按创建时间排序</li>
</ul>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 输出云盘列表的排列顺序。取值范围：
<ul>
    <li>ASC：升序排列</li>
    <li>DESC：降序排列。</li>
</ul>

                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
