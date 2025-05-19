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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_

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
                * DescribeAutoSnapshotPolicies请求参数结构体
                */
                class DescribeAutoSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAutoSnapshotPoliciesRequest();
                    ~DescribeAutoSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的定期快照策略ID列表。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。
                     * @return AutoSnapshotPolicyIds 要查询的定期快照策略ID列表。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。
                     * 
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置要查询的定期快照策略ID列表。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。
                     * @param _autoSnapshotPolicyIds 要查询的定期快照策略ID列表。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。
                     * 
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。<br>
<li>auto-snapshot-policy-id - Array of String - 是否必填：否 -（过滤条件）按定期快照策略ID进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。</li>
<li>auto-snapshot-policy-state - Array of String - 是否必填：否 -（过滤条件）按定期快照策略的状态进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。(NORMAL：正常 | ISOLATED：已隔离。)</li>
<li>auto-snapshot-policy-name - Array of String - 是否必填：否 -（过滤条件）按定期快照策略名称进行过滤。</li>
                     * @return Filters 过滤条件。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。<br>
<li>auto-snapshot-policy-id - Array of String - 是否必填：否 -（过滤条件）按定期快照策略ID进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。</li>
<li>auto-snapshot-policy-state - Array of String - 是否必填：否 -（过滤条件）按定期快照策略的状态进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。(NORMAL：正常 | ISOLATED：已隔离。)</li>
<li>auto-snapshot-policy-name - Array of String - 是否必填：否 -（过滤条件）按定期快照策略名称进行过滤。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。<br>
<li>auto-snapshot-policy-id - Array of String - 是否必填：否 -（过滤条件）按定期快照策略ID进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。</li>
<li>auto-snapshot-policy-state - Array of String - 是否必填：否 -（过滤条件）按定期快照策略的状态进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。(NORMAL：正常 | ISOLATED：已隔离。)</li>
<li>auto-snapshot-policy-name - Array of String - 是否必填：否 -（过滤条件）按定期快照策略名称进行过滤。</li>
                     * @param _filters 过滤条件。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。<br>
<li>auto-snapshot-policy-id - Array of String - 是否必填：否 -（过滤条件）按定期快照策略ID进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。</li>
<li>auto-snapshot-policy-state - Array of String - 是否必填：否 -（过滤条件）按定期快照策略的状态进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。(NORMAL：正常 | ISOLATED：已隔离。)</li>
<li>auto-snapshot-policy-name - Array of String - 是否必填：否 -（过滤条件）按定期快照策略名称进行过滤。</li>
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
                     * 获取输出定期快照列表的排列顺序。取值范围：<br><li>ASC：升序排列<br></li><li>DESC：降序排列。</li>
                     * @return Order 输出定期快照列表的排列顺序。取值范围：<br><li>ASC：升序排列<br></li><li>DESC：降序排列。</li>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出定期快照列表的排列顺序。取值范围：<br><li>ASC：升序排列<br></li><li>DESC：降序排列。</li>
                     * @param _order 输出定期快照列表的排列顺序。取值范围：<br><li>ASC：升序排列<br></li><li>DESC：降序排列。</li>
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
                     * 获取定期快照列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据定期快照的创建时间排序，默认按创建时间排序。</li>
                     * @return OrderField 定期快照列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据定期快照的创建时间排序，默认按创建时间排序。</li>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置定期快照列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据定期快照的创建时间排序，默认按创建时间排序。</li>
                     * @param _orderField 定期快照列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据定期快照的创建时间排序，默认按创建时间排序。</li>
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
                     * 要查询的定期快照策略ID列表。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                    /**
                     * 过滤条件。参数不支持同时指定`AutoSnapshotPolicyIds`和`Filters`。<br>
<li>auto-snapshot-policy-id - Array of String - 是否必填：否 -（过滤条件）按定期快照策略ID进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。</li>
<li>auto-snapshot-policy-state - Array of String - 是否必填：否 -（过滤条件）按定期快照策略的状态进行过滤。定期快照策略ID形如：`asp-3stvwfxx`。(NORMAL：正常 | ISOLATED：已隔离。)</li>
<li>auto-snapshot-policy-name - Array of String - 是否必填：否 -（过滤条件）按定期快照策略名称进行过滤。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考API[简介](/document/product/362/15633)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 输出定期快照列表的排列顺序。取值范围：<br><li>ASC：升序排列<br></li><li>DESC：降序排列。</li>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 定期快照列表排序的依据字段。取值范围：<br><li>CREATE_TIME：依据定期快照的创建时间排序，默认按创建时间排序。</li>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_
