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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageComposeCanvas.h>
#include <tencentcloud/mps/v20190612/model/ImageComposeLayer.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理图层融合配置
                */
                class AiComposeConfig : public AbstractModel
                {
                public:
                    AiComposeConfig();
                    ~AiComposeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关。</p><li>ON：开启（默认值）；</li><li>OFF：关闭。</li>
                     * @return Switch <p>能力配置开关。</p><li>ON：开启（默认值）；</li><li>OFF：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关。</p><li>ON：开启（默认值）；</li><li>OFF：关闭。</li>
                     * @param _switch <p>能力配置开关。</p><li>ON：开启（默认值）；</li><li>OFF：关闭。</li>
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
                     * 获取<p>合成模型。可选值：compose-1.0-lite（默认值，可不传）。</p>
                     * @return Model <p>合成模型。可选值：compose-1.0-lite（默认值，可不传）。</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>合成模型。可选值：compose-1.0-lite（默认值，可不传）。</p>
                     * @param _model <p>合成模型。可选值：compose-1.0-lite（默认值，可不传）。</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>画布定义。可省略：省略时取 ZIndex 最小的图层（底层图层）的自然尺寸。</p>
                     * @return Canvas <p>画布定义。可省略：省略时取 ZIndex 最小的图层（底层图层）的自然尺寸。</p>
                     * 
                     */
                    ImageComposeCanvas GetCanvas() const;

                    /**
                     * 设置<p>画布定义。可省略：省略时取 ZIndex 最小的图层（底层图层）的自然尺寸。</p>
                     * @param _canvas <p>画布定义。可省略：省略时取 ZIndex 最小的图层（底层图层）的自然尺寸。</p>
                     * 
                     */
                    void SetCanvas(const ImageComposeCanvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取<p>图层列表，图层的唯一来源。至少 1 层、最多 20 层。</p>
                     * @return Layers <p>图层列表，图层的唯一来源。至少 1 层、最多 20 层。</p>
                     * 
                     */
                    std::vector<ImageComposeLayer> GetLayers() const;

                    /**
                     * 设置<p>图层列表，图层的唯一来源。至少 1 层、最多 20 层。</p>
                     * @param _layers <p>图层列表，图层的唯一来源。至少 1 层、最多 20 层。</p>
                     * 
                     */
                    void SetLayers(const std::vector<ImageComposeLayer>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关。</p><li>ON：开启（默认值）；</li><li>OFF：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>合成模型。可选值：compose-1.0-lite（默认值，可不传）。</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>画布定义。可省略：省略时取 ZIndex 最小的图层（底层图层）的自然尺寸。</p>
                     */
                    ImageComposeCanvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * <p>图层列表，图层的唯一来源。至少 1 层、最多 20 层。</p>
                     */
                    std::vector<ImageComposeLayer> m_layers;
                    bool m_layersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_
