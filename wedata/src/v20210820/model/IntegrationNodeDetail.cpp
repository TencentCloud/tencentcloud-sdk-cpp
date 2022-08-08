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

#include <tencentcloud/wedata/v20210820/model/IntegrationNodeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationNodeDetail::IntegrationNodeDetail() :
    m_nameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_configHasBeenSet(false),
    m_extConfigHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nodeMappingHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationNodeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.Config` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.ExtConfig` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.Schema` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.NodeMapping` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeMapping.Deserialize(value["NodeMapping"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeMappingHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationNodeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationNodeDetail::GetName() const
{
    return m_name;
}

void IntegrationNodeDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IntegrationNodeDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IntegrationNodeDetail::GetNodeType() const
{
    return m_nodeType;
}

void IntegrationNodeDetail::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool IntegrationNodeDetail::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string IntegrationNodeDetail::GetDataSourceType() const
{
    return m_dataSourceType;
}

void IntegrationNodeDetail::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool IntegrationNodeDetail::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

string IntegrationNodeDetail::GetDescription() const
{
    return m_description;
}

void IntegrationNodeDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IntegrationNodeDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string IntegrationNodeDetail::GetDatasourceId() const
{
    return m_datasourceId;
}

void IntegrationNodeDetail::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool IntegrationNodeDetail::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

vector<RecordField> IntegrationNodeDetail::GetConfig() const
{
    return m_config;
}

void IntegrationNodeDetail::SetConfig(const vector<RecordField>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool IntegrationNodeDetail::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<RecordField> IntegrationNodeDetail::GetExtConfig() const
{
    return m_extConfig;
}

void IntegrationNodeDetail::SetExtConfig(const vector<RecordField>& _extConfig)
{
    m_extConfig = _extConfig;
    m_extConfigHasBeenSet = true;
}

bool IntegrationNodeDetail::ExtConfigHasBeenSet() const
{
    return m_extConfigHasBeenSet;
}

vector<IntegrationNodeSchema> IntegrationNodeDetail::GetSchema() const
{
    return m_schema;
}

void IntegrationNodeDetail::SetSchema(const vector<IntegrationNodeSchema>& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool IntegrationNodeDetail::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

IntegrationNodeMapping IntegrationNodeDetail::GetNodeMapping() const
{
    return m_nodeMapping;
}

void IntegrationNodeDetail::SetNodeMapping(const IntegrationNodeMapping& _nodeMapping)
{
    m_nodeMapping = _nodeMapping;
    m_nodeMappingHasBeenSet = true;
}

bool IntegrationNodeDetail::NodeMappingHasBeenSet() const
{
    return m_nodeMappingHasBeenSet;
}

string IntegrationNodeDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void IntegrationNodeDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool IntegrationNodeDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

