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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSubscribes请求参数结构体
                */
                class DescribeSubscribesRequest : public AbstractModel
                {
                public:
                    DescribeSubscribesRequest();
                    ~DescribeSubscribesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅的实例ID
                     * @return SubscribeId 数据订阅的实例ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅的实例ID
                     * @param _subscribeId 数据订阅的实例ID
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
                     * 获取数据订阅的实例名称
                     * @return SubscribeName 数据订阅的实例名称
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置数据订阅的实例名称
                     * @param _subscribeName 数据订阅的实例名称
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
                     * 获取绑定数据库实例的ID
                     * @return InstanceId 绑定数据库实例的ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置绑定数据库实例的ID
                     * @param _instanceId 绑定数据库实例的ID
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
                     * 获取数据订阅实例的通道ID
                     * @return ChannelId 数据订阅实例的通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置数据订阅实例的通道ID
                     * @param _channelId 数据订阅实例的通道ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * @return PayType 计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * @param _payType 计费模式筛选，可能的值：0-包年包月，1-按量计费
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取订阅的数据库产品，如mysql
                     * @return Product 订阅的数据库产品，如mysql
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置订阅的数据库产品，如mysql
                     * @param _product 订阅的数据库产品，如mysql
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
                     * 获取数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中
                     * @return Status 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中
                     * @param _status 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中
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
                     * 获取数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     * @return SubsStatus 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     * 
                     */
                    std::vector<std::string> GetSubsStatus() const;

                    /**
                     * 设置数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     * @param _subsStatus 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
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
                     * 获取返回记录的起始偏移量，默认为0。请输入非负整数
                     * @return Offset 返回记录的起始偏移量，默认为0。请输入非负整数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回记录的起始偏移量，默认为0。请输入非负整数
                     * @param _offset 返回记录的起始偏移量，默认为0。请输入非负整数
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
                     * 获取单次返回的记录数量，默认20。请输入1到100的整数
                     * @return Limit 单次返回的记录数量，默认20。请输入1到100的整数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次返回的记录数量，默认20。请输入1到100的整数
                     * @param _limit 单次返回的记录数量，默认20。请输入1到100的整数
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
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagFilters 标签过滤条件
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取订阅实例版本;txdts-旧版数据订阅，kafka-kafka版本数据订阅
                     * @return SubscribeVersion 订阅实例版本;txdts-旧版数据订阅，kafka-kafka版本数据订阅
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置订阅实例版本;txdts-旧版数据订阅，kafka-kafka版本数据订阅
                     * @param _subscribeVersion 订阅实例版本;txdts-旧版数据订阅，kafka-kafka版本数据订阅
                     * 
                     */
                    void SetSubscribeVersion(const std::string& _subscribeVersion);

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                private:

                    /**
                     * 数据订阅的实例ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅的实例名称
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * 绑定数据库实例的ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据订阅实例的通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 计费模式筛选，可能的值：0-包年包月，1-按量计费
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 订阅的数据库产品，如mysql
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     */
                    std::vector<std::string> m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 返回记录的起始偏移量，默认为0。请输入非负整数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次返回的记录数量，默认20。请输入1到100的整数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方向，可选的值为"DESC"和"ASC"，默认为"DESC"，按创建时间逆序排序
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 订阅实例版本;txdts-旧版数据订阅，kafka-kafka版本数据订阅
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_
