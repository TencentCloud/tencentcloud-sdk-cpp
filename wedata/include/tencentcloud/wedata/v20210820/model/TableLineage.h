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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExtParam.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表血缘节点
                */
                class TableLineage : public AbstractModel
                {
                public:
                    TableLineage();
                    ~TableLineage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据源id</p>
                     * @return DatasourceId <p>数据源id</p>
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置<p>数据源id</p>
                     * @param _datasourceId <p>数据源id</p>
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取<p>库名称</p>
                     * @return DatabaseName <p>库名称</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>库名称</p>
                     * @param _databaseName <p>库名称</p>
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
                     * 获取<p>表名称</p>
                     * @return TableName <p>表名称</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名称</p>
                     * @param _tableName <p>表名称</p>
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
                     * 获取<p>catalog值,仅使用DLC且开启TcLake的支持,其他类型传空即可</p>
                     * @return CatalogName <p>catalog值,仅使用DLC且开启TcLake的支持,其他类型传空即可</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>catalog值,仅使用DLC且开启TcLake的支持,其他类型传空即可</p>
                     * @param _catalogName <p>catalog值,仅使用DLC且开启TcLake的支持,其他类型传空即可</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>schema名称</p>
                     * @return SchemaName <p>schema名称</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名称</p>
                     * @param _schemaName <p>schema名称</p>
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
                     * 获取<p>扩展参数</p>
                     * @return ExtParams <p>扩展参数</p>
                     * 
                     */
                    std::vector<ExtParam> GetExtParams() const;

                    /**
                     * 设置<p>扩展参数</p>
                     * @param _extParams <p>扩展参数</p>
                     * 
                     */
                    void SetExtParams(const std::vector<ExtParam>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取<p>table类型 TABLE｜VIEW</p>
                     * @return TableType <p>table类型 TABLE｜VIEW</p>
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置<p>table类型 TABLE｜VIEW</p>
                     * @param _tableType <p>table类型 TABLE｜VIEW</p>
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                private:

                    /**
                     * <p>数据源id</p>
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * <p>库名称</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>表名称</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>catalog值,仅使用DLC且开启TcLake的支持,其他类型传空即可</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>schema名称</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>扩展参数</p>
                     */
                    std::vector<ExtParam> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * <p>table类型 TABLE｜VIEW</p>
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGE_H_
