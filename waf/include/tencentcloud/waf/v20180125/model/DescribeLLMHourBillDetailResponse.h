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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMBillItemFee.h>
#include <tencentcloud/waf/v20180125/model/LLMHourBillTrendItem.h>
#include <tencentcloud/waf/v20180125/model/LLMHourBillDetailItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMHourBillDetail返回参数结构体
                */
                class DescribeLLMHourBillDetailResponse : public AbstractModel
                {
                public:
                    DescribeLLMHourBillDetailResponse();
                    ~DescribeLLMHourBillDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取查询日期，归一化为YYYY-MM-DD格式
                     * @return Date 查询日期，归一化为YYYY-MM-DD格式
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取当日账单预估总额（元，扣减免费额度后的净费用）
                     * @return EstimatedTotalFee 当日账单预估总额（元，扣减免费额度后的净费用）
                     * 
                     */
                    std::string GetEstimatedTotalFee() const;

                    /**
                     * 判断参数 EstimatedTotalFee 是否已赋值
                     * @return EstimatedTotalFee 是否已赋值
                     * 
                     */
                    bool EstimatedTotalFeeHasBeenSet() const;

                    /**
                     * 获取当日按计费项拆分的费用
                     * @return ItemFees 当日按计费项拆分的费用
                     * 
                     */
                    LLMBillItemFee GetItemFees() const;

                    /**
                     * 判断参数 ItemFees 是否已赋值
                     * @return ItemFees 是否已赋值
                     * 
                     */
                    bool ItemFeesHasBeenSet() const;

                    /**
                     * 获取24小时账单趋势，固定24条，无数据补0
                     * @return HourlyTrend 24小时账单趋势，固定24条，无数据补0
                     * 
                     */
                    std::vector<LLMHourBillTrendItem> GetHourlyTrend() const;

                    /**
                     * 判断参数 HourlyTrend 是否已赋值
                     * @return HourlyTrend 是否已赋值
                     * 
                     */
                    bool HourlyTrendHasBeenSet() const;

                    /**
                     * 获取24小时账单明细，固定24条，无数据补0
                     * @return HourlyDetail 24小时账单明细，固定24条，无数据补0
                     * 
                     */
                    std::vector<LLMHourBillDetailItem> GetHourlyDetail() const;

                    /**
                     * 判断参数 HourlyDetail 是否已赋值
                     * @return HourlyDetail 是否已赋值
                     * 
                     */
                    bool HourlyDetailHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询日期，归一化为YYYY-MM-DD格式
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 当日账单预估总额（元，扣减免费额度后的净费用）
                     */
                    std::string m_estimatedTotalFee;
                    bool m_estimatedTotalFeeHasBeenSet;

                    /**
                     * 当日按计费项拆分的费用
                     */
                    LLMBillItemFee m_itemFees;
                    bool m_itemFeesHasBeenSet;

                    /**
                     * 24小时账单趋势，固定24条，无数据补0
                     */
                    std::vector<LLMHourBillTrendItem> m_hourlyTrend;
                    bool m_hourlyTrendHasBeenSet;

                    /**
                     * 24小时账单明细，固定24条，无数据补0
                     */
                    std::vector<LLMHourBillDetailItem> m_hourlyDetail;
                    bool m_hourlyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMHOURBILLDETAILRESPONSE_H_
