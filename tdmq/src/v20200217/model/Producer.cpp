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

#include <tencentcloud/tdmq/v20200217/model/Producer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Producer::Producer() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_countConnectHasBeenSet(false),
    m_connectionSetsHasBeenSet(false)
{
}

CoreInternalOutcome Producer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("CountConnect") && !value["CountConnect"].IsNull())
    {
        if (!value["CountConnect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Producer.CountConnect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countConnect = value["CountConnect"].GetInt64();
        m_countConnectHasBeenSet = true;
    }

    if (value.HasMember("ConnectionSets") && !value["ConnectionSets"].IsNull())
    {
        if (!value["ConnectionSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Producer.ConnectionSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ConnectionSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Connection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_connectionSets.push_back(item);
        }
        m_connectionSetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Producer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_countConnectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountConnect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countConnect, allocator);
    }

    if (m_connectionSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connectionSets.begin(); itr != m_connectionSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Producer::GetEnvironmentId() const
{
    return m_environmentId;
}

void Producer::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Producer::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Producer::GetTopicName() const
{
    return m_topicName;
}

void Producer::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Producer::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t Producer::GetCountConnect() const
{
    return m_countConnect;
}

void Producer::SetCountConnect(const int64_t& _countConnect)
{
    m_countConnect = _countConnect;
    m_countConnectHasBeenSet = true;
}

bool Producer::CountConnectHasBeenSet() const
{
    return m_countConnectHasBeenSet;
}

vector<Connection> Producer::GetConnectionSets() const
{
    return m_connectionSets;
}

void Producer::SetConnectionSets(const vector<Connection>& _connectionSets)
{
    m_connectionSets = _connectionSets;
    m_connectionSetsHasBeenSet = true;
}

bool Producer::ConnectionSetsHasBeenSet() const
{
    return m_connectionSetsHasBeenSet;
}

