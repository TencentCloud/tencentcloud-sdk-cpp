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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PatternConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能抠图配置。
                */
                class AiCutoutConfig : public AbstractModel
                {
                public:
                    AiCutoutConfig();
                    ~AiCutoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * @return Switch <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * @param _switch <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>抠图目标类型指定：&quot;foreground&quot;（默认）/ &quot;pattern&quot;</p>
                     * @return Type <p>抠图目标类型指定：&quot;foreground&quot;（默认）/ &quot;pattern&quot;</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>抠图目标类型指定：&quot;foreground&quot;（默认）/ &quot;pattern&quot;</p>
                     * @param _type <p>抠图目标类型指定：&quot;foreground&quot;（默认）/ &quot;pattern&quot;</p>
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
                     * 获取<p>图案抠图配置。仅在Type为pattern时生效。</p>
                     * @return PatternConfig <p>图案抠图配置。仅在Type为pattern时生效。</p>
                     * 
                     */
                    PatternConfig GetPatternConfig() const;

                    /**
                     * 设置<p>图案抠图配置。仅在Type为pattern时生效。</p>
                     * @param _patternConfig <p>图案抠图配置。仅在Type为pattern时生效。</p>
                     * 
                     */
                    void SetPatternConfig(const PatternConfig& _patternConfig);

                    /**
                     * 判断参数 PatternConfig 是否已赋值
                     * @return PatternConfig 是否已赋值
                     * 
                     */
                    bool PatternConfigHasBeenSet() const;

                    /**
                     * 获取<p>抠图模型选择，可不填。</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>WAND-cutout-1.0-lite： 标准版，速度最快</li><li>WAND-cutout-2.0-lite： 增强版，速度最快</li><li>WAND-cutout-2.0-flash： 增强版，质量-速度平衡</li></ul>
                     * @return Model <p>抠图模型选择，可不填。</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>WAND-cutout-1.0-lite： 标准版，速度最快</li><li>WAND-cutout-2.0-lite： 增强版，速度最快</li><li>WAND-cutout-2.0-flash： 增强版，质量-速度平衡</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>抠图模型选择，可不填。</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>WAND-cutout-1.0-lite： 标准版，速度最快</li><li>WAND-cutout-2.0-lite： 增强版，速度最快</li><li>WAND-cutout-2.0-flash： 增强版，质量-速度平衡</li></ul>
                     * @param _model <p>抠图模型选择，可不填。</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>WAND-cutout-1.0-lite： 标准版，速度最快</li><li>WAND-cutout-2.0-lite： 增强版，速度最快</li><li>WAND-cutout-2.0-flash： 增强版，质量-速度平衡</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关，可选值：  ON：开启； OFF：关闭。 默认值：ON。</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>抠图目标类型指定：&quot;foreground&quot;（默认）/ &quot;pattern&quot;</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>图案抠图配置。仅在Type为pattern时生效。</p>
                     */
                    PatternConfig m_patternConfig;
                    bool m_patternConfigHasBeenSet;

                    /**
                     * <p>抠图模型选择，可不填。</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>WAND-cutout-1.0-lite： 标准版，速度最快</li><li>WAND-cutout-2.0-lite： 增强版，速度最快</li><li>WAND-cutout-2.0-flash： 增强版，质量-速度平衡</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_
