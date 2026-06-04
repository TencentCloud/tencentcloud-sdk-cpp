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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_VOICECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_VOICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * VoiceConfig
                */
                class VoiceConfig : public AbstractModel
                {
                public:
                    VoiceConfig();
                    ~VoiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数智人音色key,需要和公有云音色id对齐
                     * @return TimbreKey 数智人音色key,需要和公有云音色id对齐
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置数智人音色key,需要和公有云音色id对齐
                     * @param _timbreKey 数智人音色key,需要和公有云音色id对齐
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取音色名称
                     * @return VoiceName 音色名称
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
                     * @param _voiceName 音色名称
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
                     * 获取公有云音色id
                     * @return VoiceType 公有云音色id
                     * 
                     */
                    uint64_t GetVoiceType() const;

                    /**
                     * 设置公有云音色id
                     * @param _voiceType 公有云音色id
                     * 
                     */
                    void SetVoiceType(const uint64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 数智人音色key,需要和公有云音色id对齐
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 音色名称
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * 公有云音色id
                     */
                    uint64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_VOICECONFIG_H_
