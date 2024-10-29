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
                     * 获取格式：yyyy-MM
账单月份，month和timeFrom&timeTo必传一个，如果有传timeFrom&timeTo则month字段无效
                     * @return Month 格式：yyyy-MM
账单月份，month和timeFrom&timeTo必传一个，如果有传timeFrom&timeTo则month字段无效
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置格式：yyyy-MM
账单月份，month和timeFrom&timeTo必传一个，如果有传timeFrom&timeTo则month字段无效
                     * @param _month 格式：yyyy-MM
账单月份，month和timeFrom&timeTo必传一个，如果有传timeFrom&timeTo则month字段无效
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
                     * 获取格式：yyyy-MM-dd
开始时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * @return TimeFrom 格式：yyyy-MM-dd
开始时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置格式：yyyy-MM-dd
开始时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * @param _timeFrom 格式：yyyy-MM-dd
开始时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
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
                     * 获取格式：yyyy-MM-dd
截止时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * @return TimeTo 格式：yyyy-MM-dd
截止时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置格式：yyyy-MM-dd
截止时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * @param _timeTo 格式：yyyy-MM-dd
截止时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     * 
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     * 
                     */
                    bool TimeToHasBeenSet() const;

                private:

                    /**
                     * 格式：yyyy-MM
账单月份，month和timeFrom&timeTo必传一个，如果有传timeFrom&timeTo则month字段无效
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 格式：yyyy-MM-dd
开始时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * 格式：yyyy-MM-dd
截止时间，month和timeFrom&timeTo必传一个，如果有该字段则month字段无效。timeFrom和timeTo必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_
