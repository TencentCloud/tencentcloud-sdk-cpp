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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_

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
                * DescribeBillAdjustInfo请求参数结构体
                */
                class DescribeBillAdjustInfoRequest : public AbstractModel
                {
                public:
                    DescribeBillAdjustInfoRequest();
                    ~DescribeBillAdjustInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>格式：yyyy-MM<br>账单月份，month和timeFrom&amp;timeTo必传一个，如果有传timeFrom&amp;timeTo则month字段无效</p>
                     * @return Month <p>格式：yyyy-MM<br>账单月份，month和timeFrom&amp;timeTo必传一个，如果有传timeFrom&amp;timeTo则month字段无效</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>格式：yyyy-MM<br>账单月份，month和timeFrom&amp;timeTo必传一个，如果有传timeFrom&amp;timeTo则month字段无效</p>
                     * @param _month <p>格式：yyyy-MM<br>账单月份，month和timeFrom&amp;timeTo必传一个，如果有传timeFrom&amp;timeTo则month字段无效</p>
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取<p>格式：yyyy-MM-dd<br>开始时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * @return TimeFrom <p>格式：yyyy-MM-dd<br>开始时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置<p>格式：yyyy-MM-dd<br>开始时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * @param _timeFrom <p>格式：yyyy-MM-dd<br>开始时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * 
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     * 
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取<p>格式：yyyy-MM-dd<br>截止时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * @return TimeTo <p>格式：yyyy-MM-dd<br>截止时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置<p>格式：yyyy-MM-dd<br>截止时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * @param _timeTo <p>格式：yyyy-MM-dd<br>截止时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     * 
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     * 
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @return PayerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @param _payerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                private:

                    /**
                     * <p>格式：yyyy-MM<br>账单月份，month和timeFrom&amp;timeTo必传一个，如果有传timeFrom&amp;timeTo则month字段无效</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>格式：yyyy-MM-dd<br>开始时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * <p>格式：yyyy-MM-dd<br>截止时间，month和timeFrom&amp;timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据</p>
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_
