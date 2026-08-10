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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_

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
                * 图片理解任务。
                */
                class UnderstandImageConfig : public AbstractModel
                {
                public:
                    UnderstandImageConfig();
                    ~UnderstandImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片理解模型</p><p>枚举值：</p><ul><li>WAND-understand-1.0-lite： 轻量理解模型</li><li>WAND-understand-1.0-flash： 质量-速度平衡理解模型</li><li>WAND-understand-1.0-pro： 高质量理解模型</li></ul>
                     * @return Model <p>图片理解模型</p><p>枚举值：</p><ul><li>WAND-understand-1.0-lite： 轻量理解模型</li><li>WAND-understand-1.0-flash： 质量-速度平衡理解模型</li><li>WAND-understand-1.0-pro： 高质量理解模型</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>图片理解模型</p><p>枚举值：</p><ul><li>WAND-understand-1.0-lite： 轻量理解模型</li><li>WAND-understand-1.0-flash： 质量-速度平衡理解模型</li><li>WAND-understand-1.0-pro： 高质量理解模型</li></ul>
                     * @param _model <p>图片理解模型</p><p>枚举值：</p><ul><li>WAND-understand-1.0-lite： 轻量理解模型</li><li>WAND-understand-1.0-flash： 质量-速度平衡理解模型</li><li>WAND-understand-1.0-pro： 高质量理解模型</li></ul>
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
                     * 获取<p>图片理解指令</p>
                     * @return Prompt <p>图片理解指令</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>图片理解指令</p>
                     * @param _prompt <p>图片理解指令</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * <p>图片理解模型</p><p>枚举值：</p><ul><li>WAND-understand-1.0-lite： 轻量理解模型</li><li>WAND-understand-1.0-flash： 质量-速度平衡理解模型</li><li>WAND-understand-1.0-pro： 高质量理解模型</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>图片理解指令</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_
