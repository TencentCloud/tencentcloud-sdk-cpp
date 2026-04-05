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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VOICEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VOICEINFO_H_

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
                * 音色信息
                */
                class VoiceInfo : public AbstractModel
                {
                public:
                    VoiceInfo();
                    ~VoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音色ID</p>
                     * @return VoiceId <p>音色ID</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色ID</p>
                     * @param _voiceId <p>音色ID</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>音色名</p>
                     * @return Name <p>音色名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>音色名</p>
                     * @param _name <p>音色名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>音色描述信息</p>
                     * @return Description <p>音色描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>音色描述信息</p>
                     * @param _description <p>音色描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * @return Category <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * @param _category <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>famale： 女</li></ul>
                     * @return Gender <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>famale： 女</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>famale： 女</li></ul>
                     * @param _gender <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>famale： 女</li></ul>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>支持语种列表</p><p>如：en</p>
                     * @return Languages <p>支持语种列表</p><p>如：en</p>
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置<p>支持语种列表</p><p>如：en</p>
                     * @param _languages <p>支持语种列表</p><p>如：en</p>
                     * 
                     */
                    void SetLanguages(const std::vector<std::string>& _languages);

                    /**
                     * 判断参数 Languages 是否已赋值
                     * @return Languages 是否已赋值
                     * 
                     */
                    bool LanguagesHasBeenSet() const;

                    /**
                     * 获取<p>试听音频URL</p>
                     * @return AudioUrl <p>试听音频URL</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>试听音频URL</p>
                     * @param _audioUrl <p>试听音频URL</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p><p>如：温柔</p>
                     * @return Labels <p>标签列表</p><p>如：温柔</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>标签列表</p><p>如：温柔</p>
                     * @param _labels <p>标签列表</p><p>如：温柔</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>推荐场景</p><p>如：教育</p>
                     * @return Scenes <p>推荐场景</p><p>如：教育</p>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<p>推荐场景</p><p>如：教育</p>
                     * @param _scenes <p>推荐场景</p><p>如：教育</p>
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                private:

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>音色名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>音色描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>famale： 女</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>支持语种列表</p><p>如：en</p>
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * <p>试听音频URL</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>标签列表</p><p>如：温柔</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>推荐场景</p><p>如：教育</p>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VOICEINFO_H_
