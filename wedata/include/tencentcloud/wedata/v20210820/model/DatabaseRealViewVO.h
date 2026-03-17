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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BizParams.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时获取数据库列表信息
                */
                class DatabaseRealViewVO : public AbstractModel
                {
                public:
                    DatabaseRealViewVO();
                    ~DatabaseRealViewVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CatalogName: 如dlc数据默认为DataLakeCatalog
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName CatalogName: 如dlc数据默认为DataLakeCatalog
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置CatalogName: 如dlc数据默认为DataLakeCatalog
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName CatalogName: 如dlc数据默认为DataLakeCatalog
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataSourceId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceId(const int64_t& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取数据源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceInstance 数据源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceInstance() const;

                    /**
                     * 设置数据源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceInstance 数据源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceInstance(const std::string& _dataSourceInstance);

                    /**
                     * 判断参数 DataSourceInstance 是否已赋值
                     * @return DataSourceInstance 是否已赋值
                     * 
                     */
                    bool DataSourceInstanceHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取责任人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccount 责任人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOwnerAccount() const;

                    /**
                     * 设置责任人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerAccount 责任人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerAccount(const int64_t& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 数据库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置数据库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 数据库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParams 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BizParams GetBizParams() const;

                    /**
                     * 设置业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizParams 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizParams(const BizParams& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取下一级元数据:CATALOG,DATABASE,SCHEMA,TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextLevel 下一级元数据:CATALOG,DATABASE,SCHEMA,TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextLevel() const;

                    /**
                     * 设置下一级元数据:CATALOG,DATABASE,SCHEMA,TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextLevel 下一级元数据:CATALOG,DATABASE,SCHEMA,TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextLevel(const std::string& _nextLevel);

                    /**
                     * 判断参数 NextLevel 是否已赋值
                     * @return NextLevel 是否已赋值
                     * 
                     */
                    bool NextLevelHasBeenSet() const;

                private:

                    /**
                     * CatalogName: 如dlc数据默认为DataLakeCatalog
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 数据源实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceInstance;
                    bool m_dataSourceInstanceHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 责任人账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 数据库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 业务额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BizParams m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 下一级元数据:CATALOG,DATABASE,SCHEMA,TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextLevel;
                    bool m_nextLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEREALVIEWVO_H_
