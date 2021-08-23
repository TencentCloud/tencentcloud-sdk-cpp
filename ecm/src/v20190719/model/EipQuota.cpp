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

#include <tencentcloud/ecm/v20190719/model/EipQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

EipQuota::EipQuota() :
    m_quotaIdHasBeenSet(false),
    m_quotaCurrentHasBeenSet(false),
    m_quotaLimitHasBeenSet(false)
{
}

CoreInternalOutcome EipQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipQuota.QuotaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = string(value["QuotaId"].GetString());
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaCurrent") && !value["QuotaCurrent"].IsNull())
    {
        if (!value["QuotaCurrent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EipQuota.QuotaCurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaCurrent = value["QuotaCurrent"].GetUint64();
        m_quotaCurrentHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EipQuota.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaCurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaCurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaCurrent, allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaLimit, allocator);
    }

}


string EipQuota::GetQuotaId() const
{
    return m_quotaId;
}

void EipQuota::SetQuotaId(const string& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool EipQuota::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

uint64_t EipQuota::GetQuotaCurrent() const
{
    return m_quotaCurrent;
}

void EipQuota::SetQuotaCurrent(const uint64_t& _quotaCurrent)
{
    m_quotaCurrent = _quotaCurrent;
    m_quotaCurrentHasBeenSet = true;
}

bool EipQuota::QuotaCurrentHasBeenSet() const
{
    return m_quotaCurrentHasBeenSet;
}

uint64_t EipQuota::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void EipQuota::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool EipQuota::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

