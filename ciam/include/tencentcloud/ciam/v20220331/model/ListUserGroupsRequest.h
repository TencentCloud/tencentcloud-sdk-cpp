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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserGroups请求参数结构体
                */
                class ListUserGroupsRequest : public AbstractModel
                {
                public:
                    ListUserGroupsRequest();
                    ~ListUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取分页数据
                     * @return Pageable 分页数据
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置分页数据
                     * @param _pageable 分页数据
                     * 
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取Key可选值为condition

<li> **condition** </li>	Values = 查询条件，用户组ID或用户组名称
                     * @return Filters Key可选值为condition

<li> **condition** </li>	Values = 查询条件，用户组ID或用户组名称
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Key可选值为condition

<li> **condition** </li>	Values = 查询条件，用户组ID或用户组名称
                     * @param _filters Key可选值为condition

<li> **condition** </li>	Values = 查询条件，用户组ID或用户组名称
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 分页数据
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * Key可选值为condition

<li> **condition** </li>	Values = 查询条件，用户组ID或用户组名称
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSREQUEST_H_
