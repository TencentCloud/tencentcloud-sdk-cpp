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

`LINUX_UNIX` 实例密码必须 8-30 位，推荐使用 12 位以上密码，不能包含空格，不能以“/”开头，至少包含以下字符中的三种不同字符，字符种类：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符： ()\`\~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 

`WINDOWS` 实例密码必须 12-30 位，不能包含空格，不能以“/”开头且不包括用户名，至少包含以下字符中的三种不同字符：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符：()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 
                     * @return Password 实例登录密码。具体按照操作系统的复杂度要求。 

`LINUX_UNIX` 实例密码必须 8-30 位，推荐使用 12 位以上密码，不能包含空格，不能以“/”开头，至少包含以下字符中的三种不同字符，字符种类：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符： ()\`\~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 

`WINDOWS` 实例密码必须 12-30 位，不能包含空格，不能以“/”开头且不包括用户名，至少包含以下字符中的三种不同字符：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符：()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例登录密码。具体按照操作系统的复杂度要求。 

`LINUX_UNIX` 实例密码必须 8-30 位，推荐使用 12 位以上密码，不能包含空格，不能以“/”开头，至少包含以下字符中的三种不同字符，字符种类：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符： ()\`\~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 

`WINDOWS` 实例密码必须 12-30 位，不能包含空格，不能以“/”开头且不包括用户名，至少包含以下字符中的三种不同字符：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符：()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 
                     * @param _password 实例登录密码。具体按照操作系统的复杂度要求。 

`LINUX_UNIX` 实例密码必须 8-30 位，推荐使用 12 位以上密码，不能包含空格，不能以“/”开头，至少包含以下字符中的三种不同字符，字符种类：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符： ()\`\~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 

`WINDOWS` 实例密码必须 12-30 位，不能包含空格，不能以“/”开头且不包括用户名，至少包含以下字符中的三种不同字符：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符：()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 
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
                     * 获取密钥ID列表，最多同时指定5个密钥。关联密钥后，就可以通过对应的私钥来访问实例。密钥与密码不能同时指定，同时WINDOWS操作系统不支持指定密钥。密钥ID列表可以通过[DescribeKeyPairs](https://cloud.tencent.com/document/product/1207/55540)接口获取。
                     * @return KeyIds 密钥ID列表，最多同时指定5个密钥。关联密钥后，就可以通过对应的私钥来访问实例。密钥与密码不能同时指定，同时WINDOWS操作系统不支持指定密钥。密钥ID列表可以通过[DescribeKeyPairs](https://cloud.tencent.com/document/product/1207/55540)接口获取。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥ID列表，最多同时指定5个密钥。关联密钥后，就可以通过对应的私钥来访问实例。密钥与密码不能同时指定，同时WINDOWS操作系统不支持指定密钥。密钥ID列表可以通过[DescribeKeyPairs](https://cloud.tencent.com/document/product/1207/55540)接口获取。
                     * @param _keyIds 密钥ID列表，最多同时指定5个密钥。关联密钥后，就可以通过对应的私钥来访问实例。密钥与密码不能同时指定，同时WINDOWS操作系统不支持指定密钥。密钥ID列表可以通过[DescribeKeyPairs](https://cloud.tencent.com/document/product/1207/55540)接口获取。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * <li>"YES"代表选择自动生成密码，这时不指定Password字段。</li>
<li>"NO"代表选择自定义密码，这时要指定Password字段。</li>
                     */
                    std::string m_autoGeneratePassword;
                    bool m_autoGeneratePasswordHasBeenSet;

                    /**
                     * 实例登录密码。具体按照操作系统的复杂度要求。 

`LINUX_UNIX` 实例密码必须 8-30 位，推荐使用 12 位以上密码，不能包含空格，不能以“/”开头，至少包含以下字符中的三种不同字符，字符种类：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符： ()\`\~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 

`WINDOWS` 实例密码必须 12-30 位，不能包含空格，不能以“/”开头且不包括用户名，至少包含以下字符中的三种不同字符：<br>
<li>小写字母：[a-z]</li>
<li>大写字母：[A-Z]</li>
<li>数字：0-9</li>
<li>特殊字符：()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/</li> 
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密钥ID列表，最多同时指定5个密钥。关联密钥后，就可以通过对应的私钥来访问实例。密钥与密码不能同时指定，同时WINDOWS操作系统不支持指定密钥。密钥ID列表可以通过[DescribeKeyPairs](https://cloud.tencent.com/document/product/1207/55540)接口获取。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINCONFIGURATION_H_
