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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANCOVERAGERESPONSE_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANCOVERAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/svp/v20240125/model/SavingPlanCoverageDetail.h>
#include <tencentcloud/svp/v20240125/model/SavingPlanCoverageRate.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * DescribeSavingPlanCoverage返回参数结构体
                */
                class DescribeSavingPlanCoverageResponse : public AbstractModel
                {
                public:
                    DescribeSavingPlanCoverageResponse();
                    ~DescribeSavingPlanCoverageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节省计划覆盖率明细数据
                     * @return DetailSet 节省计划覆盖率明细数据
                     * 
                     */
                    std::vector<SavingPlanCoverageDetail> GetDetailSet() const;

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                    /**
                     * 获取节省计划覆盖率聚合数据
                     * @return RateSet 节省计划覆盖率聚合数据
                     * 
                     */
                    std::vector<SavingPlanCoverageRate> GetRateSet() const;

                    /**
                     * 判断参数 RateSet 是否已赋值
                     * @return RateSet 是否已赋值
                     * 
                     */
                    bool RateSetHasBeenSet() const;

                    /**
                     * 获取查询命中的节省计划覆盖率明细数据总条数
                     * @return TotalCount 查询命中的节省计划覆盖率明细数据总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 节省计划覆盖率明细数据
                     */
                    std::vector<SavingPlanCoverageDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                    /**
                     * 节省计划覆盖率聚合数据
                     */
                    std::vector<SavingPlanCoverageRate> m_rateSet;
                    bool m_rateSetHasBeenSet;

                    /**
                     * 查询命中的节省计划覆盖率明细数据总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANCOVERAGERESPONSE_H_
