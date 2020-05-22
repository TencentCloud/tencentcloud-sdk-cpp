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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_COMMONMEDIARECOGNITIONREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_COMMONMEDIARECOGNITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/MessageCommonGjh.h>
#include <tencentcloud/cms/v20190321/model/MessageContentGjh.h>
#include <tencentcloud/cms/v20190321/model/MessageIdGjh.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * CommonMediaRecognition请求参数结构体
                */
                class CommonMediaRecognitionRequest : public AbstractModel
                {
                public:
                    CommonMediaRecognitionRequest();
                    ~CommonMediaRecognitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公共参数Common类
                     * @return MessageCommon 公共参数Common类
                     */
                    MessageCommonGjh GetMessageCommon() const;

                    /**
                     * 设置公共参数Common类
                     * @param MessageCommon 公共参数Common类
                     */
                    void SetMessageCommon(const MessageCommonGjh& _messageCommon);

                    /**
                     * 判断参数 MessageCommon 是否已赋值
                     * @return MessageCommon 是否已赋值
                     */
                    bool MessageCommonHasBeenSet() const;

                    /**
                     * 获取内容相关参数
                     * @return MessageContent 内容相关参数
                     */
                    MessageContentGjh GetMessageContent() const;

                    /**
                     * 设置内容相关参数
                     * @param MessageContent 内容相关参数
                     */
                    void SetMessageContent(const MessageContentGjh& _messageContent);

                    /**
                     * 判断参数 MessageContent 是否已赋值
                     * @return MessageContent 是否已赋值
                     */
                    bool MessageContentHasBeenSet() const;

                    /**
                     * 获取内容ID参数
                     * @return MessageId 内容ID参数
                     */
                    MessageIdGjh GetMessageId() const;

                    /**
                     * 设置内容ID参数
                     * @param MessageId 内容ID参数
                     */
                    void SetMessageId(const MessageIdGjh& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     */
                    bool MessageIdHasBeenSet() const;

                private:

                    /**
                     * 公共参数Common类
                     */
                    MessageCommonGjh m_messageCommon;
                    bool m_messageCommonHasBeenSet;

                    /**
                     * 内容相关参数
                     */
                    MessageContentGjh m_messageContent;
                    bool m_messageContentHasBeenSet;

                    /**
                     * 内容ID参数
                     */
                    MessageIdGjh m_messageId;
                    bool m_messageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_COMMONMEDIARECOGNITIONREQUEST_H_
