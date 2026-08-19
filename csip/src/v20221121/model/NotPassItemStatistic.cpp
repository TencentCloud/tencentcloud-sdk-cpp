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

#include <tencentcloud/csip/v20221121/model/NotPassItemStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NotPassItemStatistic::NotPassItemStatistic() :
    m_policyTypeHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_notPassCountHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome NotPassItemStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassItemStatistic.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyID") && !value["PolicyID"].IsNull())
    {
        if (!value["PolicyID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassItemStatistic.PolicyID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyID = value["PolicyID"].GetUint64();
        m_policyIDHasBeenSet = true;
    }

    if (value.HasMember("ParentCategoryID") && !value["ParentCategoryID"].IsNull())
    {
        if (!value["ParentCategoryID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassItemStatistic.ParentCategoryID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentCategoryID = value["ParentCategoryID"].GetUint64();
        m_parentCategoryIDHasBeenSet = true;
    }

    if (value.HasMember("NotPassCount") && !value["NotPassCount"].IsNull())
    {
        if (!value["NotPassCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassItemStatistic.NotPassCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassCount = value["NotPassCount"].GetUint64();
        m_notPassCountHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotPassItemStatistic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotPassItemStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyID, allocator);
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_notPassCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassCount, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string NotPassItemStatistic::GetPolicyType() const
{
    return m_policyType;
}

void NotPassItemStatistic::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool NotPassItemStatistic::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t NotPassItemStatistic::GetPolicyID() const
{
    return m_policyID;
}

void NotPassItemStatistic::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool NotPassItemStatistic::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t NotPassItemStatistic::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void NotPassItemStatistic::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool NotPassItemStatistic::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

uint64_t NotPassItemStatistic::GetNotPassCount() const
{
    return m_notPassCount;
}

void NotPassItemStatistic::SetNotPassCount(const uint64_t& _notPassCount)
{
    m_notPassCount = _notPassCount;
    m_notPassCountHasBeenSet = true;
}

bool NotPassItemStatistic::NotPassCountHasBeenSet() const
{
    return m_notPassCountHasBeenSet;
}

string NotPassItemStatistic::GetName() const
{
    return m_name;
}

void NotPassItemStatistic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotPassItemStatistic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

