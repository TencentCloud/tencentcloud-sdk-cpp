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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeUserResourcesAuthorization请求参数结构体
                */
                class DescribeUserResourcesAuthorizationRequest : public AbstractModel
                {
                public:
                    DescribeUserResourcesAuthorizationRequest();
                    ~DescribeUserResourcesAuthorizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID。
                     * @return ApplicationId 应用ID。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。
                     * @param _applicationId 应用ID。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取用户ID。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * @return UserId 用户ID。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * @param _userId 用户ID。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户名。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * @return UserName 用户名。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * @param _userName 用户名。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 ，传false表示不查询该范围，传true查询该范围。
                     * @return IncludeInheritedAuthorizations 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 ，传false表示不查询该范围，传true查询该范围。
                     * 
                     */
                    bool GetIncludeInheritedAuthorizations() const;

                    /**
                     * 设置查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 ，传false表示不查询该范围，传true查询该范围。
                     * @param _includeInheritedAuthorizations 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 ，传false表示不查询该范围，传true查询该范围。
                     * 
                     */
                    void SetIncludeInheritedAuthorizations(const bool& _includeInheritedAuthorizations);

                    /**
                     * 判断参数 IncludeInheritedAuthorizations 是否已赋值
                     * @return IncludeInheritedAuthorizations 是否已赋值
                     * 
                     */
                    bool IncludeInheritedAuthorizationsHasBeenSet() const;

                private:

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 用户ID。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名。UserName 和 UserId 需至少一个不为空；都不为空时优先使用 UserName。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 ，传false表示不查询该范围，传true查询该范围。
                     */
                    bool m_includeInheritedAuthorizations;
                    bool m_includeInheritedAuthorizationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERRESOURCESAUTHORIZATIONREQUEST_H_
