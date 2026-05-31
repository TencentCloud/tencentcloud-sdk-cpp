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

#include <tencentcloud/tokenhub/v20260322/model/SubPackageBalance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

SubPackageBalance::SubPackageBalance() :
    m_exclusiveQuotaHasBeenSet(false),
    m_exclusiveUsedHasBeenSet(false),
    m_exclusiveRemainHasBeenSet(false),
    m_sharedQuotaHasBeenSet(false),
    m_sharedUsedHasBeenSet(false),
    m_sharedRemainHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SubPackageBalance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExclusiveQuota") && !value["ExclusiveQuota"].IsNull())
    {
        if (!value["ExclusiveQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.ExclusiveQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveQuota = string(value["ExclusiveQuota"].GetString());
        m_exclusiveQuotaHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveUsed") && !value["ExclusiveUsed"].IsNull())
    {
        if (!value["ExclusiveUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.ExclusiveUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveUsed = string(value["ExclusiveUsed"].GetString());
        m_exclusiveUsedHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveRemain") && !value["ExclusiveRemain"].IsNull())
    {
        if (!value["ExclusiveRemain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.ExclusiveRemain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveRemain = string(value["ExclusiveRemain"].GetString());
        m_exclusiveRemainHasBeenSet = true;
    }

    if (value.HasMember("SharedQuota") && !value["SharedQuota"].IsNull())
    {
        if (!value["SharedQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.SharedQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedQuota = string(value["SharedQuota"].GetString());
        m_sharedQuotaHasBeenSet = true;
    }

    if (value.HasMember("SharedUsed") && !value["SharedUsed"].IsNull())
    {
        if (!value["SharedUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.SharedUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedUsed = string(value["SharedUsed"].GetString());
        m_sharedUsedHasBeenSet = true;
    }

    if (value.HasMember("SharedRemain") && !value["SharedRemain"].IsNull())
    {
        if (!value["SharedRemain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.SharedRemain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedRemain = string(value["SharedRemain"].GetString());
        m_sharedRemainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubPackageBalance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubPackageBalance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exclusiveQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveRemain.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedRemain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string SubPackageBalance::GetExclusiveQuota() const
{
    return m_exclusiveQuota;
}

void SubPackageBalance::SetExclusiveQuota(const string& _exclusiveQuota)
{
    m_exclusiveQuota = _exclusiveQuota;
    m_exclusiveQuotaHasBeenSet = true;
}

bool SubPackageBalance::ExclusiveQuotaHasBeenSet() const
{
    return m_exclusiveQuotaHasBeenSet;
}

string SubPackageBalance::GetExclusiveUsed() const
{
    return m_exclusiveUsed;
}

void SubPackageBalance::SetExclusiveUsed(const string& _exclusiveUsed)
{
    m_exclusiveUsed = _exclusiveUsed;
    m_exclusiveUsedHasBeenSet = true;
}

bool SubPackageBalance::ExclusiveUsedHasBeenSet() const
{
    return m_exclusiveUsedHasBeenSet;
}

string SubPackageBalance::GetExclusiveRemain() const
{
    return m_exclusiveRemain;
}

void SubPackageBalance::SetExclusiveRemain(const string& _exclusiveRemain)
{
    m_exclusiveRemain = _exclusiveRemain;
    m_exclusiveRemainHasBeenSet = true;
}

bool SubPackageBalance::ExclusiveRemainHasBeenSet() const
{
    return m_exclusiveRemainHasBeenSet;
}

string SubPackageBalance::GetSharedQuota() const
{
    return m_sharedQuota;
}

void SubPackageBalance::SetSharedQuota(const string& _sharedQuota)
{
    m_sharedQuota = _sharedQuota;
    m_sharedQuotaHasBeenSet = true;
}

bool SubPackageBalance::SharedQuotaHasBeenSet() const
{
    return m_sharedQuotaHasBeenSet;
}

string SubPackageBalance::GetSharedUsed() const
{
    return m_sharedUsed;
}

void SubPackageBalance::SetSharedUsed(const string& _sharedUsed)
{
    m_sharedUsed = _sharedUsed;
    m_sharedUsedHasBeenSet = true;
}

bool SubPackageBalance::SharedUsedHasBeenSet() const
{
    return m_sharedUsedHasBeenSet;
}

string SubPackageBalance::GetSharedRemain() const
{
    return m_sharedRemain;
}

void SubPackageBalance::SetSharedRemain(const string& _sharedRemain)
{
    m_sharedRemain = _sharedRemain;
    m_sharedRemainHasBeenSet = true;
}

bool SubPackageBalance::SharedRemainHasBeenSet() const
{
    return m_sharedRemainHasBeenSet;
}

int64_t SubPackageBalance::GetStatus() const
{
    return m_status;
}

void SubPackageBalance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubPackageBalance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

