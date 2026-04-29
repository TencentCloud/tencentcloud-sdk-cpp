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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVoices请求参数结构体
                */
                class DescribeVoicesRequest : public AbstractModel
                {
                public:
                    DescribeVoicesRequest();
                    ~DescribeVoicesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li><li>clone： 克隆音色</li><li>design： 设计音色</li><li>all： 所有音色（默认）</li></ul>
                     * @return VoiceType <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li><li>clone： 克隆音色</li><li>design： 设计音色</li><li>all： 所有音色（默认）</li></ul>
                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li><li>clone： 克隆音色</li><li>design： 设计音色</li><li>all： 所有音色（默认）</li></ul>
                     * @param _voiceType <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li><li>clone： 克隆音色</li><li>design： 设计音色</li><li>all： 所有音色（默认）</li></ul>
                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>音色名</p>
                     * @return VoiceName <p>音色名</p>
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置<p>音色名</p>
                     * @param _voiceName <p>音色名</p>
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取<p>音色描述</p>
                     * @return Description <p>音色描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>音色描述</p>
                     * @param _description <p>音色描述</p>
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
                     * 获取<p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>female： 女</li><li>unknown： 未知</li></ul>
                     * @return Gender <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>female： 女</li><li>unknown： 未知</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>female： 女</li><li>unknown： 未知</li></ul>
                     * @param _gender <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>female： 女</li><li>unknown： 未知</li></ul>
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
                     * 获取<p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     * @return Age <p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     * @param _age <p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取<p>语言</p>
                     * @return Languages <p>语言</p>
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置<p>语言</p>
                     * @param _languages <p>语言</p>
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
                     * 获取<p>标签</p>
                     * @return Labels <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _labels <p>标签</p>
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
                     * 获取<p>场景</p>
                     * @return Scenes <p>场景</p>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<p>场景</p>
                     * @param _scenes <p>场景</p>
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * @return ExtParam <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * @param _extParam <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li><li>clone： 克隆音色</li><li>design： 设计音色</li><li>all： 所有音色（默认）</li></ul>
                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * <p>音色名</p>
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * <p>音色描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>性别</p><p>枚举值：</p><ul><li>male： 男</li><li>female： 女</li><li>unknown： 未知</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>语言</p>
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>场景</p>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
