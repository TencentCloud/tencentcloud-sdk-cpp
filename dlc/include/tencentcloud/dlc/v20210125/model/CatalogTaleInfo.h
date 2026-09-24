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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGTALEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGTALEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ColumnInfo.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>
#include <tencentcloud/dlc/v20210125/model/Partitioning.h>
#include <tencentcloud/dlc/v20210125/model/IndexInfo.h>
#include <tencentcloud/dlc/v20210125/model/Audit.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc TableInfo定义
                */
                class CatalogTaleInfo : public AbstractModel
                {
                public:
                    CatalogTaleInfo();
                    ~CatalogTaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表名称</p>
                     * @return Name <p>表名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>表名称</p>
                     * @param _name <p>表名称</p>
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
                     * 获取<p>描述</p>
                     * @return Comment <p>描述</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _comment <p>描述</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>字段信息</p>
                     * @return Columns <p>字段信息</p>
                     * 
                     */
                    std::vector<ColumnInfo> GetColumns() const;

                    /**
                     * 设置<p>字段信息</p>
                     * @param _columns <p>字段信息</p>
                     * 
                     */
                    void SetColumns(const std::vector<ColumnInfo>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取<p>属性值</p>
                     * @return Properties <p>属性值</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>属性值</p>
                     * @param _properties <p>属性值</p>
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>分区</p>
                     * @return Partitioning <p>分区</p>
                     * 
                     */
                    std::vector<Partitioning> GetPartitioning() const;

                    /**
                     * 设置<p>分区</p>
                     * @param _partitioning <p>分区</p>
                     * 
                     */
                    void SetPartitioning(const std::vector<Partitioning>& _partitioning);

                    /**
                     * 判断参数 Partitioning 是否已赋值
                     * @return Partitioning 是否已赋值
                     * 
                     */
                    bool PartitioningHasBeenSet() const;

                    /**
                     * 获取<p>索引</p>
                     * @return Indexes <p>索引</p>
                     * 
                     */
                    std::vector<IndexInfo> GetIndexes() const;

                    /**
                     * 设置<p>索引</p>
                     * @param _indexes <p>索引</p>
                     * 
                     */
                    void SetIndexes(const std::vector<IndexInfo>& _indexes);

                    /**
                     * 判断参数 Indexes 是否已赋值
                     * @return Indexes 是否已赋值
                     * 
                     */
                    bool IndexesHasBeenSet() const;

                    /**
                     * 获取<p>编辑者/审计信息</p>
                     * @return Audit <p>编辑者/审计信息</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>编辑者/审计信息</p>
                     * @param _audit <p>编辑者/审计信息</p>
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取<p>数据目录名称</p>
                     * @return CatalogName <p>数据目录名称</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录名称</p>
                     * @param _catalogName <p>数据目录名称</p>
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
                     * 获取<p>数据库名称</p>
                     * @return SchemaName <p>数据库名称</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _schemaName <p>数据库名称</p>
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
                     * 获取<p>表格式</p>
                     * @return TableFormat <p>表格式</p>
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置<p>表格式</p>
                     * @param _tableFormat <p>表格式</p>
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

                    /**
                     * 获取<p>表格式类型</p><p>枚举值：</p><ul><li>v2： TcIceberg v2版本</li></ul>
                     * @return FormatType <p>表格式类型</p><p>枚举值：</p><ul><li>v2： TcIceberg v2版本</li></ul>
                     * 
                     */
                    std::string GetFormatType() const;

                    /**
                     * 设置<p>表格式类型</p><p>枚举值：</p><ul><li>v2： TcIceberg v2版本</li></ul>
                     * @param _formatType <p>表格式类型</p><p>枚举值：</p><ul><li>v2： TcIceberg v2版本</li></ul>
                     * 
                     */
                    void SetFormatType(const std::string& _formatType);

                    /**
                     * 判断参数 FormatType 是否已赋值
                     * @return FormatType 是否已赋值
                     * 
                     */
                    bool FormatTypeHasBeenSet() const;

                    /**
                     * 获取<p>表类型</p><p>枚举值：</p><ul><li>Managed： 内部表</li></ul>
                     * @return TableType <p>表类型</p><p>枚举值：</p><ul><li>Managed： 内部表</li></ul>
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置<p>表类型</p><p>枚举值：</p><ul><li>Managed： 内部表</li></ul>
                     * @param _tableType <p>表类型</p><p>枚举值：</p><ul><li>Managed： 内部表</li></ul>
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取<p>场景类型</p><p>枚举值：</p><ul><li>REALTIME： 实时类型</li></ul>
                     * @return TableMode <p>场景类型</p><p>枚举值：</p><ul><li>REALTIME： 实时类型</li></ul>
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置<p>场景类型</p><p>枚举值：</p><ul><li>REALTIME： 实时类型</li></ul>
                     * @param _tableMode <p>场景类型</p><p>枚举值：</p><ul><li>REALTIME： 实时类型</li></ul>
                     * 
                     */
                    void SetTableMode(const std::string& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     * 
                     */
                    bool TableModeHasBeenSet() const;

                private:

                    /**
                     * <p>表名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>字段信息</p>
                     */
                    std::vector<ColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>属性值</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>分区</p>
                     */
                    std::vector<Partitioning> m_partitioning;
                    bool m_partitioningHasBeenSet;

                    /**
                     * <p>索引</p>
                     */
                    std::vector<IndexInfo> m_indexes;
                    bool m_indexesHasBeenSet;

                    /**
                     * <p>编辑者/审计信息</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>数据目录名称</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>表格式</p>
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * <p>表格式类型</p><p>枚举值：</p><ul><li>v2： TcIceberg v2版本</li></ul>
                     */
                    std::string m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * <p>表类型</p><p>枚举值：</p><ul><li>Managed： 内部表</li></ul>
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * <p>场景类型</p><p>枚举值：</p><ul><li>REALTIME： 实时类型</li></ul>
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGTALEINFO_H_
