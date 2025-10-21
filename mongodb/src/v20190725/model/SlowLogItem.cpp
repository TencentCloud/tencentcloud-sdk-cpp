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

#include <tencentcloud/mongodb/v20190725/model/SlowLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SlowLogItem::SlowLogItem() :
    m_logHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_queryHashHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("QueryHash") && !value["QueryHash"].IsNull())
    {
        if (!value["QueryHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogItem.QueryHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryHash = string(value["QueryHash"].GetString());
        m_queryHashHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryHash.c_str(), allocator).Move(), allocator);
    }

}


string SlowLogItem::GetLog() const
{
    return m_log;
}

void SlowLogItem::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool SlowLogItem::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string SlowLogItem::GetNodeName() const
{
    return m_nodeName;
}

void SlowLogItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool SlowLogItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string SlowLogItem::GetQueryHash() const
{
    return m_queryHash;
}

void SlowLogItem::SetQueryHash(const string& _queryHash)
{
    m_queryHash = _queryHash;
    m_queryHashHasBeenSet = true;
}

bool SlowLogItem::QueryHashHasBeenSet() const
{
    return m_queryHashHasBeenSet;
}

