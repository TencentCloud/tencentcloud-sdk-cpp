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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>
#include <tencentcloud/tione/v20211111/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeNotebooks请求参数结构体
                */
                class DescribeNotebooksRequest : public AbstractModel
                {
                public:
                    DescribeNotebooksRequest();
                    ~DescribeNotebooksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>每页返回的实例数，默认为 10，最小值 0，最大值 100</p>
                     * @return Limit <p>每页返回的实例数，默认为 10，最小值 0，最大值 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回的实例数，默认为 10，最小值 0，最大值 100</p>
                     * @param _limit <p>每页返回的实例数，默认为 10，最小值 0，最大值 100</p>
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
                     * 获取<p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC</p>
                     * @return Order <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC</p>
                     * @param _order <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC</p>
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
                     * 获取<p>根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime</p>
                     * @return OrderField <p>根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime</p>
                     * @param _orderField <p>根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime</p>
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
                     * 获取<p>过滤器，eg：[{ &quot;Name&quot;: &quot;Id&quot;, &quot;Values&quot;: [&quot;nb-123456789&quot;] }]</p><p>取值范围<br>Name（名称）：notebook1<br>Id（notebook ID）：nb-123456789<br>Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed<br>Creator（创建者 uin）：100014761913<br>ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）<br>ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）<br>DefaultCodeRepoId（默认代码仓库ID）：cr-123456789<br>AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789<br>LifecycleScriptId（生命周期ID）：ls-12312312311312</p>
                     * @return Filters <p>过滤器，eg：[{ &quot;Name&quot;: &quot;Id&quot;, &quot;Values&quot;: [&quot;nb-123456789&quot;] }]</p><p>取值范围<br>Name（名称）：notebook1<br>Id（notebook ID）：nb-123456789<br>Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed<br>Creator（创建者 uin）：100014761913<br>ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）<br>ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）<br>DefaultCodeRepoId（默认代码仓库ID）：cr-123456789<br>AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789<br>LifecycleScriptId（生命周期ID）：ls-12312312311312</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器，eg：[{ &quot;Name&quot;: &quot;Id&quot;, &quot;Values&quot;: [&quot;nb-123456789&quot;] }]</p><p>取值范围<br>Name（名称）：notebook1<br>Id（notebook ID）：nb-123456789<br>Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed<br>Creator（创建者 uin）：100014761913<br>ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）<br>ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）<br>DefaultCodeRepoId（默认代码仓库ID）：cr-123456789<br>AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789<br>LifecycleScriptId（生命周期ID）：ls-12312312311312</p>
                     * @param _filters <p>过滤器，eg：[{ &quot;Name&quot;: &quot;Id&quot;, &quot;Values&quot;: [&quot;nb-123456789&quot;] }]</p><p>取值范围<br>Name（名称）：notebook1<br>Id（notebook ID）：nb-123456789<br>Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed<br>Creator（创建者 uin）：100014761913<br>ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）<br>ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）<br>DefaultCodeRepoId（默认代码仓库ID）：cr-123456789<br>AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789<br>LifecycleScriptId（生命周期ID）：ls-12312312311312</p>
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
                     * 获取<p>标签过滤器，eg：[{ &quot;TagKey&quot;: &quot;TagKeyA&quot;, &quot;TagValue&quot;: [&quot;TagValueA&quot;] }]</p>
                     * @return TagFilters <p>标签过滤器，eg：[{ &quot;TagKey&quot;: &quot;TagKeyA&quot;, &quot;TagValue&quot;: [&quot;TagValueA&quot;] }]</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤器，eg：[{ &quot;TagKey&quot;: &quot;TagKeyA&quot;, &quot;TagValue&quot;: [&quot;TagValueA&quot;] }]</p>
                     * @param _tagFilters <p>标签过滤器，eg：[{ &quot;TagKey&quot;: &quot;TagKeyA&quot;, &quot;TagValue&quot;: [&quot;TagValueA&quot;] }]</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回的实例数，默认为 10，最小值 0，最大值 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>过滤器，eg：[{ &quot;Name&quot;: &quot;Id&quot;, &quot;Values&quot;: [&quot;nb-123456789&quot;] }]</p><p>取值范围<br>Name（名称）：notebook1<br>Id（notebook ID）：nb-123456789<br>Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed<br>Creator（创建者 uin）：100014761913<br>ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）<br>ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）<br>DefaultCodeRepoId（默认代码仓库ID）：cr-123456789<br>AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789<br>LifecycleScriptId（生命周期ID）：ls-12312312311312</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签过滤器，eg：[{ &quot;TagKey&quot;: &quot;TagKeyA&quot;, &quot;TagValue&quot;: [&quot;TagValueA&quot;] }]</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKSREQUEST_H_
