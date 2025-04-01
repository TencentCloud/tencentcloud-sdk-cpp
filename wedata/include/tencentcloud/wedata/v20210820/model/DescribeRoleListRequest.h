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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderFields.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRoleList请求参数结构体
                */
                class DescribeRoleListRequest : public AbstractModel
                {
                public:
                    DescribeRoleListRequest();
                    ~DescribeRoleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回所有角色。
                     * @return ShowAllRoles 返回所有角色。
                     * 
                     */
                    bool GetShowAllRoles() const;

                    /**
                     * 设置返回所有角色。
                     * @param _showAllRoles 返回所有角色。
                     * 
                     */
                    void SetShowAllRoles(const bool& _showAllRoles);

                    /**
                     * 判断参数 ShowAllRoles 是否已赋值
                     * @return ShowAllRoles 是否已赋值
                     * 
                     */
                    bool ShowAllRolesHasBeenSet() const;

                    /**
                     * 获取需要返回的角色类型(system,tenant,project)
                     * @return IncludeRoleTypes 需要返回的角色类型(system,tenant,project)
                     * 
                     */
                    std::vector<std::string> GetIncludeRoleTypes() const;

                    /**
                     * 设置需要返回的角色类型(system,tenant,project)
                     * @param _includeRoleTypes 需要返回的角色类型(system,tenant,project)
                     * 
                     */
                    void SetIncludeRoleTypes(const std::vector<std::string>& _includeRoleTypes);

                    /**
                     * 判断参数 IncludeRoleTypes 是否已赋值
                     * @return IncludeRoleTypes 是否已赋值
                     * 
                     */
                    bool IncludeRoleTypesHasBeenSet() const;

                    /**
                     * 获取返回角色绑定人员统计，仅私有化版本支持
                     * @return DescribeMemberCount 返回角色绑定人员统计，仅私有化版本支持
                     * 
                     */
                    bool GetDescribeMemberCount() const;

                    /**
                     * 设置返回角色绑定人员统计，仅私有化版本支持
                     * @param _describeMemberCount 返回角色绑定人员统计，仅私有化版本支持
                     * 
                     */
                    void SetDescribeMemberCount(const bool& _describeMemberCount);

                    /**
                     * 判断参数 DescribeMemberCount 是否已赋值
                     * @return DescribeMemberCount 是否已赋值
                     * 
                     */
                    bool DescribeMemberCountHasBeenSet() const;

                    /**
                     * 获取返回操作者信息，私有化多租户版本
                     * @return DescribeOperator 返回操作者信息，私有化多租户版本
                     * 
                     */
                    bool GetDescribeOperator() const;

                    /**
                     * 设置返回操作者信息，私有化多租户版本
                     * @param _describeOperator 返回操作者信息，私有化多租户版本
                     * 
                     */
                    void SetDescribeOperator(const bool& _describeOperator);

                    /**
                     * 判断参数 DescribeOperator 是否已赋值
                     * @return DescribeOperator 是否已赋值
                     * 
                     */
                    bool DescribeOperatorHasBeenSet() const;

                    /**
                     * 获取系统角色
                     * @return DescribeSystemRoleOnly 系统角色
                     * 
                     */
                    bool GetDescribeSystemRoleOnly() const;

                    /**
                     * 设置系统角色
                     * @param _describeSystemRoleOnly 系统角色
                     * 
                     */
                    void SetDescribeSystemRoleOnly(const bool& _describeSystemRoleOnly);

                    /**
                     * 判断参数 DescribeSystemRoleOnly 是否已赋值
                     * @return DescribeSystemRoleOnly 是否已赋值
                     * 
                     */
                    bool DescribeSystemRoleOnlyHasBeenSet() const;

                    /**
                     * 获取自定义角色
                     * @return DescribeCustomRoleOnly 自定义角色
                     * 
                     */
                    bool GetDescribeCustomRoleOnly() const;

                    /**
                     * 设置自定义角色
                     * @param _describeCustomRoleOnly 自定义角色
                     * 
                     */
                    void SetDescribeCustomRoleOnly(const bool& _describeCustomRoleOnly);

                    /**
                     * 判断参数 DescribeCustomRoleOnly 是否已赋值
                     * @return DescribeCustomRoleOnly 是否已赋值
                     * 
                     */
                    bool DescribeCustomRoleOnlyHasBeenSet() const;

                    /**
                     * 获取查看权限
                     * @return DescribePrivileges 查看权限
                     * 
                     */
                    bool GetDescribePrivileges() const;

                    /**
                     * 设置查看权限
                     * @param _describePrivileges 查看权限
                     * 
                     */
                    void SetDescribePrivileges(const bool& _describePrivileges);

                    /**
                     * 判断参数 DescribePrivileges 是否已赋值
                     * @return DescribePrivileges 是否已赋值
                     * 
                     */
                    bool DescribePrivilegesHasBeenSet() const;

                    /**
                     * 获取筛选角色id
                     * @return RoleIds 筛选角色id
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置筛选角色id
                     * @param _roleIds 筛选角色id
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取分页信息
                     * @return PageSize 分页信息
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页信息
                     * @param _pageSize 分页信息
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
                     * 获取查询字段
                     * @return Filters 查询字段
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询字段
                     * @param _filters 查询字段
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
                     * 获取排序字段
                     * @return OrderFields 排序字段
                     * 
                     */
                    std::vector<OrderFields> GetOrderFields() const;

                    /**
                     * 设置排序字段
                     * @param _orderFields 排序字段
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderFields>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 返回所有角色。
                     */
                    bool m_showAllRoles;
                    bool m_showAllRolesHasBeenSet;

                    /**
                     * 需要返回的角色类型(system,tenant,project)
                     */
                    std::vector<std::string> m_includeRoleTypes;
                    bool m_includeRoleTypesHasBeenSet;

                    /**
                     * 返回角色绑定人员统计，仅私有化版本支持
                     */
                    bool m_describeMemberCount;
                    bool m_describeMemberCountHasBeenSet;

                    /**
                     * 返回操作者信息，私有化多租户版本
                     */
                    bool m_describeOperator;
                    bool m_describeOperatorHasBeenSet;

                    /**
                     * 系统角色
                     */
                    bool m_describeSystemRoleOnly;
                    bool m_describeSystemRoleOnlyHasBeenSet;

                    /**
                     * 自定义角色
                     */
                    bool m_describeCustomRoleOnly;
                    bool m_describeCustomRoleOnlyHasBeenSet;

                    /**
                     * 查看权限
                     */
                    bool m_describePrivileges;
                    bool m_describePrivilegesHasBeenSet;

                    /**
                     * 筛选角色id
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页信息
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询字段
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::vector<OrderFields> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEROLELISTREQUEST_H_
