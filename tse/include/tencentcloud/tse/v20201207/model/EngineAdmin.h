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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEADMIN_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEADMIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 引擎的初始管理账号，当前仅支持Apollo引擎
                */
                class EngineAdmin : public AbstractModel
                {
                public:
                    EngineAdmin();
                    ~EngineAdmin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控制台初始用户名
                     * @return Name 控制台初始用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置控制台初始用户名
                     * @param _name 控制台初始用户名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取控制台初始密码
                     * @return Password 控制台初始密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置控制台初始密码
                     * @param _password 控制台初始密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取引擎接口的管理员 Token
                     * @return Token 引擎接口的管理员 Token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置引擎接口的管理员 Token
                     * @param _token 引擎接口的管理员 Token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 控制台初始用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 控制台初始密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 引擎接口的管理员 Token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEADMIN_H_
