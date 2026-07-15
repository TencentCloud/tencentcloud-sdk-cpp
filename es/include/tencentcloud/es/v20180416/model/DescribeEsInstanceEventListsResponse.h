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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EventDataInfoOverview.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeEsInstanceEventLists返回参数结构体
                */
                class DescribeEsInstanceEventListsResponse : public AbstractModel
                {
                public:
                    DescribeEsInstanceEventListsResponse();
                    ~DescribeEsInstanceEventListsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件中心记录总数
                     * @return TotalCount 事件中心记录总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取事件中心记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventDataInfoList 事件中心记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventDataInfoOverview> GetEventDataInfoList() const;

                    /**
                     * 判断参数 EventDataInfoList 是否已赋值
                     * @return EventDataInfoList 是否已赋值
                     * 
                     */
                    bool EventDataInfoListHasBeenSet() const;

                private:

                    /**
                     * 事件中心记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 事件中心记录信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventDataInfoOverview> m_eventDataInfoList;
                    bool m_eventDataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSRESPONSE_H_
