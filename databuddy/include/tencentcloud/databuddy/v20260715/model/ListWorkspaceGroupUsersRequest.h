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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListWorkspaceGroupUsers请求参数结构体
                */
                class ListWorkspaceGroupUsersRequest : public AbstractModel
                {
                public:
                    ListWorkspaceGroupUsersRequest();
                    ~ListWorkspaceGroupUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间id</p>
                     * @return WorkspaceId <p>工作空间id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间id</p>
                     * @param _workspaceId <p>工作空间id</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户组ID，可通过 ListWorkspaceGroups 接口获取</p>
                     * @return GroupId <p>用户组ID，可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>用户组ID，可通过 ListWorkspaceGroups 接口获取</p>
                     * @param _groupId <p>用户组ID，可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>关键字，支持按用户名模糊搜索</p>
                     * @return NameKeywords <p>关键字，支持按用户名模糊搜索</p>
                     * 
                     */
                    std::string GetNameKeywords() const;

                    /**
                     * 设置<p>关键字，支持按用户名模糊搜索</p>
                     * @param _nameKeywords <p>关键字，支持按用户名模糊搜索</p>
                     * 
                     */
                    void SetNameKeywords(const std::string& _nameKeywords);

                    /**
                     * 判断参数 NameKeywords 是否已赋值
                     * @return NameKeywords 是否已赋值
                     * 
                     */
                    bool NameKeywordsHasBeenSet() const;

                    /**
                     * 获取<p>用户UIN列表，按UIN精确筛选</p>
                     * @return UserUins <p>用户UIN列表，按UIN精确筛选</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>用户UIN列表，按UIN精确筛选</p>
                     * @param _userUins <p>用户UIN列表，按UIN精确筛选</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                    /**
                     * 获取<p>&quot;OrderBys&quot;: [{&quot;Name&quot;: &quot;CreateTime&quot;, &quot;Direction&quot;: &quot;DESC&quot; }]</p>
                     * @return OrderBys <p>&quot;OrderBys&quot;: [{&quot;Name&quot;: &quot;CreateTime&quot;, &quot;Direction&quot;: &quot;DESC&quot; }]</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>&quot;OrderBys&quot;: [{&quot;Name&quot;: &quot;CreateTime&quot;, &quot;Direction&quot;: &quot;DESC&quot; }]</p>
                     * @param _orderBys <p>&quot;OrderBys&quot;: [{&quot;Name&quot;: &quot;CreateTime&quot;, &quot;Direction&quot;: &quot;DESC&quot; }]</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始，默认1</p>
                     * @return PageNumber <p>页码，从1开始，默认1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始，默认1</p>
                     * @param _pageNumber <p>页码，从1开始，默认1</p>
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
                     * 获取<p>每页大小</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @return PageSize <p>每页大小</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * @param _pageSize <p>每页大小</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>用户组ID，可通过 ListWorkspaceGroups 接口获取</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>关键字，支持按用户名模糊搜索</p>
                     */
                    std::string m_nameKeywords;
                    bool m_nameKeywordsHasBeenSet;

                    /**
                     * <p>用户UIN列表，按UIN精确筛选</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>&quot;OrderBys&quot;: [{&quot;Name&quot;: &quot;CreateTime&quot;, &quot;Direction&quot;: &quot;DESC&quot; }]</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小</p><p>取值范围：[1, 100]</p><p>默认值：10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPUSERSREQUEST_H_
