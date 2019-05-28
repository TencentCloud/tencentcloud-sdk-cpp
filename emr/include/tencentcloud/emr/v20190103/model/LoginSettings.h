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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_

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
                * 登录设置
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Password
                     * @return Password Password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password
                     * @param Password Password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Public Key
                     * @return PublicKeyId Public Key
                     */
                    std::string GetPublicKeyId() const;

                    /**
                     * 设置Public Key
                     * @param PublicKeyId Public Key
                     */
                    void SetPublicKeyId(const std::string& _publicKeyId);

                    /**
                     * 判断参数 PublicKeyId 是否已赋值
                     * @return PublicKeyId 是否已赋值
                     */
                    bool PublicKeyIdHasBeenSet() const;

                private:

                    /**
                     * Password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Public Key
                     */
                    std::string m_publicKeyId;
                    bool m_publicKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOGINSETTINGS_H_
