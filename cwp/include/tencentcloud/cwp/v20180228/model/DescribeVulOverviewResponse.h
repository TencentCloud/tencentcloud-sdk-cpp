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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulOverview.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulOverview返回参数结构体
                */
                class DescribeVulOverviewResponse : public AbstractModel
                {
                public:
                    DescribeVulOverviewResponse();
                    ~DescribeVulOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取重点关注漏洞统计
                     * @return FollowVul 重点关注漏洞统计
                     * 
                     */
                    VulOverview GetFollowVul() const;

                    /**
                     * 判断参数 FollowVul 是否已赋值
                     * @return FollowVul 是否已赋值
                     * 
                     */
                    bool FollowVulHasBeenSet() const;

                    /**
                     * 获取全部漏洞统计
                     * @return AllVul 全部漏洞统计
                     * 
                     */
                    VulOverview GetAllVul() const;

                    /**
                     * 判断参数 AllVul 是否已赋值
                     * @return AllVul 是否已赋值
                     * 
                     */
                    bool AllVulHasBeenSet() const;

                    /**
                     * 获取影响主机统计
                     * @return EffectHost 影响主机统计
                     * 
                     */
                    VulOverview GetEffectHost() const;

                    /**
                     * 判断参数 EffectHost 是否已赋值
                     * @return EffectHost 是否已赋值
                     * 
                     */
                    bool EffectHostHasBeenSet() const;

                    /**
                     * 获取漏洞攻击事件（近1月）统计
                     * @return VulAttackEvent 漏洞攻击事件（近1月）统计
                     * 
                     */
                    VulOverview GetVulAttackEvent() const;

                    /**
                     * 判断参数 VulAttackEvent 是否已赋值
                     * @return VulAttackEvent 是否已赋值
                     * 
                     */
                    bool VulAttackEventHasBeenSet() const;

                    /**
                     * 获取已防御攻击（近1月）统计
                     * @return VulDefenceEvent 已防御攻击（近1月）统计
                     * 
                     */
                    VulOverview GetVulDefenceEvent() const;

                    /**
                     * 判断参数 VulDefenceEvent 是否已赋值
                     * @return VulDefenceEvent 是否已赋值
                     * 
                     */
                    bool VulDefenceEventHasBeenSet() const;

                    /**
                     * 获取漏洞库统计
                     * @return VulStore 漏洞库统计
                     * 
                     */
                    VulOverview GetVulStore() const;

                    /**
                     * 判断参数 VulStore 是否已赋值
                     * @return VulStore 是否已赋值
                     * 
                     */
                    bool VulStoreHasBeenSet() const;

                private:

                    /**
                     * 重点关注漏洞统计
                     */
                    VulOverview m_followVul;
                    bool m_followVulHasBeenSet;

                    /**
                     * 全部漏洞统计
                     */
                    VulOverview m_allVul;
                    bool m_allVulHasBeenSet;

                    /**
                     * 影响主机统计
                     */
                    VulOverview m_effectHost;
                    bool m_effectHostHasBeenSet;

                    /**
                     * 漏洞攻击事件（近1月）统计
                     */
                    VulOverview m_vulAttackEvent;
                    bool m_vulAttackEventHasBeenSet;

                    /**
                     * 已防御攻击（近1月）统计
                     */
                    VulOverview m_vulDefenceEvent;
                    bool m_vulDefenceEventHasBeenSet;

                    /**
                     * 漏洞库统计
                     */
                    VulOverview m_vulStore;
                    bool m_vulStoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_
