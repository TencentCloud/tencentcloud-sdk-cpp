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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizationObject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateCodePermissions请求参数结构体
                */
                class CreateCodePermissionsRequest : public AbstractModel
                {
                public:
                    CreateCodePermissionsRequest();
                    ~CreateCodePermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取权限操作对象
                     * @return AuthorizePermissionObjects 权限操作对象
                     * 
                     */
                    std::vector<ExploreAuthorizationObject> GetAuthorizePermissionObjects() const;

                    /**
                     * 设置权限操作对象
                     * @param _authorizePermissionObjects 权限操作对象
                     * 
                     */
                    void SetAuthorizePermissionObjects(const std::vector<ExploreAuthorizationObject>& _authorizePermissionObjects);

                    /**
                     * 判断参数 AuthorizePermissionObjects 是否已赋值
                     * @return AuthorizePermissionObjects 是否已赋值
                     * 
                     */
                    bool AuthorizePermissionObjectsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 权限操作对象
                     */
                    std::vector<ExploreAuthorizationObject> m_authorizePermissionObjects;
                    bool m_authorizePermissionObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEPERMISSIONSREQUEST_H_
