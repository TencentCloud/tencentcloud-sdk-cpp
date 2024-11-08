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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTGROUPSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListGroups请求参数结构体
                */
                class ListGroupsRequest : public AbstractModel
                {
                public:
                    ListGroupsRequest();
                    ~ListGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     * @return NextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     * @param _nextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     * @return MaxResults 每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     * @param _maxResults 每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取过滤条件。  格式：<Attribute> <Operator> <Value>，不区分大小写。目前，<Attribute>只支持GroupName，<Operator>只支持eq（Equals）和sw（Start With）。  示例：Filter = "GroupName sw test"，表示查询名称以 test 开头的全部用户组。Filter = "GroupName eq testgroup"，表示查询名称为 testgroup 的用户组。
                     * @return Filter 过滤条件。  格式：<Attribute> <Operator> <Value>，不区分大小写。目前，<Attribute>只支持GroupName，<Operator>只支持eq（Equals）和sw（Start With）。  示例：Filter = "GroupName sw test"，表示查询名称以 test 开头的全部用户组。Filter = "GroupName eq testgroup"，表示查询名称为 testgroup 的用户组。
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤条件。  格式：<Attribute> <Operator> <Value>，不区分大小写。目前，<Attribute>只支持GroupName，<Operator>只支持eq（Equals）和sw（Start With）。  示例：Filter = "GroupName sw test"，表示查询名称以 test 开头的全部用户组。Filter = "GroupName eq testgroup"，表示查询名称为 testgroup 的用户组。
                     * @param _filter 过滤条件。  格式：<Attribute> <Operator> <Value>，不区分大小写。目前，<Attribute>只支持GroupName，<Operator>只支持eq（Equals）和sw（Start With）。  示例：Filter = "GroupName sw test"，表示查询名称以 test 开头的全部用户组。Filter = "GroupName eq testgroup"，表示查询名称为 testgroup 的用户组。
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * @return GroupType 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * @param _groupType 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取筛选的用户，该用户关联的用户组会返回IsSelected=1
                     * @return FilterUsers 筛选的用户，该用户关联的用户组会返回IsSelected=1
                     * 
                     */
                    std::vector<std::string> GetFilterUsers() const;

                    /**
                     * 设置筛选的用户，该用户关联的用户组会返回IsSelected=1
                     * @param _filterUsers 筛选的用户，该用户关联的用户组会返回IsSelected=1
                     * 
                     */
                    void SetFilterUsers(const std::vector<std::string>& _filterUsers);

                    /**
                     * 判断参数 FilterUsers 是否已赋值
                     * @return FilterUsers 是否已赋值
                     * 
                     */
                    bool FilterUsersHasBeenSet() const;

                    /**
                     * 获取排序的字段，目前只支持CreateTime，默认是CreateTime字段
                     * @return SortField 排序的字段，目前只支持CreateTime，默认是CreateTime字段
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序的字段，目前只支持CreateTime，默认是CreateTime字段
                     * @param _sortField 排序的字段，目前只支持CreateTime，默认是CreateTime字段
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置
                     * @return SortType 排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置
                     * @param _sortType 排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取翻页offset. 不要与NextToken同时使用，优先使用NextToken
                     * @return Offset 翻页offset. 不要与NextToken同时使用，优先使用NextToken
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页offset. 不要与NextToken同时使用，优先使用NextToken
                     * @param _offset 翻页offset. 不要与NextToken同时使用，优先使用NextToken
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 过滤条件。  格式：<Attribute> <Operator> <Value>，不区分大小写。目前，<Attribute>只支持GroupName，<Operator>只支持eq（Equals）和sw（Start With）。  示例：Filter = "GroupName sw test"，表示查询名称以 test 开头的全部用户组。Filter = "GroupName eq testgroup"，表示查询名称为 testgroup 的用户组。
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 用户组的类型  Manual：手动创建，Synchronized：外部导入。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 筛选的用户，该用户关联的用户组会返回IsSelected=1
                     */
                    std::vector<std::string> m_filterUsers;
                    bool m_filterUsersHasBeenSet;

                    /**
                     * 排序的字段，目前只支持CreateTime，默认是CreateTime字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 翻页offset. 不要与NextToken同时使用，优先使用NextToken
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTGROUPSREQUEST_H_
