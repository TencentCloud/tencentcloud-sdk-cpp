/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 音色参数
                */
                class VoiceConfig : public AbstractModel
                {
                public:
                    VoiceConfig();
                    ~VoiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公有云音色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceType 公有云音色id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVoiceType() const;

                    /**
                     * 设置公有云音色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceType 公有云音色id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceType(const uint64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取音色key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimbreKey 音色key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置音色key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timbreKey 音色key
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceName 音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceName 音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                private:

                    /**
                     * 公有云音色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 音色key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_VOICECONFIG_H_
