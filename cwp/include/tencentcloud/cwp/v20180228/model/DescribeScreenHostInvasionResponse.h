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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENHOSTINVASIONRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENHOSTINVASIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenDefendAttackLog.h>
#include <tencentcloud/cwp/v20180228/model/ScreenInvasion.h>
#include <tencentcloud/cwp/v20180228/model/ScreenVulInfo.h>
#include <tencentcloud/cwp/v20180228/model/ScreenBaselineInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenHostInvasion返回参数结构体
                */
                class DescribeScreenHostInvasionResponse : public AbstractModel
                {
                public:
                    DescribeScreenHostInvasionResponse();
                    ~DescribeScreenHostInvasionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网络攻击事件列表
                     * @return DefendAttackLog 网络攻击事件列表
                     * 
                     */
                    std::vector<ScreenDefendAttackLog> GetDefendAttackLog() const;

                    /**
                     * 判断参数 DefendAttackLog 是否已赋值
                     * @return DefendAttackLog 是否已赋值
                     * 
                     */
                    bool DefendAttackLogHasBeenSet() const;

                    /**
                     * 获取入侵检测事件列表
                     * @return InvasionEvents 入侵检测事件列表
                     * 
                     */
                    std::vector<ScreenInvasion> GetInvasionEvents() const;

                    /**
                     * 判断参数 InvasionEvents 是否已赋值
                     * @return InvasionEvents 是否已赋值
                     * 
                     */
                    bool InvasionEventsHasBeenSet() const;

                    /**
                     * 获取漏洞事件列表
                     * @return Vul 漏洞事件列表
                     * 
                     */
                    std::vector<ScreenVulInfo> GetVul() const;

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                    /**
                     * 获取基线事件列表
                     * @return Baseline 基线事件列表
                     * 
                     */
                    std::vector<ScreenBaselineInfo> GetBaseline() const;

                    /**
                     * 判断参数 Baseline 是否已赋值
                     * @return Baseline 是否已赋值
                     * 
                     */
                    bool BaselineHasBeenSet() const;

                private:

                    /**
                     * 网络攻击事件列表
                     */
                    std::vector<ScreenDefendAttackLog> m_defendAttackLog;
                    bool m_defendAttackLogHasBeenSet;

                    /**
                     * 入侵检测事件列表
                     */
                    std::vector<ScreenInvasion> m_invasionEvents;
                    bool m_invasionEventsHasBeenSet;

                    /**
                     * 漏洞事件列表
                     */
                    std::vector<ScreenVulInfo> m_vul;
                    bool m_vulHasBeenSet;

                    /**
                     * 基线事件列表
                     */
                    std::vector<ScreenBaselineInfo> m_baseline;
                    bool m_baselineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENHOSTINVASIONRESPONSE_H_
