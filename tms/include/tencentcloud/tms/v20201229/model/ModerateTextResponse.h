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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_MODERATETEXTRESPONSE_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_MODERATETEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/LabelGrade.h>
#include <tencentcloud/tms/v20201229/model/ModerationDetail.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * ModerateText返回参数结构体
                */
                class ModerateTextResponse : public AbstractModel
                {
                public:
                    ModerateTextResponse();
                    ~ModerateTextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段用于返回检测对象对应请求参数中的DataId，与输入的DataId字段中的内容对应
                     * @return DataId 该字段用于返回检测对象对应请求参数中的DataId，与输入的DataId字段中的内容对应
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
                     * 获取该字段用于返回请求参数中的BizType参数
                     * @return BizType 该字段用于返回请求参数中的BizType参数
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
                     * 获取该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。
返回值：Block：建议屏蔽，Review ：建议人工复审，Pass：建议通过
                     * @return Suggestion 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。
返回值：Block：建议屏蔽，Review ：建议人工复审，Pass：建议通过
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
                     * 获取命中标签，可参阅对应数据结构（LabelGrade）的详细描述
                     * @return Label 命中标签，可参阅对应数据结构（LabelGrade）的详细描述
                     * 
                     */
                    LabelGrade GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取命中标签对应腾讯侧定义的标签
                     * @return TcLabelCodes 命中标签对应腾讯侧定义的标签
                     * 
                     */
                    std::vector<std::string> GetTcLabelCodes() const;

                    /**
                     * 判断参数 TcLabelCodes 是否已赋值
                     * @return TcLabelCodes 是否已赋值
                     * 
                     */
                    bool TcLabelCodesHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签（Label）下被检测文本命中的关键词信息，用于标注文本违规的具体原因（如：加我微信）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值
                     * @return Keywords 该字段用于返回当前标签（Label）下被检测文本命中的关键词信息，用于标注文本违规的具体原因（如：加我微信）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值
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
                     * 获取该字段用于返回文本审核的详细结果，返回值信息可参阅对应数据结构（ModerationDetail）的详细描述
                     * @return ModerationDetails 该字段用于返回文本审核的详细结果，返回值信息可参阅对应数据结构（ModerationDetail）的详细描述
                     * 
                     */
                    std::vector<ModerationDetail> GetModerationDetails() const;

                    /**
                     * 判断参数 ModerationDetails 是否已赋值
                     * @return ModerationDetails 是否已赋值
                     * 
                     */
                    bool ModerationDetailsHasBeenSet() const;

                    /**
                     * 获取该字段用于返回审核结果置信度，使用百分制。分数越高表示结果可信度越高。
                     * @return Score 该字段用于返回审核结果置信度，使用百分制。分数越高表示结果可信度越高。
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回检测对象对应请求参数中的DataId，与输入的DataId字段中的内容对应
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 该字段用于返回请求参数中的BizType参数
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 该字段用于返回后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。
返回值：Block：建议屏蔽，Review ：建议人工复审，Pass：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 命中标签，可参阅对应数据结构（LabelGrade）的详细描述
                     */
                    LabelGrade m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 命中标签对应腾讯侧定义的标签
                     */
                    std::vector<std::string> m_tcLabelCodes;
                    bool m_tcLabelCodesHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Label）下被检测文本命中的关键词信息，用于标注文本违规的具体原因（如：加我微信）。该参数可能会有多个返回值，代表命中的多个关键词；如返回值为空且Score不为空，则代表识别结果所对应的恶意标签（Label）是来自于语义模型判断的返回值
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 该字段用于返回文本审核的详细结果，返回值信息可参阅对应数据结构（ModerationDetail）的详细描述
                     */
                    std::vector<ModerationDetail> m_moderationDetails;
                    bool m_moderationDetailsHasBeenSet;

                    /**
                     * 该字段用于返回审核结果置信度，使用百分制。分数越高表示结果可信度越高。
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_MODERATETEXTRESPONSE_H_
