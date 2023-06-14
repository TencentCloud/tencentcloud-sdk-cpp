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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_RESETRESPONSE_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_RESETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbp/v20190311/model/SlotInfo.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * Reset返回参数结构体
                */
                class ResetResponse : public AbstractModel
                {
                public:
                    ResetResponse();
                    ~ResetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前会话状态。取值:"start"/"continue"/"complete"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DialogStatus 当前会话状态。取值:"start"/"continue"/"complete"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDialogStatus() const;

                    /**
                     * 判断参数 DialogStatus 是否已赋值
                     * @return DialogStatus 是否已赋值
                     * 
                     */
                    bool DialogStatusHasBeenSet() const;

                    /**
                     * 获取匹配到的机器人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotName 匹配到的机器人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBotName() const;

                    /**
                     * 判断参数 BotName 是否已赋值
                     * @return BotName 是否已赋值
                     * 
                     */
                    bool BotNameHasBeenSet() const;

                    /**
                     * 获取匹配到的意图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentName 匹配到的意图名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentName() const;

                    /**
                     * 判断参数 IntentName 是否已赋值
                     * @return IntentName 是否已赋值
                     * 
                     */
                    bool IntentNameHasBeenSet() const;

                    /**
                     * 获取机器人回答
                     * @return ResponseText 机器人回答
                     * 
                     */
                    std::string GetResponseText() const;

                    /**
                     * 判断参数 ResponseText 是否已赋值
                     * @return ResponseText 是否已赋值
                     * 
                     */
                    bool ResponseTextHasBeenSet() const;

                    /**
                     * 获取语义解析的槽位结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotInfoList 语义解析的槽位结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SlotInfo> GetSlotInfoList() const;

                    /**
                     * 判断参数 SlotInfoList 是否已赋值
                     * @return SlotInfoList 是否已赋值
                     * 
                     */
                    bool SlotInfoListHasBeenSet() const;

                    /**
                     * 获取透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionAttributes 透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionAttributes() const;

                    /**
                     * 判断参数 SessionAttributes 是否已赋值
                     * @return SessionAttributes 是否已赋值
                     * 
                     */
                    bool SessionAttributesHasBeenSet() const;

                    /**
                     * 获取用户说法。该说法是用户原生说法或ASR识别结果，未经过语义优化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 用户说法。该说法是用户原生说法或ASR识别结果，未经过语义优化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取tts合成pcm音频存储链接。仅当请求参数NeedTts=true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaveUrl tts合成pcm音频存储链接。仅当请求参数NeedTts=true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaveUrl() const;

                    /**
                     * 判断参数 WaveUrl 是否已赋值
                     * @return WaveUrl 是否已赋值
                     * 
                     */
                    bool WaveUrlHasBeenSet() const;

                    /**
                     * 获取tts合成的pcm音频。二进制数组经过base64编码(暂时不返回)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaveData tts合成的pcm音频。二进制数组经过base64编码(暂时不返回)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaveData() const;

                    /**
                     * 判断参数 WaveData 是否已赋值
                     * @return WaveData 是否已赋值
                     * 
                     */
                    bool WaveDataHasBeenSet() const;

                private:

                    /**
                     * 当前会话状态。取值:"start"/"continue"/"complete"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dialogStatus;
                    bool m_dialogStatusHasBeenSet;

                    /**
                     * 匹配到的机器人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_botName;
                    bool m_botNameHasBeenSet;

                    /**
                     * 匹配到的意图名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentName;
                    bool m_intentNameHasBeenSet;

                    /**
                     * 机器人回答
                     */
                    std::string m_responseText;
                    bool m_responseTextHasBeenSet;

                    /**
                     * 语义解析的槽位结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SlotInfo> m_slotInfoList;
                    bool m_slotInfoListHasBeenSet;

                    /**
                     * 透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionAttributes;
                    bool m_sessionAttributesHasBeenSet;

                    /**
                     * 用户说法。该说法是用户原生说法或ASR识别结果，未经过语义优化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * tts合成pcm音频存储链接。仅当请求参数NeedTts=true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waveUrl;
                    bool m_waveUrlHasBeenSet;

                    /**
                     * tts合成的pcm音频。二进制数组经过base64编码(暂时不返回)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waveData;
                    bool m_waveDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_RESETRESPONSE_H_
