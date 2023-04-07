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

#include <tencentcloud/cwp/v20180228/model/IncidentVertexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

IncidentVertexInfo::IncidentVertexInfo() :
    m_incidentIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_vertexHasBeenSet(false),
    m_vertexCountHasBeenSet(false)
{
}

CoreInternalOutcome IncidentVertexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IncidentId") && !value["IncidentId"].IsNull())
    {
        if (!value["IncidentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncidentVertexInfo.IncidentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incidentId = string(value["IncidentId"].GetString());
        m_incidentIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncidentVertexInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Vertex") && !value["Vertex"].IsNull())
    {
        if (!value["Vertex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IncidentVertexInfo.Vertex` is not array type"));

        const rapidjson::Value &tmpValue = value["Vertex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VertexInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vertex.push_back(item);
        }
        m_vertexHasBeenSet = true;
    }

    if (value.HasMember("VertexCount") && !value["VertexCount"].IsNull())
    {
        if (!value["VertexCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncidentVertexInfo.VertexCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vertexCount = value["VertexCount"].GetInt64();
        m_vertexCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncidentVertexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_incidentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncidentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incidentId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_vertexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vertex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vertex.begin(); itr != m_vertex.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vertexCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VertexCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vertexCount, allocator);
    }

}


string IncidentVertexInfo::GetIncidentId() const
{
    return m_incidentId;
}

void IncidentVertexInfo::SetIncidentId(const string& _incidentId)
{
    m_incidentId = _incidentId;
    m_incidentIdHasBeenSet = true;
}

bool IncidentVertexInfo::IncidentIdHasBeenSet() const
{
    return m_incidentIdHasBeenSet;
}

string IncidentVertexInfo::GetTableName() const
{
    return m_tableName;
}

void IncidentVertexInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool IncidentVertexInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<VertexInfo> IncidentVertexInfo::GetVertex() const
{
    return m_vertex;
}

void IncidentVertexInfo::SetVertex(const vector<VertexInfo>& _vertex)
{
    m_vertex = _vertex;
    m_vertexHasBeenSet = true;
}

bool IncidentVertexInfo::VertexHasBeenSet() const
{
    return m_vertexHasBeenSet;
}

int64_t IncidentVertexInfo::GetVertexCount() const
{
    return m_vertexCount;
}

void IncidentVertexInfo::SetVertexCount(const int64_t& _vertexCount)
{
    m_vertexCount = _vertexCount;
    m_vertexCountHasBeenSet = true;
}

bool IncidentVertexInfo::VertexCountHasBeenSet() const
{
    return m_vertexCountHasBeenSet;
}

