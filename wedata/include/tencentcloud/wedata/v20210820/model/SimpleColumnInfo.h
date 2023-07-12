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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_

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
                * 血缘列描述
                */
                class SimpleColumnInfo : public AbstractModel
                {
                public:
                    SimpleColumnInfo();
                    ~SimpleColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 列ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置列ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 列ID
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
                     * 获取限定名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualifiedName 限定名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQualifiedName() const;

                    /**
                     * 设置限定名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualifiedName 限定名
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
                     * 获取列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName 列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName 列名
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
                     * 获取列中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNameCn 列中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnNameCn() const;

                    /**
                     * 设置列中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnNameCn 列中文名
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
                     * 获取列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 列类型
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
                     * 获取列描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 列描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置列描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 列描述
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
                     * 获取前缀路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrefixPath 前缀路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrefixPath() const;

                    /**
                     * 设置前缀路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prefixPath 前缀路径
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
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
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
                     * 获取下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownStreamCount 下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDownStreamCount() const;

                    /**
                     * 设置下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downStreamCount 下游数量
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
                     * 获取上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpStreamCount 上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpStreamCount() const;

                    /**
                     * 设置上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upStreamCount 上游数量
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
                     * 获取任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 任务集合
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

                private:

                    /**
                     * 列ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 限定名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qualifiedName;
                    bool m_qualifiedNameHasBeenSet;

                    /**
                     * 列名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 列中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnNameCn;
                    bool m_columnNameCnHasBeenSet;

                    /**
                     * 列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * 列描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 前缀路径
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
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 下游数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_downStreamCount;
                    bool m_downStreamCountHasBeenSet;

                    /**
                     * 上游数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_upStreamCount;
                    bool m_upStreamCountHasBeenSet;

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
                     * 任务集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SIMPLECOLUMNINFO_H_
