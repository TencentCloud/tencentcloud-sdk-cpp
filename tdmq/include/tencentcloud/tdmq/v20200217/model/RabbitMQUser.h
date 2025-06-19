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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
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
                     * 获取实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @return InstanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @param _instanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 获取单个用户最大可用连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConnections 单个用户最大可用连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置单个用户最大可用连接数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConnections 单个用户最大可用连接数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取单个用户最大可用通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxChannels 单个用户最大可用通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置单个用户最大可用通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxChannels 单个用户最大可用通道数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxChannels(const int64_t& _maxChannels);

                    /**
                     * 判断参数 MaxChannels 是否已赋值
                     * @return MaxChannels 是否已赋值
                     * 
                     */
                    bool MaxChannelsHasBeenSet() const;

                    /**
                     * 获取创建时间时间戳
                     * @return CreateTs 创建时间时间戳
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置创建时间时间戳
                     * @param _createTs 创建时间时间戳
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取修改时间时间戳
                     * @return ModifyTs 修改时间时间戳
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置修改时间时间戳
                     * @param _modifyTs 修改时间时间戳
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 单个用户最大可用连接数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * 单个用户最大可用通道数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                    /**
                     * 创建时间时间戳
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * 修改时间时间戳
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
