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

#include <tencentcloud/teo/v20220901/model/OriginACLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginACLInfo::OriginACLInfo() :
    m_l7HostsHasBeenSet(false),
    m_l4ProxyIdsHasBeenSet(false),
    m_currentOriginACLHasBeenSet(false),
    m_nextOriginACLHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome OriginACLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L7Hosts") && !value["L7Hosts"].IsNull())
    {
        if (!value["L7Hosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginACLInfo.L7Hosts` is not array type"));

        const rapidjson::Value &tmpValue = value["L7Hosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_l7Hosts.push_back((*itr).GetString());
        }
        m_l7HostsHasBeenSet = true;
    }

    if (value.HasMember("L4ProxyIds") && !value["L4ProxyIds"].IsNull())
    {
        if (!value["L4ProxyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginACLInfo.L4ProxyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["L4ProxyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_l4ProxyIds.push_back((*itr).GetString());
        }
        m_l4ProxyIdsHasBeenSet = true;
    }

    if (value.HasMember("CurrentOriginACL") && !value["CurrentOriginACL"].IsNull())
    {
        if (!value["CurrentOriginACL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginACLInfo.CurrentOriginACL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentOriginACL.Deserialize(value["CurrentOriginACL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentOriginACLHasBeenSet = true;
    }

    if (value.HasMember("NextOriginACL") && !value["NextOriginACL"].IsNull())
    {
        if (!value["NextOriginACL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OriginACLInfo.NextOriginACL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nextOriginACL.Deserialize(value["NextOriginACL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nextOriginACLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginACLInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginACLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_l7HostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l7Hosts.begin(); itr != m_l7Hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_l4ProxyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4ProxyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_l4ProxyIds.begin(); itr != m_l4ProxyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_currentOriginACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentOriginACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentOriginACL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nextOriginACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextOriginACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nextOriginACL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


vector<string> OriginACLInfo::GetL7Hosts() const
{
    return m_l7Hosts;
}

void OriginACLInfo::SetL7Hosts(const vector<string>& _l7Hosts)
{
    m_l7Hosts = _l7Hosts;
    m_l7HostsHasBeenSet = true;
}

bool OriginACLInfo::L7HostsHasBeenSet() const
{
    return m_l7HostsHasBeenSet;
}

vector<string> OriginACLInfo::GetL4ProxyIds() const
{
    return m_l4ProxyIds;
}

void OriginACLInfo::SetL4ProxyIds(const vector<string>& _l4ProxyIds)
{
    m_l4ProxyIds = _l4ProxyIds;
    m_l4ProxyIdsHasBeenSet = true;
}

bool OriginACLInfo::L4ProxyIdsHasBeenSet() const
{
    return m_l4ProxyIdsHasBeenSet;
}

CurrentOriginACL OriginACLInfo::GetCurrentOriginACL() const
{
    return m_currentOriginACL;
}

void OriginACLInfo::SetCurrentOriginACL(const CurrentOriginACL& _currentOriginACL)
{
    m_currentOriginACL = _currentOriginACL;
    m_currentOriginACLHasBeenSet = true;
}

bool OriginACLInfo::CurrentOriginACLHasBeenSet() const
{
    return m_currentOriginACLHasBeenSet;
}

NextOriginACL OriginACLInfo::GetNextOriginACL() const
{
    return m_nextOriginACL;
}

void OriginACLInfo::SetNextOriginACL(const NextOriginACL& _nextOriginACL)
{
    m_nextOriginACL = _nextOriginACL;
    m_nextOriginACLHasBeenSet = true;
}

bool OriginACLInfo::NextOriginACLHasBeenSet() const
{
    return m_nextOriginACLHasBeenSet;
}

string OriginACLInfo::GetStatus() const
{
    return m_status;
}

void OriginACLInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OriginACLInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

