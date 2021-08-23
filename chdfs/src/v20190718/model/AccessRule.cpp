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

#include <tencentcloud/chdfs/v20190718/model/AccessRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

AccessRule::AccessRule() :
    m_accessRuleIdHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AccessRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessRuleId") && !value["AccessRuleId"].IsNull())
    {
        if (!value["AccessRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.AccessRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessRuleId = value["AccessRuleId"].GetUint64();
        m_accessRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.AccessMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = value["AccessMode"].GetUint64();
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessRuleId, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessMode, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AccessRule::GetAccessRuleId() const
{
    return m_accessRuleId;
}

void AccessRule::SetAccessRuleId(const uint64_t& _accessRuleId)
{
    m_accessRuleId = _accessRuleId;
    m_accessRuleIdHasBeenSet = true;
}

bool AccessRule::AccessRuleIdHasBeenSet() const
{
    return m_accessRuleIdHasBeenSet;
}

string AccessRule::GetAddress() const
{
    return m_address;
}

void AccessRule::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AccessRule::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

uint64_t AccessRule::GetAccessMode() const
{
    return m_accessMode;
}

void AccessRule::SetAccessMode(const uint64_t& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool AccessRule::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

uint64_t AccessRule::GetPriority() const
{
    return m_priority;
}

void AccessRule::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool AccessRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string AccessRule::GetCreateTime() const
{
    return m_createTime;
}

void AccessRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccessRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

