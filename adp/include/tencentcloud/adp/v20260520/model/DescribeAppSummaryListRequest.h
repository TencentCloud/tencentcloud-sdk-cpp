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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_

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
                * DescribeAppSummaryList请求参数结构体
                */
                class DescribeAppSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeAppSummaryListRequest();
                    ~DescribeAppSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID(必填)
                     * @return SpaceId 空间ID(必填)
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID(必填)
                     * @param _spaceId 空间ID(必填)
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - AppStatus: 应用状态,枚举值,精确匹配(APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: 应用模式,枚举值,精确匹配(APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * @return FilterList 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - AppStatus: 应用状态,枚举值,精确匹配(APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: 应用模式,枚举值,精确匹配(APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - AppStatus: 应用状态,枚举值,精确匹配(APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: 应用模式,枚举值,精确匹配(APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * @param _filterList 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - AppStatus: 应用状态,枚举值,精确匹配(APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: 应用模式,枚举值,精确匹配(APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取页码(从0开始)
                     * @return PageNumber 页码(从0开始)
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码(从0开始)
                     * @param _pageNumber 页码(从0开始)
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
                     * 获取每页数量(最大值:100)
                     * @return PageSize 每页数量(最大值:100)
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量(最大值:100)
                     * @param _pageSize 每页数量(最大值:100)
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
                     * 获取模糊查询
                     * @return Query 模糊查询
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置模糊查询
                     * @param _query 模糊查询
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 空间ID(必填)
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - AppStatus: 应用状态,枚举值,精确匹配(APP_STATUS_OFFLINE=1/APP_STATUS_RUNNING=2/APP_STATUS_DISABLED=3) - AppMode: 应用模式,枚举值,精确匹配(APP_MODE_STANDARD=1/APP_MODE_AGENT=2/APP_MODE_SINGLE_WORKFLOW=3/APP_MODE_CLAW_AGENT=4)
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * 页码(从0开始)
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量(最大值:100)
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 模糊查询
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPSUMMARYLISTREQUEST_H_
