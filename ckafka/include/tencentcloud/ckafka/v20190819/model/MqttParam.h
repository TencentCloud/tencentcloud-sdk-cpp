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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MQTTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MQTTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 创建MQTT 为Source的Data Hub Task参数
                */
                class MqttParam : public AbstractModel
                {
                public:
                    MqttParam();
                    ~MqttParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需要同步的MQTT Topic列表, CSV格式</p>
                     * @return Topics <p>需要同步的MQTT Topic列表, CSV格式</p>
                     * 
                     */
                    std::string GetTopics() const;

                    /**
                     * 设置<p>需要同步的MQTT Topic列表, CSV格式</p>
                     * @param _topics <p>需要同步的MQTT Topic列表, CSV格式</p>
                     * 
                     */
                    void SetTopics(const std::string& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>用于控制会话的持久性。cleanSession 为true时，连接时会创建一个全新的会话。 cleanSession = false时，连接时会恢复之前的会话。</p>
                     * @return CleanSession <p>用于控制会话的持久性。cleanSession 为true时，连接时会创建一个全新的会话。 cleanSession = false时，连接时会恢复之前的会话。</p>
                     * 
                     */
                    bool GetCleanSession() const;

                    /**
                     * 设置<p>用于控制会话的持久性。cleanSession 为true时，连接时会创建一个全新的会话。 cleanSession = false时，连接时会恢复之前的会话。</p>
                     * @param _cleanSession <p>用于控制会话的持久性。cleanSession 为true时，连接时会创建一个全新的会话。 cleanSession = false时，连接时会恢复之前的会话。</p>
                     * 
                     */
                    void SetCleanSession(const bool& _cleanSession);

                    /**
                     * 判断参数 CleanSession 是否已赋值
                     * @return CleanSession 是否已赋值
                     * 
                     */
                    bool CleanSessionHasBeenSet() const;

                    /**
                     * 获取<p>MQTT instance-id</p>
                     * @return Resource <p>MQTT instance-id</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>MQTT instance-id</p>
                     * @param _resource <p>MQTT instance-id</p>
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>MQTT实例VIP</p>
                     * @return Ip <p>MQTT实例VIP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>MQTT实例VIP</p>
                     * @param _ip <p>MQTT实例VIP</p>
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
                     * 获取<p>MQTT VIP 端口</p>
                     * @return Port <p>MQTT VIP 端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>MQTT VIP 端口</p>
                     * @param _port <p>MQTT VIP 端口</p>
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
                     * 获取<p>MQTT实例用户名</p>
                     * @return UserName <p>MQTT实例用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>MQTT实例用户名</p>
                     * @param _userName <p>MQTT实例用户名</p>
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
                     * 获取<p>MQTT实例内账户密码</p>
                     * @return Password <p>MQTT实例内账户密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>MQTT实例内账户密码</p>
                     * @param _password <p>MQTT实例内账户密码</p>
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
                     * 获取<p>QoS</p>
                     * @return Qos <p>QoS</p>
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置<p>QoS</p>
                     * @param _qos <p>QoS</p>
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取<p>tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription</p>
                     * @return MaxTasks <p>tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription</p>
                     * 
                     */
                    int64_t GetMaxTasks() const;

                    /**
                     * 设置<p>tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription</p>
                     * @param _maxTasks <p>tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription</p>
                     * 
                     */
                    void SetMaxTasks(const int64_t& _maxTasks);

                    /**
                     * 判断参数 MaxTasks 是否已赋值
                     * @return MaxTasks 是否已赋值
                     * 
                     */
                    bool MaxTasksHasBeenSet() const;

                    /**
                     * 获取<p>MQTT 实例的Service VIP</p>
                     * @return ServiceVip <p>MQTT 实例的Service VIP</p>
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置<p>MQTT 实例的Service VIP</p>
                     * @param _serviceVip <p>MQTT 实例的Service VIP</p>
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取<p>MQTT实例的VPC ID</p>
                     * @return UniqVpcId <p>MQTT实例的VPC ID</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>MQTT实例的VPC ID</p>
                     * @param _uniqVpcId <p>MQTT实例的VPC ID</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>是否为自建集群, MQTT只支持非自建集群</p>
                     * @return SelfBuilt <p>是否为自建集群, MQTT只支持非自建集群</p>
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置<p>是否为自建集群, MQTT只支持非自建集群</p>
                     * @param _selfBuilt <p>是否为自建集群, MQTT只支持非自建集群</p>
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取<p>MQTT消息过滤sql语句</p>
                     * @return SqlFilter <p>MQTT消息过滤sql语句</p>
                     * 
                     */
                    std::string GetSqlFilter() const;

                    /**
                     * 设置<p>MQTT消息过滤sql语句</p>
                     * @param _sqlFilter <p>MQTT消息过滤sql语句</p>
                     * 
                     */
                    void SetSqlFilter(const std::string& _sqlFilter);

                    /**
                     * 判断参数 SqlFilter 是否已赋值
                     * @return SqlFilter 是否已赋值
                     * 
                     */
                    bool SqlFilterHasBeenSet() const;

                private:

                    /**
                     * <p>需要同步的MQTT Topic列表, CSV格式</p>
                     */
                    std::string m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>用于控制会话的持久性。cleanSession 为true时，连接时会创建一个全新的会话。 cleanSession = false时，连接时会恢复之前的会话。</p>
                     */
                    bool m_cleanSession;
                    bool m_cleanSessionHasBeenSet;

                    /**
                     * <p>MQTT instance-id</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>MQTT实例VIP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>MQTT VIP 端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>MQTT实例用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>MQTT实例内账户密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>QoS</p>
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription</p>
                     */
                    int64_t m_maxTasks;
                    bool m_maxTasksHasBeenSet;

                    /**
                     * <p>MQTT 实例的Service VIP</p>
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * <p>MQTT实例的VPC ID</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>是否为自建集群, MQTT只支持非自建集群</p>
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * <p>MQTT消息过滤sql语句</p>
                     */
                    std::string m_sqlFilter;
                    bool m_sqlFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MQTTPARAM_H_
