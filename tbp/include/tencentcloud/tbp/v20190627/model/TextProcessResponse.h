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

#ifndef TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSRESPONSE_H_
#define TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbp/v20190627/model/SlotInfo.h>
#include <tencentcloud/tbp/v20190627/model/ResponseMessage.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190627
        {
            namespace Model
            {
                /**
                * TextProcess返回参数结构体
                */
                class TextProcessResponse : public AbstractModel
                {
                public:
                    TextProcessResponse();
                    ~TextProcessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前会话状态{会话开始: START; 会话中: COUTINUE; 会话结束: COMPLETE}。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DialogStatus 当前会话状态{会话开始: START; 会话中: COUTINUE; 会话结束: COMPLETE}。
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
                     * 获取匹配到的机器人名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotName 匹配到的机器人名称。
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
                     * 获取匹配到的意图名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentName 匹配到的意图名称。
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
                     * 获取槽位信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotInfoList 槽位信息。
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
                     * 获取原始的用户说法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputText 原始的用户说法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputText() const;

                    /**
                     * 判断参数 InputText 是否已赋值
                     * @return InputText 是否已赋值
                     * 
                     */
                    bool InputTextHasBeenSet() const;

                    /**
                     * 获取机器人应答。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseMessage 机器人应答。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseMessage GetResponseMessage() const;

                    /**
                     * 判断参数 ResponseMessage 是否已赋值
                     * @return ResponseMessage 是否已赋值
                     * 
                     */
                    bool ResponseMessageHasBeenSet() const;

                    /**
                     * 获取透传字段，由用户自定义的WebService服务返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionAttributes 透传字段，由用户自定义的WebService服务返回。
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
                     * 获取结果类型 {中间逻辑出错:0; 任务型机器人:1; 问答型机器人:2; 闲聊型机器人:3; 未匹配上，返回预设兜底话术:5; 未匹配上，返回相似问题列表:6}。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultType 结果类型 {中间逻辑出错:0; 任务型机器人:1; 问答型机器人:2; 闲聊型机器人:3; 未匹配上，返回预设兜底话术:5; 未匹配上，返回相似问题列表:6}。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取机器人对话的应答文本。	
                     * @return ResponseText 机器人对话的应答文本。	
                     * 
                     */
                    std::string GetResponseText() const;

                    /**
                     * 判断参数 ResponseText 是否已赋值
                     * @return ResponseText 是否已赋值
                     * 
                     */
                    bool ResponseTextHasBeenSet() const;

                private:

                    /**
                     * 当前会话状态{会话开始: START; 会话中: COUTINUE; 会话结束: COMPLETE}。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dialogStatus;
                    bool m_dialogStatusHasBeenSet;

                    /**
                     * 匹配到的机器人名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_botName;
                    bool m_botNameHasBeenSet;

                    /**
                     * 匹配到的意图名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentName;
                    bool m_intentNameHasBeenSet;

                    /**
                     * 槽位信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SlotInfo> m_slotInfoList;
                    bool m_slotInfoListHasBeenSet;

                    /**
                     * 原始的用户说法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputText;
                    bool m_inputTextHasBeenSet;

                    /**
                     * 机器人应答。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseMessage m_responseMessage;
                    bool m_responseMessageHasBeenSet;

                    /**
                     * 透传字段，由用户自定义的WebService服务返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionAttributes;
                    bool m_sessionAttributesHasBeenSet;

                    /**
                     * 结果类型 {中间逻辑出错:0; 任务型机器人:1; 问答型机器人:2; 闲聊型机器人:3; 未匹配上，返回预设兜底话术:5; 未匹配上，返回相似问题列表:6}。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 机器人对话的应答文本。	
                     */
                    std::string m_responseText;
                    bool m_responseTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190627_MODEL_TEXTPROCESSRESPONSE_H_
