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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/DrillPair.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDrillPairs返回参数结构体
                */
                class DescribeDrillPairsResponse : public AbstractModel
                {
                public:
                    DescribeDrillPairsResponse();
                    ~DescribeDrillPairsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效的容灾演练对数量。
                     * @return TotalCount 有效的容灾演练对数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取容灾演练对列表。
                     * @return DrillPairSet 容灾演练对列表。
                     * 
                     */
                    std::vector<DrillPair> GetDrillPairSet() const;

                    /**
                     * 判断参数 DrillPairSet 是否已赋值
                     * @return DrillPairSet 是否已赋值
                     * 
                     */
                    bool DrillPairSetHasBeenSet() const;

                private:

                    /**
                     * 有效的容灾演练对数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 容灾演练对列表。
                     */
                    std::vector<DrillPair> m_drillPairSet;
                    bool m_drillPairSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSRESPONSE_H_
