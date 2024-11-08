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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_

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
                * ListUsers请求参数结构体
                */
                class ListUsersRequest : public AbstractModel
                {
                public:
                    ListUsersRequest();
                    ~ListUsersRequest() = default;
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
                     * 获取用户状态 Enabled：启用， Disabled：禁用。
                     * @return UserStatus 用户状态 Enabled：启用， Disabled：禁用。
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置用户状态 Enabled：启用， Disabled：禁用。
                     * @param _userStatus 用户状态 Enabled：启用， Disabled：禁用。
                     * 
                     */
                    void SetUserStatus(const std::string& _userStatus);

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                    /**
                     * 获取用户类型  Manual：手动创建，Synchronized：外部导入。
                     * @return UserType 用户类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型  Manual：手动创建，Synchronized：外部导入。
                     * @param _userType 用户类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件。  目前仅支持用户名，邮箱，用户userId，描述
                     * @return Filter 过滤条件。  目前仅支持用户名，邮箱，用户userId，描述
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤条件。  目前仅支持用户名，邮箱，用户userId，描述
                     * @param _filter 过滤条件。  目前仅支持用户名，邮箱，用户userId，描述
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
                     * 获取查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法经过多次查询，直到IsTruncated为false时，表示全部数据查询完毕。
                     * @return NextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法经过多次查询，直到IsTruncated为false时，表示全部数据查询完毕。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法经过多次查询，直到IsTruncated为false时，表示全部数据查询完毕。
                     * @param _nextToken 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法经过多次查询，直到IsTruncated为false时，表示全部数据查询完毕。
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
                     * 获取筛选的用户组，该用户组关联的子用户会返回IsSelected=1
                     * @return FilterGroups 筛选的用户组，该用户组关联的子用户会返回IsSelected=1
                     * 
                     */
                    std::vector<std::string> GetFilterGroups() const;

                    /**
                     * 设置筛选的用户组，该用户组关联的子用户会返回IsSelected=1
                     * @param _filterGroups 筛选的用户组，该用户组关联的子用户会返回IsSelected=1
                     * 
                     */
                    void SetFilterGroups(const std::vector<std::string>& _filterGroups);

                    /**
                     * 判断参数 FilterGroups 是否已赋值
                     * @return FilterGroups 是否已赋值
                     * 
                     */
                    bool FilterGroupsHasBeenSet() const;

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
                     * 用户状态 Enabled：启用， Disabled：禁用。
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * 用户类型  Manual：手动创建，Synchronized：外部导入。
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 过滤条件。  目前仅支持用户名，邮箱，用户userId，描述
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法经过多次查询，直到IsTruncated为false时，表示全部数据查询完毕。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 筛选的用户组，该用户组关联的子用户会返回IsSelected=1
                     */
                    std::vector<std::string> m_filterGroups;
                    bool m_filterGroupsHasBeenSet;

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

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_
