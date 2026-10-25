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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CHARACTERSCENECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CHARACTERSCENECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 角色场景配置
                */
                class CharacterSceneConfig : public AbstractModel
                {
                public:
                    CharacterSceneConfig();
                    ~CharacterSceneConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型。</p><p>枚举值：</p><ul><li>character_scene_standard： 标准。</li><li>character_scene_mini： 轻量。</li><li>character_scene_fast： 快速。</li></ul>
                     * @return Model <p>模型。</p><p>枚举值：</p><ul><li>character_scene_standard： 标准。</li><li>character_scene_mini： 轻量。</li><li>character_scene_fast： 快速。</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型。</p><p>枚举值：</p><ul><li>character_scene_standard： 标准。</li><li>character_scene_mini： 轻量。</li><li>character_scene_fast： 快速。</li></ul>
                     * @param _model <p>模型。</p><p>枚举值：</p><ul><li>character_scene_standard： 标准。</li><li>character_scene_mini： 轻量。</li><li>character_scene_fast： 快速。</li></ul>
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
                     * 获取<p>提示词模式。</p><p>枚举值：</p><ul><li>Standard： 标准模式，自行填写提示词。</li><li>Dynamic： 动态模式，由大模型根据参考素材产生提示词。</li></ul><p>默认值：Standard</p>
                     * @return PromptMode <p>提示词模式。</p><p>枚举值：</p><ul><li>Standard： 标准模式，自行填写提示词。</li><li>Dynamic： 动态模式，由大模型根据参考素材产生提示词。</li></ul><p>默认值：Standard</p>
                     * 
                     */
                    std::string GetPromptMode() const;

                    /**
                     * 设置<p>提示词模式。</p><p>枚举值：</p><ul><li>Standard： 标准模式，自行填写提示词。</li><li>Dynamic： 动态模式，由大模型根据参考素材产生提示词。</li></ul><p>默认值：Standard</p>
                     * @param _promptMode <p>提示词模式。</p><p>枚举值：</p><ul><li>Standard： 标准模式，自行填写提示词。</li><li>Dynamic： 动态模式，由大模型根据参考素材产生提示词。</li></ul><p>默认值：Standard</p>
                     * 
                     */
                    void SetPromptMode(const std::string& _promptMode);

                    /**
                     * 判断参数 PromptMode 是否已赋值
                     * @return PromptMode 是否已赋值
                     * 
                     */
                    bool PromptModeHasBeenSet() const;

                private:

                    /**
                     * <p>模型。</p><p>枚举值：</p><ul><li>character_scene_standard： 标准。</li><li>character_scene_mini： 轻量。</li><li>character_scene_fast： 快速。</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>提示词模式。</p><p>枚举值：</p><ul><li>Standard： 标准模式，自行填写提示词。</li><li>Dynamic： 动态模式，由大模型根据参考素材产生提示词。</li></ul><p>默认值：Standard</p>
                     */
                    std::string m_promptMode;
                    bool m_promptModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CHARACTERSCENECONFIG_H_
