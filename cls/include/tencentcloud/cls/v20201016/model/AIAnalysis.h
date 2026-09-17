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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSIS_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AIAnalysisDataScope.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 开启告警AI诊断。UserPrompt是给AI诊断告警时使用的提示词，比如请详细分析根因。AnalysisDataScope示例：{"DataScopeType":"CLSLogTopic","DataScopeEntry":[{"Key":"TopicId",Value:"work-topic"},{"Key":"Region",Value:"ap-guangzhou"}]}
                */
                class AIAnalysis : public AbstractModel
                {
                public:
                    AIAnalysis();
                    ~AIAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启告警AI诊断</p><p>默认值：false</p>
                     * @return Enable <p>是否开启告警AI诊断</p><p>默认值：false</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启告警AI诊断</p><p>默认值：false</p>
                     * @param _enable <p>是否开启告警AI诊断</p><p>默认值：false</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>是否显示诊断过程</p><p>默认值：false</p>
                     * @return HideProcess <p>是否显示诊断过程</p><p>默认值：false</p>
                     * 
                     */
                    bool GetHideProcess() const;

                    /**
                     * 设置<p>是否显示诊断过程</p><p>默认值：false</p>
                     * @param _hideProcess <p>是否显示诊断过程</p><p>默认值：false</p>
                     * 
                     */
                    void SetHideProcess(const bool& _hideProcess);

                    /**
                     * 判断参数 HideProcess 是否已赋值
                     * @return HideProcess 是否已赋值
                     * 
                     */
                    bool HideProcessHasBeenSet() const;

                    /**
                     * 获取<p>AI诊断告警时给AI的提示词</p><p>参数格式：请详细诊断根因</p>
                     * @return UserPrompt <p>AI诊断告警时给AI的提示词</p><p>参数格式：请详细诊断根因</p>
                     * 
                     */
                    std::string GetUserPrompt() const;

                    /**
                     * 设置<p>AI诊断告警时给AI的提示词</p><p>参数格式：请详细诊断根因</p>
                     * @param _userPrompt <p>AI诊断告警时给AI的提示词</p><p>参数格式：请详细诊断根因</p>
                     * 
                     */
                    void SetUserPrompt(const std::string& _userPrompt);

                    /**
                     * 判断参数 UserPrompt 是否已赋值
                     * @return UserPrompt 是否已赋值
                     * 
                     */
                    bool UserPromptHasBeenSet() const;

                    /**
                     * 获取<p>AI 分析的数据范围</p>
                     * @return AnalysisDataScope <p>AI 分析的数据范围</p>
                     * 
                     */
                    std::vector<AIAnalysisDataScope> GetAnalysisDataScope() const;

                    /**
                     * 设置<p>AI 分析的数据范围</p>
                     * @param _analysisDataScope <p>AI 分析的数据范围</p>
                     * 
                     */
                    void SetAnalysisDataScope(const std::vector<AIAnalysisDataScope>& _analysisDataScope);

                    /**
                     * 判断参数 AnalysisDataScope 是否已赋值
                     * @return AnalysisDataScope 是否已赋值
                     * 
                     */
                    bool AnalysisDataScopeHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启告警AI诊断</p><p>默认值：false</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>是否显示诊断过程</p><p>默认值：false</p>
                     */
                    bool m_hideProcess;
                    bool m_hideProcessHasBeenSet;

                    /**
                     * <p>AI诊断告警时给AI的提示词</p><p>参数格式：请详细诊断根因</p>
                     */
                    std::string m_userPrompt;
                    bool m_userPromptHasBeenSet;

                    /**
                     * <p>AI 分析的数据范围</p>
                     */
                    std::vector<AIAnalysisDataScope> m_analysisDataScope;
                    bool m_analysisDataScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSIS_H_
