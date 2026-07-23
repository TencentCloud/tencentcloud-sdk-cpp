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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONISSUE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONISSUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测的LLM 大模型检测发现的单条问题。
                */
                class QualityInspectLLMDetectionIssue : public AbstractModel
                {
                public:
                    QualityInspectLLMDetectionIssue();
                    ~QualityInspectLLMDetectionIssue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问题分类标签。</p>
                     * @return Tag <p>问题分类标签。</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>问题分类标签。</p>
                     * @param _tag <p>问题分类标签。</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>问题描述。</p>
                     * @return Description <p>问题描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>问题描述。</p>
                     * @param _description <p>问题描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>该问题的质量得分</p><p>取值范围：[0, 100]</p>
                     * @return Score <p>该问题的质量得分</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>该问题的质量得分</p><p>取值范围：[0, 100]</p>
                     * @param _score <p>该问题的质量得分</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>该问题的判断置信度</p><p>取值范围：[0, 100]</p>
                     * @return Confidence <p>该问题的判断置信度</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>该问题的判断置信度</p><p>取值范围：[0, 100]</p>
                     * @param _confidence <p>该问题的判断置信度</p><p>取值范围：[0, 100]</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>问题起始时间。</p><p>单位：毫秒。</p>
                     * @return StartTimeMs <p>问题起始时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置<p>问题起始时间。</p><p>单位：毫秒。</p>
                     * @param _startTimeMs <p>问题起始时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>问题结束时间。</p><p>单位：毫秒。</p>
                     * @return EndTimeMs <p>问题结束时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置<p>问题结束时间。</p><p>单位：毫秒。</p>
                     * @param _endTimeMs <p>问题结束时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>附加数据（JSON 格式），如严重程度等补充信息。</p>
                     * @return ExtraData <p>附加数据（JSON 格式），如严重程度等补充信息。</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>附加数据（JSON 格式），如严重程度等补充信息。</p>
                     * @param _extraData <p>附加数据（JSON 格式），如严重程度等补充信息。</p>
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * <p>问题分类标签。</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>问题描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>该问题的质量得分</p><p>取值范围：[0, 100]</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该问题的判断置信度</p><p>取值范围：[0, 100]</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>问题起始时间。</p><p>单位：毫秒。</p>
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * <p>问题结束时间。</p><p>单位：毫秒。</p>
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * <p>附加数据（JSON 格式），如严重程度等补充信息。</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONISSUE_H_
