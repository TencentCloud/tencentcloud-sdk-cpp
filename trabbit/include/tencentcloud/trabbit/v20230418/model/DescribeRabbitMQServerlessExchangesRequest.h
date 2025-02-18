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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_

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
                * DescribeRabbitMQServerlessExchanges请求参数结构体
                */
                class DescribeRabbitMQServerlessExchangesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessExchangesRequest();
                    ~DescribeRabbitMQServerlessExchangesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 id
                     * @return InstanceId 实例 id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 id
                     * @param _instanceId 实例 id
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
                     * 获取vhost 参数
                     * @return VirtualHost vhost 参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置vhost 参数
                     * @param _virtualHost vhost 参数
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
                     * 获取分页 offset
                     * @return Offset 分页 offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页 offset
                     * @param _offset 分页 offset
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
                     * 获取分页 limit
                     * @return Limit 分页 limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 limit
                     * @param _limit 分页 limit
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
                     * 获取筛选 exchange 类型, 数组中每个元素为选中的过滤类型
                     * @return ExchangeTypeFilters 筛选 exchange 类型, 数组中每个元素为选中的过滤类型
                     * 
                     */
                    std::vector<std::string> GetExchangeTypeFilters() const;

                    /**
                     * 设置筛选 exchange 类型, 数组中每个元素为选中的过滤类型
                     * @param _exchangeTypeFilters 筛选 exchange 类型, 数组中每个元素为选中的过滤类型
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
                     * @return SortOrder 排序顺序，ascend 或 descend
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序顺序，ascend 或 descend
                     * @param _sortOrder 排序顺序，ascend 或 descend
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
                     * 实例 id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * vhost 参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 分页 offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页 limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词, 支持模糊匹配 
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 筛选 exchange 类型, 数组中每个元素为选中的过滤类型
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
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGESREQUEST_H_
