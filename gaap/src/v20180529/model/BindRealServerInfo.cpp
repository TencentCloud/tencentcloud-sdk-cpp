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

#include <tencentcloud/gaap/v20180529/model/BindRealServerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

BindRealServerInfo::BindRealServerInfo() :
    m_realServerIPHasBeenSet(false),
    m_realServerIdHasBeenSet(false),
    m_realServerNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome BindRealServerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerIP") && !value["RealServerIP"].IsNull())
    {
        if (!value["RealServerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindRealServerInfo.RealServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerIP = string(value["RealServerIP"].GetString());
        m_realServerIPHasBeenSet = true;
    }

    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindRealServerInfo.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerName") && !value["RealServerName"].IsNull())
    {
        if (!value["RealServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindRealServerInfo.RealServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerName = string(value["RealServerName"].GetString());
        m_realServerNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindRealServerInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindRealServerInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindRealServerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BindRealServerInfo::GetRealServerIP() const
{
    return m_realServerIP;
}

void BindRealServerInfo::SetRealServerIP(const string& _realServerIP)
{
    m_realServerIP = _realServerIP;
    m_realServerIPHasBeenSet = true;
}

bool BindRealServerInfo::RealServerIPHasBeenSet() const
{
    return m_realServerIPHasBeenSet;
}

string BindRealServerInfo::GetRealServerId() const
{
    return m_realServerId;
}

void BindRealServerInfo::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool BindRealServerInfo::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

string BindRealServerInfo::GetRealServerName() const
{
    return m_realServerName;
}

void BindRealServerInfo::SetRealServerName(const string& _realServerName)
{
    m_realServerName = _realServerName;
    m_realServerNameHasBeenSet = true;
}

bool BindRealServerInfo::RealServerNameHasBeenSet() const
{
    return m_realServerNameHasBeenSet;
}

int64_t BindRealServerInfo::GetProjectId() const
{
    return m_projectId;
}

void BindRealServerInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BindRealServerInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagPair> BindRealServerInfo::GetTagSet() const
{
    return m_tagSet;
}

void BindRealServerInfo::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool BindRealServerInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

