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
                     * 获取订阅 ID 筛选，精确匹配
                     * @return SubscribeId 订阅 ID 筛选，精确匹配
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置订阅 ID 筛选，精确匹配
                     * @param _subscribeId 订阅 ID 筛选，精确匹配
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
                     * 获取订阅 ID 筛选，精确匹配
                     * @return SubscribeIds 订阅 ID 筛选，精确匹配
                     * 
                     */
                    std::vector<std::string> GetSubscribeIds() const;

                    /**
                     * 设置订阅 ID 筛选，精确匹配
                     * @param _subscribeIds 订阅 ID 筛选，精确匹配
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
                     * 获取订阅名称，前缀模糊匹配
                     * @return SubscribeName 订阅名称，前缀模糊匹配
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置订阅名称，前缀模糊匹配
                     * @param _subscribeName 订阅名称，前缀模糊匹配
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
                     * 获取订阅的云上数据库实例的 ID，精确匹配
                     * @return InstanceId 订阅的云上数据库实例的 ID，精确匹配
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置订阅的云上数据库实例的 ID，精确匹配
                     * @param _instanceId 订阅的云上数据库实例的 ID，精确匹配
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
                     * 获取订阅的topicName
                     * @return Topic 订阅的topicName
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置订阅的topicName
                     * @param _topic 订阅的topicName
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
                     * 获取计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * @return PayType 计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * @param _payType 计费模式筛选，可能的值：0-包年包月，1-按量计费
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
                     * 获取订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * @return Product 订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * @param _product 订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
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
                     * 获取数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng
                     * @return Status 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng
                     * @param _status 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng
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
                     * 获取数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * @return SubsStatus 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * 
                     */
                    std::vector<std::string> GetSubsStatus() const;

                    /**
                     * 设置数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * @param _subsStatus 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
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
                     * 获取返回记录的起始偏移量。默认0
                     * @return Offset 返回记录的起始偏移量。默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回记录的起始偏移量。默认0
                     * @param _offset 返回记录的起始偏移量。默认0
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
                     * 获取单次返回的记录数量。默认20，最大100
                     * @return Limit 单次返回的记录数量。默认20，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次返回的记录数量。默认20，最大100
                     * @param _limit 单次返回的记录数量。默认20，最大100
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
                     * 获取排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
                     * @return OrderDirection 排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
                     * @param _orderDirection 排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
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
                     * 获取tag 过滤条件，多个 TagFilter 之间关系为且
                     * @return TagFilters tag 过滤条件，多个 TagFilter 之间关系为且
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置tag 过滤条件，多个 TagFilter 之间关系为且
                     * @param _tagFilters tag 过滤条件，多个 TagFilter 之间关系为且
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
                     * 订阅 ID 筛选，精确匹配
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 订阅 ID 筛选，精确匹配
                     */
                    std::vector<std::string> m_subscribeIds;
                    bool m_subscribeIdsHasBeenSet;

                    /**
                     * 订阅名称，前缀模糊匹配
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * 订阅的云上数据库实例的 ID，精确匹配
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 订阅的topicName
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 计费模式筛选，可能的值：0-包年包月，1-按量计费
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 订阅的数据库产品，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining，按量转包年包月中 post2PrePayIng
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     */
                    std::vector<std::string> m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 返回记录的起始偏移量。默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次返回的记录数量。默认20，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * tag 过滤条件，多个 TagFilter 之间关系为且
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_
