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

#include <tencentcloud/cngw/v20230418/model/AIGWLLMIPRestrictionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWLLMIPRestrictionResult::AIGWLLMIPRestrictionResult() :
    m_enableHasBeenSet(false),
    m_restrictionTypeHasBeenSet(false),
    m_addressListHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMIPRestrictionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMIPRestrictionResult.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("RestrictionType") && !value["RestrictionType"].IsNull())
    {
        if (!value["RestrictionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMIPRestrictionResult.RestrictionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictionType = string(value["RestrictionType"].GetString());
        m_restrictionTypeHasBeenSet = true;
    }

    if (value.HasMember("AddressList") && !value["AddressList"].IsNull())
    {
        if (!value["AddressList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLLMIPRestrictionResult.AddressList` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressList.push_back((*itr).GetString());
        }
        m_addressListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMIPRestrictionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
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


bool AIGWLLMIPRestrictionResult::GetEnable() const
{
    return m_enable;
}

void AIGWLLMIPRestrictionResult::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AIGWLLMIPRestrictionResult::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string AIGWLLMIPRestrictionResult::GetRestrictionType() const
{
    return m_restrictionType;
}

void AIGWLLMIPRestrictionResult::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool AIGWLLMIPRestrictionResult::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

vector<string> AIGWLLMIPRestrictionResult::GetAddressList() const
{
    return m_addressList;
}

void AIGWLLMIPRestrictionResult::SetAddressList(const vector<string>& _addressList)
{
    m_addressList = _addressList;
    m_addressListHasBeenSet = true;
}

bool AIGWLLMIPRestrictionResult::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}

