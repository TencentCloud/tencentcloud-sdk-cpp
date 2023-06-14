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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDEVENTSRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/GridEventInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitGridEvents返回参数结构体
                */
                class DescribeEdgeUnitGridEventsResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitGridEventsResponse();
                    ~DescribeEdgeUnitGridEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSet 事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GridEventInfo> GetEventSet() const;

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                private:

                    /**
                     * 事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GridEventInfo> m_eventSet;
                    bool m_eventSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITGRIDEVENTSRESPONSE_H_
