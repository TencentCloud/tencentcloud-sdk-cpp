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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PULLEVENTSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PULLEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EventContent.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * PullEvents返回参数结构体
                */
                class PullEventsResponse : public AbstractModel
                {
                public:
                    PullEventsResponse();
                    ~PullEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSet 事件列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventContent> GetEventSet() const;

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                private:

                    /**
                     * 事件列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventContent> m_eventSet;
                    bool m_eventSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLEVENTSRESPONSE_H_
