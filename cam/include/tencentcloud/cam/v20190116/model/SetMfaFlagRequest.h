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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/LoginActionMfaFlag.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * SetMfaFlag请求参数结构体
                */
                class SetMfaFlagRequest : public AbstractModel
                {
                public:
                    SetMfaFlagRequest();
                    ~SetMfaFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置用户的uin
                     * @return OpUin 设置用户的uin
                     * 
                     */
                    uint64_t GetOpUin() const;

                    /**
                     * 设置设置用户的uin
                     * @param _opUin 设置用户的uin
                     * 
                     */
                    void SetOpUin(const uint64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取登录保护设置
                     * @return LoginFlag 登录保护设置
                     * 
                     */
                    LoginActionMfaFlag GetLoginFlag() const;

                    /**
                     * 设置登录保护设置
                     * @param _loginFlag 登录保护设置
                     * 
                     */
                    void SetLoginFlag(const LoginActionMfaFlag& _loginFlag);

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取操作保护设置
                     * @return ActionFlag 操作保护设置
                     * 
                     */
                    LoginActionMfaFlag GetActionFlag() const;

                    /**
                     * 设置操作保护设置
                     * @param _actionFlag 操作保护设置
                     * 
                     */
                    void SetActionFlag(const LoginActionMfaFlag& _actionFlag);

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                private:

                    /**
                     * 设置用户的uin
                     */
                    uint64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 登录保护设置
                     */
                    LoginActionMfaFlag m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * 操作保护设置
                     */
                    LoginActionMfaFlag m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_
