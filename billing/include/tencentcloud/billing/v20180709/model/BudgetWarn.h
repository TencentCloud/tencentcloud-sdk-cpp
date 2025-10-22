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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETWARN_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETWARN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 预算阈值提醒信息
                */
                class BudgetWarn : public AbstractModel
                {
                public:
                    BudgetWarn();
                    ~BudgetWarn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACTUAL 实际金额，
FORECAST 预测金额
                     * @return WarnType ACTUAL 实际金额，
FORECAST 预测金额
                     * 
                     */
                    std::string GetWarnType() const;

                    /**
                     * 设置ACTUAL 实际金额，
FORECAST 预测金额
                     * @param _warnType ACTUAL 实际金额，
FORECAST 预测金额
                     * 
                     */
                    void SetWarnType(const std::string& _warnType);

                    /**
                     * 判断参数 WarnType 是否已赋值
                     * @return WarnType 是否已赋值
                     * 
                     */
                    bool WarnTypeHasBeenSet() const;

                    /**
                     * 获取PERCENTAGE 预算金额的百分比，ABS 固定值
                     * @return CalType PERCENTAGE 预算金额的百分比，ABS 固定值
                     * 
                     */
                    std::string GetCalType() const;

                    /**
                     * 设置PERCENTAGE 预算金额的百分比，ABS 固定值
                     * @param _calType PERCENTAGE 预算金额的百分比，ABS 固定值
                     * 
                     */
                    void SetCalType(const std::string& _calType);

                    /**
                     * 判断参数 CalType 是否已赋值
                     * @return CalType 是否已赋值
                     * 
                     */
                    bool CalTypeHasBeenSet() const;

                    /**
                     * 获取阈值（大于等于0）
                     * @return ThresholdValue 阈值（大于等于0）
                     * 
                     */
                    std::string GetThresholdValue() const;

                    /**
                     * 设置阈值（大于等于0）
                     * @param _thresholdValue 阈值（大于等于0）
                     * 
                     */
                    void SetThresholdValue(const std::string& _thresholdValue);

                    /**
                     * 判断参数 ThresholdValue 是否已赋值
                     * @return ThresholdValue 是否已赋值
                     * 
                     */
                    bool ThresholdValueHasBeenSet() const;

                private:

                    /**
                     * ACTUAL 实际金额，
FORECAST 预测金额
                     */
                    std::string m_warnType;
                    bool m_warnTypeHasBeenSet;

                    /**
                     * PERCENTAGE 预算金额的百分比，ABS 固定值
                     */
                    std::string m_calType;
                    bool m_calTypeHasBeenSet;

                    /**
                     * 阈值（大于等于0）
                     */
                    std::string m_thresholdValue;
                    bool m_thresholdValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETWARN_H_
