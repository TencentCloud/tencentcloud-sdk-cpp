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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGERESPONSE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/AvailableRecoveryTimeRange.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * DescribeClusterRecoveryTimeRange返回参数结构体
                */
                class DescribeClusterRecoveryTimeRangeResponse : public AbstractModel
                {
                public:
                    DescribeClusterRecoveryTimeRangeResponse();
                    ~DescribeClusterRecoveryTimeRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可回档时间范围列表
                     * @return AvailableRecoveryTimeRangeSet 可回档时间范围列表
                     * 
                     */
                    std::vector<AvailableRecoveryTimeRange> GetAvailableRecoveryTimeRangeSet() const;

                    /**
                     * 判断参数 AvailableRecoveryTimeRangeSet 是否已赋值
                     * @return AvailableRecoveryTimeRangeSet 是否已赋值
                     * 
                     */
                    bool AvailableRecoveryTimeRangeSetHasBeenSet() const;

                private:

                    /**
                     * 可回档时间范围列表
                     */
                    std::vector<AvailableRecoveryTimeRange> m_availableRecoveryTimeRangeSet;
                    bool m_availableRecoveryTimeRangeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERRECOVERYTIMERANGERESPONSE_H_
