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
                     * 获取<p>空间 ID。</p>
                     * @return ZoneId <p>空间 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID。</p>
                     * @param _zoneId <p>空间 ID。</p>
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
                     * 获取<p>查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。</p>
                     * @return NextToken <p>查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。</p>
                     * @param _nextToken <p>查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。</p>
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
                     * 获取<p>每页的最大数据条数。  取值范围：1~100。  默认值：10。</p>
                     * @return MaxResults <p>每页的最大数据条数。  取值范围：1~100。  默认值：10。</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>每页的最大数据条数。  取值范围：1~100。  默认值：10。</p>
                     * @param _maxResults <p>每页的最大数据条数。  取值范围：1~100。  默认值：10。</p>
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
                     * 获取<p>过滤条件，用户组名称</p>
                     * @return Filter <p>过滤条件，用户组名称</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件，用户组名称</p>
                     * @param _filter <p>过滤条件，用户组名称</p>
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
                     * 获取<p>用户组的类型  Manual：手动创建，Synchronized：外部导入。</p>
                     * @return GroupType <p>用户组的类型  Manual：手动创建，Synchronized：外部导入。</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>用户组的类型  Manual：手动创建，Synchronized：外部导入。</p>
                     * @param _groupType <p>用户组的类型  Manual：手动创建，Synchronized：外部导入。</p>
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
                     * 获取<p>筛选的用户，该用户关联的用户组会返回IsSelected=1</p>
                     * @return FilterUsers <p>筛选的用户，该用户关联的用户组会返回IsSelected=1</p>
                     * 
                     */
                    std::vector<std::string> GetFilterUsers() const;

                    /**
                     * 设置<p>筛选的用户，该用户关联的用户组会返回IsSelected=1</p>
                     * @param _filterUsers <p>筛选的用户，该用户关联的用户组会返回IsSelected=1</p>
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
                     * 获取<p>排序的字段，目前只支持CreateTime，默认是CreateTime字段</p>
                     * @return SortField <p>排序的字段，目前只支持CreateTime，默认是CreateTime字段</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>排序的字段，目前只支持CreateTime，默认是CreateTime字段</p>
                     * @param _sortField <p>排序的字段，目前只支持CreateTime，默认是CreateTime字段</p>
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
                     * 获取<p>排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置</p>
                     * @return SortType <p>排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置</p>
                     * @param _sortType <p>排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置</p>
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
                     * 获取<p>翻页offset. 不要与NextToken同时使用，优先使用NextToken</p>
                     * @return Offset <p>翻页offset. 不要与NextToken同时使用，优先使用NextToken</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>翻页offset. 不要与NextToken同时使用，优先使用NextToken</p>
                     * @param _offset <p>翻页offset. 不要与NextToken同时使用，优先使用NextToken</p>
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
                     * <p>空间 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>每页的最大数据条数。  取值范围：1~100。  默认值：10。</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>过滤条件，用户组名称</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>用户组的类型  Manual：手动创建，Synchronized：外部导入。</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>筛选的用户，该用户关联的用户组会返回IsSelected=1</p>
                     */
                    std::vector<std::string> m_filterUsers;
                    bool m_filterUsersHasBeenSet;

                    /**
                     * <p>排序的字段，目前只支持CreateTime，默认是CreateTime字段</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序类型：Desc 倒序 Asc  正序，需要您和SortField一起设置</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>翻页offset. 不要与NextToken同时使用，优先使用NextToken</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTGROUPSREQUEST_H_
