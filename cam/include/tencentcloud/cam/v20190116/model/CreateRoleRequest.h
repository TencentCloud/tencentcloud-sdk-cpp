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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateRole请求参数结构体
                */
                class CreateRoleRequest : public AbstractModel
                {
                public:
                    CreateRoleRequest();
                    ~CreateRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param RoleName 角色名称
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取策略文档
                     * @return PolicyDocument 策略文档
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置策略文档
                     * @param PolicyDocument 策略文档
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取角色描述
                     * @return Description 角色描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置角色描述
                     * @param Description 角色描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否允许登录
                     * @return ConsoleLogin 是否允许登录
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置是否允许登录
                     * @param ConsoleLogin 是否允许登录
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                private:

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 策略文档
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 角色描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否允许登录
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_
