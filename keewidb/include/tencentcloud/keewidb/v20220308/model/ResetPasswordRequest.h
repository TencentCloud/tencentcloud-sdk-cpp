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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_RESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_RESETPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
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
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取设置新密码。<ul><li>当参数<b>NoAuth</b>设置为<b>true</b>，切换为免密实例时，可不设置该参数。</li><li>密码复杂度要求：<ul><li>长度8 - 30位, 推荐使用12位以上的密码。</li><li>不能以"/"开头。</li>
<li>至少包含以下两项：<ul><li>小写字母a - z</li><li>大写字母A - Z</li><li>数字0 - 9</li><li>()~!@#$%^&*-+=_|{}[]:;<>,.?/</li></ul></li></ul></li></ul>
                     * @return Password 设置新密码。<ul><li>当参数<b>NoAuth</b>设置为<b>true</b>，切换为免密实例时，可不设置该参数。</li><li>密码复杂度要求：<ul><li>长度8 - 30位, 推荐使用12位以上的密码。</li><li>不能以"/"开头。</li>
<li>至少包含以下两项：<ul><li>小写字母a - z</li><li>大写字母A - Z</li><li>数字0 - 9</li><li>()~!@#$%^&*-+=_|{}[]:;<>,.?/</li></ul></li></ul></li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设置新密码。<ul><li>当参数<b>NoAuth</b>设置为<b>true</b>，切换为免密实例时，可不设置该参数。</li><li>密码复杂度要求：<ul><li>长度8 - 30位, 推荐使用12位以上的密码。</li><li>不能以"/"开头。</li>
<li>至少包含以下两项：<ul><li>小写字母a - z</li><li>大写字母A - Z</li><li>数字0 - 9</li><li>()~!@#$%^&*-+=_|{}[]:;<>,.?/</li></ul></li></ul></li></ul>
                     * @param _password 设置新密码。<ul><li>当参数<b>NoAuth</b>设置为<b>true</b>，切换为免密实例时，可不设置该参数。</li><li>密码复杂度要求：<ul><li>长度8 - 30位, 推荐使用12位以上的密码。</li><li>不能以"/"开头。</li>
<li>至少包含以下两项：<ul><li>小写字母a - z</li><li>大写字母A - Z</li><li>数字0 - 9</li><li>()~!@#$%^&*-+=_|{}[]:;<>,.?/</li></ul></li></ul></li></ul>
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
                     * 获取标识实例是否切换免密认证。<ul><li>false：由免密码认证方式切换为密码认证实例。默认为false。</li><li>true：由密码认证方式切换为免密码认证的方式。</li></ul>
                     * @return NoAuth 标识实例是否切换免密认证。<ul><li>false：由免密码认证方式切换为密码认证实例。默认为false。</li><li>true：由密码认证方式切换为免密码认证的方式。</li></ul>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置标识实例是否切换免密认证。<ul><li>false：由免密码认证方式切换为密码认证实例。默认为false。</li><li>true：由密码认证方式切换为免密码认证的方式。</li></ul>
                     * @param _noAuth 标识实例是否切换免密认证。<ul><li>false：由免密码认证方式切换为密码认证实例。默认为false。</li><li>true：由密码认证方式切换为免密码认证的方式。</li></ul>
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置新密码。<ul><li>当参数<b>NoAuth</b>设置为<b>true</b>，切换为免密实例时，可不设置该参数。</li><li>密码复杂度要求：<ul><li>长度8 - 30位, 推荐使用12位以上的密码。</li><li>不能以"/"开头。</li>
<li>至少包含以下两项：<ul><li>小写字母a - z</li><li>大写字母A - Z</li><li>数字0 - 9</li><li>()~!@#$%^&*-+=_|{}[]:;<>,.?/</li></ul></li></ul></li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 标识实例是否切换免密认证。<ul><li>false：由免密码认证方式切换为密码认证实例。默认为false。</li><li>true：由密码认证方式切换为免密码认证的方式。</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_RESETPASSWORDREQUEST_H_
