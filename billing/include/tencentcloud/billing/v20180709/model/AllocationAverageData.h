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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_

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
                * 分账账单趋势图平均值
                */
                class AllocationAverageData : public AbstractModel
                {
                public:
                    AllocationAverageData();
                    ~AllocationAverageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始月份
                     * @return BeginMonth 起始月份
                     * 
                     */
                    std::string GetBeginMonth() const;

                    /**
                     * 设置起始月份
                     * @param _beginMonth 起始月份
                     * 
                     */
                    void SetBeginMonth(const std::string& _beginMonth);

                    /**
                     * 判断参数 BeginMonth 是否已赋值
                     * @return BeginMonth 是否已赋值
                     * 
                     */
                    bool BeginMonthHasBeenSet() const;

                    /**
                     * 获取结束月份
                     * @return EndMonth 结束月份
                     * 
                     */
                    std::string GetEndMonth() const;

                    /**
                     * 设置结束月份
                     * @param _endMonth 结束月份
                     * 
                     */
                    void SetEndMonth(const std::string& _endMonth);

                    /**
                     * 判断参数 EndMonth 是否已赋值
                     * @return EndMonth 是否已赋值
                     * 
                     */
                    bool EndMonthHasBeenSet() const;

                    /**
                     * 获取合计费用(折后总额)平均值
                     * @return RealTotalCost 合计费用(折后总额)平均值
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置合计费用(折后总额)平均值
                     * @param _realTotalCost 合计费用(折后总额)平均值
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * 起始月份
                     */
                    std::string m_beginMonth;
                    bool m_beginMonthHasBeenSet;

                    /**
                     * 结束月份
                     */
                    std::string m_endMonth;
                    bool m_endMonthHasBeenSet;

                    /**
                     * 合计费用(折后总额)平均值
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_
