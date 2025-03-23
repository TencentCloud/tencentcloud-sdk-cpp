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
                     * 获取需要同步的MQTT Topic列表, CSV格式
                     * @return Topics 需要同步的MQTT Topic列表, CSV格式
                     * 
                     */
                    std::string GetTopics() const;

                    /**
                     * 设置需要同步的MQTT Topic列表, CSV格式
                     * @param _topics 需要同步的MQTT Topic列表, CSV格式
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
                     * 获取MQTT clean-session
                     * @return CleanSession MQTT clean-session
                     * 
                     */
                    bool GetCleanSession() const;

                    /**
                     * 设置MQTT clean-session
                     * @param _cleanSession MQTT clean-session
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
                     * 获取MQTT instance-id
                     * @return Resource MQTT instance-id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置MQTT instance-id
                     * @param _resource MQTT instance-id
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
                     * 获取MQTT实例VIP
                     * @return Ip MQTT实例VIP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置MQTT实例VIP
                     * @param _ip MQTT实例VIP
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
                     * 获取MQTT VIP 端口
                     * @return Port MQTT VIP 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置MQTT VIP 端口
                     * @param _port MQTT VIP 端口
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
                     * 获取MQTT实例用户名
                     * @return UserName MQTT实例用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置MQTT实例用户名
                     * @param _userName MQTT实例用户名
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
                     * 获取MQTT实例内账户密码
                     * @return Password MQTT实例内账户密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置MQTT实例内账户密码
                     * @param _password MQTT实例内账户密码
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
                     * 获取QoS
                     * @return Qos QoS
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置QoS
                     * @param _qos QoS
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
                     * 获取tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription
                     * @return MaxTasks tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription
                     * 
                     */
                    int64_t GetMaxTasks() const;

                    /**
                     * 设置tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription
                     * @param _maxTasks tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription
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
                     * 获取MQTT 实例的Service VIP
                     * @return ServiceVip MQTT 实例的Service VIP
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置MQTT 实例的Service VIP
                     * @param _serviceVip MQTT 实例的Service VIP
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
                     * 获取MQTT实例的VPC ID
                     * @return UniqVpcId MQTT实例的VPC ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置MQTT实例的VPC ID
                     * @param _uniqVpcId MQTT实例的VPC ID
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
                     * 获取是否为自建集群, MQTT只支持非自建集群
                     * @return SelfBuilt 是否为自建集群, MQTT只支持非自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群, MQTT只支持非自建集群
                     * @param _selfBuilt 是否为自建集群, MQTT只支持非自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                private:

                    /**
                     * 需要同步的MQTT Topic列表, CSV格式
                     */
                    std::string m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * MQTT clean-session
                     */
                    bool m_cleanSession;
                    bool m_cleanSessionHasBeenSet;

                    /**
                     * MQTT instance-id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * MQTT实例VIP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * MQTT VIP 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * MQTT实例用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * MQTT实例内账户密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * QoS
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * tasks.max 订阅Topic的并发Task个数, 默认为1; 当设置大于1时, 使用Shared Subscription
                     */
                    int64_t m_maxTasks;
                    bool m_maxTasksHasBeenSet;

                    /**
                     * MQTT 实例的Service VIP
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * MQTT实例的VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 是否为自建集群, MQTT只支持非自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MQTTPARAM_H_
