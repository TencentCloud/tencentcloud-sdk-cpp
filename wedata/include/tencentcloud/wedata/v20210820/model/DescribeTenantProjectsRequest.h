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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETENANTPROJECTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETENANTPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTenantProjects请求参数结构体
                */
                class DescribeTenantProjectsRequest : public AbstractModel
                {
                public:
                    DescribeTenantProjectsRequest();
                    ~DescribeTenantProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取第几页
                     * @return PageNumber 第几页
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置第几页
                     * @param _pageNumber 第几页
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
                     * 获取一页几条
                     * @return PageSize 一页几条
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置一页几条
                     * @param _pageSize 一页几条
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
                     * 获取是否展示关联执行组的信息。正常应该不是从项目列表里获取
                     * @return DescribeExecutors 是否展示关联执行组的信息。正常应该不是从项目列表里获取
                     * 
                     */
                    bool GetDescribeExecutors() const;

                    /**
                     * 设置是否展示关联执行组的信息。正常应该不是从项目列表里获取
                     * @param _describeExecutors 是否展示关联执行组的信息。正常应该不是从项目列表里获取
                     * 
                     */
                    void SetDescribeExecutors(const bool& _describeExecutors);

                    /**
                     * 判断参数 DescribeExecutors 是否已赋值
                     * @return DescribeExecutors 是否已赋值
                     * 
                     */
                    bool DescribeExecutorsHasBeenSet() const;

                    /**
                     * 获取是否展示项目管理员信息，减少默认返回的请求内容
                     * @return DescribeAdminUsers 是否展示项目管理员信息，减少默认返回的请求内容
                     * 
                     */
                    bool GetDescribeAdminUsers() const;

                    /**
                     * 设置是否展示项目管理员信息，减少默认返回的请求内容
                     * @param _describeAdminUsers 是否展示项目管理员信息，减少默认返回的请求内容
                     * 
                     */
                    void SetDescribeAdminUsers(const bool& _describeAdminUsers);

                    /**
                     * 判断参数 DescribeAdminUsers 是否已赋值
                     * @return DescribeAdminUsers 是否已赋值
                     * 
                     */
                    bool DescribeAdminUsersHasBeenSet() const;

                    /**
                     * 获取统计项目人员数量。数据地图需求
                     * @return DescribeMemberCount 统计项目人员数量。数据地图需求
                     * 
                     */
                    bool GetDescribeMemberCount() const;

                    /**
                     * 设置统计项目人员数量。数据地图需求
                     * @param _describeMemberCount 统计项目人员数量。数据地图需求
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
                     * 获取自定义条件查询
                     * @return Filters 自定义条件查询
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置自定义条件查询
                     * @param _filters 自定义条件查询
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
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段
                     * @param _orderFields 排序字段
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取默认不提供创建者信息，该参数与CAM交互比较耗时
                     * @return DescribeCreator 默认不提供创建者信息，该参数与CAM交互比较耗时
                     * 
                     */
                    bool GetDescribeCreator() const;

                    /**
                     * 设置默认不提供创建者信息，该参数与CAM交互比较耗时
                     * @param _describeCreator 默认不提供创建者信息，该参数与CAM交互比较耗时
                     * 
                     */
                    void SetDescribeCreator(const bool& _describeCreator);

                    /**
                     * 判断参数 DescribeCreator 是否已赋值
                     * @return DescribeCreator 是否已赋值
                     * 
                     */
                    bool DescribeCreatorHasBeenSet() const;

                    /**
                     * 获取是否展示关联资源池信息
                     * @return DescribeResourcePools 是否展示关联资源池信息
                     * 
                     */
                    bool GetDescribeResourcePools() const;

                    /**
                     * 设置是否展示关联资源池信息
                     * @param _describeResourcePools 是否展示关联资源池信息
                     * 
                     */
                    void SetDescribeResourcePools(const bool& _describeResourcePools);

                    /**
                     * 判断参数 DescribeResourcePools 是否已赋值
                     * @return DescribeResourcePools 是否已赋值
                     * 
                     */
                    bool DescribeResourcePoolsHasBeenSet() const;

                private:

                    /**
                     * 第几页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 一页几条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 是否展示关联执行组的信息。正常应该不是从项目列表里获取
                     */
                    bool m_describeExecutors;
                    bool m_describeExecutorsHasBeenSet;

                    /**
                     * 是否展示项目管理员信息，减少默认返回的请求内容
                     */
                    bool m_describeAdminUsers;
                    bool m_describeAdminUsersHasBeenSet;

                    /**
                     * 统计项目人员数量。数据地图需求
                     */
                    bool m_describeMemberCount;
                    bool m_describeMemberCountHasBeenSet;

                    /**
                     * 自定义条件查询
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 默认不提供创建者信息，该参数与CAM交互比较耗时
                     */
                    bool m_describeCreator;
                    bool m_describeCreatorHasBeenSet;

                    /**
                     * 是否展示关联资源池信息
                     */
                    bool m_describeResourcePools;
                    bool m_describeResourcePoolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETENANTPROJECTSREQUEST_H_
