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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEUSAGEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeUsage请求参数结构体
                */
                class DescribeUsageRequest : public AbstractModel
                {
                public:
                    DescribeUsageRequest();
                    ~DescribeUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用信息，此接口Agent.AppId必填
                     * @return Agent 应用信息，此接口Agent.AppId必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用信息，此接口Agent.AppId必填
                     * @param Agent 应用信息，此接口Agent.AppId必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取开始时间，例如：2021-03-21
                     * @return StartDate 开始时间，例如：2021-03-21
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始时间，例如：2021-03-21
                     * @param StartDate 开始时间，例如：2021-03-21
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束时间，例如：2021-06-21；
开始时间到结束时间的区间长度小于等于90天。
                     * @return EndDate 结束时间，例如：2021-06-21；
开始时间到结束时间的区间长度小于等于90天。
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间，例如：2021-06-21；
开始时间到结束时间的区间长度小于等于90天。
                     * @param EndDate 结束时间，例如：2021-06-21；
开始时间到结束时间的区间长度小于等于90天。
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取是否汇总数据，默认不汇总。
不汇总：返回在统计区间内渠道下所有企业的每日明细，即每个企业N条数据，N为统计天数；
汇总：返回在统计区间内渠道下所有企业的汇总后数据，即每个企业一条数据；
                     * @return NeedAggregate 是否汇总数据，默认不汇总。
不汇总：返回在统计区间内渠道下所有企业的每日明细，即每个企业N条数据，N为统计天数；
汇总：返回在统计区间内渠道下所有企业的汇总后数据，即每个企业一条数据；
                     */
                    bool GetNeedAggregate() const;

                    /**
                     * 设置是否汇总数据，默认不汇总。
不汇总：返回在统计区间内渠道下所有企业的每日明细，即每个企业N条数据，N为统计天数；
汇总：返回在统计区间内渠道下所有企业的汇总后数据，即每个企业一条数据；
                     * @param NeedAggregate 是否汇总数据，默认不汇总。
不汇总：返回在统计区间内渠道下所有企业的每日明细，即每个企业N条数据，N为统计天数；
汇总：返回在统计区间内渠道下所有企业的汇总后数据，即每个企业一条数据；
                     */
                    void SetNeedAggregate(const bool& _needAggregate);

                    /**
                     * 判断参数 NeedAggregate 是否已赋值
                     * @return NeedAggregate 是否已赋值
                     */
                    bool NeedAggregateHasBeenSet() const;

                    /**
                     * 获取单次返回的最多条目数量。默认为1000，且不能超过1000。
                     * @return Limit 单次返回的最多条目数量。默认为1000，且不能超过1000。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次返回的最多条目数量。默认为1000，且不能超过1000。
                     * @param Limit 单次返回的最多条目数量。默认为1000，且不能超过1000。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认是0。
                     * @return Offset 偏移量，默认是0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认是0。
                     * @param Offset 偏移量，默认是0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param Operator 暂未开放
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用信息，此接口Agent.AppId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 开始时间，例如：2021-03-21
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束时间，例如：2021-06-21；
开始时间到结束时间的区间长度小于等于90天。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 是否汇总数据，默认不汇总。
不汇总：返回在统计区间内渠道下所有企业的每日明细，即每个企业N条数据，N为统计天数；
汇总：返回在统计区间内渠道下所有企业的汇总后数据，即每个企业一条数据；
                     */
                    bool m_needAggregate;
                    bool m_needAggregateHasBeenSet;

                    /**
                     * 单次返回的最多条目数量。默认为1000，且不能超过1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认是0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBEUSAGEREQUEST_H_
