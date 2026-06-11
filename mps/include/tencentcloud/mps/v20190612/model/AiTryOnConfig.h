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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AITRYONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AITRYONCONFIG_H_

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
                * 虚拟试穿任务配置。
                */
                class AiTryOnConfig : public AbstractModel
                {
                public:
                    AiTryOnConfig();
                    ~AiTryOnConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>换装模型，取值：</p><ul><li>WAND-tryon-1.0-lite</li><li>WAND-tryon-1.0-flash</li><li>WAND-tryon-1.0-pro</li></ul>
                     * @return Model <p>换装模型，取值：</p><ul><li>WAND-tryon-1.0-lite</li><li>WAND-tryon-1.0-flash</li><li>WAND-tryon-1.0-pro</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>换装模型，取值：</p><ul><li>WAND-tryon-1.0-lite</li><li>WAND-tryon-1.0-flash</li><li>WAND-tryon-1.0-pro</li></ul>
                     * @param _model <p>换装模型，取值：</p><ul><li>WAND-tryon-1.0-lite</li><li>WAND-tryon-1.0-flash</li><li>WAND-tryon-1.0-pro</li></ul>
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
                     * 获取<p>换装指令。</p><p>为空时使用内置指令。</p>
                     * @return Prompt <p>换装指令。</p><p>为空时使用内置指令。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>换装指令。</p><p>为空时使用内置指令。</p>
                     * @param _prompt <p>换装指令。</p><p>为空时使用内置指令。</p>
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
                     * 获取<p>输出图片分辨率，取值：</p><ul><li>1K</li><li>2K</li><li>4K</li></ul><p>默认值：1K</p>
                     * @return Resolution <p>输出图片分辨率，取值：</p><ul><li>1K</li><li>2K</li><li>4K</li></ul><p>默认值：1K</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>输出图片分辨率，取值：</p><ul><li>1K</li><li>2K</li><li>4K</li></ul><p>默认值：1K</p>
                     * @param _resolution <p>输出图片分辨率，取值：</p><ul><li>1K</li><li>2K</li><li>4K</li></ul><p>默认值：1K</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>换装模型，取值：</p><ul><li>WAND-tryon-1.0-lite</li><li>WAND-tryon-1.0-flash</li><li>WAND-tryon-1.0-pro</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>换装指令。</p><p>为空时使用内置指令。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>输出图片分辨率，取值：</p><ul><li>1K</li><li>2K</li><li>4K</li></ul><p>默认值：1K</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AITRYONCONFIG_H_
