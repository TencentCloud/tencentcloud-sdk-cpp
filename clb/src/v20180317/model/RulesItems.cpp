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

#include <tencentcloud/clb/v20180317/model/RulesItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RulesItems::RulesItems() :
    m_locationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

CoreInternalOutcome RulesItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulesItems.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulesItems.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulesItems.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulesItems.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LbRsTargets item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RulesItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RulesItems::GetLocationId() const
{
    return m_locationId;
}

void RulesItems::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool RulesItems::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string RulesItems::GetDomain() const
{
    return m_domain;
}

void RulesItems::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RulesItems::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RulesItems::GetUrl() const
{
    return m_url;
}

void RulesItems::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RulesItems::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<LbRsTargets> RulesItems::GetTargets() const
{
    return m_targets;
}

void RulesItems::SetTargets(const vector<LbRsTargets>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool RulesItems::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

