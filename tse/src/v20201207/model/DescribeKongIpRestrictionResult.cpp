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

#include <tencentcloud/tse/v20201207/model/DescribeKongIpRestrictionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeKongIpRestrictionResult::DescribeKongIpRestrictionResult() :
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_restrictionTypeHasBeenSet(false),
    m_addressListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKongIpRestrictionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongIpRestrictionResult.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongIpRestrictionResult.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongIpRestrictionResult.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RestrictionType") && !value["RestrictionType"].IsNull())
    {
        if (!value["RestrictionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongIpRestrictionResult.RestrictionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictionType = string(value["RestrictionType"].GetString());
        m_restrictionTypeHasBeenSet = true;
    }

    if (value.HasMember("AddressList") && !value["AddressList"].IsNull())
    {
        if (!value["AddressList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKongIpRestrictionResult.AddressList` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressList.push_back((*itr).GetString());
        }
        m_addressListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeKongIpRestrictionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addressList.begin(); itr != m_addressList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeKongIpRestrictionResult::GetSourceType() const
{
    return m_sourceType;
}

void DescribeKongIpRestrictionResult::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DescribeKongIpRestrictionResult::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescribeKongIpRestrictionResult::GetSourceId() const
{
    return m_sourceId;
}

void DescribeKongIpRestrictionResult::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DescribeKongIpRestrictionResult::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

bool DescribeKongIpRestrictionResult::GetEnabled() const
{
    return m_enabled;
}

void DescribeKongIpRestrictionResult::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DescribeKongIpRestrictionResult::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string DescribeKongIpRestrictionResult::GetRestrictionType() const
{
    return m_restrictionType;
}

void DescribeKongIpRestrictionResult::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool DescribeKongIpRestrictionResult::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

vector<string> DescribeKongIpRestrictionResult::GetAddressList() const
{
    return m_addressList;
}

void DescribeKongIpRestrictionResult::SetAddressList(const vector<string>& _addressList)
{
    m_addressList = _addressList;
    m_addressListHasBeenSet = true;
}

bool DescribeKongIpRestrictionResult::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}

