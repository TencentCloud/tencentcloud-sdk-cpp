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

#include <tencentcloud/trp/v20210515/model/CorpQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CorpQuota::CorpQuota() :
    m_corpIdHasBeenSet(false),
    m_corpNameHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_usageQuotaHasBeenSet(false)
{
}

CoreInternalOutcome CorpQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpQuota.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("CorpName") && !value["CorpName"].IsNull())
    {
        if (!value["CorpName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpQuota.CorpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpName = string(value["CorpName"].GetString());
        m_corpNameHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CorpQuota.Quota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quota.Deserialize(value["Quota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaHasBeenSet = true;
    }

    if (value.HasMember("UsageQuota") && !value["UsageQuota"].IsNull())
    {
        if (!value["UsageQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CorpQuota.UsageQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usageQuota.Deserialize(value["UsageQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CorpQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usageQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usageQuota.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t CorpQuota::GetCorpId() const
{
    return m_corpId;
}

void CorpQuota::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CorpQuota::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CorpQuota::GetCorpName() const
{
    return m_corpName;
}

void CorpQuota::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool CorpQuota::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

Quota CorpQuota::GetQuota() const
{
    return m_quota;
}

void CorpQuota::SetQuota(const Quota& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool CorpQuota::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

UsageQuota CorpQuota::GetUsageQuota() const
{
    return m_usageQuota;
}

void CorpQuota::SetUsageQuota(const UsageQuota& _usageQuota)
{
    m_usageQuota = _usageQuota;
    m_usageQuotaHasBeenSet = true;
}

bool CorpQuota::UsageQuotaHasBeenSet() const
{
    return m_usageQuotaHasBeenSet;
}

