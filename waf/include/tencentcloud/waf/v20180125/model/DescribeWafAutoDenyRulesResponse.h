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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFAUTODENYRULESRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFAUTODENYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeWafAutoDenyRules返回参数结构体
                */
                class DescribeWafAutoDenyRulesResponse : public AbstractModel
                {
                public:
                    DescribeWafAutoDenyRulesResponse();
                    ~DescribeWafAutoDenyRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取攻击次数阈值
                     * @return AttackThreshold 攻击次数阈值
                     * 
                     */
                    int64_t GetAttackThreshold() const;

                    /**
                     * 判断参数 AttackThreshold 是否已赋值
                     * @return AttackThreshold 是否已赋值
                     * 
                     */
                    bool AttackThresholdHasBeenSet() const;

                    /**
                     * 获取攻击时间阈值
                     * @return TimeThreshold 攻击时间阈值
                     * 
                     */
                    int64_t GetTimeThreshold() const;

                    /**
                     * 判断参数 TimeThreshold 是否已赋值
                     * @return TimeThreshold 是否已赋值
                     * 
                     */
                    bool TimeThresholdHasBeenSet() const;

                    /**
                     * 获取自动封禁时间
                     * @return DenyTimeThreshold 自动封禁时间
                     * 
                     */
                    int64_t GetDenyTimeThreshold() const;

                    /**
                     * 判断参数 DenyTimeThreshold 是否已赋值
                     * @return DenyTimeThreshold 是否已赋值
                     * 
                     */
                    bool DenyTimeThresholdHasBeenSet() const;

                    /**
                     * 获取自动封禁状态
                     * @return DefenseStatus 自动封禁状态
                     * 
                     */
                    int64_t GetDefenseStatus() const;

                    /**
                     * 判断参数 DefenseStatus 是否已赋值
                     * @return DefenseStatus 是否已赋值
                     * 
                     */
                    bool DefenseStatusHasBeenSet() const;

                    /**
                     * 获取数据来源Source字段 custom-自定义(默认)、batch-domain-批量域名

                     * @return Source 数据来源Source字段 custom-自定义(默认)、batch-domain-批量域名

                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取重保护网域名状态
                     * @return HWState 重保护网域名状态
                     * 
                     */
                    int64_t GetHWState() const;

                    /**
                     * 判断参数 HWState 是否已赋值
                     * @return HWState 是否已赋值
                     * 
                     */
                    bool HWStateHasBeenSet() const;

                private:

                    /**
                     * 攻击次数阈值
                     */
                    int64_t m_attackThreshold;
                    bool m_attackThresholdHasBeenSet;

                    /**
                     * 攻击时间阈值
                     */
                    int64_t m_timeThreshold;
                    bool m_timeThresholdHasBeenSet;

                    /**
                     * 自动封禁时间
                     */
                    int64_t m_denyTimeThreshold;
                    bool m_denyTimeThresholdHasBeenSet;

                    /**
                     * 自动封禁状态
                     */
                    int64_t m_defenseStatus;
                    bool m_defenseStatusHasBeenSet;

                    /**
                     * 数据来源Source字段 custom-自定义(默认)、batch-domain-批量域名

                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 重保护网域名状态
                     */
                    int64_t m_hWState;
                    bool m_hWStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFAUTODENYRULESRESPONSE_H_
