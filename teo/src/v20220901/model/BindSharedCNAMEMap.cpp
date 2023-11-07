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

#include <tencentcloud/teo/v20220901/model/BindSharedCNAMEMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BindSharedCNAMEMap::BindSharedCNAMEMap() :
    m_sharedCNAMEHasBeenSet(false),
    m_domainNamesHasBeenSet(false)
{
}

CoreInternalOutcome BindSharedCNAMEMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SharedCNAME") && !value["SharedCNAME"].IsNull())
    {
        if (!value["SharedCNAME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindSharedCNAMEMap.SharedCNAME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedCNAME = string(value["SharedCNAME"].GetString());
        m_sharedCNAMEHasBeenSet = true;
    }

    if (value.HasMember("DomainNames") && !value["DomainNames"].IsNull())
    {
        if (!value["DomainNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindSharedCNAMEMap.DomainNames` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainNames.push_back((*itr).GetString());
        }
        m_domainNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindSharedCNAMEMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sharedCNAMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedCNAME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedCNAME.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BindSharedCNAMEMap::GetSharedCNAME() const
{
    return m_sharedCNAME;
}

void BindSharedCNAMEMap::SetSharedCNAME(const string& _sharedCNAME)
{
    m_sharedCNAME = _sharedCNAME;
    m_sharedCNAMEHasBeenSet = true;
}

bool BindSharedCNAMEMap::SharedCNAMEHasBeenSet() const
{
    return m_sharedCNAMEHasBeenSet;
}

vector<string> BindSharedCNAMEMap::GetDomainNames() const
{
    return m_domainNames;
}

void BindSharedCNAMEMap::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool BindSharedCNAMEMap::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

