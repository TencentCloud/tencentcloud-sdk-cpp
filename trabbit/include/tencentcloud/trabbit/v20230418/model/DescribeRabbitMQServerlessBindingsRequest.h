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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_

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
                * DescribeRabbitMQServerlessBindings请求参数结构体
                */
                class DescribeRabbitMQServerlessBindingsRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessBindingsRequest();
                    ~DescribeRabbitMQServerlessBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取分页offset
                     * @return Offset 分页offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset
                     * @param _offset 分页offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页limit
                     * @return Limit 分页limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页limit
                     * @param _limit 分页limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * @return SearchWord 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * @param _searchWord 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取根据源Exchange精准搜索过滤
                     * @return SourceExchange 根据源Exchange精准搜索过滤
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置根据源Exchange精准搜索过滤
                     * @param _sourceExchange 根据源Exchange精准搜索过滤
                     * 
                     */
                    void SetSourceExchange(const std::string& _sourceExchange);

                    /**
                     * 判断参数 SourceExchange 是否已赋值
                     * @return SourceExchange 是否已赋值
                     * 
                     */
                    bool SourceExchangeHasBeenSet() const;

                    /**
                     * 获取根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置
                     * @return QueueName 根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置
                     * @param _queueName 根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * @return DestinationExchange 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * @param _destinationExchange 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * 
                     */
                    void SetDestinationExchange(const std::string& _destinationExchange);

                    /**
                     * 判断参数 DestinationExchange 是否已赋值
                     * @return DestinationExchange 是否已赋值
                     * 
                     */
                    bool DestinationExchangeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 分页offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 根据源Exchange精准搜索过滤
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * 根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
