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

#include <tencentcloud/config/v20220802/model/Aggregator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

Aggregator::Aggregator() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_aggregatorStatusHasBeenSet(false),
    m_memberNameHasBeenSet(false)
{
}

CoreInternalOutcome Aggregator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.OwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetUint64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = value["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.AccountGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = string(value["AccountGroupId"].GetString());
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AggregatorStatus") && !value["AggregatorStatus"].IsNull())
    {
        if (!value["AggregatorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.AggregatorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aggregatorStatus = value["AggregatorStatus"].GetUint64();
        m_aggregatorStatusHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Aggregator.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Aggregator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregatorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aggregatorStatus, allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

}


string Aggregator::GetName() const
{
    return m_name;
}

void Aggregator::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Aggregator::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Aggregator::GetDescription() const
{
    return m_description;
}

void Aggregator::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Aggregator::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t Aggregator::GetOwnerUin() const
{
    return m_ownerUin;
}

void Aggregator::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Aggregator::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string Aggregator::GetCreateTime() const
{
    return m_createTime;
}

void Aggregator::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Aggregator::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t Aggregator::GetAccountCount() const
{
    return m_accountCount;
}

void Aggregator::SetAccountCount(const uint64_t& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool Aggregator::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

string Aggregator::GetType() const
{
    return m_type;
}

void Aggregator::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Aggregator::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Aggregator::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void Aggregator::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool Aggregator::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

uint64_t Aggregator::GetAggregatorStatus() const
{
    return m_aggregatorStatus;
}

void Aggregator::SetAggregatorStatus(const uint64_t& _aggregatorStatus)
{
    m_aggregatorStatus = _aggregatorStatus;
    m_aggregatorStatusHasBeenSet = true;
}

bool Aggregator::AggregatorStatusHasBeenSet() const
{
    return m_aggregatorStatusHasBeenSet;
}

string Aggregator::GetMemberName() const
{
    return m_memberName;
}

void Aggregator::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool Aggregator::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

