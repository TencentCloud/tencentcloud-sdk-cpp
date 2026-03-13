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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASETRECORD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASETRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SearchColumnDocVO.h>
#include <tencentcloud/wedata/v20210820/model/TablePropertyScore.h>
#include <tencentcloud/wedata/v20210820/model/DataAssetOption.h>
#include <tencentcloud/wedata/v20210820/model/GovDatasourceInfo.h>
#include <tencentcloud/wedata/v20210820/model/LabelTag.h>
#include <tencentcloud/wedata/v20210820/model/RegisteredModelAlias.h>
#include <tencentcloud/wedata/v20210820/model/RegisteredModelTag.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据资产结构
                */
                class DataSetRecord : public AbstractModel
                {
                public:
                    DataSetRecord();
                    ~DataSetRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

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
                     * 获取数据资产名称展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNameCn 数据资产名称展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNameCn() const;

                    /**
                     * 设置数据资产名称展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNameCn 数据资产名称展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNameCn(const std::string& _tableNameCn);

                    /**
                     * 判断参数 TableNameCn 是否已赋值
                     * @return TableNameCn 是否已赋值
                     * 
                     */
                    bool TableNameCnHasBeenSet() const;

                    /**
                     * 获取数据资产名称展示名称EN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNameEn 数据资产名称展示名称EN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNameEn() const;

                    /**
                     * 设置数据资产名称展示名称EN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNameEn 数据资产名称展示名称EN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNameEn(const std::string& _tableNameEn);

                    /**
                     * 判断参数 TableNameEn 是否已赋值
                     * @return TableNameEn 是否已赋值
                     * 
                     */
                    bool TableNameEnHasBeenSet() const;

                    /**
                     * 获取资产描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 资产描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资产描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 资产描述信息
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
                     * 获取资产热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeatValue 资产热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHeatValue() const;

                    /**
                     * 设置资产热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heatValue 资产热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeatValue(const double& _heatValue);

                    /**
                     * 判断参数 HeatValue 是否已赋值
                     * @return HeatValue 是否已赋值
                     * 
                     */
                    bool HeatValueHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelNames 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelNames() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelNames 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelNames(const std::vector<std::string>& _labelNames);

                    /**
                     * 判断参数 LabelNames 是否已赋值
                     * @return LabelNames 是否已赋值
                     * 
                     */
                    bool LabelNamesHasBeenSet() const;

                    /**
                     * 获取负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取元数据采集类型：Table View Index
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaCrawlType 元数据采集类型：Table View Index
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetaCrawlType() const;

                    /**
                     * 设置元数据采集类型：Table View Index
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaCrawlType 元数据采集类型：Table View Index
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaCrawlType(const std::string& _metaCrawlType);

                    /**
                     * 判断参数 MetaCrawlType 是否已赋值
                     * @return MetaCrawlType 是否已赋值
                     * 
                     */
                    bool MetaCrawlTypeHasBeenSet() const;

                    /**
                     * 获取数据资产归属的项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 数据资产归属的项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置数据资产归属的项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 数据资产归属的项目ID
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
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeTime(const int64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                    /**
                     * 获取判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPartitionTable 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPartitionTable() const;

                    /**
                     * 设置判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPartitionTable 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPartitionTable(const int64_t& _isPartitionTable);

                    /**
                     * 判断参数 IsPartitionTable 是否已赋值
                     * @return IsPartitionTable 是否已赋值
                     * 
                     */
                    bool IsPartitionTableHasBeenSet() const;

                    /**
                     * 获取表字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableRecordFieldSet 表字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchColumnDocVO> GetTableRecordFieldSet() const;

                    /**
                     * 设置表字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableRecordFieldSet 表字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableRecordFieldSet(const std::vector<SearchColumnDocVO>& _tableRecordFieldSet);

                    /**
                     * 判断参数 TableRecordFieldSet 是否已赋值
                     * @return TableRecordFieldSet 是否已赋值
                     * 
                     */
                    bool TableRecordFieldSetHasBeenSet() const;

                    /**
                     * 获取表属性评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePropertyScore 表属性评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TablePropertyScore GetTablePropertyScore() const;

                    /**
                     * 设置表属性评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tablePropertyScore 表属性评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTablePropertyScore(const TablePropertyScore& _tablePropertyScore);

                    /**
                     * 判断参数 TablePropertyScore 是否已赋值
                     * @return TablePropertyScore 是否已赋值
                     * 
                     */
                    bool TablePropertyScoreHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取数据存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 数据存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置数据存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 数据存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取数据资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetLevel 数据资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetLevel() const;

                    /**
                     * 设置数据资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetLevel 数据资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetLevel(const int64_t& _assetLevel);

                    /**
                     * 判断参数 AssetLevel 是否已赋值
                     * @return AssetLevel 是否已赋值
                     * 
                     */
                    bool AssetLevelHasBeenSet() const;

                    /**
                     * 获取数据资产状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetStatus 数据资产状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetStatus() const;

                    /**
                     * 设置数据资产状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetStatus 数据资产状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetStatus(const int64_t& _assetStatus);

                    /**
                     * 判断参数 AssetStatus 是否已赋值
                     * @return AssetStatus 是否已赋值
                     * 
                     */
                    bool AssetStatusHasBeenSet() const;

                    /**
                     * 获取数据目录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogIds 数据目录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizCatalogIds() const;

                    /**
                     * 设置数据目录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogIds 数据目录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogIds(const std::vector<std::string>& _bizCatalogIds);

                    /**
                     * 判断参数 BizCatalogIds 是否已赋值
                     * @return BizCatalogIds 是否已赋值
                     * 
                     */
                    bool BizCatalogIdsHasBeenSet() const;

                    /**
                     * 获取数据目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogNames 数据目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizCatalogNames() const;

                    /**
                     * 设置数据目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogNames 数据目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogNames(const std::vector<std::string>& _bizCatalogNames);

                    /**
                     * 判断参数 BizCatalogNames 是否已赋值
                     * @return BizCatalogNames 是否已赋值
                     * 
                     */
                    bool BizCatalogNamesHasBeenSet() const;

                    /**
                     * 获取数据源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库 ID
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
                     * 获取表 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表 ID
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
                     * 获取数据资产操作选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateOption 数据资产操作选项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataAssetOption GetOperateOption() const;

                    /**
                     * 设置数据资产操作选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateOption 数据资产操作选项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateOption(const DataAssetOption& _operateOption);

                    /**
                     * 判断参数 OperateOption 是否已赋值
                     * @return OperateOption 是否已赋值
                     * 
                     */
                    bool OperateOptionHasBeenSet() const;

                    /**
                     * 获取数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Schema 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schema 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取是否为视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsView 是否为视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsView() const;

                    /**
                     * 设置是否为视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isView 是否为视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsView(const bool& _isView);

                    /**
                     * 判断参数 IsView 是否已赋值
                     * @return IsView 是否已赋值
                     * 
                     */
                    bool IsViewHasBeenSet() const;

                    /**
                     * 获取数据来源技术类型
取值： HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechnologyType 数据来源技术类型
取值： HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTechnologyType() const;

                    /**
                     * 设置数据来源技术类型
取值： HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _technologyType 数据来源技术类型
取值： HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechnologyType(const std::string& _technologyType);

                    /**
                     * 判断参数 TechnologyType 是否已赋值
                     * @return TechnologyType 是否已赋值
                     * 
                     */
                    bool TechnologyTypeHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
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
                     * 获取项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 项目展示名称
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
                     * 获取集群 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取存储大小，已转为如9.31TB:
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSizeWithUnit 存储大小，已转为如9.31TB:
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置存储大小，已转为如9.31TB:
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSizeWithUnit 存储大小，已转为如9.31TB:
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSizeWithUnit(const std::string& _storageSizeWithUnit);

                    /**
                     * 判断参数 StorageSizeWithUnit 是否已赋值
                     * @return StorageSizeWithUnit 是否已赋值
                     * 
                     */
                    bool StorageSizeWithUnitHasBeenSet() const;

                    /**
                     * 获取多数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectDatasourceList 多数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GovDatasourceInfo> GetCollectDatasourceList() const;

                    /**
                     * 设置多数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectDatasourceList 多数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectDatasourceList(const std::vector<GovDatasourceInfo>& _collectDatasourceList);

                    /**
                     * 判断参数 CollectDatasourceList 是否已赋值
                     * @return CollectDatasourceList 是否已赋值
                     * 
                     */
                    bool CollectDatasourceListHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取数据源Category: 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceCategory 数据源Category: 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceCategory() const;

                    /**
                     * 设置数据源Category: 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceCategory 数据源Category: 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceCategory(const std::string& _dataSourceCategory);

                    /**
                     * 判断参数 DataSourceCategory 是否已赋值
                     * @return DataSourceCategory 是否已赋值
                     * 
                     */
                    bool DataSourceCategoryHasBeenSet() const;

                    /**
                     * 获取采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectId 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCollectId() const;

                    /**
                     * 设置采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectId 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectId(const int64_t& _collectId);

                    /**
                     * 判断参数 CollectId 是否已赋值
                     * @return CollectId 是否已赋值
                     * 
                     */
                    bool CollectIdHasBeenSet() const;

                    /**
                     * 获取采集唯一性urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Urn 采集唯一性urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrn() const;

                    /**
                     * 设置采集唯一性urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urn 采集唯一性urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrn(const std::string& _urn);

                    /**
                     * 判断参数 Urn 是否已赋值
                     * @return Urn 是否已赋值
                     * 
                     */
                    bool UrnHasBeenSet() const;

                    /**
                     * 获取数据资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 数据资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置数据资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 数据资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产运行状态： 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetRunningStatus 资产运行状态： 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetRunningStatus() const;

                    /**
                     * 设置资产运行状态： 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetRunningStatus 资产运行状态： 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetRunningStatus(const std::string& _assetRunningStatus);

                    /**
                     * 判断参数 AssetRunningStatus 是否已赋值
                     * @return AssetRunningStatus 是否已赋值
                     * 
                     */
                    bool AssetRunningStatusHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取资产运行时间， 任务最近执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteTime 资产运行时间， 任务最近执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置资产运行时间， 任务最近执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeTime 资产运行时间， 任务最近执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteTime(const std::string& _executeTime);

                    /**
                     * 判断参数 ExecuteTime 是否已赋值
                     * @return ExecuteTime 是否已赋值
                     * 
                     */
                    bool ExecuteTimeHasBeenSet() const;

                    /**
                     * 获取资产日志，任务资产取 自动转交日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetLog 资产日志，任务资产取 自动转交日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetLog() const;

                    /**
                     * 设置资产日志，任务资产取 自动转交日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetLog 资产日志，任务资产取 自动转交日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetLog(const std::string& _assetLog);

                    /**
                     * 判断参数 AssetLog 是否已赋值
                     * @return AssetLog 是否已赋值
                     * 
                     */
                    bool AssetLogHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取任务 Job名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 任务 Job名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置任务 Job名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobName 任务 Job名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取资产失效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 资产失效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置资产失效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 资产失效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取安全等级值范围1-10

注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelRank 安全等级值范围1-10

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevelRank() const;

                    /**
                     * 设置安全等级值范围1-10

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levelRank 安全等级值范围1-10

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevelRank(const int64_t& _levelRank);

                    /**
                     * 判断参数 LevelRank 是否已赋值
                     * @return LevelRank 是否已赋值
                     * 
                     */
                    bool LevelRankHasBeenSet() const;

                    /**
                     * 获取安全等级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelName 安全等级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置安全等级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levelName 安全等级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCode 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetCode() const;

                    /**
                     * 设置资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCode 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCode(const std::string& _assetCode);

                    /**
                     * 判断参数 AssetCode 是否已赋值
                     * @return AssetCode 是否已赋值
                     * 
                     */
                    bool AssetCodeHasBeenSet() const;

                    /**
                     * 获取责任人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccount 责任人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOwnerAccount() const;

                    /**
                     * 设置责任人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerAccount 责任人 ID
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAccessTime 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAccessTime 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerByEngine 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerByEngine() const;

                    /**
                     * 设置引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerByEngine 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerByEngine(const std::string& _ownerByEngine);

                    /**
                     * 判断参数 OwnerByEngine 是否已赋值
                     * @return OwnerByEngine 是否已赋值
                     * 
                     */
                    bool OwnerByEngineHasBeenSet() const;

                    /**
                     * 获取数仓分层 UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLayerUuid 数仓分层 UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLayerUuid() const;

                    /**
                     * 设置数仓分层 UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLayerUuid 数仓分层 UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLayerUuid(const std::string& _dataLayerUuid);

                    /**
                     * 判断参数 DataLayerUuid 是否已赋值
                     * @return DataLayerUuid 是否已赋值
                     * 
                     */
                    bool DataLayerUuidHasBeenSet() const;

                    /**
                     * 获取数仓分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLayerName 数仓分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLayerName() const;

                    /**
                     * 设置数仓分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLayerName 数仓分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLayerName(const std::string& _dataLayerName);

                    /**
                     * 判断参数 DataLayerName 是否已赋值
                     * @return DataLayerName 是否已赋值
                     * 
                     */
                    bool DataLayerNameHasBeenSet() const;

                    /**
                     * 获取字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnCount 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetColumnCount() const;

                    /**
                     * 设置字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnCount 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnCount(const int64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取关键字搜索命中的表字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchHitColumns 关键字搜索命中的表字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchColumnDocVO> GetSearchHitColumns() const;

                    /**
                     * 设置关键字搜索命中的表字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchHitColumns 关键字搜索命中的表字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchHitColumns(const std::vector<SearchColumnDocVO>& _searchHitColumns);

                    /**
                     * 判断参数 SearchHitColumns 是否已赋值
                     * @return SearchHitColumns 是否已赋值
                     * 
                     */
                    bool SearchHitColumnsHasBeenSet() const;

                    /**
                     * 获取标签对象集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelTagList 标签对象集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelTag> GetLabelTagList() const;

                    /**
                     * 设置标签对象集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelTagList 标签对象集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelTagList(const std::vector<LabelTag>& _labelTagList);

                    /**
                     * 判断参数 LabelTagList 是否已赋值
                     * @return LabelTagList 是否已赋值
                     * 
                     */
                    bool LabelTagListHasBeenSet() const;

                    /**
                     * 获取模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Aliases 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegisteredModelAlias> GetAliases() const;

                    /**
                     * 设置模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliases 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliases(const std::vector<RegisteredModelAlias>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取是否已经部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeployed 是否已经部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDeployed() const;

                    /**
                     * 设置是否已经部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeployed 是否已经部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDeployed(const bool& _isDeployed);

                    /**
                     * 判断参数 IsDeployed 是否已赋值
                     * @return IsDeployed 是否已赋值
                     * 
                     */
                    bool IsDeployedHasBeenSet() const;

                    /**
                     * 获取模型标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模型标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegisteredModelTag> GetTags() const;

                    /**
                     * 设置模型标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 模型标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<RegisteredModelTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取资产全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullName 资产全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置资产全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullName 资产全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Catalog名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace Catalog名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Catalog名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace Catalog名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Catalog来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaFrom Catalog来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetaFrom() const;

                    /**
                     * 设置Catalog来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaFrom Catalog来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaFrom(const std::string& _metaFrom);

                    /**
                     * 判断参数 MetaFrom 是否已赋值
                     * @return MetaFrom 是否已赋值
                     * 
                     */
                    bool MetaFromHasBeenSet() const;

                private:

                    /**
                     * 资产 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据库名称
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
                     * 数据资产名称展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNameCn;
                    bool m_tableNameCnHasBeenSet;

                    /**
                     * 数据资产名称展示名称EN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNameEn;
                    bool m_tableNameEnHasBeenSet;

                    /**
                     * 资产描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 资产热度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_heatValue;
                    bool m_heatValueHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelNames;
                    bool m_labelNamesHasBeenSet;

                    /**
                     * 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 元数据采集类型：Table View Index
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metaCrawlType;
                    bool m_metaCrawlTypeHasBeenSet;

                    /**
                     * 数据资产归属的项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPartitionTable;
                    bool m_isPartitionTableHasBeenSet;

                    /**
                     * 表字段集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchColumnDocVO> m_tableRecordFieldSet;
                    bool m_tableRecordFieldSetHasBeenSet;

                    /**
                     * 表属性评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TablePropertyScore m_tablePropertyScore;
                    bool m_tablePropertyScoreHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * 数据存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 数据资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetLevel;
                    bool m_assetLevelHasBeenSet;

                    /**
                     * 数据资产状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetStatus;
                    bool m_assetStatusHasBeenSet;

                    /**
                     * 数据目录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizCatalogIds;
                    bool m_bizCatalogIdsHasBeenSet;

                    /**
                     * 数据目录名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizCatalogNames;
                    bool m_bizCatalogNamesHasBeenSet;

                    /**
                     * 数据源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 表 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 数据资产操作选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataAssetOption m_operateOption;
                    bool m_operateOptionHasBeenSet;

                    /**
                     * 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 是否为视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isView;
                    bool m_isViewHasBeenSet;

                    /**
                     * 数据来源技术类型
取值： HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_technologyType;
                    bool m_technologyTypeHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 集群 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 存储大小，已转为如9.31TB:
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * 多数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GovDatasourceInfo> m_collectDatasourceList;
                    bool m_collectDatasourceListHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 数据源Category: 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceCategory;
                    bool m_dataSourceCategoryHasBeenSet;

                    /**
                     * 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_collectId;
                    bool m_collectIdHasBeenSet;

                    /**
                     * 采集唯一性urn
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_urn;
                    bool m_urnHasBeenSet;

                    /**
                     * 数据资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产运行状态： 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetRunningStatus;
                    bool m_assetRunningStatusHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 资产运行时间， 任务最近执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * 资产日志，任务资产取 自动转交日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetLog;
                    bool m_assetLogHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 任务 Job名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 资产失效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 安全等级值范围1-10

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_levelRank;
                    bool m_levelRankHasBeenSet;

                    /**
                     * 安全等级名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetCode;
                    bool m_assetCodeHasBeenSet;

                    /**
                     * 责任人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerByEngine;
                    bool m_ownerByEngineHasBeenSet;

                    /**
                     * 数仓分层 UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLayerUuid;
                    bool m_dataLayerUuidHasBeenSet;

                    /**
                     * 数仓分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLayerName;
                    bool m_dataLayerNameHasBeenSet;

                    /**
                     * 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * 关键字搜索命中的表字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchColumnDocVO> m_searchHitColumns;
                    bool m_searchHitColumnsHasBeenSet;

                    /**
                     * 标签对象集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelTag> m_labelTagList;
                    bool m_labelTagListHasBeenSet;

                    /**
                     * 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegisteredModelAlias> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 是否已经部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDeployed;
                    bool m_isDeployedHasBeenSet;

                    /**
                     * 模型标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegisteredModelTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 模型类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 资产全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Catalog名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Catalog来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metaFrom;
                    bool m_metaFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASETRECORD_H_
