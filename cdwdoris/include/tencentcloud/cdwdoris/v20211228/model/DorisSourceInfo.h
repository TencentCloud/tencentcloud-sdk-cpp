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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 外部doris集群的连接信息
                */
                class DorisSourceInfo : public AbstractModel
                {
                public:
                    DorisSourceInfo();
                    ~DorisSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取doris集群的fe的ip
                     * @return Host doris集群的fe的ip
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置doris集群的fe的ip
                     * @param _host doris集群的fe的ip
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取doris集群的fe的端口号
                     * @return Port doris集群的fe的端口号
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置doris集群的fe的端口号
                     * @param _port doris集群的fe的端口号
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取doris集群的账号
                     * @return User doris集群的账号
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置doris集群的账号
                     * @param _user doris集群的账号
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
                     * 获取base64编码的doris集群对应用户的密码
                     * @return Password base64编码的doris集群对应用户的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置base64编码的doris集群对应用户的密码
                     * @param _password base64编码的doris集群对应用户的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * doris集群的fe的ip
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * doris集群的fe的端口号
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * doris集群的账号
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * base64编码的doris集群对应用户的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_
