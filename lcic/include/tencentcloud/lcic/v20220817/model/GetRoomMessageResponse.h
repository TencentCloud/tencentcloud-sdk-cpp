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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGERESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MessageList.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRoomMessage返回参数结构体
                */
                class GetRoomMessageResponse : public AbstractModel
                {
                public:
                    GetRoomMessageResponse();
                    ~GetRoomMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息列表
                     * @return Messages 消息列表
                     * 
                     */
                    std::vector<MessageList> GetMessages() const;

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                private:

                    /**
                     * 消息列表
                     */
                    std::vector<MessageList> m_messages;
                    bool m_messagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGERESPONSE_H_
