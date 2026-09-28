/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITCREDENTIALINPUT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITCREDENTIALINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * airflow git鉴权配置
                */
                class AirflowGitCredentialInput : public AbstractModel
                {
                public:
                    AirflowGitCredentialInput();
                    ~AirflowGitCredentialInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户名</p>
                     * @return Username <p>用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _username <p>用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>用户凭证</p>
                     * @return Token <p>用户凭证</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>用户凭证</p>
                     * @param _token <p>用户凭证</p>
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
                     * <p>用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>用户凭证</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITCREDENTIALINPUT_H_
