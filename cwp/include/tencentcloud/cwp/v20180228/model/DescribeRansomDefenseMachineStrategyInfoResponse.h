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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEMACHINESTRATEGYINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEMACHINESTRATEGYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRansomDefenseMachineStrategyInfo返回参数结构体
                */
                class DescribeRansomDefenseMachineStrategyInfoResponse : public AbstractModel
                {
                public:
                    DescribeRansomDefenseMachineStrategyInfoResponse();
                    ~DescribeRansomDefenseMachineStrategyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID列表,0表示未绑定任何策略
                     * @return StrategyIds 策略ID列表,0表示未绑定任何策略
                     * 
                     */
                    std::vector<uint64_t> GetStrategyIds() const;

                    /**
                     * 判断参数 StrategyIds 是否已赋值
                     * @return StrategyIds 是否已赋值
                     * 
                     */
                    bool StrategyIdsHasBeenSet() const;

                private:

                    /**
                     * 策略ID列表,0表示未绑定任何策略
                     */
                    std::vector<uint64_t> m_strategyIds;
                    bool m_strategyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSEMACHINESTRATEGYINFORESPONSE_H_
