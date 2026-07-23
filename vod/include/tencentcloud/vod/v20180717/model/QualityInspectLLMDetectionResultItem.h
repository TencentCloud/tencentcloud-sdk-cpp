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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionIssue.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质检测的LLM 大模型单个检测项的聚合结果。
                */
                class QualityInspectLLMDetectionResultItem : public AbstractModel
                {
                public:
                    QualityInspectLLMDetectionResultItem();
                    ~QualityInspectLLMDetectionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测分类。</p><p>枚举值：</p><ul><li>AIGCQualityCharacteristics： AIGC 质量特征。</li></ul>
                     * @return Category <p>检测分类。</p><p>枚举值：</p><ul><li>AIGCQualityCharacteristics： AIGC 质量特征。</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>检测分类。</p><p>枚举值：</p><ul><li>AIGCQualityCharacteristics： AIGC 质量特征。</li></ul>
                     * @param _category <p>检测分类。</p><p>枚举值：</p><ul><li>AIGCQualityCharacteristics： AIGC 质量特征。</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>检测分组。</p><p>枚举值：</p><ul><li>AIGCAuthenticity： AIGC 真实性，包括人体合理性、物理合理性、跨帧一致性等。</li><li>AIGCTechQuality： AIGC 技术质量，包括画幅、黑边、强行竖屏等。</li></ul>
                     * @return Group <p>检测分组。</p><p>枚举值：</p><ul><li>AIGCAuthenticity： AIGC 真实性，包括人体合理性、物理合理性、跨帧一致性等。</li><li>AIGCTechQuality： AIGC 技术质量，包括画幅、黑边、强行竖屏等。</li></ul>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>检测分组。</p><p>枚举值：</p><ul><li>AIGCAuthenticity： AIGC 真实性，包括人体合理性、物理合理性、跨帧一致性等。</li><li>AIGCTechQuality： AIGC 技术质量，包括画幅、黑边、强行竖屏等。</li></ul>
                     * @param _group <p>检测分组。</p><p>枚举值：</p><ul><li>AIGCAuthenticity： AIGC 真实性，包括人体合理性、物理合理性、跨帧一致性等。</li><li>AIGCTechQuality： AIGC 技术质量，包括画幅、黑边、强行竖屏等。</li></ul>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>检测类型名称。</p><p>枚举值：</p><ul><li>BodyPoseCheck： 人体姿态合理性，属于 AIGCAuthenticity。</li><li>BodyDetailCheck： 人体细节合理性，包括手指数、五官对称等，属于 AIGCAuthenticity。</li><li>PhysicRulesCheck： 物理规律合理性，包括透视、光影、重力等，属于 AIGCAuthenticity。</li><li>ObjectConsistencyCheck： 跨帧物体一致性，属于 AIGCAuthenticity。</li><li>FormatCheck： 画幅、黑边、强行竖屏等格式问题，属于 AIGCTechQuality。</li></ul>
                     * @return Type <p>检测类型名称。</p><p>枚举值：</p><ul><li>BodyPoseCheck： 人体姿态合理性，属于 AIGCAuthenticity。</li><li>BodyDetailCheck： 人体细节合理性，包括手指数、五官对称等，属于 AIGCAuthenticity。</li><li>PhysicRulesCheck： 物理规律合理性，包括透视、光影、重力等，属于 AIGCAuthenticity。</li><li>ObjectConsistencyCheck： 跨帧物体一致性，属于 AIGCAuthenticity。</li><li>FormatCheck： 画幅、黑边、强行竖屏等格式问题，属于 AIGCTechQuality。</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>检测类型名称。</p><p>枚举值：</p><ul><li>BodyPoseCheck： 人体姿态合理性，属于 AIGCAuthenticity。</li><li>BodyDetailCheck： 人体细节合理性，包括手指数、五官对称等，属于 AIGCAuthenticity。</li><li>PhysicRulesCheck： 物理规律合理性，包括透视、光影、重力等，属于 AIGCAuthenticity。</li><li>ObjectConsistencyCheck： 跨帧物体一致性，属于 AIGCAuthenticity。</li><li>FormatCheck： 画幅、黑边、强行竖屏等格式问题，属于 AIGCTechQuality。</li></ul>
                     * @param _type <p>检测类型名称。</p><p>枚举值：</p><ul><li>BodyPoseCheck： 人体姿态合理性，属于 AIGCAuthenticity。</li><li>BodyDetailCheck： 人体细节合理性，包括手指数、五官对称等，属于 AIGCAuthenticity。</li><li>PhysicRulesCheck： 物理规律合理性，包括透视、光影、重力等，属于 AIGCAuthenticity。</li><li>ObjectConsistencyCheck： 跨帧物体一致性，属于 AIGCAuthenticity。</li><li>FormatCheck： 画幅、黑边、强行竖屏等格式问题，属于 AIGCTechQuality。</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>整体质量得分，范围 [0, 100]，越高表示越好。</p>
                     * @return Score <p>整体质量得分，范围 [0, 100]，越高表示越好。</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>整体质量得分，范围 [0, 100]，越高表示越好。</p>
                     * @param _score <p>整体质量得分，范围 [0, 100]，越高表示越好。</p>
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
                     * 获取<p>判断置信度，范围 [0, 100]，越高表示越确定。</p>
                     * @return Confidence <p>判断置信度，范围 [0, 100]，越高表示越确定。</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>判断置信度，范围 [0, 100]，越高表示越确定。</p>
                     * @param _confidence <p>判断置信度，范围 [0, 100]，越高表示越确定。</p>
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
                     * 获取<p>检测发现的问题列表，无问题时为空。</p>
                     * @return IssueSet <p>检测发现的问题列表，无问题时为空。</p>
                     * 
                     */
                    std::vector<QualityInspectLLMDetectionIssue> GetIssueSet() const;

                    /**
                     * 设置<p>检测发现的问题列表，无问题时为空。</p>
                     * @param _issueSet <p>检测发现的问题列表，无问题时为空。</p>
                     * 
                     */
                    void SetIssueSet(const std::vector<QualityInspectLLMDetectionIssue>& _issueSet);

                    /**
                     * 判断参数 IssueSet 是否已赋值
                     * @return IssueSet 是否已赋值
                     * 
                     */
                    bool IssueSetHasBeenSet() const;

                private:

                    /**
                     * <p>检测分类。</p><p>枚举值：</p><ul><li>AIGCQualityCharacteristics： AIGC 质量特征。</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>检测分组。</p><p>枚举值：</p><ul><li>AIGCAuthenticity： AIGC 真实性，包括人体合理性、物理合理性、跨帧一致性等。</li><li>AIGCTechQuality： AIGC 技术质量，包括画幅、黑边、强行竖屏等。</li></ul>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>检测类型名称。</p><p>枚举值：</p><ul><li>BodyPoseCheck： 人体姿态合理性，属于 AIGCAuthenticity。</li><li>BodyDetailCheck： 人体细节合理性，包括手指数、五官对称等，属于 AIGCAuthenticity。</li><li>PhysicRulesCheck： 物理规律合理性，包括透视、光影、重力等，属于 AIGCAuthenticity。</li><li>ObjectConsistencyCheck： 跨帧物体一致性，属于 AIGCAuthenticity。</li><li>FormatCheck： 画幅、黑边、强行竖屏等格式问题，属于 AIGCTechQuality。</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>整体质量得分，范围 [0, 100]，越高表示越好。</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>判断置信度，范围 [0, 100]，越高表示越确定。</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>检测发现的问题列表，无问题时为空。</p>
                     */
                    std::vector<QualityInspectLLMDetectionIssue> m_issueSet;
                    bool m_issueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_
