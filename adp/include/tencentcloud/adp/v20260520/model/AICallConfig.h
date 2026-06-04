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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AICALLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AICALLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DigitalHumanConfig.h>
#include <tencentcloud/adp/v20260520/model/VoiceConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 智能通话配置
                */
                class AICallConfig : public AbstractModel
                {
                public:
                    AICallConfig();
                    ~AICallConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数智人配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DigitalHuman 数智人配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DigitalHumanConfig GetDigitalHuman() const;

                    /**
                     * 设置数智人配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _digitalHuman 数智人配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDigitalHuman(const DigitalHumanConfig& _digitalHuman);

                    /**
                     * 判断参数 DigitalHuman 是否已赋值
                     * @return DigitalHuman 是否已赋值
                     * 
                     */
                    bool DigitalHumanHasBeenSet() const;

                    /**
                     * 获取启用数智人
                     * @return EnableDigitalHuman 启用数智人
                     * 
                     */
                    bool GetEnableDigitalHuman() const;

                    /**
                     * 设置启用数智人
                     * @param _enableDigitalHuman 启用数智人
                     * 
                     */
                    void SetEnableDigitalHuman(const bool& _enableDigitalHuman);

                    /**
                     * 判断参数 EnableDigitalHuman 是否已赋值
                     * @return EnableDigitalHuman 是否已赋值
                     * 
                     */
                    bool EnableDigitalHumanHasBeenSet() const;

                    /**
                     * 获取启用语音通话
                     * @return EnableVoiceCall 启用语音通话
                     * 
                     */
                    bool GetEnableVoiceCall() const;

                    /**
                     * 设置启用语音通话
                     * @param _enableVoiceCall 启用语音通话
                     * 
                     */
                    void SetEnableVoiceCall(const bool& _enableVoiceCall);

                    /**
                     * 判断参数 EnableVoiceCall 是否已赋值
                     * @return EnableVoiceCall 是否已赋值
                     * 
                     */
                    bool EnableVoiceCallHasBeenSet() const;

                    /**
                     * 获取启用语音互动功能
                     * @return EnableVoiceInteract 启用语音互动功能
                     * 
                     */
                    bool GetEnableVoiceInteract() const;

                    /**
                     * 设置启用语音互动功能
                     * @param _enableVoiceInteract 启用语音互动功能
                     * 
                     */
                    void SetEnableVoiceInteract(const bool& _enableVoiceInteract);

                    /**
                     * 判断参数 EnableVoiceInteract 是否已赋值
                     * @return EnableVoiceInteract 是否已赋值
                     * 
                     */
                    bool EnableVoiceInteractHasBeenSet() const;

                    /**
                     * 获取音色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Voice 音色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VoiceConfig GetVoice() const;

                    /**
                     * 设置音色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voice 音色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoice(const VoiceConfig& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                private:

                    /**
                     * 数智人配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DigitalHumanConfig m_digitalHuman;
                    bool m_digitalHumanHasBeenSet;

                    /**
                     * 启用数智人
                     */
                    bool m_enableDigitalHuman;
                    bool m_enableDigitalHumanHasBeenSet;

                    /**
                     * 启用语音通话
                     */
                    bool m_enableVoiceCall;
                    bool m_enableVoiceCallHasBeenSet;

                    /**
                     * 启用语音互动功能
                     */
                    bool m_enableVoiceInteract;
                    bool m_enableVoiceInteractHasBeenSet;

                    /**
                     * 音色配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VoiceConfig m_voice;
                    bool m_voiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AICALLCONFIG_H_
