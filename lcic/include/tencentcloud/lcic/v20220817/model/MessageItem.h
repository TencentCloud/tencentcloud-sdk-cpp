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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/CustomMsgContent.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 单条消息体内容
                */
                class MessageItem : public AbstractModel
                {
                public:
                    MessageItem();
                    ~MessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息类型。0表示文本消息，1表示图片消息
                     * @return MessageType 消息类型。0表示文本消息，1表示图片消息
                     * 
                     */
                    int64_t GetMessageType() const;

                    /**
                     * 设置消息类型。0表示文本消息，1表示图片消息
                     * @param _messageType 消息类型。0表示文本消息，1表示图片消息
                     * 
                     */
                    void SetMessageType(const int64_t& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取文本消息内容。message type为0时有效。
                     * @return TextMessage 文本消息内容。message type为0时有效。
                     * 
                     */
                    std::string GetTextMessage() const;

                    /**
                     * 设置文本消息内容。message type为0时有效。
                     * @param _textMessage 文本消息内容。message type为0时有效。
                     * 
                     */
                    void SetTextMessage(const std::string& _textMessage);

                    /**
                     * 判断参数 TextMessage 是否已赋值
                     * @return TextMessage 是否已赋值
                     * 
                     */
                    bool TextMessageHasBeenSet() const;

                    /**
                     * 获取图片消息URL。 message type为1时有效。
                     * @return ImageMessage 图片消息URL。 message type为1时有效。
                     * 
                     */
                    std::string GetImageMessage() const;

                    /**
                     * 设置图片消息URL。 message type为1时有效。
                     * @param _imageMessage 图片消息URL。 message type为1时有效。
                     * 
                     */
                    void SetImageMessage(const std::string& _imageMessage);

                    /**
                     * 判断参数 ImageMessage 是否已赋值
                     * @return ImageMessage 是否已赋值
                     * 
                     */
                    bool ImageMessageHasBeenSet() const;

                    /**
                     * 获取自定义消息内容。message type为2时有效。
                     * @return CustomMessage 自定义消息内容。message type为2时有效。
                     * 
                     */
                    CustomMsgContent GetCustomMessage() const;

                    /**
                     * 设置自定义消息内容。message type为2时有效。
                     * @param _customMessage 自定义消息内容。message type为2时有效。
                     * 
                     */
                    void SetCustomMessage(const CustomMsgContent& _customMessage);

                    /**
                     * 判断参数 CustomMessage 是否已赋值
                     * @return CustomMessage 是否已赋值
                     * 
                     */
                    bool CustomMessageHasBeenSet() const;

                private:

                    /**
                     * 消息类型。0表示文本消息，1表示图片消息
                     */
                    int64_t m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * 文本消息内容。message type为0时有效。
                     */
                    std::string m_textMessage;
                    bool m_textMessageHasBeenSet;

                    /**
                     * 图片消息URL。 message type为1时有效。
                     */
                    std::string m_imageMessage;
                    bool m_imageMessageHasBeenSet;

                    /**
                     * 自定义消息内容。message type为2时有效。
                     */
                    CustomMsgContent m_customMessage;
                    bool m_customMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGEITEM_H_
