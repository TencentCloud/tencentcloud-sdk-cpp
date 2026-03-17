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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableContentPreview返回参数结构体
                */
                class DescribeTableContentPreviewResponse : public AbstractModel
                {
                public:
                    DescribeTableContentPreviewResponse();
                    ~DescribeTableContentPreviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表的列名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNames 表的列名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumnNames() const;

                    /**
                     * 判断参数 ColumnNames 是否已赋值
                     * @return ColumnNames 是否已赋值
                     * 
                     */
                    bool ColumnNamesHasBeenSet() const;

                    /**
                     * 获取表的行数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableRecordSet 表的行数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableRecord> GetTableRecordSet() const;

                    /**
                     * 判断参数 TableRecordSet 是否已赋值
                     * @return TableRecordSet 是否已赋值
                     * 
                     */
                    bool TableRecordSetHasBeenSet() const;

                    /**
                     * 获取异步预览任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 异步预览任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取异步预览结果状态: 0 初始化， 1 执行中， 2 执行成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncState 异步预览结果状态: 0 初始化， 1 执行中， 2 执行成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAsyncState() const;

                    /**
                     * 判断参数 AsyncState 是否已赋值
                     * @return AsyncState 是否已赋值
                     * 
                     */
                    bool AsyncStateHasBeenSet() const;

                private:

                    /**
                     * 表的列名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columnNames;
                    bool m_columnNamesHasBeenSet;

                    /**
                     * 表的行数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableRecord> m_tableRecordSet;
                    bool m_tableRecordSetHasBeenSet;

                    /**
                     * 异步预览任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 异步预览结果状态: 0 初始化， 1 执行中， 2 执行成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_asyncState;
                    bool m_asyncStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLECONTENTPREVIEWRESPONSE_H_
