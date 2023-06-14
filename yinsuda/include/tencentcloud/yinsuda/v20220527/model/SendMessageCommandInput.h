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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_SENDMESSAGECOMMANDINPUT_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_SENDMESSAGECOMMANDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 发送自定义信息指令参数
                */
                class SendMessageCommandInput : public AbstractModel
                {
                public:
                    SendMessageCommandInput();
                    ~SendMessageCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义消息，json格式字符串。
                     * @return Message 自定义消息，json格式字符串。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置自定义消息，json格式字符串。
                     * @param _message 自定义消息，json格式字符串。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取消息重复次数，默认为 1。
                     * @return Repeat 消息重复次数，默认为 1。
                     * 
                     */
                    uint64_t GetRepeat() const;

                    /**
                     * 设置消息重复次数，默认为 1。
                     * @param _repeat 消息重复次数，默认为 1。
                     * 
                     */
                    void SetRepeat(const uint64_t& _repeat);

                    /**
                     * 判断参数 Repeat 是否已赋值
                     * @return Repeat 是否已赋值
                     * 
                     */
                    bool RepeatHasBeenSet() const;

                private:

                    /**
                     * 自定义消息，json格式字符串。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 消息重复次数，默认为 1。
                     */
                    uint64_t m_repeat;
                    bool m_repeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_SENDMESSAGECOMMANDINPUT_H_
