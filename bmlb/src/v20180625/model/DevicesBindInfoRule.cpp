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

#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DevicesBindInfoRule::DevicesBindInfoRule() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_locationSetHasBeenSet(false)
{
}

CoreInternalOutcome DevicesBindInfoRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoRule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoRule.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("LocationSet") && !value["LocationSet"].IsNull())
    {
        if (!value["LocationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoRule.LocationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LocationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicesBindInfoLocation item;
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

void DevicesBindInfoRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string DevicesBindInfoRule::GetDomain() const
{
    return m_domain;
}

void DevicesBindInfoRule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DevicesBindInfoRule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DevicesBindInfoRule::GetDomainId() const
{
    return m_domainId;
}

void DevicesBindInfoRule::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DevicesBindInfoRule::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

vector<DevicesBindInfoLocation> DevicesBindInfoRule::GetLocationSet() const
{
    return m_locationSet;
}

void DevicesBindInfoRule::SetLocationSet(const vector<DevicesBindInfoLocation>& _locationSet)
{
    m_locationSet = _locationSet;
    m_locationSetHasBeenSet = true;
}

bool DevicesBindInfoRule::LocationSetHasBeenSet() const
{
    return m_locationSetHasBeenSet;
}

