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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 描述了实例登录相关配置与信息。
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例登录密码。不同操作系统类型密码复杂度限制不一样，具体如下：
- Linux实例密码必须8到30位，至少包括四项（小写字母、大写字母、数字和特殊符号）中的两项。
- Windows实例密码必须12到30位，至少包括包括四项（小写字母、大写字母、数字和特殊符号）中的三项。
- 若不指定该参数，则由系统随机生成密码，并通过站内信方式通知到用户。
特殊符号的取值范围： [( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]
                     * @return Password 实例登录密码。不同操作系统类型密码复杂度限制不一样，具体如下：
- Linux实例密码必须8到30位，至少包括四项（小写字母、大写字母、数字和特殊符号）中的两项。
- Windows实例密码必须12到30位，至少包括包括四项（小写字母、大写字母、数字和特殊符号）中的三项。
- 若不指定该参数，则由系统随机生成密码，并通过站内信方式通知到用户。
特殊符号的取值范围： [( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例登录密码。不同操作系统类型密码复杂度限制不一样，具体如下：
- Linux实例密码必须8到30位，至少包括四项（小写字母、大写字母、数字和特殊符号）中的两项。
- Windows实例密码必须12到30位，至少包括包括四项（小写字母、大写字母、数字和特殊符号）中的三项。
- 若不指定该参数，则由系统随机生成密码，并通过站内信方式通知到用户。
特殊符号的取值范围： [( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]
                     * @param _password 实例登录密码。不同操作系统类型密码复杂度限制不一样，具体如下：
- Linux实例密码必须8到30位，至少包括四项（小写字母、大写字母、数字和特殊符号）中的两项。
- Windows实例密码必须12到30位，至少包括包括四项（小写字母、大写字母、数字和特殊符号）中的三项。
- 若不指定该参数，则由系统随机生成密码，并通过站内信方式通知到用户。
特殊符号的取值范围： [( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]
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
                     * 获取密钥ID列表。关联密钥后，就可以通过对应的私钥来访问实例；KeyId可通过接口[DescribeKeyPairs](https://cloud.tencent.com/document/api/213/15699)获取，密钥与密码不能同时指定，同时Windows操作系统不支持指定密钥。当前仅支持购买的时候指定一个密钥。
                     * @return KeyIds 密钥ID列表。关联密钥后，就可以通过对应的私钥来访问实例；KeyId可通过接口[DescribeKeyPairs](https://cloud.tencent.com/document/api/213/15699)获取，密钥与密码不能同时指定，同时Windows操作系统不支持指定密钥。当前仅支持购买的时候指定一个密钥。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥ID列表。关联密钥后，就可以通过对应的私钥来访问实例；KeyId可通过接口[DescribeKeyPairs](https://cloud.tencent.com/document/api/213/15699)获取，密钥与密码不能同时指定，同时Windows操作系统不支持指定密钥。当前仅支持购买的时候指定一个密钥。
                     * @param _keyIds 密钥ID列表。关联密钥后，就可以通过对应的私钥来访问实例；KeyId可通过接口[DescribeKeyPairs](https://cloud.tencent.com/document/api/213/15699)获取，密钥与密码不能同时指定，同时Windows操作系统不支持指定密钥。当前仅支持购买的时候指定一个密钥。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
<li>TRUE：表示保持镜像的登录设置</li>
<li>FALSE：表示不保持镜像的登录设置</li>默认取值：FALSE。
                     * @return KeepImageLogin 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
<li>TRUE：表示保持镜像的登录设置</li>
<li>FALSE：表示不保持镜像的登录设置</li>默认取值：FALSE。
                     * 
                     */
                    bool GetKeepImageLogin() const;

                    /**
                     * 设置保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
<li>TRUE：表示保持镜像的登录设置</li>
<li>FALSE：表示不保持镜像的登录设置</li>默认取值：FALSE。
                     * @param _keepImageLogin 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
<li>TRUE：表示保持镜像的登录设置</li>
<li>FALSE：表示不保持镜像的登录设置</li>默认取值：FALSE。
                     * 
                     */
                    void SetKeepImageLogin(const bool& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * 实例登录密码。不同操作系统类型密码复杂度限制不一样，具体如下：
- Linux实例密码必须8到30位，至少包括四项（小写字母、大写字母、数字和特殊符号）中的两项。
- Windows实例密码必须12到30位，至少包括包括四项（小写字母、大写字母、数字和特殊符号）中的三项。
- 若不指定该参数，则由系统随机生成密码，并通过站内信方式通知到用户。
特殊符号的取值范围： [( ) ` ~ ! @ # $ % ^ & * - + = | { } [ ] : ; ' , . ? / ]
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密钥ID列表。关联密钥后，就可以通过对应的私钥来访问实例；KeyId可通过接口[DescribeKeyPairs](https://cloud.tencent.com/document/api/213/15699)获取，密钥与密码不能同时指定，同时Windows操作系统不支持指定密钥。当前仅支持购买的时候指定一个密钥。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
<li>TRUE：表示保持镜像的登录设置</li>
<li>FALSE：表示不保持镜像的登录设置</li>默认取值：FALSE。
                     */
                    bool m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LOGINSETTINGS_H_
