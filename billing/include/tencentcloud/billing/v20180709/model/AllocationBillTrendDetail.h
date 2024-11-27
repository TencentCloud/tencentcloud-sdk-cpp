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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONBILLTRENDDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONBILLTRENDDETAIL_H_

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
                * 分账趋势图详情数据
                */
                class AllocationBillTrendDetail : public AbstractModel
                {
                public:
                    AllocationBillTrendDetail();
                    ~AllocationBillTrendDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账单月份
                     * @return Month 账单月份
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份
                     * @param _month 账单月份
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
                     * 获取账单月份展示名称
                     * @return Name 账单月份展示名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账单月份展示名称
                     * @param _name 账单月份展示名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * @return RealTotalCost 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     * @param _realTotalCost 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
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
                     * 账单月份
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 账单月份展示名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合计费用(折后总额)：分账单元总费用，归集费用(折后总额) + 分摊费用(折后总额)
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONBILLTRENDDETAIL_H_
