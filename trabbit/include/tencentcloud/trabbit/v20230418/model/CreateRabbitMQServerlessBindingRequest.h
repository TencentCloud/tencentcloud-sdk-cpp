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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessKeyValuePair.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateRabbitMQServerlessBinding请求参数结构体
                */
                class CreateRabbitMQServerlessBindingRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessBindingRequest();
                    ~CreateRabbitMQServerlessBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return InstanceId <p>实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _instanceId <p>实例Id</p>
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
                     * 获取<p>Vhost参数</p>
                     * @return VirtualHost <p>Vhost参数</p>
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置<p>Vhost参数</p>
                     * @param _virtualHost <p>Vhost参数</p>
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
                     * 获取<p>源exchange</p>
                     * @return Source <p>源exchange</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>源exchange</p>
                     * @param _source <p>源exchange</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>目标类型,取值queue或exchange</p>
                     * @return DestinationType <p>目标类型,取值queue或exchange</p>
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置<p>目标类型,取值queue或exchange</p>
                     * @param _destinationType <p>目标类型,取值queue或exchange</p>
                     * 
                     */
                    void SetDestinationType(const std::string& _destinationType);

                    /**
                     * 判断参数 DestinationType 是否已赋值
                     * @return DestinationType 是否已赋值
                     * 
                     */
                    bool DestinationTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标队列或者交换机</p>
                     * @return Destination <p>目标队列或者交换机</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>目标队列或者交换机</p>
                     * @param _destination <p>目标队列或者交换机</p>
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取<p>绑定key</p>
                     * @return RoutingKey <p>绑定key</p>
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置<p>绑定key</p>
                     * @param _routingKey <p>绑定key</p>
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                    /**
                     * 获取<p>创建 Header 类型 Exchange 的 Binding 时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * @return Arguments <p>创建 Header 类型 Exchange 的 Binding 时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * 
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> GetArguments() const;

                    /**
                     * 设置<p>创建 Header 类型 Exchange 的 Binding 时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * @param _arguments <p>创建 Header 类型 Exchange 的 Binding 时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * 
                     */
                    void SetArguments(const std::vector<RabbitMQServerlessKeyValuePair>& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Vhost参数</p>
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * <p>源exchange</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>目标类型,取值queue或exchange</p>
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * <p>目标队列或者交换机</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>绑定key</p>
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * <p>创建 Header 类型 Exchange 的 Binding 时，可以传入参数。其它类型 Exchange 无需传入</p>
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_
