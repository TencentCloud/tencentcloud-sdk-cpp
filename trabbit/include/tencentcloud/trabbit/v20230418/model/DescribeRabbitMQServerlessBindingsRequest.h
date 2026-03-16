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
                     * 获取<p>分页offset</p>
                     * @return Offset <p>分页offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页offset</p>
                     * @param _offset <p>分页offset</p>
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
                     * 获取<p>分页limit</p>
                     * @return Limit <p>分页limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页limit</p>
                     * @param _limit <p>分页limit</p>
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
                     * 获取<p>搜索关键词，根据源exchange名称/目标资源名称进行模糊搜索</p>
                     * @return SearchWord <p>搜索关键词，根据源exchange名称/目标资源名称进行模糊搜索</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索关键词，根据源exchange名称/目标资源名称进行模糊搜索</p>
                     * @param _searchWord <p>搜索关键词，根据源exchange名称/目标资源名称进行模糊搜索</p>
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
                     * 获取<p>根据源Exchange精准搜索过滤</p>
                     * @return SourceExchange <p>根据源Exchange精准搜索过滤</p>
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置<p>根据源Exchange精准搜索过滤</p>
                     * @param _sourceExchange <p>根据源Exchange精准搜索过滤</p>
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
                     * 获取<p>根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置</p>
                     * @return QueueName <p>根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置</p>
                     * @param _queueName <p>根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置</p>
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
                     * 获取<p>根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置</p>
                     * @return DestinationExchange <p>根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置</p>
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置<p>根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置</p>
                     * @param _destinationExchange <p>根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置</p>
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
                     * <p>分页offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>搜索关键词，根据源exchange名称/目标资源名称进行模糊搜索</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>根据源Exchange精准搜索过滤</p>
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * <p>根据目标QueueName精准搜索过滤，和DestinationExchange过滤不可同时设置</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置</p>
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
