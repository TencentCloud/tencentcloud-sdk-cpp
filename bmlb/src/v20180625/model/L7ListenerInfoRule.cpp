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

#include <tencentcloud/bmlb/v20180625/model/L7ListenerInfoRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L7ListenerInfoRule::L7ListenerInfoRule() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimestampHasBeenSet(false),
    m_locationSetHasBeenSet(false)
{
}

CoreInternalOutcome L7ListenerInfoRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoRule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoRule.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoRule.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }

    if (value.HasMember("LocationSet") && !value["LocationSet"].IsNull())
    {
        if (!value["LocationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoRule.LocationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LocationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L7ListenerInfoLocation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_locationSet.push_back(item);
        }
        m_locationSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7ListenerInfoRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_locationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_locationSet.begin(); itr != m_locationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string L7ListenerInfoRule::GetDomain() const
{
    return m_domain;
}

void L7ListenerInfoRule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool L7ListenerInfoRule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string L7ListenerInfoRule::GetDomainId() const
{
    return m_domainId;
}

void L7ListenerInfoRule::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool L7ListenerInfoRule::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

int64_t L7ListenerInfoRule::GetStatus() const
{
    return m_status;
}

void L7ListenerInfoRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7ListenerInfoRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L7ListenerInfoRule::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L7ListenerInfoRule::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L7ListenerInfoRule::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}

vector<L7ListenerInfoLocation> L7ListenerInfoRule::GetLocationSet() const
{
    return m_locationSet;
}

void L7ListenerInfoRule::SetLocationSet(const vector<L7ListenerInfoLocation>& _locationSet)
{
    m_locationSet = _locationSet;
    m_locationSetHasBeenSet = true;
}

bool L7ListenerInfoRule::LocationSetHasBeenSet() const
{
    return m_locationSetHasBeenSet;
}

