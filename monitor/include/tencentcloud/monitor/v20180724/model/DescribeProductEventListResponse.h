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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEvents.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListOverView.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductEventList返回参数结构体
                */
                class DescribeProductEventListResponse : public AbstractModel
                {
                public:
                    DescribeProductEventListResponse();
                    ~DescribeProductEventListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Events 事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeProductEventListEvents> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取事件统计
                     * @return OverView 事件统计
                     * 
                     */
                    DescribeProductEventListOverView GetOverView() const;

                    /**
                     * 判断参数 OverView 是否已赋值
                     * @return OverView 是否已赋值
                     * 
                     */
                    bool OverViewHasBeenSet() const;

                    /**
                     * 获取事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 事件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeProductEventListEvents> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 事件统计
                     */
                    DescribeProductEventListOverView m_overView;
                    bool m_overViewHasBeenSet;

                    /**
                     * 事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_
