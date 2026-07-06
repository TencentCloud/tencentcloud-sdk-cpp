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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTREQUEST_H_

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
                * DescribeAgentSummaryList请求参数结构体
                */
                class DescribeAgentSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeAgentSummaryListRequest();
                    ~DescribeAgentSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询范围；0-单应用查询；1-跨应用查询</p>
                     * @return Scope <p>查询范围；0-单应用查询；1-跨应用查询</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>查询范围；0-单应用查询；1-跨应用查询</p>
                     * @param _scope <p>查询范围；0-单应用查询；1-跨应用查询</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>应用Id，Scope=0 时为目标应用ID（必填）；scope=1 时无需填写</p>
                     * @return AppId <p>应用Id，Scope=0 时为目标应用ID（必填）；scope=1 时无需填写</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id，Scope=0 时为目标应用ID（必填）；scope=1 时无需填写</p>
                     * @param _appId <p>应用Id，Scope=0 时为目标应用ID（必填）；scope=1 时无需填写</p>
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
                     * 获取<p>过滤条件（name: "SearchWord", "SpaceId", "AgentSource", "AppId"）</p>
                     * @return FilterList <p>过滤条件（name: "SearchWord", "SpaceId", "AgentSource", "AppId"）</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件（name: "SearchWord", "SpaceId", "AgentSource", "AppId"）</p>
                     * @param _filterList <p>过滤条件（name: "SearchWord", "SpaceId", "AgentSource", "AppId"）</p>
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
                     * 获取<p>每页数目</p>
                     * @return PageSize <p>每页数目</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数目</p>
                     * @param _pageSize <p>每页数目</p>
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

                private:

                    /**
                     * <p>查询范围；0-单应用查询；1-跨应用查询</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>应用Id，Scope=0 时为目标应用ID（必填）；scope=1 时无需填写</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>过滤条件（name: "SearchWord", "SpaceId", "AgentSource", "AppId"）</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>每页数目</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTREQUEST_H_
