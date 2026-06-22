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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Rabbitmq路由关系列表成员
                */
                class RabbitMQBindingListInfo : public AbstractModel
                {
                public:
                    RabbitMQBindingListInfo();
                    ~RabbitMQBindingListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由关系id</p>
                     * @return BindingId <p>路由关系id</p>
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置<p>路由关系id</p>
                     * @param _bindingId <p>路由关系id</p>
                     * 
                     */
                    void SetBindingId(const int64_t& _bindingId);

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

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
                     * 获取<p>源exchange名称</p>
                     * @return Source <p>源exchange名称</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>源exchange名称</p>
                     * @param _source <p>源exchange名称</p>
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
                     * 获取<p>目标类型,queue或exchange</p>
                     * @return DestinationType <p>目标类型,queue或exchange</p>
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置<p>目标类型,queue或exchange</p>
                     * @param _destinationType <p>目标类型,queue或exchange</p>
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
                     * 获取<p>目标资源名称</p>
                     * @return Destination <p>目标资源名称</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>目标资源名称</p>
                     * @param _destination <p>目标资源名称</p>
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
                     * 获取<p>源exchange类型</p>
                     * @return SourceExchangeType <p>源exchange类型</p>
                     * 
                     */
                    std::string GetSourceExchangeType() const;

                    /**
                     * 设置<p>源exchange类型</p>
                     * @param _sourceExchangeType <p>源exchange类型</p>
                     * 
                     */
                    void SetSourceExchangeType(const std::string& _sourceExchangeType);

                    /**
                     * 判断参数 SourceExchangeType 是否已赋值
                     * @return SourceExchangeType 是否已赋值
                     * 
                     */
                    bool SourceExchangeTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>绑定参数，header类型的Exchange绑定时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * @return Arguments <p>绑定参数，header类型的Exchange绑定时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * 
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> GetArguments() const;

                    /**
                     * 设置<p>绑定参数，header类型的Exchange绑定时，可以传入参数。其它类型 Exchange 无需传入</p>
                     * @param _arguments <p>绑定参数，header类型的Exchange绑定时，可以传入参数。其它类型 Exchange 无需传入</p>
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
                     * <p>路由关系id</p>
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * <p>Vhost参数</p>
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * <p>源exchange名称</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>目标类型,queue或exchange</p>
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * <p>目标资源名称</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>绑定key</p>
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * <p>源exchange类型</p>
                     */
                    std::string m_sourceExchangeType;
                    bool m_sourceExchangeTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>绑定参数，header类型的Exchange绑定时，可以传入参数。其它类型 Exchange 无需传入</p>
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
