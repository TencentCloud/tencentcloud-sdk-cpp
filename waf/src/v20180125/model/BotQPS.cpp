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

#include <tencentcloud/waf/v20180125/model/BotQPS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotQPS::BotQPS() :
    m_resourceIdsHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_maxBotQPSHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome BotQPS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("MaxBotQPS") && !value["MaxBotQPS"].IsNull())
    {
        if (!value["MaxBotQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.MaxBotQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBotQPS = value["MaxBotQPS"].GetUint64();
        m_maxBotQPSHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotQPS.RenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetUint64();
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotQPS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBotQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBotQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBotQPS, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

}


string BotQPS::GetResourceIds() const
{
    return m_resourceIds;
}

void BotQPS::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool BotQPS::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string BotQPS::GetValidTime() const
{
    return m_validTime;
}

void BotQPS::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool BotQPS::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

uint64_t BotQPS::GetCount() const
{
    return m_count;
}

void BotQPS::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BotQPS::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string BotQPS::GetRegion() const
{
    return m_region;
}

void BotQPS::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BotQPS::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t BotQPS::GetMaxBotQPS() const
{
    return m_maxBotQPS;
}

void BotQPS::SetMaxBotQPS(const uint64_t& _maxBotQPS)
{
    m_maxBotQPS = _maxBotQPS;
    m_maxBotQPSHasBeenSet = true;
}

bool BotQPS::MaxBotQPSHasBeenSet() const
{
    return m_maxBotQPSHasBeenSet;
}

uint64_t BotQPS::GetRenewFlag() const
{
    return m_renewFlag;
}

void BotQPS::SetRenewFlag(const uint64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool BotQPS::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

