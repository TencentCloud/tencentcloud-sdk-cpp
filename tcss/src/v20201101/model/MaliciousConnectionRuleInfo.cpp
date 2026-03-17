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

#include <tencentcloud/tcss/v20201101/model/MaliciousConnectionRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

MaliciousConnectionRuleInfo::MaliciousConnectionRuleInfo() :
    m_ruleTypeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

CoreInternalOutcome MaliciousConnectionRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousConnectionRuleInfo.RuleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetUint64();
        m_ruleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaliciousConnectionRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

}


string MaliciousConnectionRuleInfo::GetRuleType() const
{
    return m_ruleType;
}

void MaliciousConnectionRuleInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string MaliciousConnectionRuleInfo::GetAddress() const
{
    return m_address;
}

void MaliciousConnectionRuleInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string MaliciousConnectionRuleInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void MaliciousConnectionRuleInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string MaliciousConnectionRuleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MaliciousConnectionRuleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string MaliciousConnectionRuleInfo::GetRemark() const
{
    return m_remark;
}

void MaliciousConnectionRuleInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t MaliciousConnectionRuleInfo::GetRuleID() const
{
    return m_ruleID;
}

void MaliciousConnectionRuleInfo::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool MaliciousConnectionRuleInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

