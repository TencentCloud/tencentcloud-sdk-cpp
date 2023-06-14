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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_GENERALSTAT_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_GENERALSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 调用量统计信息，包括周/日/月/总调用量
                */
                class GeneralStat : public AbstractModel
                {
                public:
                    GeneralStat();
                    ~GeneralStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取今日调用量
                     * @return TodayAmount 今日调用量
                     * 
                     */
                    uint64_t GetTodayAmount() const;

                    /**
                     * 设置今日调用量
                     * @param _todayAmount 今日调用量
                     * 
                     */
                    void SetTodayAmount(const uint64_t& _todayAmount);

                    /**
                     * 判断参数 TodayAmount 是否已赋值
                     * @return TodayAmount 是否已赋值
                     * 
                     */
                    bool TodayAmountHasBeenSet() const;

                    /**
                     * 获取本周调用量
                     * @return WeekAmount 本周调用量
                     * 
                     */
                    uint64_t GetWeekAmount() const;

                    /**
                     * 设置本周调用量
                     * @param _weekAmount 本周调用量
                     * 
                     */
                    void SetWeekAmount(const uint64_t& _weekAmount);

                    /**
                     * 判断参数 WeekAmount 是否已赋值
                     * @return WeekAmount 是否已赋值
                     * 
                     */
                    bool WeekAmountHasBeenSet() const;

                    /**
                     * 获取本月调用量
                     * @return MonthAmount 本月调用量
                     * 
                     */
                    uint64_t GetMonthAmount() const;

                    /**
                     * 设置本月调用量
                     * @param _monthAmount 本月调用量
                     * 
                     */
                    void SetMonthAmount(const uint64_t& _monthAmount);

                    /**
                     * 判断参数 MonthAmount 是否已赋值
                     * @return MonthAmount 是否已赋值
                     * 
                     */
                    bool MonthAmountHasBeenSet() const;

                    /**
                     * 获取总调用量
                     * @return TotalAmount 总调用量
                     * 
                     */
                    uint64_t GetTotalAmount() const;

                    /**
                     * 设置总调用量
                     * @param _totalAmount 总调用量
                     * 
                     */
                    void SetTotalAmount(const uint64_t& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                private:

                    /**
                     * 今日调用量
                     */
                    uint64_t m_todayAmount;
                    bool m_todayAmountHasBeenSet;

                    /**
                     * 本周调用量
                     */
                    uint64_t m_weekAmount;
                    bool m_weekAmountHasBeenSet;

                    /**
                     * 本月调用量
                     */
                    uint64_t m_monthAmount;
                    bool m_monthAmountHasBeenSet;

                    /**
                     * 总调用量
                     */
                    uint64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_GENERALSTAT_H_
