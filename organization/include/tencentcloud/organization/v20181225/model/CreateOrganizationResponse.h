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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * CreateOrganization返回参数结构体
                */
                class CreateOrganizationResponse : public AbstractModel
                {
                public:
                    CreateOrganizationResponse();
                    ~CreateOrganizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业组织ID
                     * @return OrgId 企业组织ID
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取创建者昵称
                     * @return Nickname 创建者昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取创建者邮箱
                     * @return Mail 创建者邮箱
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取组织类型
                     * @return OrgType 组织类型
                     * 
                     */
                    uint64_t GetOrgType() const;

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     * 
                     */
                    bool OrgTypeHasBeenSet() const;

                private:

                    /**
                     * 企业组织ID
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 创建者昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 创建者邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 组织类型
                     */
                    uint64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_CREATEORGANIZATIONRESPONSE_H_
