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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取每页返回的实例数，默认为10
                     * @return Limit 每页返回的实例数，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回的实例数，默认为10
                     * @param _limit 每页返回的实例数，默认为10
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
                     * 获取输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC
                     * @return Order 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC
                     * @param _order 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC
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
                     * 获取根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime
                     * @return OrderField 根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime
                     * @param _orderField 根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime
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
                     * 获取过滤器，eg：[{ "Name": "Id", "Values": ["nb-123456789"] }]

取值范围
Name（名称）：notebook1
Id（notebook ID）：nb-123456789
Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed
Creator（创建者 uin）：100014761913
ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）
ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）
DefaultCodeRepoId（默认代码仓库ID）：cr-123456789
AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789
LifecycleScriptId（生命周期ID）：ls-12312312311312
                     * @return Filters 过滤器，eg：[{ "Name": "Id", "Values": ["nb-123456789"] }]

取值范围
Name（名称）：notebook1
Id（notebook ID）：nb-123456789
Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed
Creator（创建者 uin）：100014761913
ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）
ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）
DefaultCodeRepoId（默认代码仓库ID）：cr-123456789
AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789
LifecycleScriptId（生命周期ID）：ls-12312312311312
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器，eg：[{ "Name": "Id", "Values": ["nb-123456789"] }]

取值范围
Name（名称）：notebook1
Id（notebook ID）：nb-123456789
Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed
Creator（创建者 uin）：100014761913
ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）
ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）
DefaultCodeRepoId（默认代码仓库ID）：cr-123456789
AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789
LifecycleScriptId（生命周期ID）：ls-12312312311312
                     * @param _filters 过滤器，eg：[{ "Name": "Id", "Values": ["nb-123456789"] }]

取值范围
Name（名称）：notebook1
Id（notebook ID）：nb-123456789
Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed
Creator（创建者 uin）：100014761913
ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）
ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）
DefaultCodeRepoId（默认代码仓库ID）：cr-123456789
AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789
LifecycleScriptId（生命周期ID）：ls-12312312311312
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
                     * 获取标签过滤器，eg：[{ "TagKey": "TagKeyA", "TagValue": ["TagValueA"] }]
                     * @return TagFilters 标签过滤器，eg：[{ "TagKey": "TagKeyA", "TagValue": ["TagValueA"] }]
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤器，eg：[{ "TagKey": "TagKeyA", "TagValue": ["TagValueA"] }]
                     * @param _tagFilters 标签过滤器，eg：[{ "TagKey": "TagKeyA", "TagValue": ["TagValueA"] }]
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
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回的实例数，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 输出列表的排列顺序。取值范围：ASC：升序排列 DESC：降序排列。默认为DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 根据哪个字段排序，如：CreateTime、UpdateTime，默认为UpdateTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 过滤器，eg：[{ "Name": "Id", "Values": ["nb-123456789"] }]

取值范围
Name（名称）：notebook1
Id（notebook ID）：nb-123456789
Status（状态）：Starting / Running / Stopped / Stopping / Failed / SubmitFailed
Creator（创建者 uin）：100014761913
ChargeType（计费类型）：PREPAID（预付费）/ POSTPAID_BY_HOUR（后付费）
ChargeStatus（计费状态）：NOT_BILLING（未开始计费）/ BILLING（计费中）/ BILLING_STORAGE（存储计费中）/ARREARS_STOP（欠费停止）
DefaultCodeRepoId（默认代码仓库ID）：cr-123456789
AdditionalCodeRepoId（关联代码仓库ID）：cr-123456789
LifecycleScriptId（生命周期ID）：ls-12312312311312
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 标签过滤器，eg：[{ "TagKey": "TagKeyA", "TagValue": ["TagValueA"] }]
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKSREQUEST_H_
