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
                     * 获取<p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
                     * @return InstanceId <p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
                     * @param _instanceId <p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
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
                     * 获取<p>用户名，登录时使用</p>
                     * @return User <p>用户名，登录时使用</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户名，登录时使用</p>
                     * @param _user <p>用户名，登录时使用</p>
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
                     * 获取<p>密码，登录时使用</p>
                     * @return Password <p>密码，登录时使用</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码，登录时使用</p>
                     * @param _password <p>密码，登录时使用</p>
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
                     * 获取<p>用户描述</p>
                     * @return Description <p>用户描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>用户描述</p>
                     * @param _description <p>用户描述</p>
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
                     * 获取<p>用户标签，用于决定改用户访问RabbitMQ Management的权限范围</p>
                     * @return Tags <p>用户标签，用于决定改用户访问RabbitMQ Management的权限范围</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>用户标签，用于决定改用户访问RabbitMQ Management的权限范围</p>
                     * @param _tags <p>用户标签，用于决定改用户访问RabbitMQ Management的权限范围</p>
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
                     * 获取<p>用户创建时间</p>
                     * @return CreateTime <p>用户创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>用户创建时间</p>
                     * @param _createTime <p>用户创建时间</p>
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
                     * 获取<p>用户最后修改时间</p>
                     * @return ModifyTime <p>用户最后修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>用户最后修改时间</p>
                     * @param _modifyTime <p>用户最后修改时间</p>
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
                     * 获取<p>用户类型，System：系统创建，User：用户创建</p>
                     * @return Type <p>用户类型，System：系统创建，User：用户创建</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>用户类型，System：系统创建，User：用户创建</p>
                     * @param _type <p>用户类型，System：系统创建，User：用户创建</p>
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
                     * 获取<p>单个用户最大可用连接数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConnections <p>单个用户最大可用连接数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置<p>单个用户最大可用连接数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConnections <p>单个用户最大可用连接数</p>
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
                     * 获取<p>单个用户最大可用通道数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxChannels <p>单个用户最大可用通道数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置<p>单个用户最大可用通道数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxChannels <p>单个用户最大可用通道数</p>
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
                     * 获取<p>创建时间时间戳</p>
                     * @return CreateTs <p>创建时间时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置<p>创建时间时间戳</p>
                     * @param _createTs <p>创建时间时间戳</p>
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
                     * 获取<p>修改时间时间戳</p>
                     * @return ModifyTs <p>修改时间时间戳</p>
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置<p>修改时间时间戳</p>
                     * @param _modifyTs <p>修改时间时间戳</p>
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启cam验证</p><p>默认值：false</p>
                     * @return CamAuthEnabled <p>是否开启cam验证</p><p>默认值：false</p>
                     * 
                     */
                    bool GetCamAuthEnabled() const;

                    /**
                     * 设置<p>是否开启cam验证</p><p>默认值：false</p>
                     * @param _camAuthEnabled <p>是否开启cam验证</p><p>默认值：false</p>
                     * 
                     */
                    void SetCamAuthEnabled(const bool& _camAuthEnabled);

                    /**
                     * 判断参数 CamAuthEnabled 是否已赋值
                     * @return CamAuthEnabled 是否已赋值
                     * 
                     */
                    bool CamAuthEnabledHasBeenSet() const;

                    /**
                     * 获取<p>cam凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamCredentialName <p>cam凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCamCredentialName() const;

                    /**
                     * 设置<p>cam凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _camCredentialName <p>cam凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCamCredentialName(const std::string& _camCredentialName);

                    /**
                     * 判断参数 CamCredentialName 是否已赋值
                     * @return CamCredentialName 是否已赋值
                     * 
                     */
                    bool CamCredentialNameHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名，登录时使用</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>密码，登录时使用</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>用户描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用户标签，用于决定改用户访问RabbitMQ Management的权限范围</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>用户创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>用户最后修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>用户类型，System：系统创建，User：用户创建</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>单个用户最大可用连接数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * <p>单个用户最大可用通道数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                    /**
                     * <p>创建时间时间戳</p>
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * <p>修改时间时间戳</p>
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                    /**
                     * <p>是否开启cam验证</p><p>默认值：false</p>
                     */
                    bool m_camAuthEnabled;
                    bool m_camAuthEnabledHasBeenSet;

                    /**
                     * <p>cam凭据名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_camCredentialName;
                    bool m_camCredentialNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
