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
                     * 获取为true时表示视频无音频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoAudio 为true时表示视频无音频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNoAudio() const;

                    /**
                     * 设置为true时表示视频无音频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noAudio 为true时表示视频无音频轨。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取为true时表示视频无视频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoVideo 为true时表示视频无视频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNoVideo() const;

                    /**
                     * 设置为true时表示视频无视频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noVideo 为true时表示视频无视频轨。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频无参考质量评分，百分制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEvaluationScore 视频无参考质量评分，百分制。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQualityEvaluationScore() const;

                    /**
                     * 设置视频无参考质量评分，百分制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityEvaluationScore 视频无参考质量评分，百分制。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频无参考质量评分，MOS分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityEvaluationMeanOpinionScore 视频无参考质量评分，MOS分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQualityEvaluationMeanOpinionScore() const;

                    /**
                     * 设置视频无参考质量评分，MOS分数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityEvaluationMeanOpinionScore 视频无参考质量评分，MOS分数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取内容质检检出异常项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityControlResultSet 内容质检检出异常项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置内容质检检出异常项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityControlResultSet 内容质检检出异常项。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取格式诊断检出异常项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerDiagnoseResultSet 格式诊断检出异常项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ContainerDiagnoseResultItem> GetContainerDiagnoseResultSet() const;

                    /**
                     * 设置格式诊断检出异常项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerDiagnoseResultSet 格式诊断检出异常项
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 为true时表示视频无音频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noAudio;
                    bool m_noAudioHasBeenSet;

                    /**
                     * 为true时表示视频无视频轨。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_noVideo;
                    bool m_noVideoHasBeenSet;

                    /**
                     * 视频无参考质量评分，百分制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_qualityEvaluationScore;
                    bool m_qualityEvaluationScoreHasBeenSet;

                    /**
                     * 视频无参考质量评分，MOS分数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_qualityEvaluationMeanOpinionScore;
                    bool m_qualityEvaluationMeanOpinionScoreHasBeenSet;

                    /**
                     * 内容质检检出异常项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * 格式诊断检出异常项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ContainerDiagnoseResultItem> m_containerDiagnoseResultSet;
                    bool m_containerDiagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLDATA_H_
