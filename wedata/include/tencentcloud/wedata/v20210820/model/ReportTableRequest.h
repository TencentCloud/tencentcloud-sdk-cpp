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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ReportColumnInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ReportTable请求参数结构体
                */
                class ReportTableRequest : public AbstractModel
                {
                public:
                    ReportTableRequest();
                    ~ReportTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取database名称,字符长度128内
                     * @return DatabaseName database名称,字符长度128内
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置database名称,字符长度128内
                     * @param _databaseName database名称,字符长度128内
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取table名称,字符长度128内
                     * @return TableName table名称,字符长度128内
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置table名称,字符长度128内
                     * @param _tableName table名称,字符长度128内
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
                     * 获取表类型,VIEW/TABLE
                     * @return Type 表类型,VIEW/TABLE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表类型,VIEW/TABLE
                     * @param _type 表类型,VIEW/TABLE
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
                     * 获取schema名称,字符长度128内
                     * @return SchemaName schema名称,字符长度128内
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称,字符长度128内
                     * @param _schemaName schema名称,字符长度128内
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
                     * 获取描述,字符长度1000内
                     * @return Description 描述,字符长度1000内
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述,字符长度1000内
                     * @param _description 描述,字符长度1000内
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间戳,毫秒,为空默认当前时间
                     * @return CreateTime 创建时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳,毫秒,为空默认当前时间
                     * @param _createTime 创建时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间戳,毫秒,为空默认当前时间
                     * @return ModifiedTime 修改时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置修改时间戳,毫秒,为空默认当前时间
                     * @param _modifiedTime 修改时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取字段信息
                     * @return Columns 字段信息
                     * 
                     */
                    std::vector<ReportColumnInfo> GetColumns() const;

                    /**
                     * 设置字段信息
                     * @param _columns 字段信息
                     * 
                     */
                    void SetColumns(const std::vector<ReportColumnInfo>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * database名称,字符长度128内
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * table名称,字符长度128内
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表类型,VIEW/TABLE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * schema名称,字符长度128内
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 描述,字符长度1000内
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间戳,毫秒,为空默认当前时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间戳,毫秒,为空默认当前时间
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 字段信息
                     */
                    std::vector<ReportColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLEREQUEST_H_
