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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 实例密码登录配置信息。
                */
                class LoginConfiguration : public AbstractModel
                {
                public:
                    LoginConfiguration();
                    ~LoginConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     * @return AutoGeneratePassword <li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     * 
                     */
                    std::string GetAutoGeneratePassword() const;

                    /**
                     * 设置<li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     * @param _autoGeneratePassword <li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     * 
                     */
                    void SetAutoGeneratePassword(const std::string& _autoGeneratePassword);

                    /**
                     * 判断参数 AutoGeneratePassword 是否已赋值
                     * @return AutoGeneratePassword 是否已赋值
                     * 
                     */
                    bool AutoGeneratePasswordHasBeenSet() const;

                    /**
                     * 获取实例登录密码。具体按照操作系统的复杂度要求。 
WINDOWS 实例密码必须 12-30 位，不能以“/”开头且不包括用户名, 至少包含以下字符中的三种不同字符 
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字： 0-9</li>
<li>特殊字符：()`~!@#$%^&*-+=_|{}[]:;' <>,.?/</li>
                     * @return Password 实例登录密码。具体按照操作系统的复杂度要求。 
WINDOWS 实例密码必须 12-30 位，不能以“/”开头且不包括用户名, 至少包含以下字符中的三种不同字符 
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字： 0-9</li>
<li>特殊字符：()`~!@#$%^&*-+=_|{}[]:;' <>,.?/</li>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例登录密码。具体按照操作系统的复杂度要求。 
WINDOWS 实例密码必须 12-30 位，不能以“/”开头且不包括用户名, 至少包含以下字符中的三种不同字符 
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字： 0-9</li>
<li>特殊字符：()`~!@#$%^&*-+=_|{}[]:;' <>,.?/</li>
                     * @param _password 实例登录密码。具体按照操作系统的复杂度要求。 
WINDOWS 实例密码必须 12-30 位，不能以“/”开头且不包括用户名, 至少包含以下字符中的三种不同字符 
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字： 0-9</li>
<li>特殊字符：()`~!@#$%^&*-+=_|{}[]:;' <>,.?/</li>
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
                     * <li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     */
                    std::string m_autoGeneratePassword;
                    bool m_autoGeneratePasswordHasBeenSet;

                    /**
                     * 实例登录密码。具体按照操作系统的复杂度要求。 
WINDOWS 实例密码必须 12-30 位，不能以“/”开头且不包括用户名, 至少包含以下字符中的三种不同字符 
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字： 0-9</li>
<li>特殊字符：()`~!@#$%^&*-+=_|{}[]:;' <>,.?/</li>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_
