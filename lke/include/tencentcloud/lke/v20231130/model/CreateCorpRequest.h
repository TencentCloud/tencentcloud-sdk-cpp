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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateCorp请求参数结构体
                */
                class CreateCorpRequest : public AbstractModel
                {
                public:
                    CreateCorpRequest();
                    ~CreateCorpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业全称
                     * @return FullName 企业全称
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置企业全称
                     * @param _fullName 企业全称
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取联系人名称
                     * @return ContactName 联系人名称
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置联系人名称
                     * @param _contactName 联系人名称
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取联系人邮箱
                     * @return Email 联系人邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置联系人邮箱
                     * @param _email 联系人邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取联系人手机号
                     * @return Telephone 联系人手机号
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系人手机号
                     * @param _telephone 联系人手机号
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                private:

                    /**
                     * 企业全称
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 联系人名称
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 联系人邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 联系人手机号
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATECORPREQUEST_H_
