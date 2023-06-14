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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_

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
                * ListAuthorizedApplicationsToUser请求参数结构体
                */
                class ListAuthorizedApplicationsToUserRequest : public AbstractModel
                {
                public:
                    ListAuthorizedApplicationsToUserRequest();
                    ~ListAuthorizedApplicationsToUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户 ID。
                     * @return UserId 用户 ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID。
                     * @param _userId 用户 ID。
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
                     * 获取查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 。传false表示不查询该范围，传true表示应用查询该范围。
                     * @return IncludeInheritedAuthorizations 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 。传false表示不查询该范围，传true表示应用查询该范围。
                     * 
                     */
                    bool GetIncludeInheritedAuthorizations() const;

                    /**
                     * 设置查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 。传false表示不查询该范围，传true表示应用查询该范围。
                     * @param _includeInheritedAuthorizations 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 。传false表示不查询该范围，传true表示应用查询该范围。
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
                     * 用户 ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 查询范围是否包括用户关联的用户组、组织机构的应用访问权限。默认为不查询 。传false表示不查询该范围，传true表示应用查询该范围。
                     */
                    bool m_includeInheritedAuthorizations;
                    bool m_includeInheritedAuthorizationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERREQUEST_H_
