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

#include <tencentcloud/alb/v20251030/model/QuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

QuotaInfo::QuotaInfo() :
    m_availableHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome QuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


int64_t QuotaInfo::GetAvailable() const
{
    return m_available;
}

void QuotaInfo::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool QuotaInfo::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

uint64_t QuotaInfo::GetLimit() const
{
    return m_limit;
}

void QuotaInfo::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QuotaInfo::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string QuotaInfo::GetQuotaType() const
{
    return m_quotaType;
}

void QuotaInfo::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool QuotaInfo::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string QuotaInfo::GetResourceId() const
{
    return m_resourceId;
}

void QuotaInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool QuotaInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t QuotaInfo::GetUsed() const
{
    return m_used;
}

void QuotaInfo::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool QuotaInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

