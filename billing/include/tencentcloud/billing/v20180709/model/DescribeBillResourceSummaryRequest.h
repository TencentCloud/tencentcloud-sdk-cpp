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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillResourceSummary请求参数结构体
                */
                class DescribeBillResourceSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryRequest();
                    ~DescribeBillResourceSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数量，最大值为1000
                     * @return Limit 数量，最大值为1000
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为1000
                     * @param Limit 数量，最大值为1000
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往[账单概览](https://console.cloud.tencent.com/expense/bill/overview)页面顶部查看确认您的账单统计周期类型。
                     * @return PeriodType 周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往[账单概览](https://console.cloud.tencent.com/expense/bill/overview)页面顶部查看确认您的账单统计周期类型。
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往[账单概览](https://console.cloud.tencent.com/expense/bill/overview)页面顶部查看确认您的账单统计周期类型。
                     * @param PeriodType 周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往[账单概览](https://console.cloud.tencent.com/expense/bill/overview)页面顶部查看确认您的账单统计周期类型。
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取月份，格式为yyyy-mm。不能早于开通账单2.0的月份，最多可拉取24个月内的数据。
                     * @return Month 月份，格式为yyyy-mm。不能早于开通账单2.0的月份，最多可拉取24个月内的数据。
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，格式为yyyy-mm。不能早于开通账单2.0的月份，最多可拉取24个月内的数据。
                     * @param Month 月份，格式为yyyy-mm。不能早于开通账单2.0的月份，最多可拉取24个月内的数据。
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * @return NeedRecordNum 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     */
                    int64_t GetNeedRecordNum() const;

                    /**
                     * 设置是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * @param NeedRecordNum 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     */
                    void SetNeedRecordNum(const int64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取查询交易类型。如 按量计费日结，按量计费小时结 等
                     * @return ActionType 查询交易类型。如 按量计费日结，按量计费小时结 等
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置查询交易类型。如 按量计费日结，按量计费小时结 等
                     * @param ActionType 查询交易类型。如 按量计费日结，按量计费小时结 等
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数量，最大值为1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往[账单概览](https://console.cloud.tencent.com/expense/bill/overview)页面顶部查看确认您的账单统计周期类型。
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * 月份，格式为yyyy-mm。不能早于开通账单2.0的月份，最多可拉取24个月内的数据。
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     */
                    int64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * 查询交易类型。如 按量计费日结，按量计费小时结 等
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_
