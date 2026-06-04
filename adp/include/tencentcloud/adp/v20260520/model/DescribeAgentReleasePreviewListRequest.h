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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTREQUEST_H_

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
                * DescribeAgentReleasePreviewList请求参数结构体
                */
                class DescribeAgentReleasePreviewListRequest : public AbstractModel
                {
                public:
                    DescribeAgentReleasePreviewListRequest();
                    ~DescribeAgentReleasePreviewListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用Id</p>
                     * @return AppId <p>应用Id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _appId <p>应用Id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>页码</p>
                     * @return PageNumber <p>页码</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNumber <p>页码</p>
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
                     * 获取<p>每页数量在1到200之间</p>
                     * @return PageSize <p>每页数量在1到200之间</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量在1到200之间</p>
                     * @param _pageSize <p>每页数量在1到200之间</p>
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
                     * 获取<p>查询关键字, 用于模糊匹配标题</p>
                     * @return Query <p>查询关键字, 用于模糊匹配标题</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询关键字, 用于模糊匹配标题</p>
                     * @param _query <p>查询关键字, 用于模糊匹配标题</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p><p>入参限制：支持 StartTime、EndTime、ActionList、ReleaseStatusList</p>
                     * @return FilterList <p>过滤条件</p><p>入参限制：支持 StartTime、EndTime、ActionList、ReleaseStatusList</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件</p><p>入参限制：支持 StartTime、EndTime、ActionList、ReleaseStatusList</p>
                     * @param _filterList <p>过滤条件</p><p>入参限制：支持 StartTime、EndTime、ActionList、ReleaseStatusList</p>
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
                     * <p>应用Id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量在1到200之间</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>查询关键字, 用于模糊匹配标题</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>过滤条件</p><p>入参限制：支持 StartTime、EndTime、ActionList、ReleaseStatusList</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTREQUEST_H_
