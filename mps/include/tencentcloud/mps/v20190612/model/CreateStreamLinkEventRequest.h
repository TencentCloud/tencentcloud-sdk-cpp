/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKEVENTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKEVENTREQUEST_H_

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
                * CreateStreamLinkEvent请求参数结构体
                */
                class CreateStreamLinkEventRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkEventRequest();
                    ~CreateStreamLinkEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件名称。
                     * @return EventName 事件名称。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称。
                     * @param _eventName 事件名称。
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
                     * 获取事件描述。
                     * @return Description 事件描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述。
                     * @param _description 事件描述。
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
                     * 事件名称。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKEVENTREQUEST_H_
