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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDECOMPOSECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDECOMPOSECONFIG_H_

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
                * 智能图层拆分配置。
                */
                class AiDecomposeConfig : public AbstractModel
                {
                public:
                    AiDecomposeConfig();
                    ~AiDecomposeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启图层分离功能。</li><li>OFF： 关闭图层分离功能。</li></ul><p>默认值：ON</p>
                     * @return Switch <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启图层分离功能。</li><li>OFF： 关闭图层分离功能。</li></ul><p>默认值：ON</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启图层分离功能。</li><li>OFF： 关闭图层分离功能。</li></ul><p>默认值：ON</p>
                     * @param _switch <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启图层分离功能。</li><li>OFF： 关闭图层分离功能。</li></ul><p>默认值：ON</p>
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
                     * 获取<p>预期拆层数量。</p><p>取值范围：[2, 17]</p>
                     * @return Layers <p>预期拆层数量。</p><p>取值范围：[2, 17]</p>
                     * 
                     */
                    int64_t GetLayers() const;

                    /**
                     * 设置<p>预期拆层数量。</p><p>取值范围：[2, 17]</p>
                     * @param _layers <p>预期拆层数量。</p><p>取值范围：[2, 17]</p>
                     * 
                     */
                    void SetLayers(const int64_t& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取<p>提示词。</p>
                     * @return Prompt <p>提示词。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词。</p>
                     * @param _prompt <p>提示词。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>模型名称。</p><p>枚举值：</p><ul><li>decompose-1.0-flash： 1.0版本 flash模型</li></ul>
                     * @return Model <p>模型名称。</p><p>枚举值：</p><ul><li>decompose-1.0-flash： 1.0版本 flash模型</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称。</p><p>枚举值：</p><ul><li>decompose-1.0-flash： 1.0版本 flash模型</li></ul>
                     * @param _model <p>模型名称。</p><p>枚举值：</p><ul><li>decompose-1.0-flash： 1.0版本 flash模型</li></ul>
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
                     * <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启图层分离功能。</li><li>OFF： 关闭图层分离功能。</li></ul><p>默认值：ON</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>预期拆层数量。</p><p>取值范围：[2, 17]</p>
                     */
                    int64_t m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * <p>提示词。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>模型名称。</p><p>枚举值：</p><ul><li>decompose-1.0-flash： 1.0版本 flash模型</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDECOMPOSECONFIG_H_
