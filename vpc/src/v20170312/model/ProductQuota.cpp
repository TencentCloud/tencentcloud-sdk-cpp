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

#include <tencentcloud/vpc/v20170312/model/ProductQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ProductQuota::ProductQuota() :
    m_quotaIdHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_quotaCurrentHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_quotaRegionHasBeenSet(false)
{
}

CoreInternalOutcome ProductQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductQuota.QuotaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = string(value["QuotaId"].GetString());
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaName") && !value["QuotaName"].IsNull())
    {
        if (!value["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductQuota.QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(value["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaCurrent") && !value["QuotaCurrent"].IsNull())
    {
        if (!value["QuotaCurrent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductQuota.QuotaCurrent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaCurrent = value["QuotaCurrent"].GetInt64();
        m_quotaCurrentHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductQuota.QuotaLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetInt64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("QuotaRegion") && !value["QuotaRegion"].IsNull())
    {
        if (!value["QuotaRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductQuota.QuotaRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_quotaRegion = value["QuotaRegion"].GetBool();
        m_quotaRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaName.c_str(), allocator).Move(), allocator);
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

    if (m_quotaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaRegion, allocator);
    }

}


string ProductQuota::GetQuotaId() const
{
    return m_quotaId;
}

void ProductQuota::SetQuotaId(const string& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool ProductQuota::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string ProductQuota::GetQuotaName() const
{
    return m_quotaName;
}

void ProductQuota::SetQuotaName(const string& _quotaName)
{
    m_quotaName = _quotaName;
    m_quotaNameHasBeenSet = true;
}

bool ProductQuota::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

int64_t ProductQuota::GetQuotaCurrent() const
{
    return m_quotaCurrent;
}

void ProductQuota::SetQuotaCurrent(const int64_t& _quotaCurrent)
{
    m_quotaCurrent = _quotaCurrent;
    m_quotaCurrentHasBeenSet = true;
}

bool ProductQuota::QuotaCurrentHasBeenSet() const
{
    return m_quotaCurrentHasBeenSet;
}

int64_t ProductQuota::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void ProductQuota::SetQuotaLimit(const int64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool ProductQuota::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

bool ProductQuota::GetQuotaRegion() const
{
    return m_quotaRegion;
}

void ProductQuota::SetQuotaRegion(const bool& _quotaRegion)
{
    m_quotaRegion = _quotaRegion;
    m_quotaRegionHasBeenSet = true;
}

bool ProductQuota::QuotaRegionHasBeenSet() const
{
    return m_quotaRegionHasBeenSet;
}

