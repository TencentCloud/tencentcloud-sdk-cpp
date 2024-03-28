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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MSGBODY_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MSGBODY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/TextMsgContent.h>
#include <tencentcloud/lcic/v20220817/model/FaceMsgContent.h>
#include <tencentcloud/lcic/v20220817/model/ImageMsgContent.h>
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
                * 自定义消息结构
                */
                class MsgBody : public AbstractModel
                {
                public:
                    MsgBody();
                    ~MsgBody() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TIM 消息对象类型，目前支持的消息对象包括：
TIMTextElem（文本消息）
TIMFaceElem（表情消息）
TIMImageElem（图像消息）
TIMCustomElem（自定义消息）
                     * @return MsgType TIM 消息对象类型，目前支持的消息对象包括：
TIMTextElem（文本消息）
TIMFaceElem（表情消息）
TIMImageElem（图像消息）
TIMCustomElem（自定义消息）
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置TIM 消息对象类型，目前支持的消息对象包括：
TIMTextElem（文本消息）
TIMFaceElem（表情消息）
TIMImageElem（图像消息）
TIMCustomElem（自定义消息）
                     * @param _msgType TIM 消息对象类型，目前支持的消息对象包括：
TIMTextElem（文本消息）
TIMFaceElem（表情消息）
TIMImageElem（图像消息）
TIMCustomElem（自定义消息）
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取文本消息，当MsgType 为TIMTextElem（文本消息）必选。
                     * @return TextMsgContent 文本消息，当MsgType 为TIMTextElem（文本消息）必选。
                     * 
                     */
                    TextMsgContent GetTextMsgContent() const;

                    /**
                     * 设置文本消息，当MsgType 为TIMTextElem（文本消息）必选。
                     * @param _textMsgContent 文本消息，当MsgType 为TIMTextElem（文本消息）必选。
                     * 
                     */
                    void SetTextMsgContent(const TextMsgContent& _textMsgContent);

                    /**
                     * 判断参数 TextMsgContent 是否已赋值
                     * @return TextMsgContent 是否已赋值
                     * 
                     */
                    bool TextMsgContentHasBeenSet() const;

                    /**
                     * 获取表情消息，当MsgType 为TIMFaceElem（表情消息）必选。
                     * @return FaceMsgContent 表情消息，当MsgType 为TIMFaceElem（表情消息）必选。
                     * 
                     */
                    FaceMsgContent GetFaceMsgContent() const;

                    /**
                     * 设置表情消息，当MsgType 为TIMFaceElem（表情消息）必选。
                     * @param _faceMsgContent 表情消息，当MsgType 为TIMFaceElem（表情消息）必选。
                     * 
                     */
                    void SetFaceMsgContent(const FaceMsgContent& _faceMsgContent);

                    /**
                     * 判断参数 FaceMsgContent 是否已赋值
                     * @return FaceMsgContent 是否已赋值
                     * 
                     */
                    bool FaceMsgContentHasBeenSet() const;

                    /**
                     * 获取图像消息，当MsgType为TIMImageElem（图像消息）必选。
                     * @return ImageMsgContent 图像消息，当MsgType为TIMImageElem（图像消息）必选。
                     * 
                     */
                    ImageMsgContent GetImageMsgContent() const;

                    /**
                     * 设置图像消息，当MsgType为TIMImageElem（图像消息）必选。
                     * @param _imageMsgContent 图像消息，当MsgType为TIMImageElem（图像消息）必选。
                     * 
                     */
                    void SetImageMsgContent(const ImageMsgContent& _imageMsgContent);

                    /**
                     * 判断参数 ImageMsgContent 是否已赋值
                     * @return ImageMsgContent 是否已赋值
                     * 
                     */
                    bool ImageMsgContentHasBeenSet() const;

                    /**
                     * 获取自定义消息，TIMCustomElem（自定义消息）必选。
                     * @return CustomMsgContent 自定义消息，TIMCustomElem（自定义消息）必选。
                     * 
                     */
                    CustomMsgContent GetCustomMsgContent() const;

                    /**
                     * 设置自定义消息，TIMCustomElem（自定义消息）必选。
                     * @param _customMsgContent 自定义消息，TIMCustomElem（自定义消息）必选。
                     * 
                     */
                    void SetCustomMsgContent(const CustomMsgContent& _customMsgContent);

                    /**
                     * 判断参数 CustomMsgContent 是否已赋值
                     * @return CustomMsgContent 是否已赋值
                     * 
                     */
                    bool CustomMsgContentHasBeenSet() const;

                private:

                    /**
                     * TIM 消息对象类型，目前支持的消息对象包括：
TIMTextElem（文本消息）
TIMFaceElem（表情消息）
TIMImageElem（图像消息）
TIMCustomElem（自定义消息）
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 文本消息，当MsgType 为TIMTextElem（文本消息）必选。
                     */
                    TextMsgContent m_textMsgContent;
                    bool m_textMsgContentHasBeenSet;

                    /**
                     * 表情消息，当MsgType 为TIMFaceElem（表情消息）必选。
                     */
                    FaceMsgContent m_faceMsgContent;
                    bool m_faceMsgContentHasBeenSet;

                    /**
                     * 图像消息，当MsgType为TIMImageElem（图像消息）必选。
                     */
                    ImageMsgContent m_imageMsgContent;
                    bool m_imageMsgContentHasBeenSet;

                    /**
                     * 自定义消息，TIMCustomElem（自定义消息）必选。
                     */
                    CustomMsgContent m_customMsgContent;
                    bool m_customMsgContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MSGBODY_H_
