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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEEVENTHISTORYRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEEVENTHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20211125/model/EventHistoryItem.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeDeviceEventHistory返回参数结构体
                */
                class DescribeDeviceEventHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDeviceEventHistoryResponse();
                    ~DescribeDeviceEventHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索上下文, 用作查询游标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Context 搜索上下文, 用作查询游标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取搜索结果数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 搜索结果数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取搜索结果是否已经结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Listover 搜索结果是否已经结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                    /**
                     * 获取搜集结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventHistory 搜集结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventHistoryItem> GetEventHistory() const;

                    /**
                     * 判断参数 EventHistory 是否已赋值
                     * @return EventHistory 是否已赋值
                     * 
                     */
                    bool EventHistoryHasBeenSet() const;

                private:

                    /**
                     * 搜索上下文, 用作查询游标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 搜索结果数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 搜索结果是否已经结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * 搜集结果集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventHistoryItem> m_eventHistory;
                    bool m_eventHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEEVENTHISTORYRESPONSE_H_
