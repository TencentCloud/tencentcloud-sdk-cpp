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

#include <tencentcloud/iotvideo/v20211125/model/PackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

PackageInfo::PackageInfo() :
    m_statusHasBeenSet(false),
    m_cSTypeHasBeenSet(false),
    m_cSShiftDurationHasBeenSet(false),
    m_cSExpiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome PackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CSType") && !value["CSType"].IsNull())
    {
        if (!value["CSType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cSType = value["CSType"].GetUint64();
        m_cSTypeHasBeenSet = true;
    }

    if (value.HasMember("CSShiftDuration") && !value["CSShiftDuration"].IsNull())
    {
        if (!value["CSShiftDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSShiftDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cSShiftDuration = value["CSShiftDuration"].GetUint64();
        m_cSShiftDurationHasBeenSet = true;
    }

    if (value.HasMember("CSExpiredTime") && !value["CSExpiredTime"].IsNull())
    {
        if (!value["CSExpiredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CSExpiredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cSExpiredTime = value["CSExpiredTime"].GetInt64();
        m_cSExpiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSType, allocator);
    }

    if (m_cSShiftDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSShiftDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSShiftDuration, allocator);
    }

    if (m_cSExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSExpiredTime, allocator);
    }

}


uint64_t PackageInfo::GetStatus() const
{
    return m_status;
}

void PackageInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t PackageInfo::GetCSType() const
{
    return m_cSType;
}

void PackageInfo::SetCSType(const uint64_t& _cSType)
{
    m_cSType = _cSType;
    m_cSTypeHasBeenSet = true;
}

bool PackageInfo::CSTypeHasBeenSet() const
{
    return m_cSTypeHasBeenSet;
}

uint64_t PackageInfo::GetCSShiftDuration() const
{
    return m_cSShiftDuration;
}

void PackageInfo::SetCSShiftDuration(const uint64_t& _cSShiftDuration)
{
    m_cSShiftDuration = _cSShiftDuration;
    m_cSShiftDurationHasBeenSet = true;
}

bool PackageInfo::CSShiftDurationHasBeenSet() const
{
    return m_cSShiftDurationHasBeenSet;
}

int64_t PackageInfo::GetCSExpiredTime() const
{
    return m_cSExpiredTime;
}

void PackageInfo::SetCSExpiredTime(const int64_t& _cSExpiredTime)
{
    m_cSExpiredTime = _cSExpiredTime;
    m_cSExpiredTimeHasBeenSet = true;
}

bool PackageInfo::CSExpiredTimeHasBeenSet() const
{
    return m_cSExpiredTimeHasBeenSet;
}

