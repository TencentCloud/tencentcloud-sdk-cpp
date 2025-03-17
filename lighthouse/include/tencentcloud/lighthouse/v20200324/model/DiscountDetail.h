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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/PolicyDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 套餐折扣详情（仅用于控制台调用询价相关接口返回）。
                */
                class DiscountDetail : public AbstractModel
                {
                public:
                    DiscountDetail();
                    ~DiscountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费时长。
                     * @return TimeSpan 计费时长。
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置计费时长。
                     * @param _timeSpan 计费时长。
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时间单位。
取值为：
- m - 月
- d - 日
                     * @return TimeUnit 时间单位。
取值为：
- m - 月
- d - 日
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位。
取值为：
- m - 月
- d - 日
                     * @param _timeUnit 时间单位。
取值为：
- m - 月
- d - 日
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取总价。
                     * @return TotalCost 总价。
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置总价。
                     * @param _totalCost 总价。
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取折后总价。
                     * @return RealTotalCost 折后总价。
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置折后总价。
                     * @param _realTotalCost 折后总价。
                     * 
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取折扣。
                     * @return Discount 折扣。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣。
                     * @param _discount 折扣。
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取具体折扣详情。
                     * @return PolicyDetail 具体折扣详情。
                     * 
                     */
                    PolicyDetail GetPolicyDetail() const;

                    /**
                     * 设置具体折扣详情。
                     * @param _policyDetail 具体折扣详情。
                     * 
                     */
                    void SetPolicyDetail(const PolicyDetail& _policyDetail);

                    /**
                     * 判断参数 PolicyDetail 是否已赋值
                     * @return PolicyDetail 是否已赋值
                     * 
                     */
                    bool PolicyDetailHasBeenSet() const;

                private:

                    /**
                     * 计费时长。
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时间单位。
取值为：
- m - 月
- d - 日
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 总价。
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 折后总价。
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 折扣。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 具体折扣详情。
                     */
                    PolicyDetail m_policyDetail;
                    bool m_policyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISCOUNTDETAIL_H_
