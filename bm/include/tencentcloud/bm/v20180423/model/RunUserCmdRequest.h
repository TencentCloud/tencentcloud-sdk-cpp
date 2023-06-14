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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * RunUserCmd请求参数结构体
                */
                class RunUserCmdRequest : public AbstractModel
                {
                public:
                    RunUserCmdRequest();
                    ~RunUserCmdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义脚本ID
                     * @return CmdId 自定义脚本ID
                     * 
                     */
                    std::string GetCmdId() const;

                    /**
                     * 设置自定义脚本ID
                     * @param _cmdId 自定义脚本ID
                     * 
                     */
                    void SetCmdId(const std::string& _cmdId);

                    /**
                     * 判断参数 CmdId 是否已赋值
                     * @return CmdId 是否已赋值
                     * 
                     */
                    bool CmdIdHasBeenSet() const;

                    /**
                     * 获取执行脚本机器的用户名
                     * @return UserName 执行脚本机器的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置执行脚本机器的用户名
                     * @param _userName 执行脚本机器的用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取执行脚本机器的用户名的密码
                     * @return Password 执行脚本机器的用户名的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置执行脚本机器的用户名的密码
                     * @param _password 执行脚本机器的用户名的密码
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
                     * 获取执行脚本的服务器实例
                     * @return InstanceIds 执行脚本的服务器实例
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置执行脚本的服务器实例
                     * @param _instanceIds 执行脚本的服务器实例
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取执行脚本的参数，必须经过base64编码
                     * @return CmdParam 执行脚本的参数，必须经过base64编码
                     * 
                     */
                    std::string GetCmdParam() const;

                    /**
                     * 设置执行脚本的参数，必须经过base64编码
                     * @param _cmdParam 执行脚本的参数，必须经过base64编码
                     * 
                     */
                    void SetCmdParam(const std::string& _cmdParam);

                    /**
                     * 判断参数 CmdParam 是否已赋值
                     * @return CmdParam 是否已赋值
                     * 
                     */
                    bool CmdParamHasBeenSet() const;

                private:

                    /**
                     * 自定义脚本ID
                     */
                    std::string m_cmdId;
                    bool m_cmdIdHasBeenSet;

                    /**
                     * 执行脚本机器的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 执行脚本机器的用户名的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 执行脚本的服务器实例
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 执行脚本的参数，必须经过base64编码
                     */
                    std::string m_cmdParam;
                    bool m_cmdParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_RUNUSERCMDREQUEST_H_
