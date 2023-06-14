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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKEVENTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKEVENTREQUEST_H_

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
                * ModifyStreamLinkEvent请求参数结构体
                */
                class ModifyStreamLinkEventRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkEventRequest();
                    ~ModifyStreamLinkEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体传输事件Event Id。
                     * @return EventId 媒体传输事件Event Id。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置媒体传输事件Event Id。
                     * @param _eventId 媒体传输事件Event Id。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取需要修改的事件名称。
                     * @return EventName 需要修改的事件名称。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置需要修改的事件名称。
                     * @param _eventName 需要修改的事件名称。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Event的描述信息。
                     * @return Description Event的描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event的描述信息。
                     * @param _description Event的描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 媒体传输事件Event Id。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 需要修改的事件名称。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event的描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKEVENTREQUEST_H_
