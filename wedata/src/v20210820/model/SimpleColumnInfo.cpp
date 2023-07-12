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

#include <tencentcloud/wedata/v20210820/model/SimpleColumnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SimpleColumnInfo::SimpleColumnInfo() :
    m_idHasBeenSet(false),
    m_qualifiedNameHasBeenSet(false),
    m_columnNameHasBeenSet(false),
    m_columnNameCnHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_prefixPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_downStreamCountHasBeenSet(false),
    m_upStreamCountHasBeenSet(false),
    m_relationParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

CoreInternalOutcome SimpleColumnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("QualifiedName") && !value["QualifiedName"].IsNull())
    {
        if (!value["QualifiedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.QualifiedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedName = string(value["QualifiedName"].GetString());
        m_qualifiedNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnNameCn") && !value["ColumnNameCn"].IsNull())
    {
        if (!value["ColumnNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.ColumnNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnNameCn = string(value["ColumnNameCn"].GetString());
        m_columnNameCnHasBeenSet = true;
    }

    if (value.HasMember("ColumnType") && !value["ColumnType"].IsNull())
    {
        if (!value["ColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.ColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnType = string(value["ColumnType"].GetString());
        m_columnTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PrefixPath") && !value["PrefixPath"].IsNull())
    {
        if (!value["PrefixPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.PrefixPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefixPath = string(value["PrefixPath"].GetString());
        m_prefixPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DownStreamCount") && !value["DownStreamCount"].IsNull())
    {
        if (!value["DownStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.DownStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downStreamCount = value["DownStreamCount"].GetInt64();
        m_downStreamCountHasBeenSet = true;
    }

    if (value.HasMember("UpStreamCount") && !value["UpStreamCount"].IsNull())
    {
        if (!value["UpStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.UpStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upStreamCount = value["UpStreamCount"].GetInt64();
        m_upStreamCountHasBeenSet = true;
    }

    if (value.HasMember("RelationParams") && !value["RelationParams"].IsNull())
    {
        if (!value["RelationParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.RelationParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationParams = string(value["RelationParams"].GetString());
        m_relationParamsHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimpleColumnInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleColumnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualifiedName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifiedName.c_str(), allocator).Move(), allocator);
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

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
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


string SimpleColumnInfo::GetId() const
{
    return m_id;
}

void SimpleColumnInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SimpleColumnInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SimpleColumnInfo::GetQualifiedName() const
{
    return m_qualifiedName;
}

void SimpleColumnInfo::SetQualifiedName(const string& _qualifiedName)
{
    m_qualifiedName = _qualifiedName;
    m_qualifiedNameHasBeenSet = true;
}

bool SimpleColumnInfo::QualifiedNameHasBeenSet() const
{
    return m_qualifiedNameHasBeenSet;
}

string SimpleColumnInfo::GetColumnName() const
{
    return m_columnName;
}

void SimpleColumnInfo::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool SimpleColumnInfo::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string SimpleColumnInfo::GetColumnNameCn() const
{
    return m_columnNameCn;
}

void SimpleColumnInfo::SetColumnNameCn(const string& _columnNameCn)
{
    m_columnNameCn = _columnNameCn;
    m_columnNameCnHasBeenSet = true;
}

bool SimpleColumnInfo::ColumnNameCnHasBeenSet() const
{
    return m_columnNameCnHasBeenSet;
}

string SimpleColumnInfo::GetColumnType() const
{
    return m_columnType;
}

void SimpleColumnInfo::SetColumnType(const string& _columnType)
{
    m_columnType = _columnType;
    m_columnTypeHasBeenSet = true;
}

bool SimpleColumnInfo::ColumnTypeHasBeenSet() const
{
    return m_columnTypeHasBeenSet;
}

string SimpleColumnInfo::GetDescription() const
{
    return m_description;
}

void SimpleColumnInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SimpleColumnInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SimpleColumnInfo::GetPrefixPath() const
{
    return m_prefixPath;
}

void SimpleColumnInfo::SetPrefixPath(const string& _prefixPath)
{
    m_prefixPath = _prefixPath;
    m_prefixPathHasBeenSet = true;
}

bool SimpleColumnInfo::PrefixPathHasBeenSet() const
{
    return m_prefixPathHasBeenSet;
}

string SimpleColumnInfo::GetCreateTime() const
{
    return m_createTime;
}

void SimpleColumnInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SimpleColumnInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SimpleColumnInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void SimpleColumnInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SimpleColumnInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string SimpleColumnInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void SimpleColumnInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool SimpleColumnInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

int64_t SimpleColumnInfo::GetDownStreamCount() const
{
    return m_downStreamCount;
}

void SimpleColumnInfo::SetDownStreamCount(const int64_t& _downStreamCount)
{
    m_downStreamCount = _downStreamCount;
    m_downStreamCountHasBeenSet = true;
}

bool SimpleColumnInfo::DownStreamCountHasBeenSet() const
{
    return m_downStreamCountHasBeenSet;
}

int64_t SimpleColumnInfo::GetUpStreamCount() const
{
    return m_upStreamCount;
}

void SimpleColumnInfo::SetUpStreamCount(const int64_t& _upStreamCount)
{
    m_upStreamCount = _upStreamCount;
    m_upStreamCountHasBeenSet = true;
}

bool SimpleColumnInfo::UpStreamCountHasBeenSet() const
{
    return m_upStreamCountHasBeenSet;
}

string SimpleColumnInfo::GetRelationParams() const
{
    return m_relationParams;
}

void SimpleColumnInfo::SetRelationParams(const string& _relationParams)
{
    m_relationParams = _relationParams;
    m_relationParamsHasBeenSet = true;
}

bool SimpleColumnInfo::RelationParamsHasBeenSet() const
{
    return m_relationParamsHasBeenSet;
}

string SimpleColumnInfo::GetParams() const
{
    return m_params;
}

void SimpleColumnInfo::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool SimpleColumnInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<string> SimpleColumnInfo::GetTasks() const
{
    return m_tasks;
}

void SimpleColumnInfo::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool SimpleColumnInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

