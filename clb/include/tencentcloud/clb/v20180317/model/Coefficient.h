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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModelAlias 积分系数配置
                */
                class Coefficient : public AbstractModel
                {
                public:
                    Coefficient();
                    ~Coefficient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     * @return InputCachedCoefficient <p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     * 
                     */
                    double GetInputCachedCoefficient() const;

                    /**
                     * 设置<p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     * @param _inputCachedCoefficient <p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     * 
                     */
                    void SetInputCachedCoefficient(const double& _inputCachedCoefficient);

                    /**
                     * 判断参数 InputCachedCoefficient 是否已赋值
                     * @return InputCachedCoefficient 是否已赋值
                     * 
                     */
                    bool InputCachedCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>缓存创建积分系数</p>
                     * @return InputCacheCreationCoefficient <p>缓存创建积分系数</p>
                     * 
                     */
                    double GetInputCacheCreationCoefficient() const;

                    /**
                     * 设置<p>缓存创建积分系数</p>
                     * @param _inputCacheCreationCoefficient <p>缓存创建积分系数</p>
                     * 
                     */
                    void SetInputCacheCreationCoefficient(const double& _inputCacheCreationCoefficient);

                    /**
                     * 判断参数 InputCacheCreationCoefficient 是否已赋值
                     * @return InputCacheCreationCoefficient 是否已赋值
                     * 
                     */
                    bool InputCacheCreationCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输入积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：25</p>
                     * @return InputCoefficient <p>输入积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：25</p>
                     * 
                     */
                    double GetInputCoefficient() const;

                    /**
                     * 设置<p>输入积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：25</p>
                     * @param _inputCoefficient <p>输入积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：25</p>
                     * 
                     */
                    void SetInputCoefficient(const double& _inputCoefficient);

                    /**
                     * 判断参数 InputCoefficient 是否已赋值
                     * @return InputCoefficient 是否已赋值
                     * 
                     */
                    bool InputCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输出积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：100</p>
                     * @return OutputCoefficient <p>输出积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：100</p>
                     * 
                     */
                    double GetOutputCoefficient() const;

                    /**
                     * 设置<p>输出积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：100</p>
                     * @param _outputCoefficient <p>输出积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：100</p>
                     * 
                     */
                    void SetOutputCoefficient(const double& _outputCoefficient);

                    /**
                     * 判断参数 OutputCoefficient 是否已赋值
                     * @return OutputCoefficient 是否已赋值
                     * 
                     */
                    bool OutputCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输入图片系数</p>
                     * @return InputImageCoefficient <p>输入图片系数</p>
                     * 
                     */
                    double GetInputImageCoefficient() const;

                    /**
                     * 设置<p>输入图片系数</p>
                     * @param _inputImageCoefficient <p>输入图片系数</p>
                     * 
                     */
                    void SetInputImageCoefficient(const double& _inputImageCoefficient);

                    /**
                     * 判断参数 InputImageCoefficient 是否已赋值
                     * @return InputImageCoefficient 是否已赋值
                     * 
                     */
                    bool InputImageCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输入视频每秒系数</p>
                     * @return InputVideoSecondCoefficient <p>输入视频每秒系数</p>
                     * 
                     */
                    double GetInputVideoSecondCoefficient() const;

                    /**
                     * 设置<p>输入视频每秒系数</p>
                     * @param _inputVideoSecondCoefficient <p>输入视频每秒系数</p>
                     * 
                     */
                    void SetInputVideoSecondCoefficient(const double& _inputVideoSecondCoefficient);

                    /**
                     * 判断参数 InputVideoSecondCoefficient 是否已赋值
                     * @return InputVideoSecondCoefficient 是否已赋值
                     * 
                     */
                    bool InputVideoSecondCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输出视频每秒系数</p>
                     * @return OutputVideoSecondCoefficient <p>输出视频每秒系数</p>
                     * 
                     */
                    double GetOutputVideoSecondCoefficient() const;

                    /**
                     * 设置<p>输出视频每秒系数</p>
                     * @param _outputVideoSecondCoefficient <p>输出视频每秒系数</p>
                     * 
                     */
                    void SetOutputVideoSecondCoefficient(const double& _outputVideoSecondCoefficient);

                    /**
                     * 判断参数 OutputVideoSecondCoefficient 是否已赋值
                     * @return OutputVideoSecondCoefficient 是否已赋值
                     * 
                     */
                    bool OutputVideoSecondCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>输出图片系数</p>
                     * @return OutputImageCoefficient <p>输出图片系数</p>
                     * 
                     */
                    double GetOutputImageCoefficient() const;

                    /**
                     * 设置<p>输出图片系数</p>
                     * @param _outputImageCoefficient <p>输出图片系数</p>
                     * 
                     */
                    void SetOutputImageCoefficient(const double& _outputImageCoefficient);

                    /**
                     * 判断参数 OutputImageCoefficient 是否已赋值
                     * @return OutputImageCoefficient 是否已赋值
                     * 
                     */
                    bool OutputImageCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 音频输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：80</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @return InputAudioTokenCoefficient <p>Realtime 音频输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：80</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    double GetInputAudioTokenCoefficient() const;

                    /**
                     * 设置<p>Realtime 音频输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：80</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @param _inputAudioTokenCoefficient <p>Realtime 音频输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：80</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    void SetInputAudioTokenCoefficient(const double& _inputAudioTokenCoefficient);

                    /**
                     * 判断参数 InputAudioTokenCoefficient 是否已赋值
                     * @return InputAudioTokenCoefficient 是否已赋值
                     * 
                     */
                    bool InputAudioTokenCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 音频缓存命中输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @return InputCachedAudioTokenCoefficient <p>Realtime 音频缓存命中输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    double GetInputCachedAudioTokenCoefficient() const;

                    /**
                     * 设置<p>Realtime 音频缓存命中输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @param _inputCachedAudioTokenCoefficient <p>Realtime 音频缓存命中输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    void SetInputCachedAudioTokenCoefficient(const double& _inputCachedAudioTokenCoefficient);

                    /**
                     * 判断参数 InputCachedAudioTokenCoefficient 是否已赋值
                     * @return InputCachedAudioTokenCoefficient 是否已赋值
                     * 
                     */
                    bool InputCachedAudioTokenCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 图像输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：12.5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @return InputImageTokenCoefficient <p>Realtime 图像输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：12.5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    double GetInputImageTokenCoefficient() const;

                    /**
                     * 设置<p>Realtime 图像输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：12.5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @param _inputImageTokenCoefficient <p>Realtime 图像输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：12.5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    void SetInputImageTokenCoefficient(const double& _inputImageTokenCoefficient);

                    /**
                     * 判断参数 InputImageTokenCoefficient 是否已赋值
                     * @return InputImageTokenCoefficient 是否已赋值
                     * 
                     */
                    bool InputImageTokenCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 图像缓存命中输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @return InputCachedImageTokenCoefficient <p>Realtime 图像缓存命中输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    double GetInputCachedImageTokenCoefficient() const;

                    /**
                     * 设置<p>Realtime 图像缓存命中输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @param _inputCachedImageTokenCoefficient <p>Realtime 图像缓存命中输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    void SetInputCachedImageTokenCoefficient(const double& _inputCachedImageTokenCoefficient);

                    /**
                     * 判断参数 InputCachedImageTokenCoefficient 是否已赋值
                     * @return InputCachedImageTokenCoefficient 是否已赋值
                     * 
                     */
                    bool InputCachedImageTokenCoefficientHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 音频输出积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：300</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @return OutputAudioTokenCoefficient <p>Realtime 音频输出积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：300</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    double GetOutputAudioTokenCoefficient() const;

                    /**
                     * 设置<p>Realtime 音频输出积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：300</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * @param _outputAudioTokenCoefficient <p>Realtime 音频输出积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：300</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     * 
                     */
                    void SetOutputAudioTokenCoefficient(const double& _outputAudioTokenCoefficient);

                    /**
                     * 判断参数 OutputAudioTokenCoefficient 是否已赋值
                     * @return OutputAudioTokenCoefficient 是否已赋值
                     * 
                     */
                    bool OutputAudioTokenCoefficientHasBeenSet() const;

                private:

                    /**
                     * <p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     */
                    double m_inputCachedCoefficient;
                    bool m_inputCachedCoefficientHasBeenSet;

                    /**
                     * <p>缓存创建积分系数</p>
                     */
                    double m_inputCacheCreationCoefficient;
                    bool m_inputCacheCreationCoefficientHasBeenSet;

                    /**
                     * <p>输入积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：25</p>
                     */
                    double m_inputCoefficient;
                    bool m_inputCoefficientHasBeenSet;

                    /**
                     * <p>输出积分系数。</p><p>取值范围：[1, 5000]</p><p>默认值：100</p>
                     */
                    double m_outputCoefficient;
                    bool m_outputCoefficientHasBeenSet;

                    /**
                     * <p>输入图片系数</p>
                     */
                    double m_inputImageCoefficient;
                    bool m_inputImageCoefficientHasBeenSet;

                    /**
                     * <p>输入视频每秒系数</p>
                     */
                    double m_inputVideoSecondCoefficient;
                    bool m_inputVideoSecondCoefficientHasBeenSet;

                    /**
                     * <p>输出视频每秒系数</p>
                     */
                    double m_outputVideoSecondCoefficient;
                    bool m_outputVideoSecondCoefficientHasBeenSet;

                    /**
                     * <p>输出图片系数</p>
                     */
                    double m_outputImageCoefficient;
                    bool m_outputImageCoefficientHasBeenSet;

                    /**
                     * <p>Realtime 音频输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：80</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     */
                    double m_inputAudioTokenCoefficient;
                    bool m_inputAudioTokenCoefficientHasBeenSet;

                    /**
                     * <p>Realtime 音频缓存命中输入积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     */
                    double m_inputCachedAudioTokenCoefficient;
                    bool m_inputCachedAudioTokenCoefficientHasBeenSet;

                    /**
                     * <p>Realtime 图像输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：12.5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     */
                    double m_inputImageTokenCoefficient;
                    bool m_inputImageTokenCoefficientHasBeenSet;

                    /**
                     * <p>Realtime 图像缓存命中输入积分系数，单位为积分/百万图像 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：5</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     */
                    double m_inputCachedImageTokenCoefficient;
                    bool m_inputCachedImageTokenCoefficientHasBeenSet;

                    /**
                     * <p>Realtime 音频输出积分系数，单位为积分/百万音频 Token。</p><p>取值范围：[0, 5000]</p><p>默认值：300</p><p>仅 Capability=realtime 支持，最多 6 位小数。修改时未提供此字段则保留旧值；0 表示零价，不接受 null。</p>
                     */
                    double m_outputAudioTokenCoefficient;
                    bool m_outputAudioTokenCoefficientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENT_H_
