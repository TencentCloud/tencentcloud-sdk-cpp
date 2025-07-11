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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_

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
                * ListTasks请求参数结构体
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
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
                     * 获取用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-****）， 当PrincipalType取值为User时，该值为用户 ID（u-****）。
                     * @return PrincipalId 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-****）， 当PrincipalType取值为User时，该值为用户 ID（u-****）。
                     * 
                     */
                    std::string GetPrincipalId() const;

                    /**
                     * 设置用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-****）， 当PrincipalType取值为User时，该值为用户 ID（u-****）。
                     * @param _principalId 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-****）， 当PrincipalType取值为User时，该值为用户 ID（u-****）。
                     * 
                     */
                    void SetPrincipalId(const std::string& _principalId);

                    /**
                     * 判断参数 PrincipalId 是否已赋值
                     * @return PrincipalId 是否已赋值
                     * 
                     */
                    bool PrincipalIdHasBeenSet() const;

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
                     * 获取CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * @return PrincipalType CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * 
                     */
                    std::string GetPrincipalType() const;

                    /**
                     * 设置CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * @param _principalType CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     * 
                     */
                    void SetPrincipalType(const std::string& _principalType);

                    /**
                     * 判断参数 PrincipalType 是否已赋值
                     * @return PrincipalType 是否已赋值
                     * 
                     */
                    bool PrincipalTypeHasBeenSet() const;

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
                     * 获取InProgress：任务执行中。 Success：任务执行成功。 Failed：任务执行失败。
                     * @return Status InProgress：任务执行中。 Success：任务执行成功。 Failed：任务执行失败。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置InProgress：任务执行中。 Success：任务执行成功。 Failed：任务执行失败。
                     * @param _status InProgress：任务执行中。 Success：任务执行成功。 Failed：任务执行失败。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务类型。
                     * @return TaskType 任务类型。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。
                     * @param _taskType 任务类型。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户同步 ID。取值： 当PrincipalType取值为Group时，该值为用户组 ID（g-****）， 当PrincipalType取值为User时，该值为用户 ID（u-****）。
                     */
                    std::string m_principalId;
                    bool m_principalIdHasBeenSet;

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
                     * CAM 用户同步的身份类型。取值： User：表示同步的身份是用户。 Group：表示同步的身份是用户组。
                     */
                    std::string m_principalType;
                    bool m_principalTypeHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的UIN。
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * 同步的集团账号目标账号的类型，ManagerUin管理账号;MemberUin成员账号
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 权限配置ID。
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * InProgress：任务执行中。 Success：任务执行成功。 Failed：任务执行失败。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTASKSREQUEST_H_
