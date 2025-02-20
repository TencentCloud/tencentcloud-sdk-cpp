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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDMSTables请求参数结构体
                */
                class DescribeDMSTablesRequest : public AbstractModel
                {
                public:
                    DescribeDMSTablesRequest();
                    ~DescribeDMSTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取数据库schema名称
                     * @return SchemaName 数据库schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据库schema名称
                     * @param _schemaName 数据库schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return Name 表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
                     * @param _name 表名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取catalog类型
                     * @return Catalog catalog类型
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog类型
                     * @param _catalog catalog类型
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
                     * 获取查询关键词
                     * @return Keyword 查询关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键词
                     * @param _keyword 查询关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取查询模式，只支持填*
                     * @return Pattern 查询模式，只支持填*
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置查询模式，只支持填*
                     * @param _pattern 查询模式，只支持填*
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取表类型
                     * @return Type 表类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表类型
                     * @param _type 表类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取筛选参数：更新开始时间
                     * @return StartTime 筛选参数：更新开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置筛选参数：更新开始时间
                     * @param _startTime 筛选参数：更新开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取筛选参数：更新结束时间
                     * @return EndTime 筛选参数：更新结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置筛选参数：更新结束时间
                     * @param _endTime 筛选参数：更新结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return Limit 分页参数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数
                     * @param _limit 分页参数
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取排序字段：create_time：创建时间
                     * @return Sort 排序字段：create_time：创建时间
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段：create_time：创建时间
                     * @param _sort 排序字段：create_time：创建时间
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序字段：true：升序（默认），false：降序
                     * @return Asc 排序字段：true：升序（默认），false：降序
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序字段：true：升序（默认），false：降序
                     * @param _asc 排序字段：true：升序（默认），false：降序
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * catalog类型
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 查询关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 查询模式，只支持填*
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 表类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 筛选参数：更新开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 筛选参数：更新结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段：create_time：创建时间
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序字段：true：升序（默认），false：降序
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSTABLESREQUEST_H_
