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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONAUTHORIZATIONSREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONAUTHORIZATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AuthorizationInfoSearchCriteria.h>
#include <tencentcloud/eiam/v20210420/model/SortCondition.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListApplicationAuthorizations请求参数结构体
                */
                class ListApplicationAuthorizationsRequest : public AbstractModel
                {
                public:
                    ListApplicationAuthorizationsRequest();
                    ~ListApplicationAuthorizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询类型，包含用户（User）、用户组（UserGroup）、组织机构（OrgNode）。
                     * @return EntityType 查询类型，包含用户（User）、用户组（UserGroup）、组织机构（OrgNode）。
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置查询类型，包含用户（User）、用户组（UserGroup）、组织机构（OrgNode）。
                     * @param _entityType 查询类型，包含用户（User）、用户组（UserGroup）、组织机构（OrgNode）。
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取查询条件，支持多搜索条件组合、多数据范围匹配的搜索。同时支持查询信息内容全匹配、部分匹配、范围匹配等多种查询方式，具体查询方式为：双引号（""）表示全匹配、以星号（* ) 结尾表示字段部分匹配。如果该字段为空，则默认查全量表。
                     * @return SearchCondition 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。同时支持查询信息内容全匹配、部分匹配、范围匹配等多种查询方式，具体查询方式为：双引号（""）表示全匹配、以星号（* ) 结尾表示字段部分匹配。如果该字段为空，则默认查全量表。
                     * 
                     */
                    AuthorizationInfoSearchCriteria GetSearchCondition() const;

                    /**
                     * 设置查询条件，支持多搜索条件组合、多数据范围匹配的搜索。同时支持查询信息内容全匹配、部分匹配、范围匹配等多种查询方式，具体查询方式为：双引号（""）表示全匹配、以星号（* ) 结尾表示字段部分匹配。如果该字段为空，则默认查全量表。
                     * @param _searchCondition 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。同时支持查询信息内容全匹配、部分匹配、范围匹配等多种查询方式，具体查询方式为：双引号（""）表示全匹配、以星号（* ) 结尾表示字段部分匹配。如果该字段为空，则默认查全量表。
                     * 
                     */
                    void SetSearchCondition(const AuthorizationInfoSearchCriteria& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取排序条件集合。可排序的属性支持：上次修改时间（lastModifiedDate）。如果该字段为空，则默认按照应用名称正向排序。
                     * @return Sort 排序条件集合。可排序的属性支持：上次修改时间（lastModifiedDate）。如果该字段为空，则默认按照应用名称正向排序。
                     * 
                     */
                    SortCondition GetSort() const;

                    /**
                     * 设置排序条件集合。可排序的属性支持：上次修改时间（lastModifiedDate）。如果该字段为空，则默认按照应用名称正向排序。
                     * @param _sort 排序条件集合。可排序的属性支持：上次修改时间（lastModifiedDate）。如果该字段为空，则默认按照应用名称正向排序。
                     * 
                     */
                    void SetSort(const SortCondition& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取分页偏移量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * @return Offset 分页偏移量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * @param _offset 分页偏移量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页读取数量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * @return Limit 分页读取数量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页读取数量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * @param _limit 分页读取数量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 查询类型，包含用户（User）、用户组（UserGroup）、组织机构（OrgNode）。
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。同时支持查询信息内容全匹配、部分匹配、范围匹配等多种查询方式，具体查询方式为：双引号（""）表示全匹配、以星号（* ) 结尾表示字段部分匹配。如果该字段为空，则默认查全量表。
                     */
                    AuthorizationInfoSearchCriteria m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * 排序条件集合。可排序的属性支持：上次修改时间（lastModifiedDate）。如果该字段为空，则默认按照应用名称正向排序。
                     */
                    SortCondition m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 分页偏移量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页读取数量。Offset 和 Limit 两个字段需配合使用，即其中一个指定了，另一个必须指定。 如果不指定以上参数，则表示不进行分页查询。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONAUTHORIZATIONSREQUEST_H_
