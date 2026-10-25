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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/TDEMSSEDistributionBin.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSSEDistribution返回参数结构体
                */
                class DescribeTDEMSSEDistributionResponse : public AbstractModel
                {
                public:
                    DescribeTDEMSSEDistributionResponse();
                    ~DescribeTDEMSSEDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分布档。没有样本时为空数组。最后一档 Overflow 为 true 且省略 End。</p>
                     * @return Bins <p>分布档。没有样本时为空数组。最后一档 Overflow 为 true 且省略 End。</p>
                     * 
                     */
                    std::vector<TDEMSSEDistributionBin> GetBins() const;

                    /**
                     * 判断参数 Bins 是否已赋值
                     * @return Bins 是否已赋值
                     * 
                     */
                    bool BinsHasBeenSet() const;

                private:

                    /**
                     * <p>分布档。没有样本时为空数组。最后一档 Overflow 为 true 且省略 End。</p>
                     */
                    std::vector<TDEMSSEDistributionBin> m_bins;
                    bool m_binsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEDISTRIBUTIONRESPONSE_H_
