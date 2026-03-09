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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器运行时安全，子策略信息
                */
                class AbnormalProcessChildRuleInfo : public AbstractModel
                {
                public:
                    AbnormalProcessChildRuleInfo();
                    ~AbnormalProcessChildRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略模式，   RULE_MODE_RELEASE: 放行<br>   RULE_MODE_ALERT: 告警<br>   RULE_MODE_HOLDUP:拦截</p>
                     * @return RuleMode <p>策略模式，   RULE_MODE_RELEASE: 放行<br>   RULE_MODE_ALERT: 告警<br>   RULE_MODE_HOLDUP:拦截</p>
                     * 
                     */
                    std::string GetRuleMode() const;

                    /**
                     * 设置<p>策略模式，   RULE_MODE_RELEASE: 放行<br>   RULE_MODE_ALERT: 告警<br>   RULE_MODE_HOLDUP:拦截</p>
                     * @param _ruleMode <p>策略模式，   RULE_MODE_RELEASE: 放行<br>   RULE_MODE_ALERT: 告警<br>   RULE_MODE_HOLDUP:拦截</p>
                     * 
                     */
                    void SetRuleMode(const std::string& _ruleMode);

                    /**
                     * 判断参数 RuleMode 是否已赋值
                     * @return RuleMode 是否已赋值
                     * 
                     */
                    bool RuleModeHasBeenSet() const;

                    /**
                     * 获取<p>进程路径</p>
                     * @return ProcessPath <p>进程路径</p>
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置<p>进程路径</p>
                     * @param _processPath <p>进程路径</p>
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>子策略id</p>
                     * @return RuleId <p>子策略id</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>子策略id</p>
                     * @param _ruleId <p>子策略id</p>
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
                     * 获取<p>威胁等级，HIGH:高，MIDDLE:中，LOW:低</p>
                     * @return RuleLevel <p>威胁等级，HIGH:高，MIDDLE:中，LOW:低</p>
                     * 
                     */
                    std::string GetRuleLevel() const;

                    /**
                     * 设置<p>威胁等级，HIGH:高，MIDDLE:中，LOW:低</p>
                     * @param _ruleLevel <p>威胁等级，HIGH:高，MIDDLE:中，LOW:低</p>
                     * 
                     */
                    void SetRuleLevel(const std::string& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取<p>命令行参数</p>
                     * @return CmdLine <p>命令行参数</p>
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置<p>命令行参数</p>
                     * @param _cmdLine <p>命令行参数</p>
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                private:

                    /**
                     * <p>策略模式，   RULE_MODE_RELEASE: 放行<br>   RULE_MODE_ALERT: 告警<br>   RULE_MODE_HOLDUP:拦截</p>
                     */
                    std::string m_ruleMode;
                    bool m_ruleModeHasBeenSet;

                    /**
                     * <p>进程路径</p>
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * <p>子策略id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>威胁等级，HIGH:高，MIDDLE:中，LOW:低</p>
                     */
                    std::string m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * <p>命令行参数</p>
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSCHILDRULEINFO_H_
