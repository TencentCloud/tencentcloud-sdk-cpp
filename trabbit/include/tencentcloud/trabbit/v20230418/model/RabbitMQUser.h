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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RabbitMQ用户实体详情
                */
                class RabbitMQUser : public AbstractModel
                {
                public:
                    RabbitMQUser();
                    ~RabbitMQUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户名，登录时使用
                     * @return User 用户名，登录时使用
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，登录时使用
                     * @param _user 用户名，登录时使用
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
                     * 获取密码，登录时使用
                     * @return Password 密码，登录时使用
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，登录时使用
                     * @param _password 密码，登录时使用
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
                     * 获取用户描述
                     * @return Description 用户描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户描述
                     * @param _description 用户描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户标签，用于决定改用户访问RabbitMQ Management的权限范围
                     * @return Tags 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置用户标签，用于决定改用户访问RabbitMQ Management的权限范围
                     * @param _tags 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取用户创建时间
                     * @return CreateTime 用户创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置用户创建时间
                     * @param _createTime 用户创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户最后修改时间
                     * @return ModifyTime 用户最后修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置用户最后修改时间
                     * @param _modifyTime 用户最后修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取用户类型，System：系统创建，User：用户创建
                     * @return Type 用户类型，System：系统创建，User：用户创建
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置用户类型，System：系统创建，User：用户创建
                     * @param _type 用户类型，System：系统创建，User：用户创建
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取该用户所能允许的最大连接数
                     * @return MaxConnections 该用户所能允许的最大连接数
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置该用户所能允许的最大连接数
                     * @param _maxConnections 该用户所能允许的最大连接数
                     * 
                     */
                    void SetMaxConnections(const int64_t& _maxConnections);

                    /**
                     * 判断参数 MaxConnections 是否已赋值
                     * @return MaxConnections 是否已赋值
                     * 
                     */
                    bool MaxConnectionsHasBeenSet() const;

                    /**
                     * 获取该用户所能允许的最大通道数
                     * @return MaxChannels 该用户所能允许的最大通道数
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置该用户所能允许的最大通道数
                     * @param _maxChannels 该用户所能允许的最大通道数
                     * 
                     */
                    void SetMaxChannels(const int64_t& _maxChannels);

                    /**
                     * 判断参数 MaxChannels 是否已赋值
                     * @return MaxChannels 是否已赋值
                     * 
                     */
                    bool MaxChannelsHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名，登录时使用
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码，登录时使用
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 用户描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 用户创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户最后修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 用户类型，System：系统创建，User：用户创建
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 该用户所能允许的最大连接数
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * 该用户所能允许的最大通道数
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_
