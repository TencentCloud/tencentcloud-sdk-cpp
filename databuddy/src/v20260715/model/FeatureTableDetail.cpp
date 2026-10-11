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

#include <tencentcloud/databuddy/v20260715/model/FeatureTableDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FeatureTableDetail::FeatureTableDetail() :
    m_primaryKeysHasBeenSet(false),
    m_timestampFieldHasBeenSet(false),
    m_sourceTableNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_onlineTableNameHasBeenSet(false)
{
}

CoreInternalOutcome FeatureTableDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrimaryKeys") && !value["PrimaryKeys"].IsNull())
    {
        if (!value["PrimaryKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeatureTableDetail.PrimaryKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["PrimaryKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_primaryKeys.push_back((*itr).GetString());
        }
        m_primaryKeysHasBeenSet = true;
    }

    if (value.HasMember("TimestampField") && !value["TimestampField"].IsNull())
    {
        if (!value["TimestampField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTableDetail.TimestampField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampField = string(value["TimestampField"].GetString());
        m_timestampFieldHasBeenSet = true;
    }

    if (value.HasMember("SourceTableName") && !value["SourceTableName"].IsNull())
    {
        if (!value["SourceTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTableDetail.SourceTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTableName = string(value["SourceTableName"].GetString());
        m_sourceTableNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTableDetail.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("OnlineTableName") && !value["OnlineTableName"].IsNull())
    {
        if (!value["OnlineTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTableDetail.OnlineTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onlineTableName = string(value["OnlineTableName"].GetString());
        m_onlineTableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeatureTableDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_primaryKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_primaryKeys.begin(); itr != m_primaryKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timestampFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampField.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onlineTableName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> FeatureTableDetail::GetPrimaryKeys() const
{
    return m_primaryKeys;
}

void FeatureTableDetail::SetPrimaryKeys(const vector<string>& _primaryKeys)
{
    m_primaryKeys = _primaryKeys;
    m_primaryKeysHasBeenSet = true;
}

bool FeatureTableDetail::PrimaryKeysHasBeenSet() const
{
    return m_primaryKeysHasBeenSet;
}

string FeatureTableDetail::GetTimestampField() const
{
    return m_timestampField;
}

void FeatureTableDetail::SetTimestampField(const string& _timestampField)
{
    m_timestampField = _timestampField;
    m_timestampFieldHasBeenSet = true;
}

bool FeatureTableDetail::TimestampFieldHasBeenSet() const
{
    return m_timestampFieldHasBeenSet;
}

string FeatureTableDetail::GetSourceTableName() const
{
    return m_sourceTableName;
}

void FeatureTableDetail::SetSourceTableName(const string& _sourceTableName)
{
    m_sourceTableName = _sourceTableName;
    m_sourceTableNameHasBeenSet = true;
}

bool FeatureTableDetail::SourceTableNameHasBeenSet() const
{
    return m_sourceTableNameHasBeenSet;
}

string FeatureTableDetail::GetWorkflowId() const
{
    return m_workflowId;
}

void FeatureTableDetail::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool FeatureTableDetail::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string FeatureTableDetail::GetOnlineTableName() const
{
    return m_onlineTableName;
}

void FeatureTableDetail::SetOnlineTableName(const string& _onlineTableName)
{
    m_onlineTableName = _onlineTableName;
    m_onlineTableNameHasBeenSet = true;
}

bool FeatureTableDetail::OnlineTableNameHasBeenSet() const
{
    return m_onlineTableNameHasBeenSet;
}

