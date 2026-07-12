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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/DetailResults.h>
#include <tencentcloud/tms/v20201229/model/RiskDetails.h>
#include <tencentcloud/tms/v20201229/model/SentimentAnalysis.h>
#include <tencentcloud/tms/v20201229/model/HitSnippetInfo.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * TextModeration返回参数结构体
                */
                class TextModerationResponse : public AbstractModel
                {
                public:
                    TextModerationResponse();
                    ~TextModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>该字段用于回显检测对象请求参数中的 BizType，与输入的 BizType 值对应。</p>
                     * @return BizType <p>该字段用于回显检测对象请求参数中的 BizType，与输入的 BizType 值对应。</p>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>用于标识对本次请求的处置建议，共三种返回值。<br>返回值：<strong>Block</strong>: 建议直接做违规处置，<strong>Review</strong>: 建议人工二次确认，<strong>Pass</strong>: 未识别到风险。</p>
                     * @return Suggestion <p>用于标识对本次请求的处置建议，共三种返回值。<br>返回值：<strong>Block</strong>: 建议直接做违规处置，<strong>Review</strong>: 建议人工二次确认，<strong>Pass</strong>: 未识别到风险。</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回检测结果（DetailResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型</p>
                     * @return Label <p>该字段用于返回检测结果（DetailResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>对应 Label 字段下的二级子标签，表示该 Label 下更细分的违规点。</p>
                     * @return SubLabel <p>对应 Label 字段下的二级子标签，表示该 Label 下更细分的违规点。</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取<p>该字段标识 SubLabel 的置信度，取值范围为 0 - 100，值越高代表置信度越高。</p>
                     * @return Score <p>该字段标识 SubLabel 的置信度，取值范围为 0 - 100，值越高代表置信度越高。</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>该字段标识被检测文本所命中的关键词，可能返回0个或多个关键词。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords <p>该字段标识被检测文本所命中的关键词，可能返回0个或多个关键词。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>该字段返回的检测的详细信息，返回值信息可参阅对应数据结构 DetailResults 的详细描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailResults <p>该字段返回的检测的详细信息，返回值信息可参阅对应数据结构 DetailResults 的详细描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DetailResults> GetDetailResults() const;

                    /**
                     * 判断参数 DetailResults 是否已赋值
                     * @return DetailResults 是否已赋值
                     * 
                     */
                    bool DetailResultsHasBeenSet() const;

                    /**
                     * 获取<p>该字段标识入参 User 的检测结果，具体内容参阅数据结构 RiskDetails。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskDetails <p>该字段标识入参 User 的检测结果，具体内容参阅数据结构 RiskDetails。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RiskDetails> GetRiskDetails() const;

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     * 
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回根据您的需求配置的附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     * @return Extra <p>该字段用于返回根据您的需求配置的附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于回显检测对象请求参数中的 DataId，与输入的 DataId 值对应。</p>
                     * @return DataId <p>该字段用于回显检测对象请求参数中的 DataId，与输入的 DataId 值对应。</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>历史上下文关联的字段，不再推荐使用。上下文关联审核可通过入参的 SessionId 来实现。</p>
                     * @return ContextText <p>历史上下文关联的字段，不再推荐使用。上下文关联审核可通过入参的 SessionId 来实现。</p>
                     * 
                     */
                    std::string GetContextText() const;

                    /**
                     * 判断参数 ContextText 是否已赋值
                     * @return ContextText 是否已赋值
                     * 
                     */
                    bool ContextTextHasBeenSet() const;

                    /**
                     * 获取<p>该字段为历史结构字段，不再推荐使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SentimentAnalysis <p>该字段为历史结构字段，不再推荐使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SentimentAnalysis GetSentimentAnalysis() const;

                    /**
                     * 判断参数 SentimentAnalysis 是否已赋值
                     * @return SentimentAnalysis 是否已赋值
                     * 
                     */
                    bool SentimentAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>该字段为历史结构字段，不再推荐使用。</p>
                     * @return HitType <p>该字段为历史结构字段，不再推荐使用。</p>
                     * 
                     */
                    std::string GetHitType() const;

                    /**
                     * 判断参数 HitType 是否已赋值
                     * @return HitType 是否已赋值
                     * 
                     */
                    bool HitTypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于回显检测对象请求参数中的 SessionId，与输入的 SessionId 值对应。</p>
                     * @return SessionId <p>该字段用于回显检测对象请求参数中的 SessionId，与输入的 SessionId 值对应。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>该字段用于标记导致本次审核命中标签的原文内容位置信息</p>
                     * @return HitSnippetInfos <p>该字段用于标记导致本次审核命中标签的原文内容位置信息</p>
                     * 
                     */
                    std::vector<HitSnippetInfo> GetHitSnippetInfos() const;

                    /**
                     * 判断参数 HitSnippetInfos 是否已赋值
                     * @return HitSnippetInfos 是否已赋值
                     * 
                     */
                    bool HitSnippetInfosHasBeenSet() const;

                private:

                    /**
                     * <p>该字段用于回显检测对象请求参数中的 BizType，与输入的 BizType 值对应。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>用于标识对本次请求的处置建议，共三种返回值。<br>返回值：<strong>Block</strong>: 建议直接做违规处置，<strong>Review</strong>: 建议人工二次确认，<strong>Pass</strong>: 未识别到风险。</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果（DetailResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；以及其他令人反感、不安全或不适宜的内容类型</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>对应 Label 字段下的二级子标签，表示该 Label 下更细分的违规点。</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>该字段标识 SubLabel 的置信度，取值范围为 0 - 100，值越高代表置信度越高。</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该字段标识被检测文本所命中的关键词，可能返回0个或多个关键词。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>该字段返回的检测的详细信息，返回值信息可参阅对应数据结构 DetailResults 的详细描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetailResults> m_detailResults;
                    bool m_detailResultsHasBeenSet;

                    /**
                     * <p>该字段标识入参 User 的检测结果，具体内容参阅数据结构 RiskDetails。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetails> m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * <p>该字段用于返回根据您的需求配置的附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>该字段用于回显检测对象请求参数中的 DataId，与输入的 DataId 值对应。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>历史上下文关联的字段，不再推荐使用。上下文关联审核可通过入参的 SessionId 来实现。</p>
                     */
                    std::string m_contextText;
                    bool m_contextTextHasBeenSet;

                    /**
                     * <p>该字段为历史结构字段，不再推荐使用。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SentimentAnalysis m_sentimentAnalysis;
                    bool m_sentimentAnalysisHasBeenSet;

                    /**
                     * <p>该字段为历史结构字段，不再推荐使用。</p>
                     */
                    std::string m_hitType;
                    bool m_hitTypeHasBeenSet;

                    /**
                     * <p>该字段用于回显检测对象请求参数中的 SessionId，与输入的 SessionId 值对应。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>该字段用于标记导致本次审核命中标签的原文内容位置信息</p>
                     */
                    std::vector<HitSnippetInfo> m_hitSnippetInfos;
                    bool m_hitSnippetInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONRESPONSE_H_
