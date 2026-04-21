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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AIGCRECOGNITIONRESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AIGCRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * aigc片段审核结果
                */
                class AIGCRecognitionResult : public AbstractModel
                {
                public:
                    AIGCRecognitionResult();
                    ~AIGCRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>一级标签名</p>
                     * @return Label <p>一级标签名</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>一级标签名</p>
                     * @param _label <p>一级标签名</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>一级标签码</p>
                     * @return LabelCode <p>一级标签码</p>
                     * 
                     */
                    std::string GetLabelCode() const;

                    /**
                     * 设置<p>一级标签码</p>
                     * @param _labelCode <p>一级标签码</p>
                     * 
                     */
                    void SetLabelCode(const std::string& _labelCode);

                    /**
                     * 判断参数 LabelCode 是否已赋值
                     * @return LabelCode 是否已赋值
                     * 
                     */
                    bool LabelCodeHasBeenSet() const;

                    /**
                     * 获取<p>分数</p>
                     * @return Score <p>分数</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>分数</p>
                     * @param _score <p>分数</p>
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>该vad片段在原始音频片段中的起始时间偏移</p>
                     * @return StartTime <p>该vad片段在原始音频片段中的起始时间偏移</p>
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置<p>该vad片段在原始音频片段中的起始时间偏移</p>
                     * @param _startTime <p>该vad片段在原始音频片段中的起始时间偏移</p>
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>该vad片段在原始音频片段中的结束时间偏移</p>
                     * @return EndTime <p>该vad片段在原始音频片段中的结束时间偏移</p>
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置<p>该vad片段在原始音频片段中的结束时间偏移</p>
                     * @param _endTime <p>该vad片段在原始音频片段中的结束时间偏移</p>
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>建议值</p>
                     * @return Suggestion <p>建议值</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>建议值</p>
                     * @param _suggestion <p>建议值</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>二级标签名</p>
                     * @return SubLabel <p>二级标签名</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置<p>二级标签名</p>
                     * @param _subLabel <p>二级标签名</p>
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取<p>二级标签码</p>
                     * @return SubLabelCode <p>二级标签码</p>
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置<p>二级标签码</p>
                     * @param _subLabelCode <p>二级标签码</p>
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                    /**
                     * 获取<p>三级标签名</p>
                     * @return SubTag <p>三级标签名</p>
                     * 
                     */
                    std::string GetSubTag() const;

                    /**
                     * 设置<p>三级标签名</p>
                     * @param _subTag <p>三级标签名</p>
                     * 
                     */
                    void SetSubTag(const std::string& _subTag);

                    /**
                     * 判断参数 SubTag 是否已赋值
                     * @return SubTag 是否已赋值
                     * 
                     */
                    bool SubTagHasBeenSet() const;

                    /**
                     * 获取<p>三级标签码</p>
                     * @return SubTagCode <p>三级标签码</p>
                     * 
                     */
                    std::string GetSubTagCode() const;

                    /**
                     * 设置<p>三级标签码</p>
                     * @param _subTagCode <p>三级标签码</p>
                     * 
                     */
                    void SetSubTagCode(const std::string& _subTagCode);

                    /**
                     * 判断参数 SubTagCode 是否已赋值
                     * @return SubTagCode 是否已赋值
                     * 
                     */
                    bool SubTagCodeHasBeenSet() const;

                private:

                    /**
                     * <p>一级标签名</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>一级标签码</p>
                     */
                    std::string m_labelCode;
                    bool m_labelCodeHasBeenSet;

                    /**
                     * <p>分数</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该vad片段在原始音频片段中的起始时间偏移</p>
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>该vad片段在原始音频片段中的结束时间偏移</p>
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>建议值</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>二级标签名</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>二级标签码</p>
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                    /**
                     * <p>三级标签名</p>
                     */
                    std::string m_subTag;
                    bool m_subTagHasBeenSet;

                    /**
                     * <p>三级标签码</p>
                     */
                    std::string m_subTagCode;
                    bool m_subTagCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AIGCRECOGNITIONRESULT_H_
