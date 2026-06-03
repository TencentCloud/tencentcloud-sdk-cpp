/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bi/v20220105/model/JoinRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

JoinRelation::JoinRelation() :
    m_joinIdHasBeenSet(false),
    m_sourceTableNodeIdHasBeenSet(false),
    m_targetTableNodeIdHasBeenSet(false),
    m_joinTypeHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

CoreInternalOutcome JoinRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JoinId") && !value["JoinId"].IsNull())
    {
        if (!value["JoinId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelation.JoinId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinId = string(value["JoinId"].GetString());
        m_joinIdHasBeenSet = true;
    }

    if (value.HasMember("SourceTableNodeId") && !value["SourceTableNodeId"].IsNull())
    {
        if (!value["SourceTableNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelation.SourceTableNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTableNodeId = string(value["SourceTableNodeId"].GetString());
        m_sourceTableNodeIdHasBeenSet = true;
    }

    if (value.HasMember("TargetTableNodeId") && !value["TargetTableNodeId"].IsNull())
    {
        if (!value["TargetTableNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelation.TargetTableNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableNodeId = string(value["TargetTableNodeId"].GetString());
        m_targetTableNodeIdHasBeenSet = true;
    }

    if (value.HasMember("JoinType") && !value["JoinType"].IsNull())
    {
        if (!value["JoinType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelation.JoinType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinType = string(value["JoinType"].GetString());
        m_joinTypeHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JoinRelation.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            JoinRelationField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fields.push_back(item);
        }
        m_fieldsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JoinRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_joinIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTableNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTableNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTableNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string JoinRelation::GetJoinId() const
{
    return m_joinId;
}

void JoinRelation::SetJoinId(const string& _joinId)
{
    m_joinId = _joinId;
    m_joinIdHasBeenSet = true;
}

bool JoinRelation::JoinIdHasBeenSet() const
{
    return m_joinIdHasBeenSet;
}

string JoinRelation::GetSourceTableNodeId() const
{
    return m_sourceTableNodeId;
}

void JoinRelation::SetSourceTableNodeId(const string& _sourceTableNodeId)
{
    m_sourceTableNodeId = _sourceTableNodeId;
    m_sourceTableNodeIdHasBeenSet = true;
}

bool JoinRelation::SourceTableNodeIdHasBeenSet() const
{
    return m_sourceTableNodeIdHasBeenSet;
}

string JoinRelation::GetTargetTableNodeId() const
{
    return m_targetTableNodeId;
}

void JoinRelation::SetTargetTableNodeId(const string& _targetTableNodeId)
{
    m_targetTableNodeId = _targetTableNodeId;
    m_targetTableNodeIdHasBeenSet = true;
}

bool JoinRelation::TargetTableNodeIdHasBeenSet() const
{
    return m_targetTableNodeIdHasBeenSet;
}

string JoinRelation::GetJoinType() const
{
    return m_joinType;
}

void JoinRelation::SetJoinType(const string& _joinType)
{
    m_joinType = _joinType;
    m_joinTypeHasBeenSet = true;
}

bool JoinRelation::JoinTypeHasBeenSet() const
{
    return m_joinTypeHasBeenSet;
}

vector<JoinRelationField> JoinRelation::GetFields() const
{
    return m_fields;
}

void JoinRelation::SetFields(const vector<JoinRelationField>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool JoinRelation::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

