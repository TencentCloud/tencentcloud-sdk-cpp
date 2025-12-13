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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPCOLUMNITEM_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPCOLUMNITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份列对象
                */
                class BackupColumnItem : public AbstractModel
                {
                public:
                    BackupColumnItem();
                    ~BackupColumnItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名。
                     * @return ColumnName 列名。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置列名。
                     * @param _columnName 列名。
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取重命名后的列名。
                     * @return NewColumnName 重命名后的列名。
                     * 
                     */
                    std::string GetNewColumnName() const;

                    /**
                     * 设置重命名后的列名。
                     * @param _newColumnName 重命名后的列名。
                     * 
                     */
                    void SetNewColumnName(const std::string& _newColumnName);

                    /**
                     * 判断参数 NewColumnName 是否已赋值
                     * @return NewColumnName 是否已赋值
                     * 
                     */
                    bool NewColumnNameHasBeenSet() const;

                private:

                    /**
                     * 列名。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 重命名后的列名。
                     */
                    std::string m_newColumnName;
                    bool m_newColumnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPCOLUMNITEM_H_
