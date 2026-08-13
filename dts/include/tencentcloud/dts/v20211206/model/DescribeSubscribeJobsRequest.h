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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeJobs请求参数结构体
                */
                class DescribeSubscribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeSubscribeJobsRequest();
                    ~DescribeSubscribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>订阅 ID 筛选，精确匹配</p>
                     * @return SubscribeId <p>订阅 ID 筛选，精确匹配</p>
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置<p>订阅 ID 筛选，精确匹配</p>
                     * @param _subscribeId <p>订阅 ID 筛选，精确匹配</p>
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取<p>订阅 ID 筛选，精确匹配</p>
                     * @return SubscribeIds <p>订阅 ID 筛选，精确匹配</p>
                     * 
                     */
                    std::vector<std::string> GetSubscribeIds() const;

                    /**
                     * 设置<p>订阅 ID 筛选，精确匹配</p>
                     * @param _subscribeIds <p>订阅 ID 筛选，精确匹配</p>
                     * 
                     */
                    void SetSubscribeIds(const std::vector<std::string>& _subscribeIds);

                    /**
                     * 判断参数 SubscribeIds 是否已赋值
                     * @return SubscribeIds 是否已赋值
                     * 
                     */
                    bool SubscribeIdsHasBeenSet() const;

                    /**
                     * 获取<p>订阅名称，前缀模糊匹配</p>
                     * @return SubscribeName <p>订阅名称，前缀模糊匹配</p>
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置<p>订阅名称，前缀模糊匹配</p>
                     * @param _subscribeName <p>订阅名称，前缀模糊匹配</p>
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取<p>订阅的云上数据库实例的 ID，精确匹配</p>
                     * @return InstanceId <p>订阅的云上数据库实例的 ID，精确匹配</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>订阅的云上数据库实例的 ID，精确匹配</p>
                     * @param _instanceId <p>订阅的云上数据库实例的 ID，精确匹配</p>
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
                     * 获取<p>订阅的topicName</p>
                     * @return Topic <p>订阅的topicName</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>订阅的topicName</p>
                     * @param _topic <p>订阅的topicName</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>计费模式筛选，可能的值：0-包年包月，1-按量计费</p>
                     * @return PayType <p>计费模式筛选，可能的值：0-包年包月，1-按量计费</p>
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置<p>计费模式筛选，可能的值：0-包年包月，1-按量计费</p>
                     * @param _payType <p>计费模式筛选，可能的值：0-包年包月，1-按量计费</p>
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * @return Product <p>订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * @param _product <p>订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng</p>
                     * @return Status <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng</p>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng</p>
                     * @param _status <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng</p>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * @return SubsStatus <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * 
                     */
                    std::vector<std::string> GetSubsStatus() const;

                    /**
                     * 设置<p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * @param _subsStatus <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * 
                     */
                    void SetSubsStatus(const std::vector<std::string>& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取<p>返回记录的起始偏移量。默认0</p>
                     * @return Offset <p>返回记录的起始偏移量。默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>返回记录的起始偏移量。默认0</p>
                     * @param _offset <p>返回记录的起始偏移量。默认0</p>
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
                     * 获取<p>单次返回的记录数量。默认20，最大100</p>
                     * @return Limit <p>单次返回的记录数量。默认20，最大100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次返回的记录数量。默认20，最大100</p>
                     * @param _limit <p>单次返回的记录数量。默认20，最大100</p>
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
                     * 获取<p>排序方向，可选的值为&quot;DESC&quot;和&quot;ASC&quot;，默认为&quot;DESC&quot;，按创建时间逆序排序</p>
                     * @return OrderDirection <p>排序方向，可选的值为&quot;DESC&quot;和&quot;ASC&quot;，默认为&quot;DESC&quot;，按创建时间逆序排序</p>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>排序方向，可选的值为&quot;DESC&quot;和&quot;ASC&quot;，默认为&quot;DESC&quot;，按创建时间逆序排序</p>
                     * @param _orderDirection <p>排序方向，可选的值为&quot;DESC&quot;和&quot;ASC&quot;，默认为&quot;DESC&quot;，按创建时间逆序排序</p>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>tag 过滤条件，多个 TagFilter 之间关系为且</p>
                     * @return TagFilters <p>tag 过滤条件，多个 TagFilter 之间关系为且</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>tag 过滤条件，多个 TagFilter 之间关系为且</p>
                     * @param _tagFilters <p>tag 过滤条件，多个 TagFilter 之间关系为且</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>订阅 ID 筛选，精确匹配</p>
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * <p>订阅 ID 筛选，精确匹配</p>
                     */
                    std::vector<std::string> m_subscribeIds;
                    bool m_subscribeIdsHasBeenSet;

                    /**
                     * <p>订阅名称，前缀模糊匹配</p>
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * <p>订阅的云上数据库实例的 ID，精确匹配</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>订阅的topicName</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>计费模式筛选，可能的值：0-包年包月，1-按量计费</p>
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng</p>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     */
                    std::vector<std::string> m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * <p>返回记录的起始偏移量。默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次返回的记录数量。默认20，最大100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序方向，可选的值为&quot;DESC&quot;和&quot;ASC&quot;，默认为&quot;DESC&quot;，按创建时间逆序排序</p>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>tag 过滤条件，多个 TagFilter 之间关系为且</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_
