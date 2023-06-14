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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILADDRESSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateEmailAddress请求参数结构体
                */
                class CreateEmailAddressRequest : public AbstractModel
                {
                public:
                    CreateEmailAddressRequest();
                    ~CreateEmailAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取您的发信地址（发信地址总数上限为10个）
                     * @return EmailAddress 您的发信地址（发信地址总数上限为10个）
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置您的发信地址（发信地址总数上限为10个）
                     * @param _emailAddress 您的发信地址（发信地址总数上限为10个）
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取发件人别名
                     * @return EmailSenderName 发件人别名
                     * 
                     */
                    std::string GetEmailSenderName() const;

                    /**
                     * 设置发件人别名
                     * @param _emailSenderName 发件人别名
                     * 
                     */
                    void SetEmailSenderName(const std::string& _emailSenderName);

                    /**
                     * 判断参数 EmailSenderName 是否已赋值
                     * @return EmailSenderName 是否已赋值
                     * 
                     */
                    bool EmailSenderNameHasBeenSet() const;

                private:

                    /**
                     * 您的发信地址（发信地址总数上限为10个）
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 发件人别名
                     */
                    std::string m_emailSenderName;
                    bool m_emailSenderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILADDRESSREQUEST_H_
