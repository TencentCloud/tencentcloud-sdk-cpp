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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_

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
                * ListWorkspaceGroups请求参数结构体
                */
                class ListWorkspaceGroupsRequest : public AbstractModel
                {
                public:
                    ListWorkspaceGroupsRequest();
                    ~ListWorkspaceGroupsRequest() = default;
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
                     * 获取<p>通过用户组ID批量查询；用户组ID可通过 ListWorkspaceGroups 接口获取</p>
                     * @return GroupIds <p>通过用户组ID批量查询；用户组ID可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>通过用户组ID批量查询；用户组ID可通过 ListWorkspaceGroups 接口获取</p>
                     * @param _groupIds <p>通过用户组ID批量查询；用户组ID可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>用户组名称模糊匹配</p>
                     * @return GroupKeyword <p>用户组名称模糊匹配</p>
                     * 
                     */
                    std::string GetGroupKeyword() const;

                    /**
                     * 设置<p>用户组名称模糊匹配</p>
                     * @param _groupKeyword <p>用户组名称模糊匹配</p>
                     * 
                     */
                    void SetGroupKeyword(const std::string& _groupKeyword);

                    /**
                     * 判断参数 GroupKeyword 是否已赋值
                     * @return GroupKeyword 是否已赋值
                     * 
                     */
                    bool GroupKeywordHasBeenSet() const;

                    /**
                     * 获取<p>用于过滤角色关联的用户组；可通过 ListWorkspaceRoles 接口获取</p>
                     * @return RoleIds <p>用于过滤角色关联的用户组；可通过 ListWorkspaceRoles 接口获取</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>用于过滤角色关联的用户组；可通过 ListWorkspaceRoles 接口获取</p>
                     * @param _roleIds <p>用于过滤角色关联的用户组；可通过 ListWorkspaceRoles 接口获取</p>
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
                     * 获取<p>页码，从1开始，默认1；小于1时按1处理</p>
                     * @return PageNumber <p>页码，从1开始，默认1；小于1时按1处理</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始，默认1；小于1时按1处理</p>
                     * @param _pageNumber <p>页码，从1开始，默认1；小于1时按1处理</p>
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
                     * 获取<p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * @return PageSize <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     * @param _pageSize <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
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
                     * 获取<p>用户组类型筛选。取值为枚举数值的字符串形式："0"=控制台系统类型（包含全部user）、"1"=控制台自定义类型、"2"=工作空间系统类型（包含工作空间全部user）、"3"=工作空间自定义类型</p>
                     * @return GroupType <p>用户组类型筛选。取值为枚举数值的字符串形式："0"=控制台系统类型（包含全部user）、"1"=控制台自定义类型、"2"=工作空间系统类型（包含工作空间全部user）、"3"=工作空间自定义类型</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>用户组类型筛选。取值为枚举数值的字符串形式："0"=控制台系统类型（包含全部user）、"1"=控制台自定义类型、"2"=工作空间系统类型（包含工作空间全部user）、"3"=工作空间自定义类型</p>
                     * @param _groupType <p>用户组类型筛选。取值为枚举数值的字符串形式："0"=控制台系统类型（包含全部user）、"1"=控制台自定义类型、"2"=工作空间系统类型（包含工作空间全部user）、"3"=工作空间自定义类型</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>通过用户组ID批量查询；用户组ID可通过 ListWorkspaceGroups 接口获取</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>用户组名称模糊匹配</p>
                     */
                    std::string m_groupKeyword;
                    bool m_groupKeywordHasBeenSet;

                    /**
                     * <p>用于过滤角色关联的用户组；可通过 ListWorkspaceRoles 接口获取</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>多字段排序，如 [{Name: 'CreateTime', Direction: 'Desc'}]；传入单个即单字段排序，默认按创建时间降序</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认1；小于1时按1处理</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小，默认10，取值范围为 [1,100]，越界时自动收敛到边界值</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>用户组类型筛选。取值为枚举数值的字符串形式："0"=控制台系统类型（包含全部user）、"1"=控制台自定义类型、"2"=工作空间系统类型（包含工作空间全部user）、"3"=工作空间自定义类型</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACEGROUPSREQUEST_H_
