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

#include <tencentcloud/cls/v20201016/model/EsImportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EsImportInfo::EsImportInfo() :
    m_typeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_checkIntervalHasBeenSet(false)
{
}

CoreInternalOutcome EsImportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsImportInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsImportInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsImportInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDelay") && !value["MaxDelay"].IsNull())
    {
        if (!value["MaxDelay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsImportInfo.MaxDelay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelay = value["MaxDelay"].GetUint64();
        m_maxDelayHasBeenSet = true;
    }

    if (value.HasMember("CheckInterval") && !value["CheckInterval"].IsNull())
    {
        if (!value["CheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsImportInfo.CheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkInterval = value["CheckInterval"].GetUint64();
        m_checkIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsImportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_checkIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkInterval, allocator);
    }

}


uint64_t EsImportInfo::GetType() const
{
    return m_type;
}

void EsImportInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EsImportInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t EsImportInfo::GetStartTime() const
{
    return m_startTime;
}

void EsImportInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EsImportInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t EsImportInfo::GetEndTime() const
{
    return m_endTime;
}

void EsImportInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EsImportInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t EsImportInfo::GetMaxDelay() const
{
    return m_maxDelay;
}

void EsImportInfo::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool EsImportInfo::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

uint64_t EsImportInfo::GetCheckInterval() const
{
    return m_checkInterval;
}

void EsImportInfo::SetCheckInterval(const uint64_t& _checkInterval)
{
    m_checkInterval = _checkInterval;
    m_checkIntervalHasBeenSet = true;
}

bool EsImportInfo::CheckIntervalHasBeenSet() const
{
    return m_checkIntervalHasBeenSet;
}

