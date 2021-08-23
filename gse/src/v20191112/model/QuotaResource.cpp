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

#include <tencentcloud/gse/v20191112/model/QuotaResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

QuotaResource::QuotaResource() :
    m_resourceTypeHasBeenSet(false),
    m_hardLimitHasBeenSet(false),
    m_remainingHasBeenSet(false),
    m_extraInfoHasBeenSet(false)
{
}

CoreInternalOutcome QuotaResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResource.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("HardLimit") && !value["HardLimit"].IsNull())
    {
        if (!value["HardLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResource.HardLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hardLimit = value["HardLimit"].GetUint64();
        m_hardLimitHasBeenSet = true;
    }

    if (value.HasMember("Remaining") && !value["Remaining"].IsNull())
    {
        if (!value["Remaining"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResource.Remaining` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remaining = value["Remaining"].GetUint64();
        m_remainingHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResource.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_hardLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hardLimit, allocator);
    }

    if (m_remainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remaining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remaining, allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QuotaResource::GetResourceType() const
{
    return m_resourceType;
}

void QuotaResource::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool QuotaResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t QuotaResource::GetHardLimit() const
{
    return m_hardLimit;
}

void QuotaResource::SetHardLimit(const uint64_t& _hardLimit)
{
    m_hardLimit = _hardLimit;
    m_hardLimitHasBeenSet = true;
}

bool QuotaResource::HardLimitHasBeenSet() const
{
    return m_hardLimitHasBeenSet;
}

uint64_t QuotaResource::GetRemaining() const
{
    return m_remaining;
}

void QuotaResource::SetRemaining(const uint64_t& _remaining)
{
    m_remaining = _remaining;
    m_remainingHasBeenSet = true;
}

bool QuotaResource::RemainingHasBeenSet() const
{
    return m_remainingHasBeenSet;
}

string QuotaResource::GetExtraInfo() const
{
    return m_extraInfo;
}

void QuotaResource::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool QuotaResource::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

