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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyRabbitMQServerlessPermission请求参数结构体
                */
                class ModifyRabbitMQServerlessPermissionRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessPermissionRequest();
                    ~ModifyRabbitMQServerlessPermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id
                     * @return InstanceId 集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id
                     * @param _instanceId 集群实例Id
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
                     * 获取用户名，权限关联的用户
                     * @return User 用户名，权限关联的用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，权限关联的用户
                     * @param _user 用户名，权限关联的用户
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
                     * 获取vhost名
                     * @return VirtualHost vhost名
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置vhost名
                     * @param _virtualHost vhost名
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取权限类型，declare相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @return ConfigRegexp 权限类型，declare相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    std::string GetConfigRegexp() const;

                    /**
                     * 设置权限类型，declare相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @param _configRegexp 权限类型，declare相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    void SetConfigRegexp(const std::string& _configRegexp);

                    /**
                     * 判断参数 ConfigRegexp 是否已赋值
                     * @return ConfigRegexp 是否已赋值
                     * 
                     */
                    bool ConfigRegexpHasBeenSet() const;

                    /**
                     * 获取权限类型，消息写入相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @return WriteRegexp 权限类型，消息写入相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    std::string GetWriteRegexp() const;

                    /**
                     * 设置权限类型，消息写入相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @param _writeRegexp 权限类型，消息写入相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    void SetWriteRegexp(const std::string& _writeRegexp);

                    /**
                     * 判断参数 WriteRegexp 是否已赋值
                     * @return WriteRegexp 是否已赋值
                     * 
                     */
                    bool WriteRegexpHasBeenSet() const;

                    /**
                     * 获取权限类型，消息读取相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @return ReadRegexp 权限类型，消息读取相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    std::string GetReadRegexp() const;

                    /**
                     * 设置权限类型，消息读取相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * @param _readRegexp 权限类型，消息读取相关操作，该用户可操作该vhost下的资源名称正则表达式
                     * 
                     */
                    void SetReadRegexp(const std::string& _readRegexp);

                    /**
                     * 判断参数 ReadRegexp 是否已赋值
                     * @return ReadRegexp 是否已赋值
                     * 
                     */
                    bool ReadRegexpHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名，权限关联的用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * vhost名
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 权限类型，declare相关操作，该用户可操作该vhost下的资源名称正则表达式
                     */
                    std::string m_configRegexp;
                    bool m_configRegexpHasBeenSet;

                    /**
                     * 权限类型，消息写入相关操作，该用户可操作该vhost下的资源名称正则表达式
                     */
                    std::string m_writeRegexp;
                    bool m_writeRegexpHasBeenSet;

                    /**
                     * 权限类型，消息读取相关操作，该用户可操作该vhost下的资源名称正则表达式
                     */
                    std::string m_readRegexp;
                    bool m_readRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_
