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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 印花提取配置。
                */
                class PatternConfig : public AbstractModel
                {
                public:
                    PatternConfig();
                    ~PatternConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>透明度阈值</p><p>取值范围：[0, 255]</p><p>默认值：30</p>
                     * @return TransparencyThreshold <p>透明度阈值</p><p>取值范围：[0, 255]</p><p>默认值：30</p>
                     * 
                     */
                    int64_t GetTransparencyThreshold() const;

                    /**
                     * 设置<p>透明度阈值</p><p>取值范围：[0, 255]</p><p>默认值：30</p>
                     * @param _transparencyThreshold <p>透明度阈值</p><p>取值范围：[0, 255]</p><p>默认值：30</p>
                     * 
                     */
                    void SetTransparencyThreshold(const int64_t& _transparencyThreshold);

                    /**
                     * 判断参数 TransparencyThreshold 是否已赋值
                     * @return TransparencyThreshold 是否已赋值
                     * 
                     */
                    bool TransparencyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>不透明阈值，必须大于TransparencyThreshold</p><p>取值范围：[0, 255]</p><p>默认值：127</p>
                     * @return OpaqueThreshold <p>不透明阈值，必须大于TransparencyThreshold</p><p>取值范围：[0, 255]</p><p>默认值：127</p>
                     * 
                     */
                    int64_t GetOpaqueThreshold() const;

                    /**
                     * 设置<p>不透明阈值，必须大于TransparencyThreshold</p><p>取值范围：[0, 255]</p><p>默认值：127</p>
                     * @param _opaqueThreshold <p>不透明阈值，必须大于TransparencyThreshold</p><p>取值范围：[0, 255]</p><p>默认值：127</p>
                     * 
                     */
                    void SetOpaqueThreshold(const int64_t& _opaqueThreshold);

                    /**
                     * 判断参数 OpaqueThreshold 是否已赋值
                     * @return OpaqueThreshold 是否已赋值
                     * 
                     */
                    bool OpaqueThresholdHasBeenSet() const;

                    /**
                     * 获取<p>边缘采样步数，默认5</p><p>取值范围：[1, 10]</p>
                     * @return EdgeSamplingStep <p>边缘采样步数，默认5</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    int64_t GetEdgeSamplingStep() const;

                    /**
                     * 设置<p>边缘采样步数，默认5</p><p>取值范围：[1, 10]</p>
                     * @param _edgeSamplingStep <p>边缘采样步数，默认5</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    void SetEdgeSamplingStep(const int64_t& _edgeSamplingStep);

                    /**
                     * 判断参数 EdgeSamplingStep 是否已赋值
                     * @return EdgeSamplingStep 是否已赋值
                     * 
                     */
                    bool EdgeSamplingStepHasBeenSet() const;

                    /**
                     * 获取<p>边缘扩展步数，默认5</p>
                     * @return EdgeExpansionStep <p>边缘扩展步数，默认5</p>
                     * 
                     */
                    int64_t GetEdgeExpansionStep() const;

                    /**
                     * 设置<p>边缘扩展步数，默认5</p>
                     * @param _edgeExpansionStep <p>边缘扩展步数，默认5</p>
                     * 
                     */
                    void SetEdgeExpansionStep(const int64_t& _edgeExpansionStep);

                    /**
                     * 判断参数 EdgeExpansionStep 是否已赋值
                     * @return EdgeExpansionStep 是否已赋值
                     * 
                     */
                    bool EdgeExpansionStepHasBeenSet() const;

                    /**
                     * 获取<p>边缘融合强度，默认0.5</p><p>取值范围：[0, 1.0]</p>
                     * @return EdgeBlendingIntensity <p>边缘融合强度，默认0.5</p><p>取值范围：[0, 1.0]</p>
                     * 
                     */
                    double GetEdgeBlendingIntensity() const;

                    /**
                     * 设置<p>边缘融合强度，默认0.5</p><p>取值范围：[0, 1.0]</p>
                     * @param _edgeBlendingIntensity <p>边缘融合强度，默认0.5</p><p>取值范围：[0, 1.0]</p>
                     * 
                     */
                    void SetEdgeBlendingIntensity(const double& _edgeBlendingIntensity);

                    /**
                     * 判断参数 EdgeBlendingIntensity 是否已赋值
                     * @return EdgeBlendingIntensity 是否已赋值
                     * 
                     */
                    bool EdgeBlendingIntensityHasBeenSet() const;

                private:

                    /**
                     * <p>透明度阈值</p><p>取值范围：[0, 255]</p><p>默认值：30</p>
                     */
                    int64_t m_transparencyThreshold;
                    bool m_transparencyThresholdHasBeenSet;

                    /**
                     * <p>不透明阈值，必须大于TransparencyThreshold</p><p>取值范围：[0, 255]</p><p>默认值：127</p>
                     */
                    int64_t m_opaqueThreshold;
                    bool m_opaqueThresholdHasBeenSet;

                    /**
                     * <p>边缘采样步数，默认5</p><p>取值范围：[1, 10]</p>
                     */
                    int64_t m_edgeSamplingStep;
                    bool m_edgeSamplingStepHasBeenSet;

                    /**
                     * <p>边缘扩展步数，默认5</p>
                     */
                    int64_t m_edgeExpansionStep;
                    bool m_edgeExpansionStepHasBeenSet;

                    /**
                     * <p>边缘融合强度，默认0.5</p><p>取值范围：[0, 1.0]</p>
                     */
                    double m_edgeBlendingIntensity;
                    bool m_edgeBlendingIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_
