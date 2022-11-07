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

#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationNodeInfo::IntegrationNodeInfo() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_extConfigHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nodeMappingHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.Config` is not array type"));

        const rapidjson::Value &tmpValue = value["Config"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_config.push_back(item);
        }
        m_configHasBeenSet = true;
    }

    if (value.HasMember("ExtConfig") && !value["ExtConfig"].IsNull())
    {
        if (!value["ExtConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.ExtConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extConfig.push_back(item);
        }
        m_extConfigHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.Schema` is not array type"));

        const rapidjson::Value &tmpValue = value["Schema"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntegrationNodeSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schema.push_back(item);
        }
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("NodeMapping") && !value["NodeMapping"].IsNull())
    {
        if (!value["NodeMapping"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.NodeMapping` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeMapping.Deserialize(value["NodeMapping"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeMappingHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extConfig.begin(); itr != m_extConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schema.begin(); itr != m_schema.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeMapping.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationNodeInfo::GetId() const
{
    return m_id;
}

void IntegrationNodeInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IntegrationNodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IntegrationNodeInfo::GetTaskId() const
{
    return m_taskId;
}

void IntegrationNodeInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool IntegrationNodeInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string IntegrationNodeInfo::GetName() const
{
    return m_name;
}

void IntegrationNodeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IntegrationNodeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IntegrationNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void IntegrationNodeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool IntegrationNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string IntegrationNodeInfo::GetDataSourceType() const
{
    return m_dataSourceType;
}

void IntegrationNodeInfo::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool IntegrationNodeInfo::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string IntegrationNodeInfo::GetDescription() const
{
    return m_description;
}

void IntegrationNodeInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IntegrationNodeInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string IntegrationNodeInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void IntegrationNodeInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool IntegrationNodeInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

vector<RecordField> IntegrationNodeInfo::GetConfig() const
{
    return m_config;
}

void IntegrationNodeInfo::SetConfig(const vector<RecordField>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool IntegrationNodeInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<RecordField> IntegrationNodeInfo::GetExtConfig() const
{
    return m_extConfig;
}

void IntegrationNodeInfo::SetExtConfig(const vector<RecordField>& _extConfig)
{
    m_extConfig = _extConfig;
    m_extConfigHasBeenSet = true;
}

bool IntegrationNodeInfo::ExtConfigHasBeenSet() const
{
    return m_extConfigHasBeenSet;
}

vector<IntegrationNodeSchema> IntegrationNodeInfo::GetSchema() const
{
    return m_schema;
}

void IntegrationNodeInfo::SetSchema(const vector<IntegrationNodeSchema>& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool IntegrationNodeInfo::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

IntegrationNodeMapping IntegrationNodeInfo::GetNodeMapping() const
{
    return m_nodeMapping;
}

void IntegrationNodeInfo::SetNodeMapping(const IntegrationNodeMapping& _nodeMapping)
{
    m_nodeMapping = _nodeMapping;
    m_nodeMappingHasBeenSet = true;
}

bool IntegrationNodeInfo::NodeMappingHasBeenSet() const
{
    return m_nodeMappingHasBeenSet;
}

string IntegrationNodeInfo::GetAppId() const
{
    return m_appId;
}

void IntegrationNodeInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool IntegrationNodeInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string IntegrationNodeInfo::GetProjectId() const
{
    return m_projectId;
}

void IntegrationNodeInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool IntegrationNodeInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string IntegrationNodeInfo::GetCreatorUin() const
{
    return m_creatorUin;
}

void IntegrationNodeInfo::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool IntegrationNodeInfo::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string IntegrationNodeInfo::GetOperatorUin() const
{
    return m_operatorUin;
}

void IntegrationNodeInfo::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool IntegrationNodeInfo::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

string IntegrationNodeInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void IntegrationNodeInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool IntegrationNodeInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string IntegrationNodeInfo::GetCreateTime() const
{
    return m_createTime;
}

void IntegrationNodeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IntegrationNodeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IntegrationNodeInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void IntegrationNodeInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool IntegrationNodeInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

