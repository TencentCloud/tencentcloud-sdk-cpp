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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMLINKEVENTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMLINKEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteStreamLinkEvent请求参数结构体
                */
                class DeleteStreamLinkEventRequest : public AbstractModel
                {
                public:
                    DeleteStreamLinkEventRequest();
                    ~DeleteStreamLinkEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体传输事件Id，删除前需要保证该Event关联的所有Flow都已经删除。
                     * @return EventId 媒体传输事件Id，删除前需要保证该Event关联的所有Flow都已经删除。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置媒体传输事件Id，删除前需要保证该Event关联的所有Flow都已经删除。
                     * @param _eventId 媒体传输事件Id，删除前需要保证该Event关联的所有Flow都已经删除。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 媒体传输事件Id，删除前需要保证该Event关联的所有Flow都已经删除。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMLINKEVENTREQUEST_H_
