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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RECENTLOGINITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RECENTLOGINITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 异常登陆历史记录
                */
                class RecentLoginItem : public AbstractModel
                {
                public:
                    RecentLoginItem();
                    ~RecentLoginItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>登录时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @return LoginTime <p>登录时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置<p>登录时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @param _loginTime <p>登录时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取<p>登录方式</p><p>枚举值：</p><ul><li>0： 无效用户</li><li>1： 密码错误</li><li>2： 密码登录</li><li>3： 密钥登录</li><li>4： PAM 认证失败（sshd）</li><li>5： PAM 认证失败（tty）</li><li>6： 键盘交互登录</li><li>7： 键盘交互认证失败</li><li>8： PAM 认证失败</li></ul>
                     * @return LoginType <p>登录方式</p><p>枚举值：</p><ul><li>0： 无效用户</li><li>1： 密码错误</li><li>2： 密码登录</li><li>3： 密钥登录</li><li>4： PAM 认证失败（sshd）</li><li>5： PAM 认证失败（tty）</li><li>6： 键盘交互登录</li><li>7： 键盘交互认证失败</li><li>8： PAM 认证失败</li></ul>
                     * 
                     */
                    int64_t GetLoginType() const;

                    /**
                     * 设置<p>登录方式</p><p>枚举值：</p><ul><li>0： 无效用户</li><li>1： 密码错误</li><li>2： 密码登录</li><li>3： 密钥登录</li><li>4： PAM 认证失败（sshd）</li><li>5： PAM 认证失败（tty）</li><li>6： 键盘交互登录</li><li>7： 键盘交互认证失败</li><li>8： PAM 认证失败</li></ul>
                     * @param _loginType <p>登录方式</p><p>枚举值：</p><ul><li>0： 无效用户</li><li>1： 密码错误</li><li>2： 密码登录</li><li>3： 密钥登录</li><li>4： PAM 认证失败（sshd）</li><li>5： PAM 认证失败（tty）</li><li>6： 键盘交互登录</li><li>7： 键盘交互认证失败</li><li>8： PAM 认证失败</li></ul>
                     * 
                     */
                    void SetLoginType(const int64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                    /**
                     * 获取<p>登录方式描述</p>
                     * @return LoginTypeDesc <p>登录方式描述</p>
                     * 
                     */
                    std::string GetLoginTypeDesc() const;

                    /**
                     * 设置<p>登录方式描述</p>
                     * @param _loginTypeDesc <p>登录方式描述</p>
                     * 
                     */
                    void SetLoginTypeDesc(const std::string& _loginTypeDesc);

                    /**
                     * 判断参数 LoginTypeDesc 是否已赋值
                     * @return LoginTypeDesc 是否已赋值
                     * 
                     */
                    bool LoginTypeDescHasBeenSet() const;

                private:

                    /**
                     * <p>登录时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * <p>登录方式</p><p>枚举值：</p><ul><li>0： 无效用户</li><li>1： 密码错误</li><li>2： 密码登录</li><li>3： 密钥登录</li><li>4： PAM 认证失败（sshd）</li><li>5： PAM 认证失败（tty）</li><li>6： 键盘交互登录</li><li>7： 键盘交互认证失败</li><li>8： PAM 认证失败</li></ul>
                     */
                    int64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * <p>登录方式描述</p>
                     */
                    std::string m_loginTypeDesc;
                    bool m_loginTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RECENTLOGINITEM_H_
