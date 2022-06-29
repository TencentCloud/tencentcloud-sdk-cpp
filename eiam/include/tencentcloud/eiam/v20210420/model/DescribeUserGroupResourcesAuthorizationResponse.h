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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPRESOURCESAUTHORIZATIONRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPRESOURCESAUTHORIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AuthorizationResourceEntityInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeUserGroupResourcesAuthorization返回参数结构体
                */
                class DescribeUserGroupResourcesAuthorizationResponse : public AbstractModel
                {
                public:
                    DescribeUserGroupResourcesAuthorizationResponse();
                    ~DescribeUserGroupResourcesAuthorizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupId 用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupName 用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     */
                    bool UserGroupNameHasBeenSet() const;

                    /**
                     * 获取资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationUserGroupResourceList 资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuthorizationResourceEntityInfo> GetAuthorizationUserGroupResourceList() const;

                    /**
                     * 判断参数 AuthorizationUserGroupResourceList 是否已赋值
                     * @return AuthorizationUserGroupResourceList 是否已赋值
                     */
                    bool AuthorizationUserGroupResourceListHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 用户组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * 资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuthorizationResourceEntityInfo> m_authorizationUserGroupResourceList;
                    bool m_authorizationUserGroupResourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERGROUPRESOURCESAUTHORIZATIONRESPONSE_H_
