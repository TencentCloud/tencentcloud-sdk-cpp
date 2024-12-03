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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICFLOWRANKINGREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICFLOWRANKINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeTopicFlowRanking请求参数结构体
                */
                class DescribeTopicFlowRankingRequest : public AbstractModel
                {
                public:
                    DescribeTopicFlowRankingRequest();
                    ~DescribeTopicFlowRankingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取排行类别，PRO：Topic生产流量；CON：Topic消费流量
                     * @return RankingType 排行类别，PRO：Topic生产流量；CON：Topic消费流量
                     * 
                     */
                    std::string GetRankingType() const;

                    /**
                     * 设置排行类别，PRO：Topic生产流量；CON：Topic消费流量
                     * @param _rankingType 排行类别，PRO：Topic生产流量；CON：Topic消费流量
                     * 
                     */
                    void SetRankingType(const std::string& _rankingType);

                    /**
                     * 判断参数 RankingType 是否已赋值
                     * @return RankingType 是否已赋值
                     * 
                     */
                    bool RankingTypeHasBeenSet() const;

                    /**
                     * 获取排行起始日期
                     * @return BeginDate 排行起始日期
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置排行起始日期
                     * @param _beginDate 排行起始日期
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取排行结束日期
                     * @return EndDate 排行结束日期
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置排行结束日期
                     * @param _endDate 排行结束日期
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Broker IP 地址
                     * @return BrokerIp Broker IP 地址
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Broker IP 地址
                     * @param _brokerIp Broker IP 地址
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 排行类别，PRO：Topic生产流量；CON：Topic消费流量
                     */
                    std::string m_rankingType;
                    bool m_rankingTypeHasBeenSet;

                    /**
                     * 排行起始日期
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 排行结束日期
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Broker IP 地址
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICFLOWRANKINGREQUEST_H_
