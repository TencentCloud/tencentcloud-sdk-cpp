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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCELOGINMSGREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCELOGINMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstanceLoginMsg请求参数结构体
                */
                class DescribeInstanceLoginMsgRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLoginMsgRequest();
                    ~DescribeInstanceLoginMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取绑定实例的UserID，为后续多会话预留参数
                     * @return UserId 绑定实例的UserID，为后续多会话预留参数
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置绑定实例的UserID，为后续多会话预留参数
                     * @param _userId 绑定实例的UserID，为后续多会话预留参数
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取拉取桌面title，用户可自行定义，默认为云桌面实例名称
                     * @return DesktopName 拉取桌面title，用户可自行定义，默认为云桌面实例名称
                     * 
                     */
                    std::string GetDesktopName() const;

                    /**
                     * 设置拉取桌面title，用户可自行定义，默认为云桌面实例名称
                     * @param _desktopName 拉取桌面title，用户可自行定义，默认为云桌面实例名称
                     * 
                     */
                    void SetDesktopName(const std::string& _desktopName);

                    /**
                     * 判断参数 DesktopName 是否已赋值
                     * @return DesktopName 是否已赋值
                     * 
                     */
                    bool DesktopNameHasBeenSet() const;

                    /**
                     * 获取是否抢占桌面，即桌面使用过程中，抢占登录。
true：抢占登录
false：非抢占登录
默认为抢占登录
                     * @return Force 是否抢占桌面，即桌面使用过程中，抢占登录。
true：抢占登录
false：非抢占登录
默认为抢占登录
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否抢占桌面，即桌面使用过程中，抢占登录。
true：抢占登录
false：非抢占登录
默认为抢占登录
                     * @param _force 是否抢占桌面，即桌面使用过程中，抢占登录。
true：抢占登录
false：非抢占登录
默认为抢占登录
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取是否内网方式
                     * @return IsInternal 是否内网方式
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置是否内网方式
                     * @param _isInternal 是否内网方式
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定实例的UserID，为后续多会话预留参数
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 拉取桌面title，用户可自行定义，默认为云桌面实例名称
                     */
                    std::string m_desktopName;
                    bool m_desktopNameHasBeenSet;

                    /**
                     * 是否抢占桌面，即桌面使用过程中，抢占登录。
true：抢占登录
false：非抢占登录
默认为抢占登录
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * 是否内网方式
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCELOGINMSGREQUEST_H_
