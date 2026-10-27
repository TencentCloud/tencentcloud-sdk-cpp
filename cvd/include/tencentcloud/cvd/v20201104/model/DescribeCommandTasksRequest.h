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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Filter.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeCommandTasks请求参数结构体
                */
                class DescribeCommandTasksRequest : public AbstractModel
                {
                public:
                    DescribeCommandTasksRequest();
                    ~DescribeCommandTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页号</p>
                     * @return PageNumber <p>页号</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页号</p>
                     * @param _pageNumber <p>页号</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页大小，默认 20，最大 100</p>
                     * @return PageSize <p>每页大小，默认 20，最大 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认 20，最大 100</p>
                     * @param _pageSize <p>每页大小，默认 20，最大 100</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>拉取任务的过滤器 ，Filter.Name 取值：CommandId - 任务 lD；Staus - 任务状态， RUNNING - 执行中；FINISHED - 执行完成（不代表成功，只表示任务执行完成）</p>
                     * @return Filters <p>拉取任务的过滤器 ，Filter.Name 取值：CommandId - 任务 lD；Staus - 任务状态， RUNNING - 执行中；FINISHED - 执行完成（不代表成功，只表示任务执行完成）</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>拉取任务的过滤器 ，Filter.Name 取值：CommandId - 任务 lD；Staus - 任务状态， RUNNING - 执行中；FINISHED - 执行完成（不代表成功，只表示任务执行完成）</p>
                     * @param _filters <p>拉取任务的过滤器 ，Filter.Name 取值：CommandId - 任务 lD；Staus - 任务状态， RUNNING - 执行中；FINISHED - 执行完成（不代表成功，只表示任务执行完成）</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>页号</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认 20，最大 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>拉取任务的过滤器 ，Filter.Name 取值：CommandId - 任务 lD；Staus - 任务状态， RUNNING - 执行中；FINISHED - 执行完成（不代表成功，只表示任务执行完成）</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBECOMMANDTASKSREQUEST_H_
