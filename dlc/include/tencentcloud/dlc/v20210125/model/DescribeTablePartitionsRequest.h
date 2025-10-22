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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEPARTITIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEPARTITIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Sort.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTablePartitions请求参数结构体
                */
                class DescribeTablePartitionsRequest : public AbstractModel
                {
                public:
                    DescribeTablePartitionsRequest();
                    ~DescribeTablePartitionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录名称
                     * @return Catalog 数据目录名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据目录名称
                     * @param _catalog 数据目录名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return Database 数据库名称
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名称
                     * @param _database 数据库名称
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取数据表名称
                     * @return Table 数据表名称
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置数据表名称
                     * @param _table 数据表名称
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取查询偏移位置
                     * @return Offset 查询偏移位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移位置
                     * @param _offset 查询偏移位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取当次查询的数量限制
                     * @return Limit 当次查询的数量限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置当次查询的数量限制
                     * @param _limit 当次查询的数量限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模糊查询的分区名称
                     * @return FuzzyPartition 模糊查询的分区名称
                     * 
                     */
                    std::string GetFuzzyPartition() const;

                    /**
                     * 设置模糊查询的分区名称
                     * @param _fuzzyPartition 模糊查询的分区名称
                     * 
                     */
                    void SetFuzzyPartition(const std::string& _fuzzyPartition);

                    /**
                     * 判断参数 FuzzyPartition 是否已赋值
                     * @return FuzzyPartition 是否已赋值
                     * 
                     */
                    bool FuzzyPartitionHasBeenSet() const;

                    /**
                     * 获取排序信息
                     * @return Sorts 排序信息
                     * 
                     */
                    std::vector<Sort> GetSorts() const;

                    /**
                     * 设置排序信息
                     * @param _sorts 排序信息
                     * 
                     */
                    void SetSorts(const std::vector<Sort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                    /**
                     * 获取分页查询的游标信息
                     * @return Cursor 分页查询的游标信息
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置分页查询的游标信息
                     * @param _cursor 分页查询的游标信息
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                private:

                    /**
                     * 数据目录名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 数据表名称
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 查询偏移位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 当次查询的数量限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊查询的分区名称
                     */
                    std::string m_fuzzyPartition;
                    bool m_fuzzyPartitionHasBeenSet;

                    /**
                     * 排序信息
                     */
                    std::vector<Sort> m_sorts;
                    bool m_sortsHasBeenSet;

                    /**
                     * 分页查询的游标信息
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLEPARTITIONSREQUEST_H_
