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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ACCESSINFO_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 认证信息
                */
                class AccessInfo : public AbstractModel
                {
                public:
                    AccessInfo();
                    ~AccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地址
                     * @return Ip 地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置地址
                     * @param _ip 地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return User 账号
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置账号
                     * @param _user 账号
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return Password 密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
                     * @param _password 密码
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
                     * 获取唤起链接｜wss链接
                     * @return AccessURL 唤起链接｜wss链接
                     * 
                     */
                    std::string GetAccessURL() const;

                    /**
                     * 设置唤起链接｜wss链接
                     * @param _accessURL 唤起链接｜wss链接
                     * 
                     */
                    void SetAccessURL(const std::string& _accessURL);

                    /**
                     * 判断参数 AccessURL 是否已赋值
                     * @return AccessURL 是否已赋值
                     * 
                     */
                    bool AccessURLHasBeenSet() const;

                private:

                    /**
                     * 地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 唤起链接｜wss链接
                     */
                    std::string m_accessURL;
                    bool m_accessURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ACCESSINFO_H_
