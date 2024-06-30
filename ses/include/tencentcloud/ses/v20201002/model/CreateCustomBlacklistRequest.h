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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_

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
                * CreateCustomBlacklist请求参数结构体
                */
                class CreateCustomBlacklistRequest : public AbstractModel
                {
                public:
                    CreateCustomBlacklistRequest();
                    ~CreateCustomBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取添加到黑名单的邮件地址
                     * @return Emails 添加到黑名单的邮件地址
                     * 
                     */
                    std::vector<std::string> GetEmails() const;

                    /**
                     * 设置添加到黑名单的邮件地址
                     * @param _emails 添加到黑名单的邮件地址
                     * 
                     */
                    void SetEmails(const std::vector<std::string>& _emails);

                    /**
                     * 判断参数 Emails 是否已赋值
                     * @return Emails 是否已赋值
                     * 
                     */
                    bool EmailsHasBeenSet() const;

                    /**
                     * 获取过期日期
                     * @return ExpireDate 过期日期
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置过期日期
                     * @param _expireDate 过期日期
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                private:

                    /**
                     * 添加到黑名单的邮件地址
                     */
                    std::vector<std::string> m_emails;
                    bool m_emailsHasBeenSet;

                    /**
                     * 过期日期
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_
