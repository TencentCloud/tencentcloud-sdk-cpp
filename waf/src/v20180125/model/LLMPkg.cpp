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

#include <tencentcloud/waf/v20180125/model/LLMPkg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMPkg::LLMPkg() :
    m_resourceIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inquireKeyHasBeenSet(false)
{
}

CoreInternalOutcome LLMPkg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.ResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIds = string(value["ResourceIds"].GetString());
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.Region` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_region = value["Region"].GetInt64();
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InquireKey") && !value["InquireKey"].IsNull())
    {
        if (!value["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMPkg.InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(value["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMPkg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_region, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

}


string LLMPkg::GetResourceIds() const
{
    return m_resourceIds;
}

void LLMPkg::SetResourceIds(const string& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool LLMPkg::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

int64_t LLMPkg::GetStatus() const
{
    return m_status;
}

void LLMPkg::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LLMPkg::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t LLMPkg::GetRegion() const
{
    return m_region;
}

void LLMPkg::SetRegion(const int64_t& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LLMPkg::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LLMPkg::GetBeginTime() const
{
    return m_beginTime;
}

void LLMPkg::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool LLMPkg::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string LLMPkg::GetEndTime() const
{
    return m_endTime;
}

void LLMPkg::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LLMPkg::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string LLMPkg::GetInquireKey() const
{
    return m_inquireKey;
}

void LLMPkg::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool LLMPkg::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

