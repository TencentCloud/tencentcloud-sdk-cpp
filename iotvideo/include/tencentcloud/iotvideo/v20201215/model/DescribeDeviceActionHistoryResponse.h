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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20201215/model/ActionHistory.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeDeviceActionHistory返回参数结构体
                */
                class DescribeDeviceActionHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDeviceActionHistoryResponse();
                    ~DescribeDeviceActionHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCounts 总条数
                     * 
                     */
                    uint64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取动作历史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionHistories 动作历史
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ActionHistory> GetActionHistories() const;

                    /**
                     * 判断参数 ActionHistories 是否已赋值
                     * @return ActionHistories 是否已赋值
                     * 
                     */
                    bool ActionHistoriesHasBeenSet() const;

                    /**
                     * 获取用于标识查询结果的上下文，翻页用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Context 用于标识查询结果的上下文，翻页用。
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
                     * 获取搜索结果是否已经结束。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Listover 搜索结果是否已经结束。
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

                private:

                    /**
                     * 总条数
                     */
                    uint64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * 动作历史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ActionHistory> m_actionHistories;
                    bool m_actionHistoriesHasBeenSet;

                    /**
                     * 用于标识查询结果的上下文，翻页用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 搜索结果是否已经结束。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEDEVICEACTIONHISTORYRESPONSE_H_
