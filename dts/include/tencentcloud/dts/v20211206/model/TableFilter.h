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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/OpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 表级 DDL/DML 过滤信息
                */
                class TableFilter : public AbstractModel
                {
                public:
                    TableFilter();
                    ~TableFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则生效的表名
                     * @return TableName 规则生效的表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置规则生效的表名
                     * @param _tableName 规则生效的表名
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
                     * 获取表级 DDL/DML 过滤规则
                     * @return OpFilter 表级 DDL/DML 过滤规则
                     * 
                     */
                    OpFilter GetOpFilter() const;

                    /**
                     * 设置表级 DDL/DML 过滤规则
                     * @param _opFilter 表级 DDL/DML 过滤规则
                     * 
                     */
                    void SetOpFilter(const OpFilter& _opFilter);

                    /**
                     * 判断参数 OpFilter 是否已赋值
                     * @return OpFilter 是否已赋值
                     * 
                     */
                    bool OpFilterHasBeenSet() const;

                private:

                    /**
                     * 规则生效的表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表级 DDL/DML 过滤规则
                     */
                    OpFilter m_opFilter;
                    bool m_opFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLEFILTER_H_
