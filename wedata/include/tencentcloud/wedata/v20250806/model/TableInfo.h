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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TechnicalMetadata.h>
#include <tencentcloud/wedata/v20250806/model/BusinessMetadata.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据库信息
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Guid 数据表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 设置数据表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _guid 数据表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGuid(const std::string& _guid);

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                    /**
                     * 获取数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 数据表名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 数据表描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
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
                     * 获取数据库Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 数据库Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据库Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 数据库Schema名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表的技术元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechnicalMetadata 表的技术元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TechnicalMetadata GetTechnicalMetadata() const;

                    /**
                     * 设置表的技术元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _technicalMetadata 表的技术元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechnicalMetadata(const TechnicalMetadata& _technicalMetadata);

                    /**
                     * 判断参数 TechnicalMetadata 是否已赋值
                     * @return TechnicalMetadata 是否已赋值
                     * 
                     */
                    bool TechnicalMetadataHasBeenSet() const;

                    /**
                     * 获取表的业务元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessMetadata 表的业务元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BusinessMetadata GetBusinessMetadata() const;

                    /**
                     * 设置表的业务元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessMetadata 表的业务元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessMetadata(const BusinessMetadata& _businessMetadata);

                    /**
                     * 判断参数 BusinessMetadata 是否已赋值
                     * @return BusinessMetadata 是否已赋值
                     * 
                     */
                    bool BusinessMetadataHasBeenSet() const;

                private:

                    /**
                     * 数据表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                    /**
                     * 数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据表描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

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
                     * 表的技术元数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TechnicalMetadata m_technicalMetadata;
                    bool m_technicalMetadataHasBeenSet;

                    /**
                     * 表的业务元数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BusinessMetadata m_businessMetadata;
                    bool m_businessMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TABLEINFO_H_
