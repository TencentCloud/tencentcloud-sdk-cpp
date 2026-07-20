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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAccountList请求参数结构体
                */
                class DescribeAccountListRequest : public AbstractModel
                {
                public:
                    DescribeAccountListRequest();
                    ~DescribeAccountListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码</p><p>从0开始</p>
                     * @return PageNumber <p>页码</p><p>从0开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p><p>从0开始</p>
                     * @param _pageNumber <p>页码</p><p>从0开始</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>分页数量</p><p>取值范围：[1, 100]</p><p>单位：个</p><p>最大100</p>
                     * @return PageSize <p>分页数量</p><p>取值范围：[1, 100]</p><p>单位：个</p><p>最大100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>分页数量</p><p>取值范围：[1, 100]</p><p>单位：个</p><p>最大100</p>
                     * @param _pageSize <p>分页数量</p><p>取值范围：[1, 100]</p><p>单位：个</p><p>最大100</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>参数过滤</p><p>支持SpaceId,NIckName 过滤查询</p>
                     * @return FilterList <p>参数过滤</p><p>支持SpaceId,NIckName 过滤查询</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>参数过滤</p><p>支持SpaceId,NIckName 过滤查询</p>
                     * @param _filterList <p>参数过滤</p><p>支持SpaceId,NIckName 过滤查询</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                private:

                    /**
                     * <p>页码</p><p>从0开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页数量</p><p>取值范围：[1, 100]</p><p>单位：个</p><p>最大100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>参数过滤</p><p>支持SpaceId,NIckName 过滤查询</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEACCOUNTLISTREQUEST_H_
