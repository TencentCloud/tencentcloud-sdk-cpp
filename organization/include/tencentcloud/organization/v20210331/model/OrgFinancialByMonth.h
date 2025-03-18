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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGFINANCIALBYMONTH_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGFINANCIALBYMONTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 按月获取组织财务信息
                */
                class OrgFinancialByMonth : public AbstractModel
                {
                public:
                    OrgFinancialByMonth();
                    ~OrgFinancialByMonth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID。
                     * @return Id 记录ID。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置记录ID。
                     * @param _id 记录ID。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取月份，格式：yyyy-mm，示例：2021-01。
                     * @return Month 月份，格式：yyyy-mm，示例：2021-01。
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，格式：yyyy-mm，示例：2021-01。
                     * @param _month 月份，格式：yyyy-mm，示例：2021-01。
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
                     * 获取消耗金额，单元：元。
                     * @return TotalCost 消耗金额，单元：元。
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置消耗金额，单元：元。
                     * @param _totalCost 消耗金额，单元：元。
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
                     * 获取比上月增长率%。正数增长，负数下降，空值无法统计。
                     * @return GrowthRate 比上月增长率%。正数增长，负数下降，空值无法统计。
                     * 
                     */
                    std::string GetGrowthRate() const;

                    /**
                     * 设置比上月增长率%。正数增长，负数下降，空值无法统计。
                     * @param _growthRate 比上月增长率%。正数增长，负数下降，空值无法统计。
                     * 
                     */
                    void SetGrowthRate(const std::string& _growthRate);

                    /**
                     * 判断参数 GrowthRate 是否已赋值
                     * @return GrowthRate 是否已赋值
                     * 
                     */
                    bool GrowthRateHasBeenSet() const;

                private:

                    /**
                     * 记录ID。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 月份，格式：yyyy-mm，示例：2021-01。
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 消耗金额，单元：元。
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 比上月增长率%。正数增长，负数下降，空值无法统计。
                     */
                    std::string m_growthRate;
                    bool m_growthRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGFINANCIALBYMONTH_H_
