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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaFilter.h>
#include <tencentcloud/ivld/v20210903/model/SortBy.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeMedias请求参数结构体
                */
                class DescribeMediasRequest : public AbstractModel
                {
                public:
                    DescribeMediasRequest();
                    ~DescribeMediasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页序号，从1开始
                     * @return PageNumber 分页序号，从1开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页序号，从1开始
                     * @param _pageNumber 分页序号，从1开始
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
                     * 获取每个分页所包含的元素数量，最大为50
                     * @return PageSize 每个分页所包含的元素数量，最大为50
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每个分页所包含的元素数量，最大为50
                     * @param _pageSize 每个分页所包含的元素数量，最大为50
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
                     * 获取列举过滤条件，相关限制相见MediaFilter
                     * @return MediaFilter 列举过滤条件，相关限制相见MediaFilter
                     * 
                     */
                    MediaFilter GetMediaFilter() const;

                    /**
                     * 设置列举过滤条件，相关限制相见MediaFilter
                     * @param _mediaFilter 列举过滤条件，相关限制相见MediaFilter
                     * 
                     */
                    void SetMediaFilter(const MediaFilter& _mediaFilter);

                    /**
                     * 判断参数 MediaFilter 是否已赋值
                     * @return MediaFilter 是否已赋值
                     * 
                     */
                    bool MediaFilterHasBeenSet() const;

                    /**
                     * 获取返回结果排序信息，By字段只支持CreateTime
                     * @return SortBy 返回结果排序信息，By字段只支持CreateTime
                     * 
                     */
                    SortBy GetSortBy() const;

                    /**
                     * 设置返回结果排序信息，By字段只支持CreateTime
                     * @param _sortBy 返回结果排序信息，By字段只支持CreateTime
                     * 
                     */
                    void SetSortBy(const SortBy& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * 分页序号，从1开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每个分页所包含的元素数量，最大为50
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 列举过滤条件，相关限制相见MediaFilter
                     */
                    MediaFilter m_mediaFilter;
                    bool m_mediaFilterHasBeenSet;

                    /**
                     * 返回结果排序信息，By字段只支持CreateTime
                     */
                    SortBy m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIASREQUEST_H_
