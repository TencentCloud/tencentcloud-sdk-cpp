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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_

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
                * ListWorkspaceUsers请求参数结构体
                */
                class ListWorkspaceUsersRequest : public AbstractModel
                {
                public:
                    ListWorkspaceUsersRequest();
                    ~ListWorkspaceUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID</p>
                     * @return WorkspaceId <p>工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
                     * @param _workspaceId <p>工作空间ID</p>
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
                     * 获取<p>用户名称或 UIN 模糊匹配</p>
                     * @return UserKeyword <p>用户名称或 UIN 模糊匹配</p>
                     * 
                     */
                    std::string GetUserKeyword() const;

                    /**
                     * 设置<p>用户名称或 UIN 模糊匹配</p>
                     * @param _userKeyword <p>用户名称或 UIN 模糊匹配</p>
                     * 
                     */
                    void SetUserKeyword(const std::string& _userKeyword);

                    /**
                     * 判断参数 UserKeyword 是否已赋值
                     * @return UserKeyword 是否已赋值
                     * 
                     */
                    bool UserKeywordHasBeenSet() const;

                    /**
                     * 获取<p>角色ID列表，过滤角色关联的用户；可通过 ListWorkspaceRoles 接口获取</p>
                     * @return RoleIds <p>角色ID列表，过滤角色关联的用户；可通过 ListWorkspaceRoles 接口获取</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>角色ID列表，过滤角色关联的用户；可通过 ListWorkspaceRoles 接口获取</p>
                     * @param _roleIds <p>角色ID列表，过滤角色关联的用户；可通过 ListWorkspaceRoles 接口获取</p>
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

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
                     * 获取<p>排序字段列表，如 [{Name: CreateTime, Direction: DESC}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * @return OrderBys <p>排序字段列表，如 [{Name: CreateTime, Direction: DESC}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序字段列表，如 [{Name: CreateTime, Direction: DESC}]；传入单个即单字段排序，默认按创建时间降序</p>
                     * @param _orderBys <p>排序字段列表，如 [{Name: CreateTime, Direction: DESC}]；传入单个即单字段排序，默认按创建时间降序</p>
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
                     * 获取<p>页码，默认1，从1开始；小于1时按1处理</p>
                     * @return PageNumber <p>页码，默认1，从1开始；小于1时按1处理</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，默认1，从1开始；小于1时按1处理</p>
                     * @param _pageNumber <p>页码，默认1，从1开始；小于1时按1处理</p>
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
                     * 获取<p>每页条数，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * @return PageSize <p>每页条数，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * @param _pageSize <p>每页条数，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
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
                     * 获取<p>扩展信息（首次请求为空，翻页请求带响应中的ExtendInfo。连续翻页且item涉及权限过滤等场景，用于定位下次offset）</p>
                     * @return ExtendInfo <p>扩展信息（首次请求为空，翻页请求带响应中的ExtendInfo。连续翻页且item涉及权限过滤等场景，用于定位下次offset）</p>
                     * 
                     */
                    std::string GetExtendInfo() const;

                    /**
                     * 设置<p>扩展信息（首次请求为空，翻页请求带响应中的ExtendInfo。连续翻页且item涉及权限过滤等场景，用于定位下次offset）</p>
                     * @param _extendInfo <p>扩展信息（首次请求为空，翻页请求带响应中的ExtendInfo。连续翻页且item涉及权限过滤等场景，用于定位下次offset）</p>
                     * 
                     */
                    void SetExtendInfo(const std::string& _extendInfo);

                    /**
                     * 判断参数 ExtendInfo 是否已赋值
                     * @return ExtendInfo 是否已赋值
                     * 
                     */
                    bool ExtendInfoHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>用户名称或 UIN 模糊匹配</p>
                     */
                    std::string m_userKeyword;
                    bool m_userKeywordHasBeenSet;

                    /**
                     * <p>角色ID列表，过滤角色关联的用户；可通过 ListWorkspaceRoles 接口获取</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>用户UIN列表，按UIN精确筛选</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>排序字段列表，如 [{Name: CreateTime, Direction: DESC}]；传入单个即单字段排序，默认按创建时间降序</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，默认1，从1开始；小于1时按1处理</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页条数，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>扩展信息（首次请求为空，翻页请求带响应中的ExtendInfo。连续翻页且item涉及权限过滤等场景，用于定位下次offset）</p>
                     */
                    std::string m_extendInfo;
                    bool m_extendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEUSERSREQUEST_H_
