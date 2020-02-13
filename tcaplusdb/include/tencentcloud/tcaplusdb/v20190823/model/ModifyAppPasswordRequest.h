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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyAppPassword请求参数结构体
                */
                class ModifyAppPasswordRequest : public AbstractModel
                {
                public:
                    ModifyAppPasswordRequest();
                    ~ModifyAppPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改密码的应用实例ID
                     * @return ApplicationId 需要修改密码的应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置需要修改密码的应用实例ID
                     * @param ApplicationId 需要修改密码的应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用旧密码
                     * @return OldPassword 应用旧密码
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置应用旧密码
                     * @param OldPassword 应用旧密码
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取应用旧密码预期失效时间
                     * @return OldPasswordExpireTime 应用旧密码预期失效时间
                     */
                    std::string GetOldPasswordExpireTime() const;

                    /**
                     * 设置应用旧密码预期失效时间
                     * @param OldPasswordExpireTime 应用旧密码预期失效时间
                     */
                    void SetOldPasswordExpireTime(const std::string& _oldPasswordExpireTime);

                    /**
                     * 判断参数 OldPasswordExpireTime 是否已赋值
                     * @return OldPasswordExpireTime 是否已赋值
                     */
                    bool OldPasswordExpireTimeHasBeenSet() const;

                    /**
                     * 获取应用新密码
                     * @return NewPassword 应用新密码
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置应用新密码
                     * @param NewPassword 应用新密码
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * @return Mode 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     */
                    std::string GetMode() const;

                    /**
                     * 设置更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     * @param Mode 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 需要修改密码的应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用旧密码
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * 应用旧密码预期失效时间
                     */
                    std::string m_oldPasswordExpireTime;
                    bool m_oldPasswordExpireTimeHasBeenSet;

                    /**
                     * 应用新密码
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * 更新模式： `1` 更新密码；`2` 更新旧密码失效时间，默认为`1` 模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPPASSWORDREQUEST_H_
