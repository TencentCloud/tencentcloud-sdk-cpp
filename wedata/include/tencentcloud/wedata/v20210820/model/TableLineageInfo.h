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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表血缘详细信息
                */
                class TableLineageInfo : public AbstractModel
                {
                public:
                    TableLineageInfo();
                    ~TableLineageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreType 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreType 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetastoreType(const std::string& _metastoreType);

                    /**
                     * 判断参数 MetastoreType 是否已赋值
                     * @return MetastoreType 是否已赋值
                     * 
                     */
                    bool MetastoreTypeHasBeenSet() const;

                    /**
                     * 获取空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 空间id
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
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
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
                     * 获取表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表id
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
                     * 获取表血缘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 表血缘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageParamRecord> GetParams() const;

                    /**
                     * 设置表血缘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 表血缘参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<LineageParamRecord>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取父节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSet 父节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置父节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSet 父节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSet(const std::string& _parentSet);

                    /**
                     * 判断参数 ParentSet 是否已赋值
                     * @return ParentSet 是否已赋值
                     * 
                     */
                    bool ParentSetHasBeenSet() const;

                    /**
                     * 获取子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildSet 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childSet 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildSet(const std::string& _childSet);

                    /**
                     * 判断参数 ChildSet 是否已赋值
                     * @return ChildSet 是否已赋值
                     * 
                     */
                    bool ChildSetHasBeenSet() const;

                    /**
                     * 获取额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtParams 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExtParams() const;

                    /**
                     * 设置额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extParams 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtParams(const std::vector<RecordField>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreTypeName 元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreTypeName() const;

                    /**
                     * 设置元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreTypeName 元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetastoreTypeName(const std::string& _metastoreTypeName);

                    /**
                     * 判断参数 MetastoreTypeName 是否已赋值
                     * @return MetastoreTypeName 是否已赋值
                     * 
                     */
                    bool MetastoreTypeNameHasBeenSet() const;

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
                     * 获取表全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualifiedName 表全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置表全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualifiedName 表全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualifiedName(const std::string& _qualifiedName);

                    /**
                     * 判断参数 QualifiedName 是否已赋值
                     * @return QualifiedName 是否已赋值
                     * 
                     */
                    bool QualifiedNameHasBeenSet() const;

                    /**
                     * 获取血缘下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownStreamCount 血缘下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置血缘下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downStreamCount 血缘下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownStreamCount(const int64_t& _downStreamCount);

                    /**
                     * 判断参数 DownStreamCount 是否已赋值
                     * @return DownStreamCount 是否已赋值
                     * 
                     */
                    bool DownStreamCountHasBeenSet() const;

                    /**
                     * 获取血缘上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpStreamCount 血缘上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置血缘上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upStreamCount 血缘上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpStreamCount(const int64_t& _upStreamCount);

                    /**
                     * 判断参数 UpStreamCount 是否已赋值
                     * @return UpStreamCount 是否已赋值
                     * 
                     */
                    bool UpStreamCountHasBeenSet() const;

                    /**
                     * 获取血缘描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 血缘描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置血缘描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 血缘描述
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
                     * 获取由中心节点到该节点的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrefixPath 由中心节点到该节点的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置由中心节点到该节点的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prefixPath 由中心节点到该节点的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrefixPath(const std::string& _prefixPath);

                    /**
                     * 判断参数 PrefixPath 是否已赋值
                     * @return PrefixPath 是否已赋值
                     * 
                     */
                    bool PrefixPathHasBeenSet() const;

                    /**
                     * 获取血缘创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 血缘创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置血缘创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 血缘创建时间
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
                     * 获取血缘更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 血缘更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置血缘更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 血缘更新时间
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
                     * 获取修改血缘的任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 修改血缘的任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置修改血缘的任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 修改血缘的任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<std::string>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取模块/应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelType 模块/应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelType() const;

                    /**
                     * 设置模块/应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelType 模块/应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelType(const std::string& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayType() const;

                    /**
                     * 设置展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayType(const std::string& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

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
                     * 获取datasourceName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName datasourceName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置datasourceName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName datasourceName
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
                     * 获取DatabaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName DatabaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置DatabaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName DatabaseName
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
                     * 获取DatabaseId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId DatabaseId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置DatabaseId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId DatabaseId
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
                     * 获取数据来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFromType 数据来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataFromType() const;

                    /**
                     * 设置数据来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFromType 数据来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFromType(const std::string& _dataFromType);

                    /**
                     * 判断参数 DataFromType 是否已赋值
                     * @return DataFromType 是否已赋值
                     * 
                     */
                    bool DataFromTypeHasBeenSet() const;

                    /**
                     * 获取采集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectJobId 采集id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectJobId() const;

                    /**
                     * 设置采集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectJobId 采集id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectJobId(const std::string& _collectJobId);

                    /**
                     * 判断参数 CollectJobId 是否已赋值
                     * @return CollectJobId 是否已赋值
                     * 
                     */
                    bool CollectJobIdHasBeenSet() const;

                private:

                    /**
                     * 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * 空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表血缘参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageParamRecord> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 父节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * 血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreTypeName;
                    bool m_metastoreTypeNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * 血缘下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * 血缘上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                    /**
                     * 血缘描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 由中心节点到该节点的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prefixPath;
                    bool m_prefixPathHasBeenSet;

                    /**
                     * 血缘创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 血缘更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修改血缘的任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 模块/应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * datasourceName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * DatabaseName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * DatabaseId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataFromType;
                    bool m_dataFromTypeHasBeenSet;

                    /**
                     * 采集id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectJobId;
                    bool m_collectJobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEINFO_H_
