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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectResultItem.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectContainerDiagnoseResultItem.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionReport.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测任务的输出。
                */
                class QualityInspectTaskOutput : public AbstractModel
                {
                public:
                    QualityInspectTaskOutput();
                    ~QualityInspectTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体文件是否无音频轨，取值范围：</p><li>0：否，即有音频轨；</li><li>1：是，即无音频轨。</li>
                     * @return NoAudio <p>媒体文件是否无音频轨，取值范围：</p><li>0：否，即有音频轨；</li><li>1：是，即无音频轨。</li>
                     * 
                     */
                    int64_t GetNoAudio() const;

                    /**
                     * 设置<p>媒体文件是否无音频轨，取值范围：</p><li>0：否，即有音频轨；</li><li>1：是，即无音频轨。</li>
                     * @param _noAudio <p>媒体文件是否无音频轨，取值范围：</p><li>0：否，即有音频轨；</li><li>1：是，即无音频轨。</li>
                     * 
                     */
                    void SetNoAudio(const int64_t& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件是否无视频轨，取值范围：</p><li>0：否，即有视频轨；</li><li>1：是，即无视频轨。</li>
                     * @return NoVideo <p>媒体文件是否无视频轨，取值范围：</p><li>0：否，即有视频轨；</li><li>1：是，即无视频轨。</li>
                     * 
                     */
                    int64_t GetNoVideo() const;

                    /**
                     * 设置<p>媒体文件是否无视频轨，取值范围：</p><li>0：否，即有视频轨；</li><li>1：是，即无视频轨。</li>
                     * @param _noVideo <p>媒体文件是否无视频轨，取值范围：</p><li>0：否，即有视频轨；</li><li>1：是，即无视频轨。</li>
                     * 
                     */
                    void SetNoVideo(const int64_t& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取<p>视频画面质量评分，取值范围：[0, 100]。</p>
                     * @return QualityEvaluationScore <p>视频画面质量评分，取值范围：[0, 100]。</p>
                     * 
                     */
                    uint64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置<p>视频画面质量评分，取值范围：[0, 100]。</p>
                     * @param _qualityEvaluationScore <p>视频画面质量评分，取值范围：[0, 100]。</p>
                     * 
                     */
                    void SetQualityEvaluationScore(const uint64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取<p>音画质检测出的异常项列表。</p>
                     * @return QualityInspectResultSet <p>音画质检测出的异常项列表。</p>
                     * 
                     */
                    std::vector<QualityInspectResultItem> GetQualityInspectResultSet() const;

                    /**
                     * 设置<p>音画质检测出的异常项列表。</p>
                     * @param _qualityInspectResultSet <p>音画质检测出的异常项列表。</p>
                     * 
                     */
                    void SetQualityInspectResultSet(const std::vector<QualityInspectResultItem>& _qualityInspectResultSet);

                    /**
                     * 判断参数 QualityInspectResultSet 是否已赋值
                     * @return QualityInspectResultSet 是否已赋值
                     * 
                     */
                    bool QualityInspectResultSetHasBeenSet() const;

                    /**
                     * 获取<p>视频无参考质量评分，MOS分数。</p>
                     * @return QualityEvaluationMeanOpinionScore <p>视频无参考质量评分，MOS分数。</p>
                     * 
                     */
                    double GetQualityEvaluationMeanOpinionScore() const;

                    /**
                     * 设置<p>视频无参考质量评分，MOS分数。</p>
                     * @param _qualityEvaluationMeanOpinionScore <p>视频无参考质量评分，MOS分数。</p>
                     * 
                     */
                    void SetQualityEvaluationMeanOpinionScore(const double& _qualityEvaluationMeanOpinionScore);

                    /**
                     * 判断参数 QualityEvaluationMeanOpinionScore 是否已赋值
                     * @return QualityEvaluationMeanOpinionScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationMeanOpinionScoreHasBeenSet() const;

                    /**
                     * 获取<p>视频美学评分，范围：[0,100]。</p>
                     * @return AestheticEvaluationScore <p>视频美学评分，范围：[0,100]。</p>
                     * 
                     */
                    int64_t GetAestheticEvaluationScore() const;

                    /**
                     * 设置<p>视频美学评分，范围：[0,100]。</p>
                     * @param _aestheticEvaluationScore <p>视频美学评分，范围：[0,100]。</p>
                     * 
                     */
                    void SetAestheticEvaluationScore(const int64_t& _aestheticEvaluationScore);

                    /**
                     * 判断参数 AestheticEvaluationScore 是否已赋值
                     * @return AestheticEvaluationScore 是否已赋值
                     * 
                     */
                    bool AestheticEvaluationScoreHasBeenSet() const;

                    /**
                     * 获取<p>格式诊断检出异常项。</p>
                     * @return ContainerDiagnoseResultSet <p>格式诊断检出异常项。</p>
                     * 
                     */
                    std::vector<QualityInspectContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置<p>格式诊断检出异常项。</p>
                     * @param _containerDiagnoseResultSet <p>格式诊断检出异常项。</p>
                     * 
                     */
                    void SetContainerDiagnoseResultSet(const std::vector<QualityInspectContainerDiagnoseResultItem>& _containerDiagnoseResultSet);

                    /**
                     * 判断参数 ContainerDiagnoseResultSet 是否已赋值
                     * @return ContainerDiagnoseResultSet 是否已赋值
                     * 
                     */
                    bool ContainerDiagnoseResultSetHasBeenSet() const;

                    /**
                     * 获取<p>LLM 大模型 AIGC 质量检测结果。</p>
                     * @return LLMDetectionReport <p>LLM 大模型 AIGC 质量检测结果。</p>
                     * 
                     */
                    QualityInspectLLMDetectionReport GetLLMDetectionReport() const;

                    /**
                     * 设置<p>LLM 大模型 AIGC 质量检测结果。</p>
                     * @param _lLMDetectionReport <p>LLM 大模型 AIGC 质量检测结果。</p>
                     * 
                     */
                    void SetLLMDetectionReport(const QualityInspectLLMDetectionReport& _lLMDetectionReport);

                    /**
                     * 判断参数 LLMDetectionReport 是否已赋值
                     * @return LLMDetectionReport 是否已赋值
                     * 
                     */
                    bool LLMDetectionReportHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件是否无音频轨，取值范围：</p><li>0：否，即有音频轨；</li><li>1：是，即无音频轨。</li>
                     */
                    int64_t m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * <p>媒体文件是否无视频轨，取值范围：</p><li>0：否，即有视频轨；</li><li>1：是，即无视频轨。</li>
                     */
                    int64_t m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * <p>视频画面质量评分，取值范围：[0, 100]。</p>
                     */
                    uint64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * <p>音画质检测出的异常项列表。</p>
                     */
                    std::vector<QualityInspectResultItem> m_qualityInspectResultSet;
                    bool m_qualityInspectResultSetHasBeenSet;

                    /**
                     * <p>视频无参考质量评分，MOS分数。</p>
                     */
                    double m_qualityEvaluationMeanOpinionScore;
                    bool m_qualityEvaluationMeanOpinionScoreHasBeenSet;

                    /**
                     * <p>视频美学评分，范围：[0,100]。</p>
                     */
                    int64_t m_aestheticEvaluationScore;
                    bool m_aestheticEvaluationScoreHasBeenSet;

                    /**
                     * <p>格式诊断检出异常项。</p>
                     */
                    std::vector<QualityInspectContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                    /**
                     * <p>LLM 大模型 AIGC 质量检测结果。</p>
                     */
                    QualityInspectLLMDetectionReport m_lLMDetectionReport;
                    bool m_lLMDetectionReportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASKOUTPUT_H_
