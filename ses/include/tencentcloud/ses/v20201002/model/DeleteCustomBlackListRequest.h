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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETECUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETECUSTOMBLACKLISTREQUEST_H_

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
                * DeleteCustomBlackList请求参数结构体
                */
                class DeleteCustomBlackListRequest : public AbstractModel
                {
                public:
                    DeleteCustomBlackListRequest();
                    ~DeleteCustomBlackListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的邮箱地址
                     * @return Emails 需要删除的邮箱地址
                     * 
                     */
                    std::vector<std::string> GetEmails() const;

                    /**
                     * 设置需要删除的邮箱地址
                     * @param _emails 需要删除的邮箱地址
                     * 
                     */
                    void SetEmails(const std::vector<std::string>& _emails);

                    /**
                     * 判断参数 Emails 是否已赋值
                     * @return Emails 是否已赋值
                     * 
                     */
                    bool EmailsHasBeenSet() const;

                private:

                    /**
                     * 需要删除的邮箱地址
                     */
                    std::vector<std::string> m_emails;
                    bool m_emailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETECUSTOMBLACKLISTREQUEST_H_
