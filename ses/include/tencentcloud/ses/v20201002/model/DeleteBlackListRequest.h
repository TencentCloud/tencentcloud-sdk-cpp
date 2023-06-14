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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETEBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETEBLACKLISTREQUEST_H_

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
                * DeleteBlackList请求参数结构体
                */
                class DeleteBlackListRequest : public AbstractModel
                {
                public:
                    DeleteBlackListRequest();
                    ~DeleteBlackListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要清除的黑名单邮箱列表，数组长度至少为1
                     * @return EmailAddressList 需要清除的黑名单邮箱列表，数组长度至少为1
                     * 
                     */
                    std::vector<std::string> GetEmailAddressList() const;

                    /**
                     * 设置需要清除的黑名单邮箱列表，数组长度至少为1
                     * @param _emailAddressList 需要清除的黑名单邮箱列表，数组长度至少为1
                     * 
                     */
                    void SetEmailAddressList(const std::vector<std::string>& _emailAddressList);

                    /**
                     * 判断参数 EmailAddressList 是否已赋值
                     * @return EmailAddressList 是否已赋值
                     * 
                     */
                    bool EmailAddressListHasBeenSet() const;

                private:

                    /**
                     * 需要清除的黑名单邮箱列表，数组长度至少为1
                     */
                    std::vector<std::string> m_emailAddressList;
                    bool m_emailAddressListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETEBLACKLISTREQUEST_H_
