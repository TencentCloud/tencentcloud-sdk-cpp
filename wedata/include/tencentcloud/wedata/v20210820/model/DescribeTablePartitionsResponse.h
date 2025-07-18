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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEPARTITIONSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEPARTITIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TablePartition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTablePartitions返回参数结构体
                */
                class DescribeTablePartitionsResponse : public AbstractModel
                {
                public:
                    DescribeTablePartitionsResponse();
                    ~DescribeTablePartitionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分区详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePartitionSet 分区详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TablePartition> GetTablePartitionSet() const;

                    /**
                     * 判断参数 TablePartitionSet 是否已赋值
                     * @return TablePartitionSet 是否已赋值
                     * 
                     */
                    bool TablePartitionSetHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 分区详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TablePartition> m_tablePartitionSet;
                    bool m_tablePartitionSetHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEPARTITIONSRESPONSE_H_
