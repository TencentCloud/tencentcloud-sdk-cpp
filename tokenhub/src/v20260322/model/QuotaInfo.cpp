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

#include <tencentcloud/tokenhub/v20260322/model/QuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

QuotaInfo::QuotaInfo() :
    m_pkgIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_cycleCreditsHasBeenSet(false),
    m_cycleUsedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome QuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("CycleCredits") && !value["CycleCredits"].IsNull())
    {
        if (!value["CycleCredits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.CycleCredits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleCredits = string(value["CycleCredits"].GetString());
        m_cycleCreditsHasBeenSet = true;
    }

    if (value.HasMember("CycleUsed") && !value["CycleUsed"].IsNull())
    {
        if (!value["CycleUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.CycleUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUsed = string(value["CycleUsed"].GetString());
        m_cycleUsedHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleCredits.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string QuotaInfo::GetPkgId() const
{
    return m_pkgId;
}

void QuotaInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool QuotaInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t QuotaInfo::GetStatus() const
{
    return m_status;
}

void QuotaInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QuotaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QuotaInfo::GetCycleUnit() const
{
    return m_cycleUnit;
}

void QuotaInfo::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool QuotaInfo::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string QuotaInfo::GetCycleCredits() const
{
    return m_cycleCredits;
}

void QuotaInfo::SetCycleCredits(const string& _cycleCredits)
{
    m_cycleCredits = _cycleCredits;
    m_cycleCreditsHasBeenSet = true;
}

bool QuotaInfo::CycleCreditsHasBeenSet() const
{
    return m_cycleCreditsHasBeenSet;
}

string QuotaInfo::GetCycleUsed() const
{
    return m_cycleUsed;
}

void QuotaInfo::SetCycleUsed(const string& _cycleUsed)
{
    m_cycleUsed = _cycleUsed;
    m_cycleUsedHasBeenSet = true;
}

bool QuotaInfo::CycleUsedHasBeenSet() const
{
    return m_cycleUsedHasBeenSet;
}

string QuotaInfo::GetStartTime() const
{
    return m_startTime;
}

void QuotaInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QuotaInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string QuotaInfo::GetExpireTime() const
{
    return m_expireTime;
}

void QuotaInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool QuotaInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

