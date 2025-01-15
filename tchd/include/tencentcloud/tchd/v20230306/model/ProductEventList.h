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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_PRODUCTEVENTLIST_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_PRODUCTEVENTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tchd/v20230306/model/EventDetail.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * 产品可用性事件详情列表
                */
                class ProductEventList : public AbstractModel
                {
                public:
                    ProductEventList();
                    ~ProductEventList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件详情列表
                     * @return EventList 事件详情列表
                     * 
                     */
                    std::vector<EventDetail> GetEventList() const;

                    /**
                     * 设置事件详情列表
                     * @param _eventList 事件详情列表
                     * 
                     */
                    void SetEventList(const std::vector<EventDetail>& _eventList);

                    /**
                     * 判断参数 EventList 是否已赋值
                     * @return EventList 是否已赋值
                     * 
                     */
                    bool EventListHasBeenSet() const;

                private:

                    /**
                     * 事件详情列表
                     */
                    std::vector<EventDetail> m_eventList;
                    bool m_eventListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_PRODUCTEVENTLIST_H_
