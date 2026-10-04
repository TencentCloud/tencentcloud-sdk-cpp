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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_

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
                * ListWorkspaces请求参数结构体
                */
                class ListWorkspacesRequest : public AbstractModel
                {
                public:
                    ListWorkspacesRequest();
                    ~ListWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID精确匹配</p>
                     * @return WorkspaceId <p>工作空间ID精确匹配</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID精确匹配</p>
                     * @param _workspaceId <p>工作空间ID精确匹配</p>
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
                     * 获取<p>工作空间名称模糊匹配</p>
                     * @return WorkspaceKeyword <p>工作空间名称模糊匹配</p>
                     * 
                     */
                    std::string GetWorkspaceKeyword() const;

                    /**
                     * 设置<p>工作空间名称模糊匹配</p>
                     * @param _workspaceKeyword <p>工作空间名称模糊匹配</p>
                     * 
                     */
                    void SetWorkspaceKeyword(const std::string& _workspaceKeyword);

                    /**
                     * 判断参数 WorkspaceKeyword 是否已赋值
                     * @return WorkspaceKeyword 是否已赋值
                     * 
                     */
                    bool WorkspaceKeywordHasBeenSet() const;

                    /**
                     * 获取<p>工作空间状态过滤（多选）：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除</p>
                     * @return StatusList <p>工作空间状态过滤（多选）：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除</p>
                     * 
                     */
                    std::vector<int64_t> GetStatusList() const;

                    /**
                     * 设置<p>工作空间状态过滤（多选）：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除</p>
                     * @param _statusList <p>工作空间状态过滤（多选）：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除</p>
                     * 
                     */
                    void SetStatusList(const std::vector<int64_t>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取<p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * @return OrderBys <p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * @param _orderBys <p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
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
                     * 获取<p>每页大小，默认10，最小10，最大100</p>
                     * @return PageSize <p>每页大小，默认10，最小10，最大100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认10，最小10，最大100</p>
                     * @param _pageSize <p>每页大小，默认10，最小10，最大100</p>
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
                     * 获取<p>工作空间地域过滤（多选），如 ap-guangzhou</p>
                     * @return WorkspaceRegion <p>工作空间地域过滤（多选），如 ap-guangzhou</p>
                     * 
                     */
                    std::vector<std::string> GetWorkspaceRegion() const;

                    /**
                     * 设置<p>工作空间地域过滤（多选），如 ap-guangzhou</p>
                     * @param _workspaceRegion <p>工作空间地域过滤（多选），如 ap-guangzhou</p>
                     * 
                     */
                    void SetWorkspaceRegion(const std::vector<std::string>& _workspaceRegion);

                    /**
                     * 判断参数 WorkspaceRegion 是否已赋值
                     * @return WorkspaceRegion 是否已赋值
                     * 
                     */
                    bool WorkspaceRegionHasBeenSet() const;

                    /**
                     * 获取<p>创建者UIN过滤（多选）</p>
                     * @return Creator <p>创建者UIN过滤（多选）</p>
                     * 
                     */
                    std::vector<std::string> GetCreator() const;

                    /**
                     * 设置<p>创建者UIN过滤（多选）</p>
                     * @param _creator <p>创建者UIN过滤（多选）</p>
                     * 
                     */
                    void SetCreator(const std::vector<std::string>& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID精确匹配</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>工作空间名称模糊匹配</p>
                     */
                    std::string m_workspaceKeyword;
                    bool m_workspaceKeywordHasBeenSet;

                    /**
                     * <p>工作空间状态过滤（多选）：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除</p>
                     */
                    std::vector<int64_t> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * <p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认10，最小10，最大100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>工作空间地域过滤（多选），如 ap-guangzhou</p>
                     */
                    std::vector<std::string> m_workspaceRegion;
                    bool m_workspaceRegionHasBeenSet;

                    /**
                     * <p>创建者UIN过滤（多选）</p>
                     */
                    std::vector<std::string> m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_
