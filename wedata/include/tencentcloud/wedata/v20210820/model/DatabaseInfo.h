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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_

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
                * 数据质量数据来源数据库
                */
                class DatabaseInfo : public AbstractModel
                {
                public:
                    DatabaseInfo();
                    ~DatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名称
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
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源Id
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
                     * 获取数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库id
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
                     * 获取实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取数据库原始名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginDatabaseName 数据库原始名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginDatabaseName() const;

                    /**
                     * 设置数据库原始名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originDatabaseName 数据库原始名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginDatabaseName(const std::string& _originDatabaseName);

                    /**
                     * 判断参数 OriginDatabaseName 是否已赋值
                     * @return OriginDatabaseName 是否已赋值
                     * 
                     */
                    bool OriginDatabaseNameHasBeenSet() const;

                    /**
                     * 获取schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginSchemaName schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginSchemaName() const;

                    /**
                     * 设置schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originSchemaName schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginSchemaName(const std::string& _originSchemaName);

                    /**
                     * 判断参数 OriginSchemaName 是否已赋值
                     * @return OriginSchemaName 是否已赋值
                     * 
                     */
                    bool OriginSchemaNameHasBeenSet() const;

                    /**
                     * 获取0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DsEnvType 0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dsEnvType 0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                    /**
                     * 获取EMR引擎部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterDeployType EMR引擎部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterDeployType() const;

                    /**
                     * 设置EMR引擎部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterDeployType EMR引擎部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterDeployType(const std::string& _clusterDeployType);

                    /**
                     * 判断参数 ClusterDeployType 是否已赋值
                     * @return ClusterDeployType 是否已赋值
                     * 
                     */
                    bool ClusterDeployTypeHasBeenSet() const;

                    /**
                     * 获取模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 模式名称
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

                private:

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 数据库原始名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originDatabaseName;
                    bool m_originDatabaseNameHasBeenSet;

                    /**
                     * schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originSchemaName;
                    bool m_originSchemaNameHasBeenSet;

                    /**
                     * 0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                    /**
                     * EMR引擎部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterDeployType;
                    bool m_clusterDeployTypeHasBeenSet;

                    /**
                     * 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEINFO_H_
