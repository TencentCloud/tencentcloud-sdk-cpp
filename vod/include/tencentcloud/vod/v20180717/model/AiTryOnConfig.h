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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AITRYONCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AITRYONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI换装配置信息。
                */
                class AiTryOnConfig : public AbstractModel
                {
                public:
                    AiTryOnConfig();
                    ~AiTryOnConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>换装模型。</p><p>枚举值：</p><ul><li>WAND-tryon-1.0-lite： 轻量档，速度优先。</li><li>WAND-tryon-1.0-flash： 均衡档，兼顾效果与时延。</li><li>WAND-tryon-1.0-pro： 高质量档，效果优先。</li></ul>
                     * @return Model <p>换装模型。</p><p>枚举值：</p><ul><li>WAND-tryon-1.0-lite： 轻量档，速度优先。</li><li>WAND-tryon-1.0-flash： 均衡档，兼顾效果与时延。</li><li>WAND-tryon-1.0-pro： 高质量档，效果优先。</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>换装模型。</p><p>枚举值：</p><ul><li>WAND-tryon-1.0-lite： 轻量档，速度优先。</li><li>WAND-tryon-1.0-flash： 均衡档，兼顾效果与时延。</li><li>WAND-tryon-1.0-pro： 高质量档，效果优先。</li></ul>
                     * @param _model <p>换装模型。</p><p>枚举值：</p><ul><li>WAND-tryon-1.0-lite： 轻量档，速度优先。</li><li>WAND-tryon-1.0-flash： 均衡档，兼顾效果与时延。</li><li>WAND-tryon-1.0-pro： 高质量档，效果优先。</li></ul>
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
                     * 获取<p>输入需要更换的衣物图片列表。支持1-4张图片。</p>
                     * @return ClothesFileInfos <p>输入需要更换的衣物图片列表。支持1-4张图片。</p>
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetClothesFileInfos() const;

                    /**
                     * 设置<p>输入需要更换的衣物图片列表。支持1-4张图片。</p>
                     * @param _clothesFileInfos <p>输入需要更换的衣物图片列表。支持1-4张图片。</p>
                     * 
                     */
                    void SetClothesFileInfos(const std::vector<SceneAigcImageTaskInputFileInfo>& _clothesFileInfos);

                    /**
                     * 判断参数 ClothesFileInfos 是否已赋值
                     * @return ClothesFileInfos 是否已赋值
                     * 
                     */
                    bool ClothesFileInfosHasBeenSet() const;

                    /**
                     * 获取<p>换装指令Prompt。</p>
                     * @return Prompt <p>换装指令Prompt。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>换装指令Prompt。</p>
                     * @param _prompt <p>换装指令Prompt。</p>
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
                     * <p>换装模型。</p><p>枚举值：</p><ul><li>WAND-tryon-1.0-lite： 轻量档，速度优先。</li><li>WAND-tryon-1.0-flash： 均衡档，兼顾效果与时延。</li><li>WAND-tryon-1.0-pro： 高质量档，效果优先。</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>输入需要更换的衣物图片列表。支持1-4张图片。</p>
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_clothesFileInfos;
                    bool m_clothesFileInfosHasBeenSet;

                    /**
                     * <p>换装指令Prompt。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AITRYONCONFIG_H_
