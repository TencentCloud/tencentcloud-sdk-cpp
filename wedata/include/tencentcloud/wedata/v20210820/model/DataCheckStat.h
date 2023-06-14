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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据监测情况结果
                */
                class DataCheckStat : public AbstractModel
                {
                public:
                    DataCheckStat();
                    ~DataCheckStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表总数
                     * @return TableTotal 表总数
                     * 
                     */
                    uint64_t GetTableTotal() const;

                    /**
                     * 设置表总数
                     * @param _tableTotal 表总数
                     * 
                     */
                    void SetTableTotal(const uint64_t& _tableTotal);

                    /**
                     * 判断参数 TableTotal 是否已赋值
                     * @return TableTotal 是否已赋值
                     * 
                     */
                    bool TableTotalHasBeenSet() const;

                    /**
                     * 获取字段总数
                     * @return ColumnTotal 字段总数
                     * 
                     */
                    uint64_t GetColumnTotal() const;

                    /**
                     * 设置字段总数
                     * @param _columnTotal 字段总数
                     * 
                     */
                    void SetColumnTotal(const uint64_t& _columnTotal);

                    /**
                     * 判断参数 ColumnTotal 是否已赋值
                     * @return ColumnTotal 是否已赋值
                     * 
                     */
                    bool ColumnTotalHasBeenSet() const;

                    /**
                     * 获取表配置检测数
                     * @return TableConfig 表配置检测数
                     * 
                     */
                    uint64_t GetTableConfig() const;

                    /**
                     * 设置表配置检测数
                     * @param _tableConfig 表配置检测数
                     * 
                     */
                    void SetTableConfig(const uint64_t& _tableConfig);

                    /**
                     * 判断参数 TableConfig 是否已赋值
                     * @return TableConfig 是否已赋值
                     * 
                     */
                    bool TableConfigHasBeenSet() const;

                    /**
                     * 获取字段配置检测数
                     * @return ColumnConfig 字段配置检测数
                     * 
                     */
                    uint64_t GetColumnConfig() const;

                    /**
                     * 设置字段配置检测数
                     * @param _columnConfig 字段配置检测数
                     * 
                     */
                    void SetColumnConfig(const uint64_t& _columnConfig);

                    /**
                     * 判断参数 ColumnConfig 是否已赋值
                     * @return ColumnConfig 是否已赋值
                     * 
                     */
                    bool ColumnConfigHasBeenSet() const;

                    /**
                     * 获取表实际检测数
                     * @return TableExec 表实际检测数
                     * 
                     */
                    uint64_t GetTableExec() const;

                    /**
                     * 设置表实际检测数
                     * @param _tableExec 表实际检测数
                     * 
                     */
                    void SetTableExec(const uint64_t& _tableExec);

                    /**
                     * 判断参数 TableExec 是否已赋值
                     * @return TableExec 是否已赋值
                     * 
                     */
                    bool TableExecHasBeenSet() const;

                    /**
                     * 获取字段实际检测数
                     * @return ColumnExec 字段实际检测数
                     * 
                     */
                    uint64_t GetColumnExec() const;

                    /**
                     * 设置字段实际检测数
                     * @param _columnExec 字段实际检测数
                     * 
                     */
                    void SetColumnExec(const uint64_t& _columnExec);

                    /**
                     * 判断参数 ColumnExec 是否已赋值
                     * @return ColumnExec 是否已赋值
                     * 
                     */
                    bool ColumnExecHasBeenSet() const;

                private:

                    /**
                     * 表总数
                     */
                    uint64_t m_tableTotal;
                    bool m_tableTotalHasBeenSet;

                    /**
                     * 字段总数
                     */
                    uint64_t m_columnTotal;
                    bool m_columnTotalHasBeenSet;

                    /**
                     * 表配置检测数
                     */
                    uint64_t m_tableConfig;
                    bool m_tableConfigHasBeenSet;

                    /**
                     * 字段配置检测数
                     */
                    uint64_t m_columnConfig;
                    bool m_columnConfigHasBeenSet;

                    /**
                     * 表实际检测数
                     */
                    uint64_t m_tableExec;
                    bool m_tableExecHasBeenSet;

                    /**
                     * 字段实际检测数
                     */
                    uint64_t m_columnExec;
                    bool m_columnExecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATACHECKSTAT_H_
