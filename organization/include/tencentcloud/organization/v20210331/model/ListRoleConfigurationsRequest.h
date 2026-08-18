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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSREQUEST_H_

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
                * ListRoleConfigurations请求参数结构体
                */
                class ListRoleConfigurationsRequest : public AbstractModel
                {
                public:
                    ListRoleConfigurationsRequest();
                    ~ListRoleConfigurationsRequest() = default;
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
                     * 获取<p>过滤文本。不区分大小写。目前，支持 RoleConfigurationName和Description. 示例：Filter = &quot;test&quot;，表示查询名称或描述里包含 test 的权限配置。</p>
                     * @return Filter <p>过滤文本。不区分大小写。目前，支持 RoleConfigurationName和Description. 示例：Filter = &quot;test&quot;，表示查询名称或描述里包含 test 的权限配置。</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤文本。不区分大小写。目前，支持 RoleConfigurationName和Description. 示例：Filter = &quot;test&quot;，表示查询名称或描述里包含 test 的权限配置。</p>
                     * @param _filter <p>过滤文本。不区分大小写。目前，支持 RoleConfigurationName和Description. 示例：Filter = &quot;test&quot;，表示查询名称或描述里包含 test 的权限配置。</p>
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
                     * 获取<p>检索成员账号是否配置过权限，如果配置过返回IsSelected: true, 否则返回false。</p>
                     * @return FilterTargets <p>检索成员账号是否配置过权限，如果配置过返回IsSelected: true, 否则返回false。</p>
                     * 
                     */
                    std::vector<int64_t> GetFilterTargets() const;

                    /**
                     * 设置<p>检索成员账号是否配置过权限，如果配置过返回IsSelected: true, 否则返回false。</p>
                     * @param _filterTargets <p>检索成员账号是否配置过权限，如果配置过返回IsSelected: true, 否则返回false。</p>
                     * 
                     */
                    void SetFilterTargets(const std::vector<int64_t>& _filterTargets);

                    /**
                     * 判断参数 FilterTargets 是否已赋值
                     * @return FilterTargets 是否已赋值
                     * 
                     */
                    bool FilterTargetsHasBeenSet() const;

                    /**
                     * 获取<p>授权的用户UserId或者用户组的GroupId，必须和入参数FilterTargets一起设置</p>
                     * @return PrincipalId <p>授权的用户UserId或者用户组的GroupId，必须和入参数FilterTargets一起设置</p>
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置<p>授权的用户UserId或者用户组的GroupId，必须和入参数FilterTargets一起设置</p>
                     * @param _principalId <p>授权的用户UserId或者用户组的GroupId，必须和入参数FilterTargets一起设置</p>
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

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
                     * <p>过滤文本。不区分大小写。目前，支持 RoleConfigurationName和Description. 示例：Filter = &quot;test&quot;，表示查询名称或描述里包含 test 的权限配置。</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>检索成员账号是否配置过权限，如果配置过返回IsSelected: true, 否则返回false。</p>
                     */
                    std::vector<int64_t> m_filterTargets;
                    bool m_filterTargetsHasBeenSet;

                    /**
                     * <p>授权的用户UserId或者用户组的GroupId，必须和入参数FilterTargets一起设置</p>
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONSREQUEST_H_
