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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLERECORD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableRecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表一行数据
                */
                class TableRecord : public AbstractModel
                {
                public:
                    TableRecord();
                    ~TableRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表一行数据，包含多个Field
                     * @return TableRecordFieldSet 表一行数据，包含多个Field
                     * 
                     */
                    std::vector<TableRecordField> GetTableRecordFieldSet() const;

                    /**
                     * 设置表一行数据，包含多个Field
                     * @param _tableRecordFieldSet 表一行数据，包含多个Field
                     * 
                     */
                    void SetTableRecordFieldSet(const std::vector<TableRecordField>& _tableRecordFieldSet);

                    /**
                     * 判断参数 TableRecordFieldSet 是否已赋值
                     * @return TableRecordFieldSet 是否已赋值
                     * 
                     */
                    bool TableRecordFieldSetHasBeenSet() const;

                private:

                    /**
                     * 表一行数据，包含多个Field
                     */
                    std::vector<TableRecordField> m_tableRecordFieldSet;
                    bool m_tableRecordFieldSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLERECORD_H_
