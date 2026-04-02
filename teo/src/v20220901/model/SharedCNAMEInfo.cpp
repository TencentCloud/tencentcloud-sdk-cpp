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

#include <tencentcloud/teo/v20220901/model/SharedCNAMEInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SharedCNAMEInfo::SharedCNAMEInfo() :
    m_typeHasBeenSet(false),
    m_sharedCNAMEHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iPSSLConfigHasBeenSet(false),
    m_bindDomainCountHasBeenSet(false),
    m_accelerationDomainsHasBeenSet(false)
{
}

CoreInternalOutcome SharedCNAMEInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SharedCNAME") && !value["SharedCNAME"].IsNull())
    {
        if (!value["SharedCNAME"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.SharedCNAME` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedCNAME = string(value["SharedCNAME"].GetString());
        m_sharedCNAMEHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IPSSLConfig") && !value["IPSSLConfig"].IsNull())
    {
        if (!value["IPSSLConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.IPSSLConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPSSLConfig.Deserialize(value["IPSSLConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPSSLConfigHasBeenSet = true;
    }

    if (value.HasMember("BindDomainCount") && !value["BindDomainCount"].IsNull())
    {
        if (!value["BindDomainCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.BindDomainCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindDomainCount = value["BindDomainCount"].GetInt64();
        m_bindDomainCountHasBeenSet = true;
    }

    if (value.HasMember("AccelerationDomains") && !value["AccelerationDomains"].IsNull())
    {
        if (!value["AccelerationDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SharedCNAMEInfo.AccelerationDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["AccelerationDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReferenceHolder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accelerationDomains.push_back(item);
        }
        m_accelerationDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SharedCNAMEInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedCNAMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedCNAME";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedCNAME.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iPSSLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSSLConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPSSLConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bindDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindDomainCount, allocator);
    }

    if (m_accelerationDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerationDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accelerationDomains.begin(); itr != m_accelerationDomains.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SharedCNAMEInfo::GetType() const
{
    return m_type;
}

void SharedCNAMEInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SharedCNAMEInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SharedCNAMEInfo::GetSharedCNAME() const
{
    return m_sharedCNAME;
}

void SharedCNAMEInfo::SetSharedCNAME(const string& _sharedCNAME)
{
    m_sharedCNAME = _sharedCNAME;
    m_sharedCNAMEHasBeenSet = true;
}

bool SharedCNAMEInfo::SharedCNAMEHasBeenSet() const
{
    return m_sharedCNAMEHasBeenSet;
}

string SharedCNAMEInfo::GetDescription() const
{
    return m_description;
}

void SharedCNAMEInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SharedCNAMEInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

IPSSLConfig SharedCNAMEInfo::GetIPSSLConfig() const
{
    return m_iPSSLConfig;
}

void SharedCNAMEInfo::SetIPSSLConfig(const IPSSLConfig& _iPSSLConfig)
{
    m_iPSSLConfig = _iPSSLConfig;
    m_iPSSLConfigHasBeenSet = true;
}

bool SharedCNAMEInfo::IPSSLConfigHasBeenSet() const
{
    return m_iPSSLConfigHasBeenSet;
}

int64_t SharedCNAMEInfo::GetBindDomainCount() const
{
    return m_bindDomainCount;
}

void SharedCNAMEInfo::SetBindDomainCount(const int64_t& _bindDomainCount)
{
    m_bindDomainCount = _bindDomainCount;
    m_bindDomainCountHasBeenSet = true;
}

bool SharedCNAMEInfo::BindDomainCountHasBeenSet() const
{
    return m_bindDomainCountHasBeenSet;
}

vector<ReferenceHolder> SharedCNAMEInfo::GetAccelerationDomains() const
{
    return m_accelerationDomains;
}

void SharedCNAMEInfo::SetAccelerationDomains(const vector<ReferenceHolder>& _accelerationDomains)
{
    m_accelerationDomains = _accelerationDomains;
    m_accelerationDomainsHasBeenSet = true;
}

bool SharedCNAMEInfo::AccelerationDomainsHasBeenSet() const
{
    return m_accelerationDomainsHasBeenSet;
}

