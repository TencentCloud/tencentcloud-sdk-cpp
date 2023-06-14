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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_PUTEVENTSREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_PUTEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Event.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * PutEvents请求参数结构体
                */
                class PutEventsRequest : public AbstractModel
                {
                public:
                    PutEventsRequest();
                    ~PutEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件列表
                     * @return EventList 事件列表
                     * 
                     */
                    std::vector<Event> GetEventList() const;

                    /**
                     * 设置事件列表
                     * @param _eventList 事件列表
                     * 
                     */
                    void SetEventList(const std::vector<Event>& _eventList);

                    /**
                     * 判断参数 EventList 是否已赋值
                     * @return EventList 是否已赋值
                     * 
                     */
                    bool EventListHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                private:

                    /**
                     * 事件列表
                     */
                    std::vector<Event> m_eventList;
                    bool m_eventListHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_PUTEVENTSREQUEST_H_
