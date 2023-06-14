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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNREGIONBANDWIDTHLIMITSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNREGIONBANDWIDTHLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcnRegionBandwidthLimits返回参数结构体
                */
                class DescribeCcnRegionBandwidthLimitsResponse : public AbstractModel
                {
                public:
                    DescribeCcnRegionBandwidthLimitsResponse();
                    ~DescribeCcnRegionBandwidthLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网（CCN）各地域出带宽上限
                     * @return CcnRegionBandwidthLimitSet 云联网（CCN）各地域出带宽上限
                     * 
                     */
                    std::vector<CcnRegionBandwidthLimit> GetCcnRegionBandwidthLimitSet() const;

                    /**
                     * 判断参数 CcnRegionBandwidthLimitSet 是否已赋值
                     * @return CcnRegionBandwidthLimitSet 是否已赋值
                     * 
                     */
                    bool CcnRegionBandwidthLimitSetHasBeenSet() const;

                private:

                    /**
                     * 云联网（CCN）各地域出带宽上限
                     */
                    std::vector<CcnRegionBandwidthLimit> m_ccnRegionBandwidthLimitSet;
                    bool m_ccnRegionBandwidthLimitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNREGIONBANDWIDTHLIMITSRESPONSE_H_
