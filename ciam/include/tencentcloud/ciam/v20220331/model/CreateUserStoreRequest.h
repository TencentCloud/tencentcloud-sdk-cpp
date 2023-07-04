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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERSTOREREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERSTOREREQUEST_H_

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
                * CreateUserStore请求参数结构体
                */
                class CreateUserStoreRequest : public AbstractModel
                {
                public:
                    CreateUserStoreRequest();
                    ~CreateUserStoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户池名字
                     * @return UserPoolName 用户池名字
                     * 
                     */
                    std::string GetUserPoolName() const;

                    /**
                     * 设置用户池名字
                     * @param _userPoolName 用户池名字
                     * 
                     */
                    void SetUserPoolName(const std::string& _userPoolName);

                    /**
                     * 判断参数 UserPoolName 是否已赋值
                     * @return UserPoolName 是否已赋值
                     * 
                     */
                    bool UserPoolNameHasBeenSet() const;

                    /**
                     * 获取用户池描述
                     * @return UserPoolDesc 用户池描述
                     * 
                     */
                    std::string GetUserPoolDesc() const;

                    /**
                     * 设置用户池描述
                     * @param _userPoolDesc 用户池描述
                     * 
                     */
                    void SetUserPoolDesc(const std::string& _userPoolDesc);

                    /**
                     * 判断参数 UserPoolDesc 是否已赋值
                     * @return UserPoolDesc 是否已赋值
                     * 
                     */
                    bool UserPoolDescHasBeenSet() const;

                    /**
                     * 获取用户池logo
                     * @return UserPoolLogo 用户池logo
                     * 
                     */
                    std::string GetUserPoolLogo() const;

                    /**
                     * 设置用户池logo
                     * @param _userPoolLogo 用户池logo
                     * 
                     */
                    void SetUserPoolLogo(const std::string& _userPoolLogo);

                    /**
                     * 判断参数 UserPoolLogo 是否已赋值
                     * @return UserPoolLogo 是否已赋值
                     * 
                     */
                    bool UserPoolLogoHasBeenSet() const;

                private:

                    /**
                     * 用户池名字
                     */
                    std::string m_userPoolName;
                    bool m_userPoolNameHasBeenSet;

                    /**
                     * 用户池描述
                     */
                    std::string m_userPoolDesc;
                    bool m_userPoolDescHasBeenSet;

                    /**
                     * 用户池logo
                     */
                    std::string m_userPoolLogo;
                    bool m_userPoolLogoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEUSERSTOREREQUEST_H_
