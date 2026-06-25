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

#include <tencentcloud/clb/v20180317/model/ModelRouterQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterQuota::ModelRouterQuota() :
    m_quotaTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterQuota.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterQuota.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterQuota.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterQuota.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterQuota.Available` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetUint64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


string ModelRouterQuota::GetQuotaType() const
{
    return m_quotaType;
}

void ModelRouterQuota::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool ModelRouterQuota::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string ModelRouterQuota::GetResourceId() const
{
    return m_resourceId;
}

void ModelRouterQuota::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModelRouterQuota::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t ModelRouterQuota::GetLimit() const
{
    return m_limit;
}

void ModelRouterQuota::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ModelRouterQuota::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ModelRouterQuota::GetUsed() const
{
    return m_used;
}

void ModelRouterQuota::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool ModelRouterQuota::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

uint64_t ModelRouterQuota::GetAvailable() const
{
    return m_available;
}

void ModelRouterQuota::SetAvailable(const uint64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool ModelRouterQuota::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

