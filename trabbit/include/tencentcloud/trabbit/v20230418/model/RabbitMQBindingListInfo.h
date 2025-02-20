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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_

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
                     * 获取路由关系id
                     * @return BindingId 路由关系id
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置路由关系id
                     * @param _bindingId 路由关系id
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
                     * 获取Vhost参数
                     * @return VirtualHost Vhost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost参数
                     * @param _virtualHost Vhost参数
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
                     * 获取源exchange名称
                     * @return Source 源exchange名称
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源exchange名称
                     * @param _source 源exchange名称
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
                     * 获取目标类型,queue或exchange
                     * @return DestinationType 目标类型,queue或exchange
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置目标类型,queue或exchange
                     * @param _destinationType 目标类型,queue或exchange
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
                     * 获取目标资源名称
                     * @return Destination 目标资源名称
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置目标资源名称
                     * @param _destination 目标资源名称
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
                     * 获取绑定key
                     * @return RoutingKey 绑定key
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置绑定key
                     * @param _routingKey 绑定key
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
                     * 获取源exchange类型
                     * @return SourceExchangeType 源exchange类型
                     * 
                     */
                    std::string GetSourceExchangeType() const;

                    /**
                     * 设置源exchange类型
                     * @param _sourceExchangeType 源exchange类型
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 路由关系id
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                    /**
                     * Vhost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 源exchange名称
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标类型,queue或exchange
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * 目标资源名称
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * 绑定key
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * 源exchange类型
                     */
                    std::string m_sourceExchangeType;
                    bool m_sourceExchangeTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQBINDINGLISTINFO_H_
