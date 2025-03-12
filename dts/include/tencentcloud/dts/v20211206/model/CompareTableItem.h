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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareColumnItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 用于一致性校验的表配置
                */
                class CompareTableItem : public AbstractModel
                {
                public:
                    CompareTableItem();
                    ~CompareTableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取column 模式，all 为全部，partial 表示部分(该参数仅对数据同步任务有效)
                     * @return ColumnMode column 模式，all 为全部，partial 表示部分(该参数仅对数据同步任务有效)
                     * 
                     */
                    std::string GetColumnMode() const;

                    /**
                     * 设置column 模式，all 为全部，partial 表示部分(该参数仅对数据同步任务有效)
                     * @param _columnMode column 模式，all 为全部，partial 表示部分(该参数仅对数据同步任务有效)
                     * 
                     */
                    void SetColumnMode(const std::string& _columnMode);

                    /**
                     * 判断参数 ColumnMode 是否已赋值
                     * @return ColumnMode 是否已赋值
                     * 
                     */
                    bool ColumnModeHasBeenSet() const;

                    /**
                     * 获取当 ColumnMode 为 partial 时必填(该参数仅对数据同步任务有效)
                     * @return Columns 当 ColumnMode 为 partial 时必填(该参数仅对数据同步任务有效)
                     * 
                     */
                    std::vector<CompareColumnItem> GetColumns() const;

                    /**
                     * 设置当 ColumnMode 为 partial 时必填(该参数仅对数据同步任务有效)
                     * @param _columns 当 ColumnMode 为 partial 时必填(该参数仅对数据同步任务有效)
                     * 
                     */
                    void SetColumns(const std::vector<CompareColumnItem>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * column 模式，all 为全部，partial 表示部分(该参数仅对数据同步任务有效)
                     */
                    std::string m_columnMode;
                    bool m_columnModeHasBeenSet;

                    /**
                     * 当 ColumnMode 为 partial 时必填(该参数仅对数据同步任务有效)
                     */
                    std::vector<CompareColumnItem> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLEITEM_H_
