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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用于询价输出
                */
                class InquiryPriceResult : public AbstractModel
                {
                public:
                    InquiryPriceResult();
                    ~InquiryPriceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原始价格
                     * @return OriginalCost 原始价格
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置原始价格
                     * @param OriginalCost 原始价格
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣后价格
                     * @return DiscountCost 折扣后价格
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置折扣后价格
                     * @param DiscountCost 折扣后价格
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param TimeUnit 时间单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间长度
                     * @return TimeSpan 时间长度
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度
                     * @param TimeSpan 时间长度
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 原始价格
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣后价格
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间长度
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERESULT_H_
