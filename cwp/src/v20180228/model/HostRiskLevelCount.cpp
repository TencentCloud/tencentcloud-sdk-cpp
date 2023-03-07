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

#include <tencentcloud/cwp/v20180228/model/HostRiskLevelCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

HostRiskLevelCount::HostRiskLevelCount() :
    m_hostIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_seriousCountHasBeenSet(false),
    m_highCountHasBeenSet(false),
    m_mediumCountHasBeenSet(false),
    m_lowCountHasBeenSet(false)
{
}

CoreInternalOutcome HostRiskLevelCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("SeriousCount") && !value["SeriousCount"].IsNull())
    {
        if (!value["SeriousCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.SeriousCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousCount = value["SeriousCount"].GetInt64();
        m_seriousCountHasBeenSet = true;
    }

    if (value.HasMember("HighCount") && !value["HighCount"].IsNull())
    {
        if (!value["HighCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.HighCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highCount = value["HighCount"].GetInt64();
        m_highCountHasBeenSet = true;
    }

    if (value.HasMember("MediumCount") && !value["MediumCount"].IsNull())
    {
        if (!value["MediumCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.MediumCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumCount = value["MediumCount"].GetInt64();
        m_mediumCountHasBeenSet = true;
    }

    if (value.HasMember("LowCount") && !value["LowCount"].IsNull())
    {
        if (!value["LowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostRiskLevelCount.LowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowCount = value["LowCount"].GetInt64();
        m_lowCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostRiskLevelCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_seriousCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousCount, allocator);
    }

    if (m_highCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highCount, allocator);
    }

    if (m_mediumCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumCount, allocator);
    }

    if (m_lowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowCount, allocator);
    }

}


string HostRiskLevelCount::GetHostId() const
{
    return m_hostId;
}

void HostRiskLevelCount::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool HostRiskLevelCount::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string HostRiskLevelCount::GetHostName() const
{
    return m_hostName;
}

void HostRiskLevelCount::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool HostRiskLevelCount::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

int64_t HostRiskLevelCount::GetSeriousCount() const
{
    return m_seriousCount;
}

void HostRiskLevelCount::SetSeriousCount(const int64_t& _seriousCount)
{
    m_seriousCount = _seriousCount;
    m_seriousCountHasBeenSet = true;
}

bool HostRiskLevelCount::SeriousCountHasBeenSet() const
{
    return m_seriousCountHasBeenSet;
}

int64_t HostRiskLevelCount::GetHighCount() const
{
    return m_highCount;
}

void HostRiskLevelCount::SetHighCount(const int64_t& _highCount)
{
    m_highCount = _highCount;
    m_highCountHasBeenSet = true;
}

bool HostRiskLevelCount::HighCountHasBeenSet() const
{
    return m_highCountHasBeenSet;
}

int64_t HostRiskLevelCount::GetMediumCount() const
{
    return m_mediumCount;
}

void HostRiskLevelCount::SetMediumCount(const int64_t& _mediumCount)
{
    m_mediumCount = _mediumCount;
    m_mediumCountHasBeenSet = true;
}

bool HostRiskLevelCount::MediumCountHasBeenSet() const
{
    return m_mediumCountHasBeenSet;
}

int64_t HostRiskLevelCount::GetLowCount() const
{
    return m_lowCount;
}

void HostRiskLevelCount::SetLowCount(const int64_t& _lowCount)
{
    m_lowCount = _lowCount;
    m_lowCountHasBeenSet = true;
}

bool HostRiskLevelCount::LowCountHasBeenSet() const
{
    return m_lowCountHasBeenSet;
}

