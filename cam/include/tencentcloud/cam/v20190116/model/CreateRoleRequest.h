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
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


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
                     * 获取角色名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * @return RoleName 角色名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * @param _roleName 角色名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * @return PolicyDocument 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * @param _policyDocument 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取角色描述
                     * @return Description 角色描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置角色描述
                     * @param _description 角色描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否允许登录 1 为允许 0 为不允许
                     * @return ConsoleLogin 是否允许登录 1 为允许 0 为不允许
                     * 
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置是否允许登录 1 为允许 0 为不允许
                     * @param _consoleLogin 是否允许登录 1 为允许 0 为不允许
                     * 
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取申请角色临时密钥的最长有效期限制(范围：0~43200)
                     * @return SessionDuration 申请角色临时密钥的最长有效期限制(范围：0~43200)
                     * 
                     */
                    uint64_t GetSessionDuration() const;

                    /**
                     * 设置申请角色临时密钥的最长有效期限制(范围：0~43200)
                     * @param _sessionDuration 申请角色临时密钥的最长有效期限制(范围：0~43200)
                     * 
                     */
                    void SetSessionDuration(const uint64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取角色绑定标签
                     * @return Tags 角色绑定标签
                     * 
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置角色绑定标签
                     * @param _tags 角色绑定标签
                     * 
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 角色名称。长度为1~128个字符，可包含英文字母、数字和+=,.@-_。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 角色描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否允许登录 1 为允许 0 为不允许
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * 申请角色临时密钥的最长有效期限制(范围：0~43200)
                     */
                    uint64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * 角色绑定标签
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_
