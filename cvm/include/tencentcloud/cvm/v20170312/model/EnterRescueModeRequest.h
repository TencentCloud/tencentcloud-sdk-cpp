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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * EnterRescueMode请求参数结构体
                */
                class EnterRescueModeRequest : public AbstractModel
                {
                public:
                    EnterRescueModeRequest();
                    ~EnterRescueModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要进入救援模式的实例id
                     * @return InstanceId 需要进入救援模式的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要进入救援模式的实例id
                     * @param _instanceId 需要进入救援模式的实例id
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
                     * 获取救援模式下系统密码
                     * @return Password 救援模式下系统密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置救援模式下系统密码
                     * @param _password 救援模式下系统密码
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
                     * 获取救援模式下系统用户名
                     * @return Username 救援模式下系统用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置救援模式下系统用户名
                     * @param _username 救援模式下系统用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取是否强制关机
                     * @return ForceStop 是否强制关机
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置是否强制关机
                     * @param _forceStop 是否强制关机
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * 需要进入救援模式的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 救援模式下系统密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 救援模式下系统用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 是否强制关机
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_
