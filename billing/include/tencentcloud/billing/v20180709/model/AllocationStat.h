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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSTAT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationAverageData.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账账单趋势图
                */
                class AllocationStat : public AbstractModel
                {
                public:
                    AllocationStat();
                    ~AllocationStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取费用平均信息
                     * @return Average 费用平均信息
                     * 
                     */
                    AllocationAverageData GetAverage() const;

                    /**
                     * 设置费用平均信息
                     * @param _average 费用平均信息
                     * 
                     */
                    void SetAverage(const AllocationAverageData& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                private:

                    /**
                     * 费用平均信息
                     */
                    AllocationAverageData m_average;
                    bool m_averageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSTAT_H_
