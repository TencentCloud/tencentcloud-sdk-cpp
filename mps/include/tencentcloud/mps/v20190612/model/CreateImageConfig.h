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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGECONFIG_H_

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
                * 生图任务。
                */
                class CreateImageConfig : public AbstractModel
                {
                public:
                    CreateImageConfig();
                    ~CreateImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>生图模型</p><p>枚举值：</p><ul><li>WAND-create-1.0-lite： 轻量生图模型</li><li>WAND-create-1.0-flash： 质量-速度平衡生图模型</li><li>WAND-create-1.0-pro： 高质量生图模型</li></ul>
                     * @return Model <p>生图模型</p><p>枚举值：</p><ul><li>WAND-create-1.0-lite： 轻量生图模型</li><li>WAND-create-1.0-flash： 质量-速度平衡生图模型</li><li>WAND-create-1.0-pro： 高质量生图模型</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>生图模型</p><p>枚举值：</p><ul><li>WAND-create-1.0-lite： 轻量生图模型</li><li>WAND-create-1.0-flash： 质量-速度平衡生图模型</li><li>WAND-create-1.0-pro： 高质量生图模型</li></ul>
                     * @param _model <p>生图模型</p><p>枚举值：</p><ul><li>WAND-create-1.0-lite： 轻量生图模型</li><li>WAND-create-1.0-flash： 质量-速度平衡生图模型</li><li>WAND-create-1.0-pro： 高质量生图模型</li></ul>
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
                     * 获取<p>生图指令</p>
                     * @return Prompt <p>生图指令</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生图指令</p>
                     * @param _prompt <p>生图指令</p>
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
                     * 获取<p>输出图片的分辨率</p><p>枚举值：</p><ul><li>1K： 短边分辨率 1080</li><li>2K： 短边分辨率 1440</li><li>4K： 短边分辨率 2160</li></ul><p>默认值：1K</p>
                     * @return Resolution <p>输出图片的分辨率</p><p>枚举值：</p><ul><li>1K： 短边分辨率 1080</li><li>2K： 短边分辨率 1440</li><li>4K： 短边分辨率 2160</li></ul><p>默认值：1K</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出图片的分辨率</p><p>枚举值：</p><ul><li>1K： 短边分辨率 1080</li><li>2K： 短边分辨率 1440</li><li>4K： 短边分辨率 2160</li></ul><p>默认值：1K</p>
                     * @param _resolution <p>输出图片的分辨率</p><p>枚举值：</p><ul><li>1K： 短边分辨率 1080</li><li>2K： 短边分辨率 1440</li><li>4K： 短边分辨率 2160</li></ul><p>默认值：1K</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>输出图片的宽高比</p><p>枚举值：</p><ul><li>1:1： 宽高比 1:1</li><li>2:3： 宽高比 2:3</li><li>3:2： 宽高比 3:2</li><li>3:4： 宽高比 3:4</li><li>4:3： 宽高比 4:3</li><li>9:16： 宽高比 9:16</li><li>16:9： 宽高比 16:9</li></ul><p>默认值：1:1</p>
                     * @return AspectRatio <p>输出图片的宽高比</p><p>枚举值：</p><ul><li>1:1： 宽高比 1:1</li><li>2:3： 宽高比 2:3</li><li>3:2： 宽高比 3:2</li><li>3:4： 宽高比 3:4</li><li>4:3： 宽高比 4:3</li><li>9:16： 宽高比 9:16</li><li>16:9： 宽高比 16:9</li></ul><p>默认值：1:1</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>输出图片的宽高比</p><p>枚举值：</p><ul><li>1:1： 宽高比 1:1</li><li>2:3： 宽高比 2:3</li><li>3:2： 宽高比 3:2</li><li>3:4： 宽高比 3:4</li><li>4:3： 宽高比 4:3</li><li>9:16： 宽高比 9:16</li><li>16:9： 宽高比 16:9</li></ul><p>默认值：1:1</p>
                     * @param _aspectRatio <p>输出图片的宽高比</p><p>枚举值：</p><ul><li>1:1： 宽高比 1:1</li><li>2:3： 宽高比 2:3</li><li>3:2： 宽高比 3:2</li><li>3:4： 宽高比 3:4</li><li>4:3： 宽高比 4:3</li><li>9:16： 宽高比 9:16</li><li>16:9： 宽高比 16:9</li></ul><p>默认值：1:1</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                private:

                    /**
                     * <p>生图模型</p><p>枚举值：</p><ul><li>WAND-create-1.0-lite： 轻量生图模型</li><li>WAND-create-1.0-flash： 质量-速度平衡生图模型</li><li>WAND-create-1.0-pro： 高质量生图模型</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>生图指令</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>输出图片的分辨率</p><p>枚举值：</p><ul><li>1K： 短边分辨率 1080</li><li>2K： 短边分辨率 1440</li><li>4K： 短边分辨率 2160</li></ul><p>默认值：1K</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>输出图片的宽高比</p><p>枚举值：</p><ul><li>1:1： 宽高比 1:1</li><li>2:3： 宽高比 2:3</li><li>3:2： 宽高比 3:2</li><li>3:4： 宽高比 3:4</li><li>4:3： 宽高比 4:3</li><li>9:16： 宽高比 9:16</li><li>16:9： 宽高比 16:9</li></ul><p>默认值：1:1</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEIMAGECONFIG_H_
