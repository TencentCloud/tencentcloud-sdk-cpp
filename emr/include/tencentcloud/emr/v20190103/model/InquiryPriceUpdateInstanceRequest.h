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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UpdateInstanceSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceUpdateInstance请求参数结构体
                */
                class InquiryPriceUpdateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpdateInstanceRequest();
                    ~InquiryPriceUpdateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间单位。s:按量用例单位。m:包年包月用例单位
                     * @return TimeUnit 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位。s:按量用例单位。m:包年包月用例单位
                     * @param TimeUnit 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间长度。按量用例长度为3600。
                     * @return TimeSpan 时间长度。按量用例长度为3600。
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度。按量用例长度为3600。
                     * @param TimeSpan 时间长度。按量用例长度为3600。
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取变配参数
                     * @return UpdateSpec 变配参数
                     */
                    UpdateInstanceSettings GetUpdateSpec() const;

                    /**
                     * 设置变配参数
                     * @param UpdateSpec 变配参数
                     */
                    void SetUpdateSpec(const UpdateInstanceSettings& _updateSpec);

                    /**
                     * 判断参数 UpdateSpec 是否已赋值
                     * @return UpdateSpec 是否已赋值
                     */
                    bool UpdateSpecHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return PayMode 计费类型
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置计费类型
                     * @param PayMode 计费类型
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置位置信息
                     * @param Placement 位置信息
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取货币种类
                     * @return Currency 货币种类
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币种类
                     * @param Currency 货币种类
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 时间单位。s:按量用例单位。m:包年包月用例单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间长度。按量用例长度为3600。
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 变配参数
                     */
                    UpdateInstanceSettings m_updateSpec;
                    bool m_updateSpecHasBeenSet;

                    /**
                     * 计费类型
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 货币种类
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_
