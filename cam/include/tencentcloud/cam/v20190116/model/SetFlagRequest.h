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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SETFLAGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SETFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/LoginActionFlag.h>
#include <tencentcloud/cam/v20190116/model/OffsiteFlag.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * SetFlag请求参数结构体
                */
                class SetFlagRequest : public AbstractModel
                {
                public:
                    SetFlagRequest();
                    ~SetFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置用户的uin
                     * @return OpUin 设置用户的uin
                     */
                    uint64_t GetOpUin() const;

                    /**
                     * 设置设置用户的uin
                     * @param OpUin 设置用户的uin
                     */
                    void SetOpUin(const uint64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取登录设置
                     * @return LoginFlag 登录设置
                     */
                    LoginActionFlag GetLoginFlag() const;

                    /**
                     * 设置登录设置
                     * @param LoginFlag 登录设置
                     */
                    void SetLoginFlag(const LoginActionFlag& _loginFlag);

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取敏感操作设置
                     * @return ActionFlag 敏感操作设置
                     */
                    LoginActionFlag GetActionFlag() const;

                    /**
                     * 设置敏感操作设置
                     * @param ActionFlag 敏感操作设置
                     */
                    void SetActionFlag(const LoginActionFlag& _actionFlag);

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取异地登录设置
                     * @return OffsiteFlag 异地登录设置
                     */
                    OffsiteFlag GetOffsiteFlag() const;

                    /**
                     * 设置异地登录设置
                     * @param OffsiteFlag 异地登录设置
                     */
                    void SetOffsiteFlag(const OffsiteFlag& _offsiteFlag);

                    /**
                     * 判断参数 OffsiteFlag 是否已赋值
                     * @return OffsiteFlag 是否已赋值
                     */
                    bool OffsiteFlagHasBeenSet() const;

                    /**
                     * 获取是否需要重置mfa
                     * @return NeedResetMfa 是否需要重置mfa
                     */
                    uint64_t GetNeedResetMfa() const;

                    /**
                     * 设置是否需要重置mfa
                     * @param NeedResetMfa 是否需要重置mfa
                     */
                    void SetNeedResetMfa(const uint64_t& _needResetMfa);

                    /**
                     * 判断参数 NeedResetMfa 是否已赋值
                     * @return NeedResetMfa 是否已赋值
                     */
                    bool NeedResetMfaHasBeenSet() const;

                private:

                    /**
                     * 设置用户的uin
                     */
                    uint64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 登录设置
                     */
                    LoginActionFlag m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * 敏感操作设置
                     */
                    LoginActionFlag m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * 异地登录设置
                     */
                    OffsiteFlag m_offsiteFlag;
                    bool m_offsiteFlagHasBeenSet;

                    /**
                     * 是否需要重置mfa
                     */
                    uint64_t m_needResetMfa;
                    bool m_needResetMfaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SETFLAGREQUEST_H_
