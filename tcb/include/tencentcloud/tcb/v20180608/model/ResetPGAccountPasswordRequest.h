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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_RESETPGACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_RESETPGACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ResetPGAccountPassword请求参数结构体
                */
                class ResetPGAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetPGAccountPasswordRequest();
                    ~ResetPGAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>要设置的密码</p><p>入参限制：长度8 ~ 32位，不能以&quot; / &quot;开头; 必须包含以下四项，字符种类:  小写字母： [a ~ z] 大写字母：[A ～ Z] 数字：0 - 9 特殊字符：()~!@#$%^&amp;*-+=_|{}[]:&lt;&gt;,.?/` 示例值：A8b!C2d#E4f&amp;</p>
                     * @return Password <p>要设置的密码</p><p>入参限制：长度8 ~ 32位，不能以&quot; / &quot;开头; 必须包含以下四项，字符种类:  小写字母： [a ~ z] 大写字母：[A ～ Z] 数字：0 - 9 特殊字符：()~!@#$%^&amp;*-+=_|{}[]:&lt;&gt;,.?/` 示例值：A8b!C2d#E4f&amp;</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>要设置的密码</p><p>入参限制：长度8 ~ 32位，不能以&quot; / &quot;开头; 必须包含以下四项，字符种类:  小写字母： [a ~ z] 大写字母：[A ～ Z] 数字：0 - 9 特殊字符：()~!@#$%^&amp;*-+=_|{}[]:&lt;&gt;,.?/` 示例值：A8b!C2d#E4f&amp;</p>
                     * @param _password <p>要设置的密码</p><p>入参限制：长度8 ~ 32位，不能以&quot; / &quot;开头; 必须包含以下四项，字符种类:  小写字母： [a ~ z] 大写字母：[A ～ Z] 数字：0 - 9 特殊字符：()~!@#$%^&amp;*-+=_|{}[]:&lt;&gt;,.?/` 示例值：A8b!C2d#E4f&amp;</p>
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
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>要设置的密码</p><p>入参限制：长度8 ~ 32位，不能以&quot; / &quot;开头; 必须包含以下四项，字符种类:  小写字母： [a ~ z] 大写字母：[A ～ Z] 数字：0 - 9 特殊字符：()~!@#$%^&amp;*-+=_|{}[]:&lt;&gt;,.?/` 示例值：A8b!C2d#E4f&amp;</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_RESETPGACCOUNTPASSWORDREQUEST_H_
