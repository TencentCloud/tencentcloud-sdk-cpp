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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEOVERVIEWCOUNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEOVERVIEWCOUNTRESPONSE_H_

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
                * DescribeVulDefenceOverviewCount返回参数结构体
                */
                class DescribeVulDefenceOverviewCountResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceOverviewCountResponse();
                    ~DescribeVulDefenceOverviewCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略数
                     * @return StrategyCount 策略数
                     * 
                     */
                    uint64_t GetStrategyCount() const;

                    /**
                     * 判断参数 StrategyCount 是否已赋值
                     * @return StrategyCount 是否已赋值
                     * 
                     */
                    bool StrategyCountHasBeenSet() const;

                    /**
                     * 获取开启的策略数
                     * @return StrategyOpenCount 开启的策略数
                     * 
                     */
                    uint64_t GetStrategyOpenCount() const;

                    /**
                     * 判断参数 StrategyOpenCount 是否已赋值
                     * @return StrategyOpenCount 是否已赋值
                     * 
                     */
                    bool StrategyOpenCountHasBeenSet() const;

                    /**
                     * 获取支持的防御漏洞个数
                     * @return SupportDefenceVulCount 支持的防御漏洞个数
                     * 
                     */
                    uint64_t GetSupportDefenceVulCount() const;

                    /**
                     * 判断参数 SupportDefenceVulCount 是否已赋值
                     * @return SupportDefenceVulCount 是否已赋值
                     * 
                     */
                    bool SupportDefenceVulCountHasBeenSet() const;

                private:

                    /**
                     * 策略数
                     */
                    uint64_t m_strategyCount;
                    bool m_strategyCountHasBeenSet;

                    /**
                     * 开启的策略数
                     */
                    uint64_t m_strategyOpenCount;
                    bool m_strategyOpenCountHasBeenSet;

                    /**
                     * 支持的防御漏洞个数
                     */
                    uint64_t m_supportDefenceVulCount;
                    bool m_supportDefenceVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEOVERVIEWCOUNTRESPONSE_H_
