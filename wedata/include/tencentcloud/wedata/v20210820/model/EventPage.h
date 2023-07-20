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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 智能运维事件分页查询
                */
                class EventPage : public AbstractModel
                {
                public:
                    EventPage();
                    ~EventPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件详情集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventsResponse 事件详情集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventDto> GetEventsResponse() const;

                    /**
                     * 设置事件详情集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventsResponse 事件详情集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventsResponse(const std::vector<EventDto>& _eventsResponse);

                    /**
                     * 判断参数 EventsResponse 是否已赋值
                     * @return EventsResponse 是否已赋值
                     * 
                     */
                    bool EventsResponseHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总条数
                     * @param _totalCount 总条数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 事件详情集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventDto> m_eventsResponse;
                    bool m_eventsResponseHasBeenSet;

                    /**
                     * 总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTPAGE_H_
