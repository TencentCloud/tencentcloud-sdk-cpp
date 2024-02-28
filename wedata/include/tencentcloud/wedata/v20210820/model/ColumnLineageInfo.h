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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 血缘字段信息
                */
                class ColumnLineageInfo : public AbstractModel
                {
                public:
                    ColumnLineageInfo();
                    ~ColumnLineageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源ID
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
                     * 获取字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNameCn 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnNameCn() const;

                    /**
                     * 设置字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnNameCn 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnNameCn(const std::string& _columnNameCn);

                    /**
                     * 判断参数 ColumnNameCn 是否已赋值
                     * @return ColumnNameCn 是否已赋值
                     * 
                     */
                    bool ColumnNameCnHasBeenSet() const;

                    /**
                     * 获取字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 字段类型
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
                     * 获取关系参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelationParams 关系参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelationParams() const;

                    /**
                     * 设置关系参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relationParams 关系参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelationParams(const std::string& _relationParams);

                    /**
                     * 判断参数 RelationParams 是否已赋值
                     * @return RelationParams 是否已赋值
                     * 
                     */
                    bool RelationParamsHasBeenSet() const;

                    /**
                     * 获取参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取父id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

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
                     * 获取字段全名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualifiedName 字段全名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置字段全名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualifiedName 字段全名称
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
                     * 获取下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownStreamCount 下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downStreamCount 下游节点数
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
                     * 获取上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpStreamCount 上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upStreamCount 上游节点数
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
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
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
                     * 获取由中心节点出发的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrefixPath 由中心节点出发的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置由中心节点出发的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prefixPath 由中心节点出发的路径信息
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
                     * 获取任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 任务id列表
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
                     * 获取父节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSet 父节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置父节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSet 父节点列表字符串
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
                     * 获取子节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildSet 子节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置子节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childSet 子节点列表字符串
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
                    std::vector<LineageParamRecord> GetExtParams() const;

                    /**
                     * 设置额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extParams 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtParams(const std::vector<LineageParamRecord>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表ID
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

                private:

                    /**
                     * 血缘id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnNameCn;
                    bool m_columnNameCnHasBeenSet;

                    /**
                     * 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * 关系参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relationParams;
                    bool m_relationParamsHasBeenSet;

                    /**
                     * 参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 父id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

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
                     * 字段全名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * 下游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * 上游节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 由中心节点出发的路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prefixPath;
                    bool m_prefixPathHasBeenSet;

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
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 任务id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 父节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * 子节点列表字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageParamRecord> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * 表ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNLINEAGEINFO_H_
