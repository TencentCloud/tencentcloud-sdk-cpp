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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERBYIDREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERBYIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * DescribeUserById请求参数结构体
                */
                class DescribeUserByIdRequest : public AbstractModel
                {
                public:
                    DescribeUserByIdRequest();
                    ~DescribeUserByIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取返回信息是否为原文

<li> **false** </li>	默认，返回信息为脱敏信息
<li> **true** </li>	返回用户信息原文
                     * @return Original 返回信息是否为原文

<li> **false** </li>	默认，返回信息为脱敏信息
<li> **true** </li>	返回用户信息原文
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置返回信息是否为原文

<li> **false** </li>	默认，返回信息为脱敏信息
<li> **true** </li>	返回用户信息原文
                     * @param _original 返回信息是否为原文

<li> **false** </li>	默认，返回信息为脱敏信息
<li> **true** </li>	返回用户信息原文
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 返回信息是否为原文

<li> **false** </li>	默认，返回信息为脱敏信息
<li> **true** </li>	返回用户信息原文
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_DESCRIBEUSERBYIDREQUEST_H_
