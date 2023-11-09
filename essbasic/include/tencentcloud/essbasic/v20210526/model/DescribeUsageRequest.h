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
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取查询日期范围的开始时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-03-21)

注: `查询日期范围区间长度大于90天`。
                     * @return StartDate 查询日期范围的开始时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-03-21)

注: `查询日期范围区间长度大于90天`。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询日期范围的开始时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-03-21)

注: `查询日期范围区间长度大于90天`。
                     * @param _startDate 查询日期范围的开始时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-03-21)

注: `查询日期范围区间长度大于90天`。
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询日期范围的结束时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-04-21)

注: `查询日期范围区间长度大于90天`。
                     * @return EndDate 查询日期范围的结束时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-04-21)

注: `查询日期范围区间长度大于90天`。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询日期范围的结束时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-04-21)

注: `查询日期范围区间长度大于90天`。
                     * @param _endDate 查询日期范围的结束时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-04-21)

注: `查询日期范围区间长度大于90天`。
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
                     * 获取是否汇总数据，默认不汇总。
<ul><li> **true** :  汇总数据,  即每个企业一条数据, 对日志范围内的数据相加</li>
<li> **false** :  不会总数据,  返回企业每日明细,   按日期返回每个企业的数据(如果企业对应天数没有操作则无此企业此日期的数据)</li></ul>

                     * @return NeedAggregate 是否汇总数据，默认不汇总。
<ul><li> **true** :  汇总数据,  即每个企业一条数据, 对日志范围内的数据相加</li>
<li> **false** :  不会总数据,  返回企业每日明细,   按日期返回每个企业的数据(如果企业对应天数没有操作则无此企业此日期的数据)</li></ul>

                     * 
                     */
                    bool GetNeedAggregate() const;

                    /**
                     * 设置是否汇总数据，默认不汇总。
<ul><li> **true** :  汇总数据,  即每个企业一条数据, 对日志范围内的数据相加</li>
<li> **false** :  不会总数据,  返回企业每日明细,   按日期返回每个企业的数据(如果企业对应天数没有操作则无此企业此日期的数据)</li></ul>

                     * @param _needAggregate 是否汇总数据，默认不汇总。
<ul><li> **true** :  汇总数据,  即每个企业一条数据, 对日志范围内的数据相加</li>
<li> **false** :  不会总数据,  返回企业每日明细,   按日期返回每个企业的数据(如果企业对应天数没有操作则无此企业此日期的数据)</li></ul>

                     * 
                     */
                    void SetNeedAggregate(const bool& _needAggregate);

                    /**
                     * 判断参数 NeedAggregate 是否已赋值
                     * @return NeedAggregate 是否已赋值
                     * 
                     */
                    bool NeedAggregateHasBeenSet() const;

                    /**
                     * 获取指定每页返回的数据条数，和Offset参数配合使用。

注: `默认值为1000，单页做大值为1000`
                     * @return Limit 指定每页返回的数据条数，和Offset参数配合使用。

注: `默认值为1000，单页做大值为1000`
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页返回的数据条数，和Offset参数配合使用。

注: `默认值为1000，单页做大值为1000`
                     * @param _limit 指定每页返回的数据条数，和Offset参数配合使用。

注: `默认值为1000，单页做大值为1000`
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`offset从0开始，即第一页为0。`
                     * @return Offset 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`offset从0开始，即第一页为0。`
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`offset从0开始，即第一页为0。`
                     * @param _offset 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`offset从0开始，即第一页为0。`
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
</ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 查询日期范围的开始时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-03-21)

注: `查询日期范围区间长度大于90天`。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询日期范围的结束时间, 查询会包含此日期的数据 , 格式为yyyy-mm-dd (例如：2021-04-21)

注: `查询日期范围区间长度大于90天`。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 是否汇总数据，默认不汇总。
<ul><li> **true** :  汇总数据,  即每个企业一条数据, 对日志范围内的数据相加</li>
<li> **false** :  不会总数据,  返回企业每日明细,   按日期返回每个企业的数据(如果企业对应天数没有操作则无此企业此日期的数据)</li></ul>

                     */
                    bool m_needAggregate;
                    bool m_needAggregateHasBeenSet;

                    /**
                     * 指定每页返回的数据条数，和Offset参数配合使用。

注: `默认值为1000，单页做大值为1000`
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询结果分页返回，指定从第几页返回数据，和Limit参数配合使用。

注：`offset从0开始，即第一页为0。`
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
