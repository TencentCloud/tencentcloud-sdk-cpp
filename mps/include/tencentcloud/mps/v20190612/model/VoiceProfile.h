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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_

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
                * 音色属性
                */
                class VoiceProfile : public AbstractModel
                {
                public:
                    VoiceProfile();
                    ~VoiceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>unknown： 未知</li></ul>
                     * @return Gender <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>unknown： 未知</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>unknown： 未知</li></ul>
                     * @param _gender <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>unknown： 未知</li></ul>
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
                     * 获取<p>使用场景</p>
                     * @return Scenes <p>使用场景</p>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<p>使用场景</p>
                     * @param _scenes <p>使用场景</p>
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
                     * <p>音色名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>音色描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>unknown： 未知</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>年龄</p><p>枚举值：</p><ul><li>child： 儿童</li><li>teenager： 少年</li><li>youth： 青年</li><li>middle_aged： 中年</li><li>senior： 老年</li><li>unknown： 未知</li></ul>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>使用场景</p>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_
