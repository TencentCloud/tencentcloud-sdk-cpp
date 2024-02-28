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

#include <tencentcloud/wedata/v20210820/model/ColumnLineageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ColumnLineageInfo::ColumnLineageInfo() :
    m_idHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_columnNameCnHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_relationParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_metastoreTypeHasBeenSet(false),
    m_metastoreTypeNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_qualifiedNameHasBeenSet(false),
    m_downStreamCountHasBeenSet(false),
    m_upStreamCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_prefixPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_parentSetHasBeenSet(false),
    m_childSetHasBeenSet(false),
    m_extParamsHasBeenSet(false),
    m_tableIdHasBeenSet(false)
{
}

CoreInternalOutcome ColumnLineageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnNameCn") && !value["ColumnNameCn"].IsNull())
    {
        if (!value["ColumnNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ColumnNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnNameCn = string(value["ColumnNameCn"].GetString());
        m_columnNameCnHasBeenSet = true;
    }

    if (value.HasMember("ColumnType") && !value["ColumnType"].IsNull())
    {
        if (!value["ColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnType = string(value["ColumnType"].GetString());
        m_columnTypeHasBeenSet = true;
    }

    if (value.HasMember("RelationParams") && !value["RelationParams"].IsNull())
    {
        if (!value["RelationParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.RelationParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationParams = string(value["RelationParams"].GetString());
        m_relationParamsHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("MetastoreTypeName") && !value["MetastoreTypeName"].IsNull())
    {
        if (!value["MetastoreTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.MetastoreTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreTypeName = string(value["MetastoreTypeName"].GetString());
        m_metastoreTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("QualifiedName") && !value["QualifiedName"].IsNull())
    {
        if (!value["QualifiedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.QualifiedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedName = string(value["QualifiedName"].GetString());
        m_qualifiedNameHasBeenSet = true;
    }

    if (value.HasMember("DownStreamCount") && !value["DownStreamCount"].IsNull())
    {
        if (!value["DownStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.DownStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downStreamCount = value["DownStreamCount"].GetInt64();
        m_downStreamCountHasBeenSet = true;
    }

    if (value.HasMember("UpStreamCount") && !value["UpStreamCount"].IsNull())
    {
        if (!value["UpStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.UpStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upStreamCount = value["UpStreamCount"].GetInt64();
        m_upStreamCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PrefixPath") && !value["PrefixPath"].IsNull())
    {
        if (!value["PrefixPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.PrefixPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefixPath = string(value["PrefixPath"].GetString());
        m_prefixPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("ParentSet") && !value["ParentSet"].IsNull())
    {
        if (!value["ParentSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ParentSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSet = string(value["ParentSet"].GetString());
        m_parentSetHasBeenSet = true;
    }

    if (value.HasMember("ChildSet") && !value["ChildSet"].IsNull())
    {
        if (!value["ChildSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ChildSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childSet = string(value["ChildSet"].GetString());
        m_childSetHasBeenSet = true;
    }

    if (value.HasMember("ExtParams") && !value["ExtParams"].IsNull())
    {
        if (!value["ExtParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.ExtParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageParamRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extParams.push_back(item);
        }
        m_extParamsHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnLineageInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnLineageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_columnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnType.c_str(), allocator).Move(), allocator);
    }

    if (m_relationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationParams.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
    }

    if (m_metastoreTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualifiedName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifiedName.c_str(), allocator).Move(), allocator);
    }

    if (m_downStreamCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownStreamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downStreamCount, allocator);
    }

    if (m_upStreamCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpStreamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upStreamCount, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrefixPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefixPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_parentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentSet.c_str(), allocator).Move(), allocator);
    }

    if (m_childSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childSet.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extParams.begin(); itr != m_extParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

}


string ColumnLineageInfo::GetId() const
{
    return m_id;
}

void ColumnLineageInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ColumnLineageInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ColumnLineageInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void ColumnLineageInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ColumnLineageInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string ColumnLineageInfo::GetColumnName() const
{
    return m_columnName;
}

void ColumnLineageInfo::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ColumnLineageInfo::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string ColumnLineageInfo::GetColumnNameCn() const
{
    return m_columnNameCn;
}

void ColumnLineageInfo::SetColumnNameCn(const string& _columnNameCn)
{
    m_columnNameCn = _columnNameCn;
    m_columnNameCnHasBeenSet = true;
}

bool ColumnLineageInfo::ColumnNameCnHasBeenSet() const
{
    return m_columnNameCnHasBeenSet;
}

string ColumnLineageInfo::GetColumnType() const
{
    return m_columnType;
}

void ColumnLineageInfo::SetColumnType(const string& _columnType)
{
    m_columnType = _columnType;
    m_columnTypeHasBeenSet = true;
}

bool ColumnLineageInfo::ColumnTypeHasBeenSet() const
{
    return m_columnTypeHasBeenSet;
}

string ColumnLineageInfo::GetRelationParams() const
{
    return m_relationParams;
}

void ColumnLineageInfo::SetRelationParams(const string& _relationParams)
{
    m_relationParams = _relationParams;
    m_relationParamsHasBeenSet = true;
}

bool ColumnLineageInfo::RelationParamsHasBeenSet() const
{
    return m_relationParamsHasBeenSet;
}

string ColumnLineageInfo::GetParams() const
{
    return m_params;
}

void ColumnLineageInfo::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ColumnLineageInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string ColumnLineageInfo::GetParentId() const
{
    return m_parentId;
}

void ColumnLineageInfo::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool ColumnLineageInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string ColumnLineageInfo::GetMetastoreType() const
{
    return m_metastoreType;
}

void ColumnLineageInfo::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool ColumnLineageInfo::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string ColumnLineageInfo::GetMetastoreTypeName() const
{
    return m_metastoreTypeName;
}

void ColumnLineageInfo::SetMetastoreTypeName(const string& _metastoreTypeName)
{
    m_metastoreTypeName = _metastoreTypeName;
    m_metastoreTypeNameHasBeenSet = true;
}

bool ColumnLineageInfo::MetastoreTypeNameHasBeenSet() const
{
    return m_metastoreTypeNameHasBeenSet;
}

string ColumnLineageInfo::GetTableName() const
{
    return m_tableName;
}

void ColumnLineageInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ColumnLineageInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ColumnLineageInfo::GetQualifiedName() const
{
    return m_qualifiedName;
}

void ColumnLineageInfo::SetQualifiedName(const string& _qualifiedName)
{
    m_qualifiedName = _qualifiedName;
    m_qualifiedNameHasBeenSet = true;
}

bool ColumnLineageInfo::QualifiedNameHasBeenSet() const
{
    return m_qualifiedNameHasBeenSet;
}

int64_t ColumnLineageInfo::GetDownStreamCount() const
{
    return m_downStreamCount;
}

void ColumnLineageInfo::SetDownStreamCount(const int64_t& _downStreamCount)
{
    m_downStreamCount = _downStreamCount;
    m_downStreamCountHasBeenSet = true;
}

bool ColumnLineageInfo::DownStreamCountHasBeenSet() const
{
    return m_downStreamCountHasBeenSet;
}

int64_t ColumnLineageInfo::GetUpStreamCount() const
{
    return m_upStreamCount;
}

void ColumnLineageInfo::SetUpStreamCount(const int64_t& _upStreamCount)
{
    m_upStreamCount = _upStreamCount;
    m_upStreamCountHasBeenSet = true;
}

bool ColumnLineageInfo::UpStreamCountHasBeenSet() const
{
    return m_upStreamCountHasBeenSet;
}

string ColumnLineageInfo::GetDescription() const
{
    return m_description;
}

void ColumnLineageInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ColumnLineageInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ColumnLineageInfo::GetPrefixPath() const
{
    return m_prefixPath;
}

void ColumnLineageInfo::SetPrefixPath(const string& _prefixPath)
{
    m_prefixPath = _prefixPath;
    m_prefixPathHasBeenSet = true;
}

bool ColumnLineageInfo::PrefixPathHasBeenSet() const
{
    return m_prefixPathHasBeenSet;
}

string ColumnLineageInfo::GetCreateTime() const
{
    return m_createTime;
}

void ColumnLineageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ColumnLineageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ColumnLineageInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void ColumnLineageInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ColumnLineageInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> ColumnLineageInfo::GetTasks() const
{
    return m_tasks;
}

void ColumnLineageInfo::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ColumnLineageInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string ColumnLineageInfo::GetParentSet() const
{
    return m_parentSet;
}

void ColumnLineageInfo::SetParentSet(const string& _parentSet)
{
    m_parentSet = _parentSet;
    m_parentSetHasBeenSet = true;
}

bool ColumnLineageInfo::ParentSetHasBeenSet() const
{
    return m_parentSetHasBeenSet;
}

string ColumnLineageInfo::GetChildSet() const
{
    return m_childSet;
}

void ColumnLineageInfo::SetChildSet(const string& _childSet)
{
    m_childSet = _childSet;
    m_childSetHasBeenSet = true;
}

bool ColumnLineageInfo::ChildSetHasBeenSet() const
{
    return m_childSetHasBeenSet;
}

vector<LineageParamRecord> ColumnLineageInfo::GetExtParams() const
{
    return m_extParams;
}

void ColumnLineageInfo::SetExtParams(const vector<LineageParamRecord>& _extParams)
{
    m_extParams = _extParams;
    m_extParamsHasBeenSet = true;
}

bool ColumnLineageInfo::ExtParamsHasBeenSet() const
{
    return m_extParamsHasBeenSet;
}

string ColumnLineageInfo::GetTableId() const
{
    return m_tableId;
}

void ColumnLineageInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ColumnLineageInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

