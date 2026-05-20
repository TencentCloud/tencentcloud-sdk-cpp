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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRabbitMQUser请求参数结构体
                */
                class ModifyRabbitMQUserRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQUserRequest();
                    ~ModifyRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>用户名，形如rabbitmq。有效的 User 名称可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询，点击集群列表中的集群，进入集群详情，并在用户与权限页签中找到用户列表，从而找到用户名称。当前不支持修改admin的密码。</p>
                     * @return User <p>用户名，形如rabbitmq。有效的 User 名称可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询，点击集群列表中的集群，进入集群详情，并在用户与权限页签中找到用户列表，从而找到用户名称。当前不支持修改admin的密码。</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户名，形如rabbitmq。有效的 User 名称可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询，点击集群列表中的集群，进入集群详情，并在用户与权限页签中找到用户列表，从而找到用户名称。当前不支持修改admin的密码。</p>
                     * @param _user <p>用户名，形如rabbitmq。有效的 User 名称可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询，点击集群列表中的集群，进入集群详情，并在用户与权限页签中找到用户列表，从而找到用户名称。当前不支持修改admin的密码。</p>
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
                     * 获取<p>密码，登录时使用。规范：不能为空，8-64个字符，至少要包含小写字母、大写字母、数字、特殊字符【()`~!@#$%^&amp;*_=|{}[]:;&#39;,.?/】中的两项</p>
                     * @return Password <p>密码，登录时使用。规范：不能为空，8-64个字符，至少要包含小写字母、大写字母、数字、特殊字符【()`~!@#$%^&amp;*_=|{}[]:;&#39;,.?/】中的两项</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码，登录时使用。规范：不能为空，8-64个字符，至少要包含小写字母、大写字母、数字、特殊字符【()`~!@#$%^&amp;*_=|{}[]:;&#39;,.?/】中的两项</p>
                     * @param _password <p>密码，登录时使用。规范：不能为空，8-64个字符，至少要包含小写字母、大写字母、数字、特殊字符【()`~!@#$%^&amp;*_=|{}[]:;&#39;,.?/】中的两项</p>
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
                     * 获取<p>描述，不传则不修改</p>
                     * @return Description <p>描述，不传则不修改</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述，不传则不修改</p>
                     * @param _description <p>描述，不传则不修改</p>
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
                     * 获取<p>用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围<br>management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户</p>
                     * @return Tags <p>用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围<br>management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围<br>management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户</p>
                     * @param _tags <p>用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围<br>management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户</p>
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
                     * 获取<p>该用户的最大连接数，不传则不修改</p>
                     * @return MaxConnections <p>该用户的最大连接数，不传则不修改</p>
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置<p>该用户的最大连接数，不传则不修改</p>
                     * @param _maxConnections <p>该用户的最大连接数，不传则不修改</p>
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
                     * 获取<p>该用户的最大channel数，不传则不修改</p>
                     * @return MaxChannels <p>该用户的最大channel数，不传则不修改</p>
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置<p>该用户的最大channel数，不传则不修改</p>
                     * @param _maxChannels <p>该用户的最大channel数，不传则不修改</p>
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
                     * 获取<p>是否开启cam验证</p>
                     * @return EnableCamAuth <p>是否开启cam验证</p>
                     * 
                     */
                    bool GetEnableCamAuth() const;

                    /**
                     * 设置<p>是否开启cam验证</p>
                     * @param _enableCamAuth <p>是否开启cam验证</p>
                     * 
                     */
                    void SetEnableCamAuth(const bool& _enableCamAuth);

                    /**
                     * 判断参数 EnableCamAuth 是否已赋值
                     * @return EnableCamAuth 是否已赋值
                     * 
                     */
                    bool EnableCamAuthHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名，形如rabbitmq。有效的 User 名称可通过登录 <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ 控制台</a>查询，点击集群列表中的集群，进入集群详情，并在用户与权限页签中找到用户列表，从而找到用户名称。当前不支持修改admin的密码。</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>密码，登录时使用。规范：不能为空，8-64个字符，至少要包含小写字母、大写字母、数字、特殊字符【()`~!@#$%^&amp;*_=|{}[]:;&#39;,.?/】中的两项</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>描述，不传则不修改</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围<br>management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>该用户的最大连接数，不传则不修改</p>
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * <p>该用户的最大channel数，不传则不修改</p>
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                    /**
                     * <p>是否开启cam验证</p>
                     */
                    bool m_enableCamAuth;
                    bool m_enableCamAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_
