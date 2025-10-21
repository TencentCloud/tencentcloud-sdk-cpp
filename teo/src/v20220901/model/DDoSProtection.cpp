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

#include <tencentcloud/teo/v20220901/model/DDoSProtection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSProtection::DDoSProtection() :
    m_protectionOptionHasBeenSet(false),
    m_domainDDoSProtectionsHasBeenSet(false),
    m_sharedCNAMEDDoSProtectionsHasBeenSet(false)
{
}

CoreInternalOutcome DDoSProtection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectionOption") && !value["ProtectionOption"].IsNull())
    {
        if (!value["ProtectionOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSProtection.ProtectionOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionOption = string(value["ProtectionOption"].GetString());
        m_protectionOptionHasBeenSet = true;
    }

    if (value.HasMember("DomainDDoSProtections") && !value["DomainDDoSProtections"].IsNull())
    {
        if (!value["DomainDDoSProtections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSProtection.DomainDDoSProtections` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainDDoSProtections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainDDoSProtection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domainDDoSProtections.push_back(item);
        }
        m_domainDDoSProtectionsHasBeenSet = true;
    }

    if (value.HasMember("SharedCNAMEDDoSProtections") && !value["SharedCNAMEDDoSProtections"].IsNull())
    {
        if (!value["SharedCNAMEDDoSProtections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSProtection.SharedCNAMEDDoSProtections` is not array type"));

        const rapidjson::Value &tmpValue = value["SharedCNAMEDDoSProtections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainDDoSProtection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sharedCNAMEDDoSProtections.push_back(item);
        }
        m_sharedCNAMEDDoSProtectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSProtection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectionOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionOption.c_str(), allocator).Move(), allocator);
    }

    if (m_domainDDoSProtectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainDDoSProtections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainDDoSProtections.begin(); itr != m_domainDDoSProtections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sharedCNAMEDDoSProtectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedCNAMEDDoSProtections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sharedCNAMEDDoSProtections.begin(); itr != m_sharedCNAMEDDoSProtections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DDoSProtection::GetProtectionOption() const
{
    return m_protectionOption;
}

void DDoSProtection::SetProtectionOption(const string& _protectionOption)
{
    m_protectionOption = _protectionOption;
    m_protectionOptionHasBeenSet = true;
}

bool DDoSProtection::ProtectionOptionHasBeenSet() const
{
    return m_protectionOptionHasBeenSet;
}

vector<DomainDDoSProtection> DDoSProtection::GetDomainDDoSProtections() const
{
    return m_domainDDoSProtections;
}

void DDoSProtection::SetDomainDDoSProtections(const vector<DomainDDoSProtection>& _domainDDoSProtections)
{
    m_domainDDoSProtections = _domainDDoSProtections;
    m_domainDDoSProtectionsHasBeenSet = true;
}

bool DDoSProtection::DomainDDoSProtectionsHasBeenSet() const
{
    return m_domainDDoSProtectionsHasBeenSet;
}

vector<DomainDDoSProtection> DDoSProtection::GetSharedCNAMEDDoSProtections() const
{
    return m_sharedCNAMEDDoSProtections;
}

void DDoSProtection::SetSharedCNAMEDDoSProtections(const vector<DomainDDoSProtection>& _sharedCNAMEDDoSProtections)
{
    m_sharedCNAMEDDoSProtections = _sharedCNAMEDDoSProtections;
    m_sharedCNAMEDDoSProtectionsHasBeenSet = true;
}

bool DDoSProtection::SharedCNAMEDDoSProtectionsHasBeenSet() const
{
    return m_sharedCNAMEDDoSProtectionsHasBeenSet;
}

