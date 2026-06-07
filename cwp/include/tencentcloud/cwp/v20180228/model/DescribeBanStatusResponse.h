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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_

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
                * DescribeBanStatus返回参数结构体
                */
                class DescribeBanStatusResponse : public AbstractModel
                {
                public:
                    DescribeBanStatusResponse();
                    ~DescribeBanStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>(已废弃) 阻断开关状态: 0 -- 关闭  1 -- 高级阻断 2 -- 基础阻断(只阻断情报库黑ip)</p>
                     * @return Status <p>(已废弃) 阻断开关状态: 0 -- 关闭  1 -- 高级阻断 2 -- 基础阻断(只阻断情报库黑ip)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否弹窗提示信息 false: 关闭，true: 开启</p>
                     * @return ShowTips <p>是否弹窗提示信息 false: 关闭，true: 开启</p>
                     * 
                     */
                    bool GetShowTips() const;

                    /**
                     * 判断参数 ShowTips 是否已赋值
                     * @return ShowTips 是否已赋值
                     * 
                     */
                    bool ShowTipsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启智能过白模式</p>
                     * @return OpenSmartMode <p>是否开启智能过白模式</p>
                     * 
                     */
                    bool GetOpenSmartMode() const;

                    /**
                     * 判断参数 OpenSmartMode 是否已赋值
                     * @return OpenSmartMode 是否已赋值
                     * 
                     */
                    bool OpenSmartModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启情报IP阻断</p>
                     * @return BanBlackIp <p>是否开启情报IP阻断</p>
                     * 
                     */
                    bool GetBanBlackIp() const;

                    /**
                     * 判断参数 BanBlackIp 是否已赋值
                     * @return BanBlackIp 是否已赋值
                     * 
                     */
                    bool BanBlackIpHasBeenSet() const;

                    /**
                     * 获取<p>是否开启漏洞IP阻断</p>
                     * @return BanVulIp <p>是否开启漏洞IP阻断</p>
                     * 
                     */
                    bool GetBanVulIp() const;

                    /**
                     * 判断参数 BanVulIp 是否已赋值
                     * @return BanVulIp 是否已赋值
                     * 
                     */
                    bool BanVulIpHasBeenSet() const;

                    /**
                     * 获取<p>是否开启规则阻断</p>
                     * @return BanByRule <p>是否开启规则阻断</p>
                     * 
                     */
                    bool GetBanByRule() const;

                    /**
                     * 判断参数 BanByRule 是否已赋值
                     * @return BanByRule 是否已赋值
                     * 
                     */
                    bool BanByRuleHasBeenSet() const;

                private:

                    /**
                     * <p>(已废弃) 阻断开关状态: 0 -- 关闭  1 -- 高级阻断 2 -- 基础阻断(只阻断情报库黑ip)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否弹窗提示信息 false: 关闭，true: 开启</p>
                     */
                    bool m_showTips;
                    bool m_showTipsHasBeenSet;

                    /**
                     * <p>是否开启智能过白模式</p>
                     */
                    bool m_openSmartMode;
                    bool m_openSmartModeHasBeenSet;

                    /**
                     * <p>是否开启情报IP阻断</p>
                     */
                    bool m_banBlackIp;
                    bool m_banBlackIpHasBeenSet;

                    /**
                     * <p>是否开启漏洞IP阻断</p>
                     */
                    bool m_banVulIp;
                    bool m_banVulIpHasBeenSet;

                    /**
                     * <p>是否开启规则阻断</p>
                     */
                    bool m_banByRule;
                    bool m_banByRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
