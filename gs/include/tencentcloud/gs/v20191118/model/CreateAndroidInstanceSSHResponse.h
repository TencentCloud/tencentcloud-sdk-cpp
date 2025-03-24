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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESSHRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESSHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstanceSSH返回参数结构体
                */
                class CreateAndroidInstanceSSHResponse : public AbstractModel
                {
                public:
                    CreateAndroidInstanceSSHResponse();
                    ~CreateAndroidInstanceSSHResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连接私钥，需要保存为文件形式，例如 private_key.pem
                     * @return PrivateKey 连接私钥，需要保存为文件形式，例如 private_key.pem
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取用户名称
                     * @return UserName 用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取连接地址
                     * @return HostName 连接地址
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取连接端口
                     * @return Port 连接端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取连接参考命令
                     * @return ConnectCommand 连接参考命令
                     * 
                     */
                    std::string GetConnectCommand() const;

                    /**
                     * 判断参数 ConnectCommand 是否已赋值
                     * @return ConnectCommand 是否已赋值
                     * 
                     */
                    bool ConnectCommandHasBeenSet() const;

                private:

                    /**
                     * 连接私钥，需要保存为文件形式，例如 private_key.pem
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 连接地址
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 连接端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 连接参考命令
                     */
                    std::string m_connectCommand;
                    bool m_connectCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESSHRESPONSE_H_
