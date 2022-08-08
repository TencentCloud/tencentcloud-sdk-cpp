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

#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IntegrationNodeMapping::IntegrationNodeMapping() :
    m_sourceIdHasBeenSet(false),
    m_sinkIdHasBeenSet(false),
    m_sourceSchemaHasBeenSet(false),
    m_schemaMappingsHasBeenSet(false),
    m_extConfigHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationNodeMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeMapping.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SinkId") && !value["SinkId"].IsNull())
    {
        if (!value["SinkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeMapping.SinkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sinkId = string(value["SinkId"].GetString());
        m_sinkIdHasBeenSet = true;
    }

    if (value.HasMember("SourceSchema") && !value["SourceSchema"].IsNull())
    {
        if (!value["SourceSchema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeMapping.SourceSchema` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceSchema"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntegrationNodeSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceSchema.push_back(item);
        }
        m_sourceSchemaHasBeenSet = true;
    }

    if (value.HasMember("SchemaMappings") && !value["SchemaMappings"].IsNull())
    {
        if (!value["SchemaMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeMapping.SchemaMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["SchemaMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntegrationNodeSchemaMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schemaMappings.push_back(item);
        }
        m_schemaMappingsHasBeenSet = true;
    }

    if (value.HasMember("ExtConfig") && !value["ExtConfig"].IsNull())
    {
        if (!value["ExtConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrationNodeMapping.ExtConfig` is not array type"));

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


    return CoreInternalOutcome(true);
}

void IntegrationNodeMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sinkId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceSchema.begin(); itr != m_sourceSchema.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schemaMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schemaMappings.begin(); itr != m_schemaMappings.end(); ++itr, ++i)
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

}


string IntegrationNodeMapping::GetSourceId() const
{
    return m_sourceId;
}

void IntegrationNodeMapping::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool IntegrationNodeMapping::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string IntegrationNodeMapping::GetSinkId() const
{
    return m_sinkId;
}

void IntegrationNodeMapping::SetSinkId(const string& _sinkId)
{
    m_sinkId = _sinkId;
    m_sinkIdHasBeenSet = true;
}

bool IntegrationNodeMapping::SinkIdHasBeenSet() const
{
    return m_sinkIdHasBeenSet;
}

vector<IntegrationNodeSchema> IntegrationNodeMapping::GetSourceSchema() const
{
    return m_sourceSchema;
}

void IntegrationNodeMapping::SetSourceSchema(const vector<IntegrationNodeSchema>& _sourceSchema)
{
    m_sourceSchema = _sourceSchema;
    m_sourceSchemaHasBeenSet = true;
}

bool IntegrationNodeMapping::SourceSchemaHasBeenSet() const
{
    return m_sourceSchemaHasBeenSet;
}

vector<IntegrationNodeSchemaMapping> IntegrationNodeMapping::GetSchemaMappings() const
{
    return m_schemaMappings;
}

void IntegrationNodeMapping::SetSchemaMappings(const vector<IntegrationNodeSchemaMapping>& _schemaMappings)
{
    m_schemaMappings = _schemaMappings;
    m_schemaMappingsHasBeenSet = true;
}

bool IntegrationNodeMapping::SchemaMappingsHasBeenSet() const
{
    return m_schemaMappingsHasBeenSet;
}

vector<RecordField> IntegrationNodeMapping::GetExtConfig() const
{
    return m_extConfig;
}

void IntegrationNodeMapping::SetExtConfig(const vector<RecordField>& _extConfig)
{
    m_extConfig = _extConfig;
    m_extConfigHasBeenSet = true;
}

bool IntegrationNodeMapping::ExtConfigHasBeenSet() const
{
    return m_extConfigHasBeenSet;
}

