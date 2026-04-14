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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TermBase.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 角色列表
                */
                class Speakers : public AbstractModel
                {
                public:
                    Speakers();
                    ~Speakers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色唯一标识</p>
                     * @return SpeakerId <p>角色唯一标识</p>
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置<p>角色唯一标识</p>
                     * @param _speakerId <p>角色唯一标识</p>
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定的音色 ID</p>
                     * @return VoiceId <p>绑定的音色 ID</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>绑定的音色 ID</p>
                     * @param _voiceId <p>绑定的音色 ID</p>
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
                     * 获取<p>性别：male / female，默认 male</p>
                     * @return Gender <p>性别：male / female，默认 male</p>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别：male / female，默认 male</p>
                     * @param _gender <p>性别：male / female，默认 male</p>
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
                     * 获取<p>年龄段：child / teenager / youth / middle_aged/ senior，默认 youth</p>
                     * @return AgeGroup <p>年龄段：child / teenager / youth / middle_aged/ senior，默认 youth</p>
                     * 
                     */
                    std::string GetAgeGroup() const;

                    /**
                     * 设置<p>年龄段：child / teenager / youth / middle_aged/ senior，默认 youth</p>
                     * @param _ageGroup <p>年龄段：child / teenager / youth / middle_aged/ senior，默认 youth</p>
                     * 
                     */
                    void SetAgeGroup(const std::string& _ageGroup);

                    /**
                     * 判断参数 AgeGroup 是否已赋值
                     * @return AgeGroup 是否已赋值
                     * 
                     */
                    bool AgeGroupHasBeenSet() const;

                    /**
                     * 获取<p>角色描述</p>
                     * @return Description <p>角色描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>角色描述</p>
                     * @param _description <p>角色描述</p>
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
                     * 获取<p>角色人名术语表</p>
                     * @return NameTerms <p>角色人名术语表</p>
                     * 
                     */
                    std::vector<TermBase> GetNameTerms() const;

                    /**
                     * 设置<p>角色人名术语表</p>
                     * @param _nameTerms <p>角色人名术语表</p>
                     * 
                     */
                    void SetNameTerms(const std::vector<TermBase>& _nameTerms);

                    /**
                     * 判断参数 NameTerms 是否已赋值
                     * @return NameTerms 是否已赋值
                     * 
                     */
                    bool NameTermsHasBeenSet() const;

                private:

                    /**
                     * <p>角色唯一标识</p>
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * <p>绑定的音色 ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>性别：male / female，默认 male</p>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>年龄段：child / teenager / youth / middle_aged/ senior，默认 youth</p>
                     */
                    std::string m_ageGroup;
                    bool m_ageGroupHasBeenSet;

                    /**
                     * <p>角色描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>角色人名术语表</p>
                     */
                    std::vector<TermBase> m_nameTerms;
                    bool m_nameTermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_
