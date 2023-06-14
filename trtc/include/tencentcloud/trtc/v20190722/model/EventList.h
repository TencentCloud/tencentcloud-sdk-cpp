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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/EventMessage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * sdk或webrtc的事件列表。
                */
                class EventList : public AbstractModel
                {
                public:
                    EventList();
                    ~EventList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据内容
                     * @return Content 数据内容
                     * 
                     */
                    std::vector<EventMessage> GetContent() const;

                    /**
                     * 设置数据内容
                     * @param _content 数据内容
                     * 
                     */
                    void SetContent(const std::vector<EventMessage>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取发送端的userId
                     * @return PeerId 发送端的userId
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置发送端的userId
                     * @param _peerId 发送端的userId
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                private:

                    /**
                     * 数据内容
                     */
                    std::vector<EventMessage> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 发送端的userId
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_
