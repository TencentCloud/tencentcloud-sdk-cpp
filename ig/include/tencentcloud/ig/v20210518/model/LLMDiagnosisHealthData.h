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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_LLMDIAGNOSISHEALTHDATA_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_LLMDIAGNOSISHEALTHDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ig/v20210518/model/ReferResourceInfo.h>
#include <tencentcloud/ig/v20210518/model/GuessQuestion.h>
#include <tencentcloud/ig/v20210518/model/HighlightWordInfo.h>
#include <tencentcloud/ig/v20210518/model/HealthFollowUpQuestion.h>
#include <tencentcloud/ig/v20210518/model/StandardDrugCardInfo.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 大模型症状自查返回数据
                */
                class LLMDiagnosisHealthData : public AbstractModel
                {
                public:
                    LLMDiagnosisHealthData();
                    ~LLMDiagnosisHealthData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>大模型返回问答内容</p>
                     * @return Content <p>大模型返回问答内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>大模型返回问答内容</p>
                     * @param _content <p>大模型返回问答内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>大模型返回思考内容</p>
                     * @return Think <p>大模型返回思考内容</p>
                     * 
                     */
                    std::string GetThink() const;

                    /**
                     * 设置<p>大模型返回思考内容</p>
                     * @param _think <p>大模型返回思考内容</p>
                     * 
                     */
                    void SetThink(const std::string& _think);

                    /**
                     * 判断参数 Think 是否已赋值
                     * @return Think 是否已赋值
                     * 
                     */
                    bool ThinkHasBeenSet() const;

                    /**
                     * 获取<p>序号，无业务含义，标识流式结果的序号</p>
                     * @return Sort <p>序号，无业务含义，标识流式结果的序号</p>
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置<p>序号，无业务含义，标识流式结果的序号</p>
                     * @param _sort <p>序号，无业务含义，标识流式结果的序号</p>
                     * 
                     */
                    void SetSort(const int64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>流式输出结束标识，false:未结束，true:结束</p>
                     * @return IsFinish <p>流式输出结束标识，false:未结束，true:结束</p>
                     * 
                     */
                    bool GetIsFinish() const;

                    /**
                     * 设置<p>流式输出结束标识，false:未结束，true:结束</p>
                     * @param _isFinish <p>流式输出结束标识，false:未结束，true:结束</p>
                     * 
                     */
                    void SetIsFinish(const bool& _isFinish);

                    /**
                     * 判断参数 IsFinish 是否已赋值
                     * @return IsFinish 是否已赋值
                     * 
                     */
                    bool IsFinishHasBeenSet() const;

                    /**
                     * 获取<p>是否命中敏感词，false:否，true:是；</p>
                     * @return IsSensitive <p>是否命中敏感词，false:否，true:是；</p>
                     * 
                     */
                    bool GetIsSensitive() const;

                    /**
                     * 设置<p>是否命中敏感词，false:否，true:是；</p>
                     * @param _isSensitive <p>是否命中敏感词，false:否，true:是；</p>
                     * 
                     */
                    void SetIsSensitive(const bool& _isSensitive);

                    /**
                     * 判断参数 IsSensitive 是否已赋值
                     * @return IsSensitive 是否已赋值
                     * 
                     */
                    bool IsSensitiveHasBeenSet() const;

                    /**
                     * 获取<p>结果类型，0：正常结果，1：追问问题</p>
                     * @return Kind <p>结果类型，0：正常结果，1：追问问题</p>
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置<p>结果类型，0：正常结果，1：追问问题</p>
                     * @param _kind <p>结果类型，0：正常结果，1：追问问题</p>
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>风险提示</p>
                     * @return RiskReminder <p>风险提示</p>
                     * 
                     */
                    std::string GetRiskReminder() const;

                    /**
                     * 设置<p>风险提示</p>
                     * @param _riskReminder <p>风险提示</p>
                     * 
                     */
                    void SetRiskReminder(const std::string& _riskReminder);

                    /**
                     * 判断参数 RiskReminder 是否已赋值
                     * @return RiskReminder 是否已赋值
                     * 
                     */
                    bool RiskReminderHasBeenSet() const;

                    /**
                     * 获取<p>引用资料列表，流式输出方式，只在流式输出第一次返回；</p>
                     * @return ReferResourceItems <p>引用资料列表，流式输出方式，只在流式输出第一次返回；</p>
                     * 
                     */
                    std::vector<ReferResourceInfo> GetReferResourceItems() const;

                    /**
                     * 设置<p>引用资料列表，流式输出方式，只在流式输出第一次返回；</p>
                     * @param _referResourceItems <p>引用资料列表，流式输出方式，只在流式输出第一次返回；</p>
                     * 
                     */
                    void SetReferResourceItems(const std::vector<ReferResourceInfo>& _referResourceItems);

                    /**
                     * 判断参数 ReferResourceItems 是否已赋值
                     * @return ReferResourceItems 是否已赋值
                     * 
                     */
                    bool ReferResourceItemsHasBeenSet() const;

                    /**
                     * 获取<p>猜你想问列表，流式输出方式，只在流式结束输出结果；</p>
                     * @return GuessQuestions <p>猜你想问列表，流式输出方式，只在流式结束输出结果；</p>
                     * 
                     */
                    std::vector<GuessQuestion> GetGuessQuestions() const;

                    /**
                     * 设置<p>猜你想问列表，流式输出方式，只在流式结束输出结果；</p>
                     * @param _guessQuestions <p>猜你想问列表，流式输出方式，只在流式结束输出结果；</p>
                     * 
                     */
                    void SetGuessQuestions(const std::vector<GuessQuestion>& _guessQuestions);

                    /**
                     * 判断参数 GuessQuestions 是否已赋值
                     * @return GuessQuestions 是否已赋值
                     * 
                     */
                    bool GuessQuestionsHasBeenSet() const;

                    /**
                     * 获取<p>高亮词列表，流式输出方式在流式过程中输出结果。</p>
                     * @return HighlightWords <p>高亮词列表，流式输出方式在流式过程中输出结果。</p>
                     * 
                     */
                    std::vector<HighlightWordInfo> GetHighlightWords() const;

                    /**
                     * 设置<p>高亮词列表，流式输出方式在流式过程中输出结果。</p>
                     * @param _highlightWords <p>高亮词列表，流式输出方式在流式过程中输出结果。</p>
                     * 
                     */
                    void SetHighlightWords(const std::vector<HighlightWordInfo>& _highlightWords);

                    /**
                     * 判断参数 HighlightWords 是否已赋值
                     * @return HighlightWords 是否已赋值
                     * 
                     */
                    bool HighlightWordsHasBeenSet() const;

                    /**
                     * 获取<p>追问问题列表，流式输出方式，只在流式结束输出结果。只会在kind=1追问类型时有结果。</p>
                     * @return FollowUpQuestions <p>追问问题列表，流式输出方式，只在流式结束输出结果。只会在kind=1追问类型时有结果。</p>
                     * 
                     */
                    std::vector<HealthFollowUpQuestion> GetFollowUpQuestions() const;

                    /**
                     * 设置<p>追问问题列表，流式输出方式，只在流式结束输出结果。只会在kind=1追问类型时有结果。</p>
                     * @param _followUpQuestions <p>追问问题列表，流式输出方式，只在流式结束输出结果。只会在kind=1追问类型时有结果。</p>
                     * 
                     */
                    void SetFollowUpQuestions(const std::vector<HealthFollowUpQuestion>& _followUpQuestions);

                    /**
                     * 判断参数 FollowUpQuestions 是否已赋值
                     * @return FollowUpQuestions 是否已赋值
                     * 
                     */
                    bool FollowUpQuestionsHasBeenSet() const;

                    /**
                     * 获取<p>药品列表，流式输出方式，只在流式结束输出结果。</p>
                     * @return DrugList <p>药品列表，流式输出方式，只在流式结束输出结果。</p>
                     * 
                     */
                    std::vector<StandardDrugCardInfo> GetDrugList() const;

                    /**
                     * 设置<p>药品列表，流式输出方式，只在流式结束输出结果。</p>
                     * @param _drugList <p>药品列表，流式输出方式，只在流式结束输出结果。</p>
                     * 
                     */
                    void SetDrugList(const std::vector<StandardDrugCardInfo>& _drugList);

                    /**
                     * 判断参数 DrugList 是否已赋值
                     * @return DrugList 是否已赋值
                     * 
                     */
                    bool DrugListHasBeenSet() const;

                private:

                    /**
                     * <p>大模型返回问答内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>大模型返回思考内容</p>
                     */
                    std::string m_think;
                    bool m_thinkHasBeenSet;

                    /**
                     * <p>序号，无业务含义，标识流式结果的序号</p>
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>流式输出结束标识，false:未结束，true:结束</p>
                     */
                    bool m_isFinish;
                    bool m_isFinishHasBeenSet;

                    /**
                     * <p>是否命中敏感词，false:否，true:是；</p>
                     */
                    bool m_isSensitive;
                    bool m_isSensitiveHasBeenSet;

                    /**
                     * <p>结果类型，0：正常结果，1：追问问题</p>
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>风险提示</p>
                     */
                    std::string m_riskReminder;
                    bool m_riskReminderHasBeenSet;

                    /**
                     * <p>引用资料列表，流式输出方式，只在流式输出第一次返回；</p>
                     */
                    std::vector<ReferResourceInfo> m_referResourceItems;
                    bool m_referResourceItemsHasBeenSet;

                    /**
                     * <p>猜你想问列表，流式输出方式，只在流式结束输出结果；</p>
                     */
                    std::vector<GuessQuestion> m_guessQuestions;
                    bool m_guessQuestionsHasBeenSet;

                    /**
                     * <p>高亮词列表，流式输出方式在流式过程中输出结果。</p>
                     */
                    std::vector<HighlightWordInfo> m_highlightWords;
                    bool m_highlightWordsHasBeenSet;

                    /**
                     * <p>追问问题列表，流式输出方式，只在流式结束输出结果。只会在kind=1追问类型时有结果。</p>
                     */
                    std::vector<HealthFollowUpQuestion> m_followUpQuestions;
                    bool m_followUpQuestionsHasBeenSet;

                    /**
                     * <p>药品列表，流式输出方式，只在流式结束输出结果。</p>
                     */
                    std::vector<StandardDrugCardInfo> m_drugList;
                    bool m_drugListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_LLMDIAGNOSISHEALTHDATA_H_
