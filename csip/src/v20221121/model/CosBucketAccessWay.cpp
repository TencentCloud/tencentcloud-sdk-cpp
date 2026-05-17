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

#include <tencentcloud/csip/v20221121/model/CosBucketAccessWay.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosBucketAccessWay::CosBucketAccessWay() :
    m_accessTypeHasBeenSet(false),
    m_accessUserCountHasBeenSet(false),
    m_accessAkCountHasBeenSet(false),
    m_accessRoleCountHasBeenSet(false)
{
}

CoreInternalOutcome CosBucketAccessWay::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketAccessWay.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessUserCount") && !value["AccessUserCount"].IsNull())
    {
        if (!value["AccessUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketAccessWay.AccessUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessUserCount = value["AccessUserCount"].GetInt64();
        m_accessUserCountHasBeenSet = true;
    }

    if (value.HasMember("AccessAkCount") && !value["AccessAkCount"].IsNull())
    {
        if (!value["AccessAkCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketAccessWay.AccessAkCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessAkCount = value["AccessAkCount"].GetInt64();
        m_accessAkCountHasBeenSet = true;
    }

    if (value.HasMember("AccessRoleCount") && !value["AccessRoleCount"].IsNull())
    {
        if (!value["AccessRoleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketAccessWay.AccessRoleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessRoleCount = value["AccessRoleCount"].GetInt64();
        m_accessRoleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBucketAccessWay::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessUserCount, allocator);
    }

    if (m_accessAkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessAkCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessAkCount, allocator);
    }

    if (m_accessRoleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRoleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessRoleCount, allocator);
    }

}


string CosBucketAccessWay::GetAccessType() const
{
    return m_accessType;
}

void CosBucketAccessWay::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CosBucketAccessWay::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t CosBucketAccessWay::GetAccessUserCount() const
{
    return m_accessUserCount;
}

void CosBucketAccessWay::SetAccessUserCount(const int64_t& _accessUserCount)
{
    m_accessUserCount = _accessUserCount;
    m_accessUserCountHasBeenSet = true;
}

bool CosBucketAccessWay::AccessUserCountHasBeenSet() const
{
    return m_accessUserCountHasBeenSet;
}

int64_t CosBucketAccessWay::GetAccessAkCount() const
{
    return m_accessAkCount;
}

void CosBucketAccessWay::SetAccessAkCount(const int64_t& _accessAkCount)
{
    m_accessAkCount = _accessAkCount;
    m_accessAkCountHasBeenSet = true;
}

bool CosBucketAccessWay::AccessAkCountHasBeenSet() const
{
    return m_accessAkCountHasBeenSet;
}

int64_t CosBucketAccessWay::GetAccessRoleCount() const
{
    return m_accessRoleCount;
}

void CosBucketAccessWay::SetAccessRoleCount(const int64_t& _accessRoleCount)
{
    m_accessRoleCount = _accessRoleCount;
    m_accessRoleCountHasBeenSet = true;
}

bool CosBucketAccessWay::AccessRoleCountHasBeenSet() const
{
    return m_accessRoleCountHasBeenSet;
}

