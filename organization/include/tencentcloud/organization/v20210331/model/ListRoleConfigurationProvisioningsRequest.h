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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONPROVISIONINGSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONPROVISIONINGSREQUEST_H_

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
                * ListRoleConfigurationProvisionings请求参数结构体
                */
                class ListRoleConfigurationProvisioningsRequest : public AbstractModel
                {
                public:
                    ListRoleConfigurationProvisioningsRequest();
                    ~ListRoleConfigurationProvisioningsRequest() = default;
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
                     * 获取权限配置ID。
                     * @return RoleConfigurationId 权限配置ID。
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置权限配置ID。
                     * @param _roleConfigurationId 权限配置ID。
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

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
                     * 获取同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @return TargetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * @param _targetType 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取同步的集团账号目标账号的UIN。
                     * @return TargetUin 同步的集团账号目标账号的UIN。
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置同步的集团账号目标账号的UIN。
                     * @param _targetUin 同步的集团账号目标账号的UIN。
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * @return DeploymentStatus Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * 
                     */
                    std::string GetDeploymentStatus() const;

                    /**
                     * 设置Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * @param _deploymentStatus Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     * 
                     */
                    void SetDeploymentStatus(const std::string& _deploymentStatus);

                    /**
                     * 判断参数 DeploymentStatus 是否已赋值
                     * @return DeploymentStatus 是否已赋值
                     * 
                     */
                    bool DeploymentStatusHasBeenSet() const;

                    /**
                     * 获取支持配置名称搜索。
                     * @return Filter 支持配置名称搜索。
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置支持配置名称搜索。
                     * @param _filter 支持配置名称搜索。
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 权限配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * 每页的最大数据条数。  取值范围：1~100。  默认值：10。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 查询返回结果下一页的令牌。首次调用 API 不需要NextToken。  当您首次调用 API 时，如果返回数据总条数超过MaxResults限制，数据会被截断，只返回MaxResults条数据，同时，返回参数IsTruncated为true，返回一个NextToken。您可以使用上一次返回的NextToken继续调用 API，其他请求参数保持不变，查询被截断的数据。您可以按此方法多次查询，直到IsTruncated为false，表示全部数据查询完毕。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的UIN。
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * Deployed: 部署成功 DeployedRequired：需要重新部署 DeployFailed：部署失败
                     */
                    std::string m_deploymentStatus;
                    bool m_deploymentStatusHasBeenSet;

                    /**
                     * 支持配置名称搜索。
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTROLECONFIGURATIONPROVISIONINGSREQUEST_H_
