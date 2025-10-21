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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ResetPassword请求参数结构体
                */
                class ResetPasswordRequest : public AbstractModel
                {
                public:
                    ResetPasswordRequest();
                    ~ResetPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取重置的密码。若切换为免密实例时，可不配置该参数。
- 长度8-32位, 推荐使用12位以上的密码。
- 不能以"/"开头。
- 至少包含小写字母a- z、大写字母A - Z、数字0 - 9、特殊字符 ()~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * @return Password 重置的密码。若切换为免密实例时，可不配置该参数。
- 长度8-32位, 推荐使用12位以上的密码。
- 不能以"/"开头。
- 至少包含小写字母a- z、大写字母A - Z、数字0 - 9、特殊字符 ()~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置重置的密码。若切换为免密实例时，可不配置该参数。
- 长度8-32位, 推荐使用12位以上的密码。
- 不能以"/"开头。
- 至少包含小写字母a- z、大写字母A - Z、数字0 - 9、特殊字符 ()~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * @param _password 重置的密码。若切换为免密实例时，可不配置该参数。
- 长度8-32位, 推荐使用12位以上的密码。
- 不能以"/"开头。
- 至少包含小写字母a- z、大写字母A - Z、数字0 - 9、特殊字符 ()~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
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
                     * 获取是否切换免密实例。
- false：切换为非免密码实例。默认 false。
- true：切换为免密码实例。
                     * @return NoAuth 是否切换免密实例。
- false：切换为非免密码实例。默认 false。
- true：切换为免密码实例。
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置是否切换免密实例。
- false：切换为非免密码实例。默认 false。
- true：切换为免密码实例。
                     * @param _noAuth 是否切换免密实例。
- false：切换为非免密码实例。默认 false。
- true：切换为免密码实例。
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取是否加密密码。
- false：非加密密码。默认 false。
- true：加密密码。
                     * @return EncryptPassword 是否加密密码。
- false：非加密密码。默认 false。
- true：加密密码。
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置是否加密密码。
- false：非加密密码。默认 false。
- true：加密密码。
                     * @param _encryptPassword 是否加密密码。
- false：非加密密码。默认 false。
- true：加密密码。
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 重置的密码。若切换为免密实例时，可不配置该参数。
- 长度8-32位, 推荐使用12位以上的密码。
- 不能以"/"开头。
- 至少包含小写字母a- z、大写字母A - Z、数字0 - 9、特殊字符 ()~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否切换免密实例。
- false：切换为非免密码实例。默认 false。
- true：切换为免密码实例。
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 是否加密密码。
- false：非加密密码。默认 false。
- true：加密密码。
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESETPASSWORDREQUEST_H_
