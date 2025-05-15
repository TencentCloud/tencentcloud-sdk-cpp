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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJobs请求参数结构体
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID列表，与Filters参数不能同时指定。
                     * @return JobIds 作业ID列表，与Filters参数不能同时指定。
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置作业ID列表，与Filters参数不能同时指定。
                     * @param _jobIds 作业ID列表，与Filters参数不能同时指定。
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件
<li> job-id - String - 是否必填：否 -（过滤条件）按照作业ID过滤。</li>
<li> job-name - String - 是否必填：否 -（过滤条件）按照作业名称过滤。</li>
<li> job-state - String - 是否必填：否 -（过滤条件）按照作业状态过滤。</li>

    - SUBMITTED：已提交；
    - PENDING：等待中；
    - RUNNABLE：可运行；
    - STARTING：启动中；
    - RUNNING：运行中；
    - SUCCEED：成功；
    - FAILED：失败；
    - FAILED_INTERRUPTED：失败后保留实例。

<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> tag-key - String - 是否必填：否 -（过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 -（过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 -（过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
与JobIds参数不能同时指定。
                     * @return Filters 过滤条件
<li> job-id - String - 是否必填：否 -（过滤条件）按照作业ID过滤。</li>
<li> job-name - String - 是否必填：否 -（过滤条件）按照作业名称过滤。</li>
<li> job-state - String - 是否必填：否 -（过滤条件）按照作业状态过滤。</li>

    - SUBMITTED：已提交；
    - PENDING：等待中；
    - RUNNABLE：可运行；
    - STARTING：启动中；
    - RUNNING：运行中；
    - SUCCEED：成功；
    - FAILED：失败；
    - FAILED_INTERRUPTED：失败后保留实例。

<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> tag-key - String - 是否必填：否 -（过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 -（过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 -（过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
与JobIds参数不能同时指定。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
<li> job-id - String - 是否必填：否 -（过滤条件）按照作业ID过滤。</li>
<li> job-name - String - 是否必填：否 -（过滤条件）按照作业名称过滤。</li>
<li> job-state - String - 是否必填：否 -（过滤条件）按照作业状态过滤。</li>

    - SUBMITTED：已提交；
    - PENDING：等待中；
    - RUNNABLE：可运行；
    - STARTING：启动中；
    - RUNNING：运行中；
    - SUCCEED：成功；
    - FAILED：失败；
    - FAILED_INTERRUPTED：失败后保留实例。

<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> tag-key - String - 是否必填：否 -（过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 -（过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 -（过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
与JobIds参数不能同时指定。
                     * @param _filters 过滤条件
<li> job-id - String - 是否必填：否 -（过滤条件）按照作业ID过滤。</li>
<li> job-name - String - 是否必填：否 -（过滤条件）按照作业名称过滤。</li>
<li> job-state - String - 是否必填：否 -（过滤条件）按照作业状态过滤。</li>

    - SUBMITTED：已提交；
    - PENDING：等待中；
    - RUNNABLE：可运行；
    - STARTING：启动中；
    - RUNNING：运行中；
    - SUCCEED：成功；
    - FAILED：失败；
    - FAILED_INTERRUPTED：失败后保留实例。

<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> tag-key - String - 是否必填：否 -（过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 -（过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 -（过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
与JobIds参数不能同时指定。
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取返回job数量限制，最大值: 100，默认值: 20.
                     * @return Limit 返回job数量限制，最大值: 100，默认值: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回job数量限制，最大值: 100，默认值: 20.
                     * @param _limit 返回job数量限制，最大值: 100，默认值: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 作业ID列表，与Filters参数不能同时指定。
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 过滤条件
<li> job-id - String - 是否必填：否 -（过滤条件）按照作业ID过滤。</li>
<li> job-name - String - 是否必填：否 -（过滤条件）按照作业名称过滤。</li>
<li> job-state - String - 是否必填：否 -（过滤条件）按照作业状态过滤。</li>

    - SUBMITTED：已提交；
    - PENDING：等待中；
    - RUNNABLE：可运行；
    - STARTING：启动中；
    - RUNNING：运行中；
    - SUCCEED：成功；
    - FAILED：失败；
    - FAILED_INTERRUPTED：失败后保留实例。

<li> zone - String - 是否必填：否 -（过滤条件）按照[可用区](https://cloud.tencent.com/document/product/213/15707)过滤。</li>
<li> tag-key - String - 是否必填：否 -（过滤条件）按照标签键进行过滤。</li>
<li> tag-value - String - 是否必填：否 -（过滤条件）按照标签值进行过滤。</li>
<li> tag:tag-key - String - 是否必填：否 -（过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。</li>
与JobIds参数不能同时指定。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回job数量限制，最大值: 100，默认值: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSREQUEST_H_
