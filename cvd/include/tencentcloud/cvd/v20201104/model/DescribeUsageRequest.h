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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGEREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGEREQUEST_H_

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
                * DescribeUsage请求参数结构体
                */
                class DescribeUsageRequest : public AbstractModel
                {
                public:
                    DescribeUsageRequest();
                    ~DescribeUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间，最小不能超过当前时间 90 天前，取 unix 时间戳
                     * @return StartTime 查询起始时间，最小不能超过当前时间 90 天前，取 unix 时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询起始时间，最小不能超过当前时间 90 天前，取 unix 时间戳
                     * @param _startTime 查询起始时间，最小不能超过当前时间 90 天前，取 unix 时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询截止时间，取 unix 时间戳
                     * @return EndTime 查询截止时间，取 unix 时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询截止时间，取 unix 时间戳
                     * @param _endTime 查询截止时间，取 unix 时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取每页查询信息条数，默认 20，最大 100
                     * @return PageSize 每页查询信息条数，默认 20，最大 100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页查询信息条数，默认 20，最大 100
                     * @param _pageSize 每页查询信息条数，默认 20，最大 100
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
                     * 获取页号，起始页为 1，不填默认为 1
                     * @return PageNumber 页号，起始页为 1，不填默认为 1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页号，起始页为 1，不填默认为 1
                     * @param _pageNumber 页号，起始页为 1，不填默认为 1
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
                     * 获取查询key，每次查询会返回
                     * @return QueryKey 查询key，每次查询会返回
                     * 
                     */
                    std::string GetQueryKey() const;

                    /**
                     * 设置查询key，每次查询会返回
                     * @param _queryKey 查询key，每次查询会返回
                     * 
                     */
                    void SetQueryKey(const std::string& _queryKey);

                    /**
                     * 判断参数 QueryKey 是否已赋值
                     * @return QueryKey 是否已赋值
                     * 
                     */
                    bool QueryKeyHasBeenSet() const;

                    /**
                     * 获取查询条件，Name可选为：
InstanceId按照实例ID搜索
UserName按照绑定的用户搜索，只取Values的第一个值
ChareType按照计费类型搜索
InstanceType按照实例类型搜索
                     * @return Filters 查询条件，Name可选为：
InstanceId按照实例ID搜索
UserName按照绑定的用户搜索，只取Values的第一个值
ChareType按照计费类型搜索
InstanceType按照实例类型搜索
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询条件，Name可选为：
InstanceId按照实例ID搜索
UserName按照绑定的用户搜索，只取Values的第一个值
ChareType按照计费类型搜索
InstanceType按照实例类型搜索
                     * @param _filters 查询条件，Name可选为：
InstanceId按照实例ID搜索
UserName按照绑定的用户搜索，只取Values的第一个值
ChareType按照计费类型搜索
InstanceType按照实例类型搜索
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
                     * 获取指定的排序方式，默认不排序
1:使用时间，升序
2:使用时间，降序
3:空闲时间，升序
4:空闲时间，降序
                     * @return SortType 指定的排序方式，默认不排序
1:使用时间，升序
2:使用时间，降序
3:空闲时间，升序
4:空闲时间，降序
                     * 
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置指定的排序方式，默认不排序
1:使用时间，升序
2:使用时间，降序
3:空闲时间，升序
4:空闲时间，降序
                     * @param _sortType 指定的排序方式，默认不排序
1:使用时间，升序
2:使用时间，降序
3:空闲时间，升序
4:空闲时间，降序
                     * 
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * 查询起始时间，最小不能超过当前时间 90 天前，取 unix 时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询截止时间，取 unix 时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 每页查询信息条数，默认 20，最大 100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页号，起始页为 1，不填默认为 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询key，每次查询会返回
                     */
                    std::string m_queryKey;
                    bool m_queryKeyHasBeenSet;

                    /**
                     * 查询条件，Name可选为：
InstanceId按照实例ID搜索
UserName按照绑定的用户搜索，只取Values的第一个值
ChareType按照计费类型搜索
InstanceType按照实例类型搜索
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 指定的排序方式，默认不排序
1:使用时间，升序
2:使用时间，降序
3:空闲时间，升序
4:空闲时间，降序
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSAGEREQUEST_H_
