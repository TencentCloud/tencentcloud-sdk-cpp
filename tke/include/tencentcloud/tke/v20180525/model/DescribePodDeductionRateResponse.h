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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODDEDUCTIONRATERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODDEDUCTIONRATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PodDeductionRate.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePodDeductionRate返回参数结构体
                */
                class DescribePodDeductionRateResponse : public AbstractModel
                {
                public:
                    DescribePodDeductionRateResponse();
                    ~DescribePodDeductionRateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各个规格的 可被预留券抵扣的Pod 抵扣率
                     * @return PodDeductionRateSet 各个规格的 可被预留券抵扣的Pod 抵扣率
                     * 
                     */
                    std::vector<PodDeductionRate> GetPodDeductionRateSet() const;

                    /**
                     * 判断参数 PodDeductionRateSet 是否已赋值
                     * @return PodDeductionRateSet 是否已赋值
                     * 
                     */
                    bool PodDeductionRateSetHasBeenSet() const;

                private:

                    /**
                     * 各个规格的 可被预留券抵扣的Pod 抵扣率
                     */
                    std::vector<PodDeductionRate> m_podDeductionRateSet;
                    bool m_podDeductionRateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPODDEDUCTIONRATERESPONSE_H_
