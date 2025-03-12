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

#include <tencentcloud/wedata/v20210820/model/TableLineageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableLineageInfo::TableLineageInfo() :
    m_metastoreTypeHasBeenSet(false),
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
    m_prefixPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_channelTypeHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_dataFromTypeHasBeenSet(false),
    m_collectJobIdHasBeenSet(false)
{
}

CoreInternalOutcome TableLineageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.Params` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ParentSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSet = string(value["ParentSet"].GetString());
        m_parentSetHasBeenSet = true;
    }

    if (value.HasMember("ChildSet") && !value["ChildSet"].IsNull())
    {
        if (!value["ChildSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ChildSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childSet = string(value["ChildSet"].GetString());
        m_childSetHasBeenSet = true;
    }

    if (value.HasMember("ExtParams") && !value["ExtParams"].IsNull())
    {
        if (!value["ExtParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ExtParams` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MetastoreTypeName") && !value["MetastoreTypeName"].IsNull())
    {
        if (!value["MetastoreTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.MetastoreTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreTypeName = string(value["MetastoreTypeName"].GetString());
        m_metastoreTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("QualifiedName") && !value["QualifiedName"].IsNull())
    {
        if (!value["QualifiedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.QualifiedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedName = string(value["QualifiedName"].GetString());
        m_qualifiedNameHasBeenSet = true;
    }

    if (value.HasMember("DownStreamCount") && !value["DownStreamCount"].IsNull())
    {
        if (!value["DownStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DownStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downStreamCount = value["DownStreamCount"].GetInt64();
        m_downStreamCountHasBeenSet = true;
    }

    if (value.HasMember("UpStreamCount") && !value["UpStreamCount"].IsNull())
    {
        if (!value["UpStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.UpStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upStreamCount = value["UpStreamCount"].GetInt64();
        m_upStreamCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PrefixPath") && !value["PrefixPath"].IsNull())
    {
        if (!value["PrefixPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.PrefixPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefixPath = string(value["PrefixPath"].GetString());
        m_prefixPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tasks.push_back((*itr).GetString());
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.ChannelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = string(value["ChannelType"].GetString());
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("DisplayType") && !value["DisplayType"].IsNull())
    {
        if (!value["DisplayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DisplayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayType = string(value["DisplayType"].GetString());
        m_displayTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DataFromType") && !value["DataFromType"].IsNull())
    {
        if (!value["DataFromType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.DataFromType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFromType = string(value["DataFromType"].GetString());
        m_dataFromTypeHasBeenSet = true;
    }

    if (value.HasMember("CollectJobId") && !value["CollectJobId"].IsNull())
    {
        if (!value["CollectJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableLineageInfo.CollectJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectJobId = string(value["CollectJobId"].GetString());
        m_collectJobIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableLineageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
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

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelType.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFromTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFromType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFromType.c_str(), allocator).Move(), allocator);
    }

    if (m_collectJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectJobId.c_str(), allocator).Move(), allocator);
    }

}


string TableLineageInfo::GetMetastoreType() const
{
    return m_metastoreType;
}

void TableLineageInfo::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool TableLineageInfo::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string TableLineageInfo::GetProjectId() const
{
    return m_projectId;
}

void TableLineageInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TableLineageInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TableLineageInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void TableLineageInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TableLineageInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TableLineageInfo::GetTableId() const
{
    return m_tableId;
}

void TableLineageInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableLineageInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

vector<LineageParamRecord> TableLineageInfo::GetParams() const
{
    return m_params;
}

void TableLineageInfo::SetParams(const vector<LineageParamRecord>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TableLineageInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string TableLineageInfo::GetParentSet() const
{
    return m_parentSet;
}

void TableLineageInfo::SetParentSet(const string& _parentSet)
{
    m_parentSet = _parentSet;
    m_parentSetHasBeenSet = true;
}

bool TableLineageInfo::ParentSetHasBeenSet() const
{
    return m_parentSetHasBeenSet;
}

string TableLineageInfo::GetChildSet() const
{
    return m_childSet;
}

void TableLineageInfo::SetChildSet(const string& _childSet)
{
    m_childSet = _childSet;
    m_childSetHasBeenSet = true;
}

bool TableLineageInfo::ChildSetHasBeenSet() const
{
    return m_childSetHasBeenSet;
}

vector<RecordField> TableLineageInfo::GetExtParams() const
{
    return m_extParams;
}

void TableLineageInfo::SetExtParams(const vector<RecordField>& _extParams)
{
    m_extParams = _extParams;
    m_extParamsHasBeenSet = true;
}

bool TableLineageInfo::ExtParamsHasBeenSet() const
{
    return m_extParamsHasBeenSet;
}

string TableLineageInfo::GetId() const
{
    return m_id;
}

void TableLineageInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TableLineageInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TableLineageInfo::GetMetastoreTypeName() const
{
    return m_metastoreTypeName;
}

void TableLineageInfo::SetMetastoreTypeName(const string& _metastoreTypeName)
{
    m_metastoreTypeName = _metastoreTypeName;
    m_metastoreTypeNameHasBeenSet = true;
}

bool TableLineageInfo::MetastoreTypeNameHasBeenSet() const
{
    return m_metastoreTypeNameHasBeenSet;
}

string TableLineageInfo::GetTableName() const
{
    return m_tableName;
}

void TableLineageInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableLineageInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableLineageInfo::GetQualifiedName() const
{
    return m_qualifiedName;
}

void TableLineageInfo::SetQualifiedName(const string& _qualifiedName)
{
    m_qualifiedName = _qualifiedName;
    m_qualifiedNameHasBeenSet = true;
}

bool TableLineageInfo::QualifiedNameHasBeenSet() const
{
    return m_qualifiedNameHasBeenSet;
}

int64_t TableLineageInfo::GetDownStreamCount() const
{
    return m_downStreamCount;
}

void TableLineageInfo::SetDownStreamCount(const int64_t& _downStreamCount)
{
    m_downStreamCount = _downStreamCount;
    m_downStreamCountHasBeenSet = true;
}

bool TableLineageInfo::DownStreamCountHasBeenSet() const
{
    return m_downStreamCountHasBeenSet;
}

int64_t TableLineageInfo::GetUpStreamCount() const
{
    return m_upStreamCount;
}

void TableLineageInfo::SetUpStreamCount(const int64_t& _upStreamCount)
{
    m_upStreamCount = _upStreamCount;
    m_upStreamCountHasBeenSet = true;
}

bool TableLineageInfo::UpStreamCountHasBeenSet() const
{
    return m_upStreamCountHasBeenSet;
}

string TableLineageInfo::GetDescription() const
{
    return m_description;
}

void TableLineageInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableLineageInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TableLineageInfo::GetPrefixPath() const
{
    return m_prefixPath;
}

void TableLineageInfo::SetPrefixPath(const string& _prefixPath)
{
    m_prefixPath = _prefixPath;
    m_prefixPathHasBeenSet = true;
}

bool TableLineageInfo::PrefixPathHasBeenSet() const
{
    return m_prefixPathHasBeenSet;
}

string TableLineageInfo::GetCreateTime() const
{
    return m_createTime;
}

void TableLineageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableLineageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableLineageInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void TableLineageInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool TableLineageInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> TableLineageInfo::GetTasks() const
{
    return m_tasks;
}

void TableLineageInfo::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool TableLineageInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string TableLineageInfo::GetChannelType() const
{
    return m_channelType;
}

void TableLineageInfo::SetChannelType(const string& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool TableLineageInfo::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string TableLineageInfo::GetDisplayType() const
{
    return m_displayType;
}

void TableLineageInfo::SetDisplayType(const string& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool TableLineageInfo::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

string TableLineageInfo::GetEngineType() const
{
    return m_engineType;
}

void TableLineageInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool TableLineageInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string TableLineageInfo::GetTableType() const
{
    return m_tableType;
}

void TableLineageInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableLineageInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableLineageInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void TableLineageInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool TableLineageInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string TableLineageInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TableLineageInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableLineageInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableLineageInfo::GetDatabaseId() const
{
    return m_databaseId;
}

void TableLineageInfo::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool TableLineageInfo::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string TableLineageInfo::GetDataFromType() const
{
    return m_dataFromType;
}

void TableLineageInfo::SetDataFromType(const string& _dataFromType)
{
    m_dataFromType = _dataFromType;
    m_dataFromTypeHasBeenSet = true;
}

bool TableLineageInfo::DataFromTypeHasBeenSet() const
{
    return m_dataFromTypeHasBeenSet;
}

string TableLineageInfo::GetCollectJobId() const
{
    return m_collectJobId;
}

void TableLineageInfo::SetCollectJobId(const string& _collectJobId)
{
    m_collectJobId = _collectJobId;
    m_collectJobIdHasBeenSet = true;
}

bool TableLineageInfo::CollectJobIdHasBeenSet() const
{
    return m_collectJobIdHasBeenSet;
}

