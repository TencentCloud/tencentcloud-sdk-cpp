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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupHealthInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 规则健康检查状态
                */
                class RuleHealthStatusInfo : public AbstractModel
                {
                public:
                    RuleHealthStatusInfo();
                    ~RuleHealthStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否为默认转发规则。</p>
                     * @return IsDefaultRule <p>是否为默认转发规则。</p>
                     * 
                     */
                    std::string GetIsDefaultRule() const;

                    /**
                     * 设置<p>是否为默认转发规则。</p>
                     * @param _isDefaultRule <p>是否为默认转发规则。</p>
                     * 
                     */
                    void SetIsDefaultRule(const std::string& _isDefaultRule);

                    /**
                     * 判断参数 IsDefaultRule 是否已赋值
                     * @return IsDefaultRule 是否已赋值
                     * 
                     */
                    bool IsDefaultRuleHasBeenSet() const;

                    /**
                     * 获取<p>转发规则 ID，格式为 rule- 后接 8 位字母数字。</p>
                     * @return RuleId <p>转发规则 ID，格式为 rule- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>转发规则 ID，格式为 rule- 后接 8 位字母数字。</p>
                     * @param _ruleId <p>转发规则 ID，格式为 rule- 后接 8 位字母数字。</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>目标组健康状态。</p>
                     * @return TargetGroupHealthInfos <p>目标组健康状态。</p>
                     * 
                     */
                    std::vector<TargetGroupHealthInfo> GetTargetGroupHealthInfos() const;

                    /**
                     * 设置<p>目标组健康状态。</p>
                     * @param _targetGroupHealthInfos <p>目标组健康状态。</p>
                     * 
                     */
                    void SetTargetGroupHealthInfos(const std::vector<TargetGroupHealthInfo>& _targetGroupHealthInfos);

                    /**
                     * 判断参数 TargetGroupHealthInfos 是否已赋值
                     * @return TargetGroupHealthInfos 是否已赋值
                     * 
                     */
                    bool TargetGroupHealthInfosHasBeenSet() const;

                    /**
                     * 获取<p>优先级，值越小优先级越高，取值范围：1~10000。</p>
                     * @return Priority <p>优先级，值越小优先级越高，取值范围：1~10000。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级，值越小优先级越高，取值范围：1~10000。</p>
                     * @param _priority <p>优先级，值越小优先级越高，取值范围：1~10000。</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>是否为默认转发规则。</p>
                     */
                    std::string m_isDefaultRule;
                    bool m_isDefaultRuleHasBeenSet;

                    /**
                     * <p>转发规则 ID，格式为 rule- 后接 8 位字母数字。</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>目标组健康状态。</p>
                     */
                    std::vector<TargetGroupHealthInfo> m_targetGroupHealthInfos;
                    bool m_targetGroupHealthInfosHasBeenSet;

                    /**
                     * <p>优先级，值越小优先级越高，取值范围：1~10000。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_
