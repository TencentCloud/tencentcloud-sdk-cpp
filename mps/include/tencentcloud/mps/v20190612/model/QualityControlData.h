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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlResult.h>
#include <tencentcloud/mps/v20190612/model/ContainerDiagnoseResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体质检结果输出。
                */
                class QualityControlData : public AbstractModel
                {
                public:
                    QualityControlData();
                    ~QualityControlData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>为true时表示视频无音频轨。</p>
                     * @return NoAudio <p>为true时表示视频无音频轨。</p>
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置<p>为true时表示视频无音频轨。</p>
                     * @param _noAudio <p>为true时表示视频无音频轨。</p>
                     * 
                     */
                    void SetNoAudio(const bool& _noAudio);

                    /**
                     * 判断参数 NoAudio 是否已赋值
                     * @return NoAudio 是否已赋值
                     * 
                     */
                    bool NoAudioHasBeenSet() const;

                    /**
                     * 获取<p>为true时表示视频无视频轨。</p>
                     * @return NoVideo <p>为true时表示视频无视频轨。</p>
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置<p>为true时表示视频无视频轨。</p>
                     * @param _noVideo <p>为true时表示视频无视频轨。</p>
                     * 
                     */
                    void SetNoVideo(const bool& _noVideo);

                    /**
                     * 判断参数 NoVideo 是否已赋值
                     * @return NoVideo 是否已赋值
                     * 
                     */
                    bool NoVideoHasBeenSet() const;

                    /**
                     * 获取<p>视频无参考质量评分，百分制。</p>
                     * @return QualityEvaluationScore <p>视频无参考质量评分，百分制。</p>
                     * 
                     */
                    int64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置<p>视频无参考质量评分，百分制。</p>
                     * @param _qualityEvaluationScore <p>视频无参考质量评分，百分制。</p>
                     * 
                     */
                    void SetQualityEvaluationScore(const int64_t& _qualityEvaluationScore);

                    /**
                     * 判断参数 QualityEvaluationScore 是否已赋值
                     * @return QualityEvaluationScore 是否已赋值
                     * 
                     */
                    bool QualityEvaluationScoreHasBeenSet() const;

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
                     * 获取<p>内容质检检出异常项。</p>
                     * @return QualityControlResultSet <p>内容质检检出异常项。</p>
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置<p>内容质检检出异常项。</p>
                     * @param _qualityControlResultSet <p>内容质检检出异常项。</p>
                     * 
                     */
                    void SetQualityControlResultSet(const std::vector<QualityControlResult>& _qualityControlResultSet);

                    /**
                     * 判断参数 QualityControlResultSet 是否已赋值
                     * @return QualityControlResultSet 是否已赋值
                     * 
                     */
                    bool QualityControlResultSetHasBeenSet() const;

                    /**
                     * 获取<p>格式诊断检出异常项。</p>
                     * @return ContainerDiagnoseResultSet <p>格式诊断检出异常项。</p>
                     * 
                     */
                    std::vector<ContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置<p>格式诊断检出异常项。</p>
                     * @param _containerDiagnoseResultSet <p>格式诊断检出异常项。</p>
                     * 
                     */
                    void SetContainerDiagnoseResultSet(const std::vector<ContainerDiagnoseResultItem>& _containerDiagnoseResultSet);

                    /**
                     * 判断参数 ContainerDiagnoseResultSet 是否已赋值
                     * @return ContainerDiagnoseResultSet 是否已赋值
                     * 
                     */
                    bool ContainerDiagnoseResultSetHasBeenSet() const;

                private:

                    /**
                     * <p>为true时表示视频无音频轨。</p>
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * <p>为true时表示视频无视频轨。</p>
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * <p>视频无参考质量评分，百分制。</p>
                     */
                    int64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

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
                     * <p>内容质检检出异常项。</p>
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * <p>格式诊断检出异常项。</p>
                     */
                    std::vector<ContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
