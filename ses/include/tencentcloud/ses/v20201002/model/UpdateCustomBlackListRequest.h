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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_

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
                * UpdateCustomBlackList请求参数结构体
                */
                class UpdateCustomBlackListRequest : public AbstractModel
                {
                public:
                    UpdateCustomBlackListRequest();
                    ~UpdateCustomBlackListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要更改的黑名单id
                     * @return Id 需要更改的黑名单id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置需要更改的黑名单id
                     * @param _id 需要更改的黑名单id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取修改后的邮件地址
                     * @return Email 修改后的邮件地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置修改后的邮件地址
                     * @param _email 修改后的邮件地址
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
                     * 获取过期时间，为空则表示永久有效
                     * @return ExpireDate 过期时间，为空则表示永久有效
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置过期时间，为空则表示永久有效
                     * @param _expireDate 过期时间，为空则表示永久有效
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
                     * 需要更改的黑名单id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后的邮件地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 过期时间，为空则表示永久有效
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_
