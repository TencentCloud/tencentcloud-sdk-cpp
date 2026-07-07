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

                private:

                    /**
                     * <p>缓存命中输入积分系数。</p><p>用于 provider prompt cache 命中的输入 token。</p><p>取值范围：[0, 5000]</p><p>默认值：3</p>
                     */
                    double m_inputCachedCoefficient;
                    bool m_inputCachedCoefficientHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_COEFFICIENT_H_
