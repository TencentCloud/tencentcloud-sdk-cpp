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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEUSERPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEUSERPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateUserPersonal请求参数结构体
                */
                class CreateUserPersonalRequest : public AbstractModel
                {
                public:
                    CreateUserPersonalRequest();
                    ~CreateUserPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户密码，密码必须为8到16位
                     * @return Password 用户密码，密码必须为8到16位
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户密码，密码必须为8到16位
                     * @param _password 用户密码，密码必须为8到16位
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 用户密码，密码必须为8到16位
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEUSERPERSONALREQUEST_H_
