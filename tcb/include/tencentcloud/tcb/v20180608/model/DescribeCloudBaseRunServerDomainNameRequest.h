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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunServerDomainName请求参数结构体
                */
                class DescribeCloudBaseRunServerDomainNameRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunServerDomainNameRequest();
                    ~DescribeCloudBaseRunServerDomainNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取环境Id
                     * @return UserEnvId 环境Id
                     * 
                     */
                    std::string GetUserEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _userEnvId 环境Id
                     * 
                     */
                    void SetUserEnvId(const std::string& _userEnvId);

                    /**
                     * 判断参数 UserEnvId 是否已赋值
                     * @return UserEnvId 是否已赋值
                     * 
                     */
                    bool UserEnvIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return UserUin 用户Uin
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户Uin
                     * @param _userUin 用户Uin
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取外部Id
                     * @return ExternalId 外部Id
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置外部Id
                     * @param _externalId 外部Id
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                private:

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 环境Id
                     */
                    std::string m_userEnvId;
                    bool m_userEnvIdHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 外部Id
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERDOMAINNAMEREQUEST_H_
