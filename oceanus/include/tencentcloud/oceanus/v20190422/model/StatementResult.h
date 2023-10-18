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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_STATEMENTRESULT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_STATEMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResultColumn.h>
#include <tencentcloud/oceanus/v20190422/model/ResultData.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * Sql Gateway 返回Result结构类型
                */
                class StatementResult : public AbstractModel
                {
                public:
                    StatementResult();
                    ~StatementResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回结果列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 返回结果列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultColumn> GetColumns() const;

                    /**
                     * 设置返回结果列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 返回结果列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<ResultColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowFormat 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRowFormat() const;

                    /**
                     * 设置格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowFormat 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowFormat(const std::string& _rowFormat);

                    /**
                     * 判断参数 RowFormat 是否已赋值
                     * @return RowFormat 是否已赋值
                     * 
                     */
                    bool RowFormatHasBeenSet() const;

                    /**
                     * 获取结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultData> GetData() const;

                    /**
                     * 设置结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<ResultData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回结果列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rowFormat;
                    bool m_rowFormatHasBeenSet;

                    /**
                     * 结果值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_STATEMENTRESULT_H_
