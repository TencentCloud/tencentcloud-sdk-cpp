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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESREQUEST_H_

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
                * DescribeRabbitMQExchanges请求参数结构体
                */
                class DescribeRabbitMQExchangesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQExchangesRequest();
                    ~DescribeRabbitMQExchangesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @return VirtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @param _virtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
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
                     * 获取分页 offset，默认 0
                     * @return Offset 分页 offset，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页 offset，默认 0
                     * @param _offset 分页 offset，默认 0
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
                     * 获取分页 limit，默认 20
                     * @return Limit 分页 limit，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 limit，默认 20
                     * @param _limit 分页 limit，默认 20
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
                     * 获取搜索关键词, 支持模糊匹配 
                     * @return SearchWord 搜索关键词, 支持模糊匹配 
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词, 支持模糊匹配 
                     * @param _searchWord 搜索关键词, 支持模糊匹配 
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
                     * 获取筛选 exchange 类型, 数组中每个元素为选中的过滤类型，仅支持 direct、fanout、topic、header
                     * @return ExchangeTypeFilters 筛选 exchange 类型, 数组中每个元素为选中的过滤类型，仅支持 direct、fanout、topic、header
                     * 
                     */
                    std::vector<std::string> GetExchangeTypeFilters() const;

                    /**
                     * 设置筛选 exchange 类型, 数组中每个元素为选中的过滤类型，仅支持 direct、fanout、topic、header
                     * @param _exchangeTypeFilters 筛选 exchange 类型, 数组中每个元素为选中的过滤类型，仅支持 direct、fanout、topic、header
                     * 
                     */
                    void SetExchangeTypeFilters(const std::vector<std::string>& _exchangeTypeFilters);

                    /**
                     * 判断参数 ExchangeTypeFilters 是否已赋值
                     * @return ExchangeTypeFilters 是否已赋值
                     * 
                     */
                    bool ExchangeTypeFiltersHasBeenSet() const;

                    /**
                     * 获取筛选 exchange 创建来源,  "system":"系统创建", "user":"用户创建"
                     * @return ExchangeCreatorFilters 筛选 exchange 创建来源,  "system":"系统创建", "user":"用户创建"
                     * 
                     */
                    std::vector<std::string> GetExchangeCreatorFilters() const;

                    /**
                     * 设置筛选 exchange 创建来源,  "system":"系统创建", "user":"用户创建"
                     * @param _exchangeCreatorFilters 筛选 exchange 创建来源,  "system":"系统创建", "user":"用户创建"
                     * 
                     */
                    void SetExchangeCreatorFilters(const std::vector<std::string>& _exchangeCreatorFilters);

                    /**
                     * 判断参数 ExchangeCreatorFilters 是否已赋值
                     * @return ExchangeCreatorFilters 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorFiltersHasBeenSet() const;

                    /**
                     * 获取exchange 名称，用于精确匹配
                     * @return ExchangeName exchange 名称，用于精确匹配
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange 名称，用于精确匹配
                     * @param _exchangeName exchange 名称，用于精确匹配
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取排序依据的字段：
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * @return SortElement 排序依据的字段：
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置排序依据的字段：
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * @param _sortElement 排序依据的字段：
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * @return SortOrder 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * @param _sortOrder 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 分页 offset，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页 limit，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词, 支持模糊匹配 
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 筛选 exchange 类型, 数组中每个元素为选中的过滤类型，仅支持 direct、fanout、topic、header
                     */
                    std::vector<std::string> m_exchangeTypeFilters;
                    bool m_exchangeTypeFiltersHasBeenSet;

                    /**
                     * 筛选 exchange 创建来源,  "system":"系统创建", "user":"用户创建"
                     */
                    std::vector<std::string> m_exchangeCreatorFilters;
                    bool m_exchangeCreatorFiltersHasBeenSet;

                    /**
                     * exchange 名称，用于精确匹配
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * 排序依据的字段：
MessageRateInOut - 生产消费速率之和；
MessageRateIn - 生产速率；
MessageRateOut - 消费速率；
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * 排序顺序，ascend 或 descend
ascend：升序
descend：降序
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESREQUEST_H_
