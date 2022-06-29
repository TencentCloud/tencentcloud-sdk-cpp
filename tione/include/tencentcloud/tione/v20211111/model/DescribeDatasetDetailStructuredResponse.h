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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILSTRUCTUREDRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILSTRUCTUREDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/RowItem.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeDatasetDetailStructured返回参数结构体
                */
                class DescribeDatasetDetailStructuredResponse : public AbstractModel
                {
                public:
                    DescribeDatasetDetailStructuredResponse();
                    ~DescribeDatasetDetailStructuredResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 数据总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取表格头信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNames 表格头信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetColumnNames() const;

                    /**
                     * 判断参数 ColumnNames 是否已赋值
                     * @return ColumnNames 是否已赋值
                     */
                    bool ColumnNamesHasBeenSet() const;

                    /**
                     * 获取表格内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowItems 表格内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowItem> GetRowItems() const;

                    /**
                     * 判断参数 RowItems 是否已赋值
                     * @return RowItems 是否已赋值
                     */
                    bool RowItemsHasBeenSet() const;

                    /**
                     * 获取文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowTexts 文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRowTexts() const;

                    /**
                     * 判断参数 RowTexts 是否已赋值
                     * @return RowTexts 是否已赋值
                     */
                    bool RowTextsHasBeenSet() const;

                private:

                    /**
                     * 数据总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 表格头信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columnNames;
                    bool m_columnNamesHasBeenSet;

                    /**
                     * 表格内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowItem> m_rowItems;
                    bool m_rowItemsHasBeenSet;

                    /**
                     * 文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rowTexts;
                    bool m_rowTextsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILSTRUCTUREDRESPONSE_H_
