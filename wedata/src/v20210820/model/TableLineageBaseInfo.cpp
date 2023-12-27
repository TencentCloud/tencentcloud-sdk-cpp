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

#include <tencentcloud/wedata/v20210820/model/TableLineageBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableLineageBaseInfo::TableLineageBaseInfo() :
    m_metastoreTypeHasBeenSet(false),
    m_prefixPathHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_parentSetHasBeenSet(false),
    m_childSetHasBeenSet(false),
    m_extParamsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metastoreTypeNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_qualifiedNameHasBeenSet(false),
    m_downStreamCountHasBeenSet(false),
    m_upStreamCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

CoreInternalOutcome TableLineageBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("PrefixPath") && !value["PrefixPath"].IsNull())
    {
        if (!value["PrefixPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.PrefixPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefixPath = string(value["PrefixPath"].GetString());
        m_prefixPathHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageParamRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("ParentSet") && !value["ParentSet"].IsNull())
    {
        if (!value["ParentSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.ParentSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSet = string(value["ParentSet"].GetString());
        m_parentSetHasBeenSet = true;
    }

    if (value.HasMember("ChildSet") && !value["ChildSet"].IsNull())
    {
        if (!value["ChildSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.ChildSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childSet = string(value["ChildSet"].GetString());
        m_childSetHasBeenSet = true;
    }

    if (value.HasMember("ExtParams") && !value["ExtParams"].IsNull())
    {
        if (!value["ExtParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.ExtParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
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

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MetastoreTypeName") && !value["MetastoreTypeName"].IsNull())
    {
        if (!value["MetastoreTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.MetastoreTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreTypeName = string(value["MetastoreTypeName"].GetString());
        m_metastoreTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("QualifiedName") && !value["QualifiedName"].IsNull())
    {
        if (!value["QualifiedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.QualifiedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedName = string(value["QualifiedName"].GetString());
        m_qualifiedNameHasBeenSet = true;
    }

    if (value.HasMember("DownStreamCount") && !value["DownStreamCount"].IsNull())
    {
        if (!value["DownStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.DownStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downStreamCount = value["DownStreamCount"].GetInt64();
        m_downStreamCountHasBeenSet = true;
    }

    if (value.HasMember("UpStreamCount") && !value["UpStreamCount"].IsNull())
    {
        if (!value["UpStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.UpStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upStreamCount = value["UpStreamCount"].GetInt64();
        m_upStreamCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageBaseInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableLineageBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrefixPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefixPath.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

}


string TableLineageBaseInfo::GetMetastoreType() const
{
    return m_metastoreType;
}

void TableLineageBaseInfo::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool TableLineageBaseInfo::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string TableLineageBaseInfo::GetPrefixPath() const
{
    return m_prefixPath;
}

void TableLineageBaseInfo::SetPrefixPath(const string& _prefixPath)
{
    m_prefixPath = _prefixPath;
    m_prefixPathHasBeenSet = true;
}

bool TableLineageBaseInfo::PrefixPathHasBeenSet() const
{
    return m_prefixPathHasBeenSet;
}

string TableLineageBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void TableLineageBaseInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TableLineageBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TableLineageBaseInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void TableLineageBaseInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TableLineageBaseInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TableLineageBaseInfo::GetTableId() const
{
    return m_tableId;
}

void TableLineageBaseInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableLineageBaseInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<LineageParamRecord> TableLineageBaseInfo::GetParams() const
{
    return m_params;
}

void TableLineageBaseInfo::SetParams(const vector<LineageParamRecord>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TableLineageBaseInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string TableLineageBaseInfo::GetParentSet() const
{
    return m_parentSet;
}

void TableLineageBaseInfo::SetParentSet(const string& _parentSet)
{
    m_parentSet = _parentSet;
    m_parentSetHasBeenSet = true;
}

bool TableLineageBaseInfo::ParentSetHasBeenSet() const
{
    return m_parentSetHasBeenSet;
}

string TableLineageBaseInfo::GetChildSet() const
{
    return m_childSet;
}

void TableLineageBaseInfo::SetChildSet(const string& _childSet)
{
    m_childSet = _childSet;
    m_childSetHasBeenSet = true;
}

bool TableLineageBaseInfo::ChildSetHasBeenSet() const
{
    return m_childSetHasBeenSet;
}

vector<RecordField> TableLineageBaseInfo::GetExtParams() const
{
    return m_extParams;
}

void TableLineageBaseInfo::SetExtParams(const vector<RecordField>& _extParams)
{
    m_extParams = _extParams;
    m_extParamsHasBeenSet = true;
}

bool TableLineageBaseInfo::ExtParamsHasBeenSet() const
{
    return m_extParamsHasBeenSet;
}

string TableLineageBaseInfo::GetId() const
{
    return m_id;
}

void TableLineageBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TableLineageBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TableLineageBaseInfo::GetMetastoreTypeName() const
{
    return m_metastoreTypeName;
}

void TableLineageBaseInfo::SetMetastoreTypeName(const string& _metastoreTypeName)
{
    m_metastoreTypeName = _metastoreTypeName;
    m_metastoreTypeNameHasBeenSet = true;
}

bool TableLineageBaseInfo::MetastoreTypeNameHasBeenSet() const
{
    return m_metastoreTypeNameHasBeenSet;
}

string TableLineageBaseInfo::GetTableName() const
{
    return m_tableName;
}

void TableLineageBaseInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableLineageBaseInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableLineageBaseInfo::GetQualifiedName() const
{
    return m_qualifiedName;
}

void TableLineageBaseInfo::SetQualifiedName(const string& _qualifiedName)
{
    m_qualifiedName = _qualifiedName;
    m_qualifiedNameHasBeenSet = true;
}

bool TableLineageBaseInfo::QualifiedNameHasBeenSet() const
{
    return m_qualifiedNameHasBeenSet;
}

int64_t TableLineageBaseInfo::GetDownStreamCount() const
{
    return m_downStreamCount;
}

void TableLineageBaseInfo::SetDownStreamCount(const int64_t& _downStreamCount)
{
    m_downStreamCount = _downStreamCount;
    m_downStreamCountHasBeenSet = true;
}

bool TableLineageBaseInfo::DownStreamCountHasBeenSet() const
{
    return m_downStreamCountHasBeenSet;
}

int64_t TableLineageBaseInfo::GetUpStreamCount() const
{
    return m_upStreamCount;
}

void TableLineageBaseInfo::SetUpStreamCount(const int64_t& _upStreamCount)
{
    m_upStreamCount = _upStreamCount;
    m_upStreamCountHasBeenSet = true;
}

bool TableLineageBaseInfo::UpStreamCountHasBeenSet() const
{
    return m_upStreamCountHasBeenSet;
}

string TableLineageBaseInfo::GetDescription() const
{
    return m_description;
}

void TableLineageBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableLineageBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TableLineageBaseInfo::GetCreateTime() const
{
    return m_createTime;
}

void TableLineageBaseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableLineageBaseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableLineageBaseInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void TableLineageBaseInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool TableLineageBaseInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> TableLineageBaseInfo::GetTasks() const
{
    return m_tasks;
}

void TableLineageBaseInfo::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool TableLineageBaseInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

