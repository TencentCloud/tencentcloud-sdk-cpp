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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/Subject.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * RevokePrivileges请求参数结构体
                */
                class RevokePrivilegesRequest : public AbstractModel
                {
                public:
                    RevokePrivilegesRequest();
                    ~RevokePrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源数组，数据来源于ListPermissions接口返回的Resource中的ResourceType和ResourceUri
                     * @return Resources 资源数组，数据来源于ListPermissions接口返回的Resource中的ResourceType和ResourceUri
                     * 
                     */
                    std::vector<PrivilegeResource> GetResources() const;

                    /**
                     * 设置资源数组，数据来源于ListPermissions接口返回的Resource中的ResourceType和ResourceUri
                     * @param _resources 资源数组，数据来源于ListPermissions接口返回的Resource中的ResourceType和ResourceUri
                     * 
                     */
                    void SetResources(const std::vector<PrivilegeResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取授权回收主体数组，参数组装需要注意：
1.SubjectType 和SubjectValues的取值参考ListPermissions接口中返回SubjectDetails中的SubjectType和SubjectValue
2.批量回收时，Subjects数组长度需要与权限点Privileges长度一致，并且数据一一对应
                     * @return Subjects 授权回收主体数组，参数组装需要注意：
1.SubjectType 和SubjectValues的取值参考ListPermissions接口中返回SubjectDetails中的SubjectType和SubjectValue
2.批量回收时，Subjects数组长度需要与权限点Privileges长度一致，并且数据一一对应
                     * 
                     */
                    std::vector<Subject> GetSubjects() const;

                    /**
                     * 设置授权回收主体数组，参数组装需要注意：
1.SubjectType 和SubjectValues的取值参考ListPermissions接口中返回SubjectDetails中的SubjectType和SubjectValue
2.批量回收时，Subjects数组长度需要与权限点Privileges长度一致，并且数据一一对应
                     * @param _subjects 授权回收主体数组，参数组装需要注意：
1.SubjectType 和SubjectValues的取值参考ListPermissions接口中返回SubjectDetails中的SubjectType和SubjectValue
2.批量回收时，Subjects数组长度需要与权限点Privileges长度一致，并且数据一一对应
                     * 
                     */
                    void SetSubjects(const std::vector<Subject>& _subjects);

                    /**
                     * 判断参数 Subjects 是否已赋值
                     * @return Subjects 是否已赋值
                     * 
                     */
                    bool SubjectsHasBeenSet() const;

                    /**
                     * 获取权限点，Name来源于ListPermissions接口返回的PermissionDetails中的Name，例如：BROWSE 、GRANT_PRIVILEGES
                     * @return Privileges 权限点，Name来源于ListPermissions接口返回的PermissionDetails中的Name，例如：BROWSE 、GRANT_PRIVILEGES
                     * 
                     */
                    std::vector<PrivilegeInfo> GetPrivileges() const;

                    /**
                     * 设置权限点，Name来源于ListPermissions接口返回的PermissionDetails中的Name，例如：BROWSE 、GRANT_PRIVILEGES
                     * @param _privileges 权限点，Name来源于ListPermissions接口返回的PermissionDetails中的Name，例如：BROWSE 、GRANT_PRIVILEGES
                     * 
                     */
                    void SetPrivileges(const std::vector<PrivilegeInfo>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 资源数组，数据来源于ListPermissions接口返回的Resource中的ResourceType和ResourceUri
                     */
                    std::vector<PrivilegeResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 授权回收主体数组，参数组装需要注意：
1.SubjectType 和SubjectValues的取值参考ListPermissions接口中返回SubjectDetails中的SubjectType和SubjectValue
2.批量回收时，Subjects数组长度需要与权限点Privileges长度一致，并且数据一一对应
                     */
                    std::vector<Subject> m_subjects;
                    bool m_subjectsHasBeenSet;

                    /**
                     * 权限点，Name来源于ListPermissions接口返回的PermissionDetails中的Name，例如：BROWSE 、GRANT_PRIVILEGES
                     */
                    std::vector<PrivilegeInfo> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEPRIVILEGESREQUEST_H_
