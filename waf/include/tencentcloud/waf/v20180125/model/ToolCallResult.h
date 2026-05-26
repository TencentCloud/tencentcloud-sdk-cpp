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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TOOLCALLRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TOOLCALLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * tool_call 场景检测结果
                */
                class ToolCallResult : public AbstractModel
                {
                public:
                    ToolCallResult();
                    ~ToolCallResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中规则名称</p>
                     * @return RuleName <p>命中规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>命中规则名称</p>
                     * @param _ruleName <p>命中规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>规则动作</p>
                     * @return Action <p>规则动作</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>规则动作</p>
                     * @param _action <p>规则动作</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>风险等级</p><p>枚举值：</p><ul><li>critical： 严重</li><li>high： 高危    </li><li>medium： 中危    </li><li>low： 低危</li></ul>
                     * @return Severity <p>风险等级</p><p>枚举值：</p><ul><li>critical： 严重</li><li>high： 高危    </li><li>medium： 中危    </li><li>low： 低危</li></ul>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>风险等级</p><p>枚举值：</p><ul><li>critical： 严重</li><li>high： 高危    </li><li>medium： 中危    </li><li>low： 低危</li></ul>
                     * @param _severity <p>风险等级</p><p>枚举值：</p><ul><li>critical： 严重</li><li>high： 高危    </li><li>medium： 中危    </li><li>low： 低危</li></ul>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                private:

                    /**
                     * <p>命中规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则动作</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>风险等级</p><p>枚举值：</p><ul><li>critical： 严重</li><li>high： 高危    </li><li>medium： 中危    </li><li>low： 低危</li></ul>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TOOLCALLRESULT_H_
