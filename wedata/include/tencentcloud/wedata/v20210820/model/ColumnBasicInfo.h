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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_

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
                * 表的元数据信息
                */
                class ColumnBasicInfo : public AbstractModel
                {
                public:
                    ColumnBasicInfo();
                    ~ColumnBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName 字段名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据类型,string/int等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataType 数据类型,string/int等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据类型,string/int等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataType 数据类型,string/int等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取字段类型, varchar(32)/int(10)等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 字段类型, varchar(32)/int(10)等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置字段类型, varchar(32)/int(10)等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 字段类型, varchar(32)/int(10)等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                    /**
                     * 获取字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnDefault 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnDefault() const;

                    /**
                     * 设置字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnDefault 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnDefault(const std::string& _columnDefault);

                    /**
                     * 判断参数 ColumnDefault 是否已赋值
                     * @return ColumnDefault 是否已赋值
                     * 
                     */
                    bool ColumnDefaultHasBeenSet() const;

                    /**
                     * 获取索引类型, PRI/MUL/PARTITION等,普通字段该值为空串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnKey 索引类型, PRI/MUL/PARTITION等,普通字段该值为空串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnKey() const;

                    /**
                     * 设置索引类型, PRI/MUL/PARTITION等,普通字段该值为空串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnKey 索引类型, PRI/MUL/PARTITION等,普通字段该值为空串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnKey(const std::string& _columnKey);

                    /**
                     * 判断参数 ColumnKey 是否已赋值
                     * @return ColumnKey 是否已赋值
                     * 
                     */
                    bool ColumnKeyHasBeenSet() const;

                    /**
                     * 获取字段顺序标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnPosition 字段顺序标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetColumnPosition() const;

                    /**
                     * 设置字段顺序标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnPosition 字段顺序标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnPosition(const int64_t& _columnPosition);

                    /**
                     * 判断参数 ColumnPosition 是否已赋值
                     * @return ColumnPosition 是否已赋值
                     * 
                     */
                    bool ColumnPositionHasBeenSet() const;

                    /**
                     * 获取字段注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnComment 字段注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnComment() const;

                    /**
                     * 设置字段注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnComment 字段注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnComment(const std::string& _columnComment);

                    /**
                     * 判断参数 ColumnComment 是否已赋值
                     * @return ColumnComment 是否已赋值
                     * 
                     */
                    bool ColumnCommentHasBeenSet() const;

                    /**
                     * 获取数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoreType 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStoreType() const;

                    /**
                     * 设置数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storeType 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoreType(const std::string& _storeType);

                    /**
                     * 判断参数 StoreType 是否已赋值
                     * @return StoreType 是否已赋值
                     * 
                     */
                    bool StoreTypeHasBeenSet() const;

                    /**
                     * 获取所属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 所属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 所属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取所属项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 所属项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置所属项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 所属项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scale 精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scale 精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                private:

                    /**
                     * 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 数据类型,string/int等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 字段类型, varchar(32)/int(10)等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnDefault;
                    bool m_columnDefaultHasBeenSet;

                    /**
                     * 索引类型, PRI/MUL/PARTITION等,普通字段该值为空串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnKey;
                    bool m_columnKeyHasBeenSet;

                    /**
                     * 字段顺序标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_columnPosition;
                    bool m_columnPositionHasBeenSet;

                    /**
                     * 字段注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnComment;
                    bool m_columnCommentHasBeenSet;

                    /**
                     * 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storeType;
                    bool m_storeTypeHasBeenSet;

                    /**
                     * 所属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 所属项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 精度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNBASICINFO_H_
