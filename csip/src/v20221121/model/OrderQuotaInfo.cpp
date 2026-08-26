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

#include <tencentcloud/csip/v20221121/model/OrderQuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

OrderQuotaInfo::OrderQuotaInfo() :
    m_quotaKeyHasBeenSet(false),
    m_quotaNumHasBeenSet(false),
    m_quotaUsedHasBeenSet(false)
{
}

CoreInternalOutcome OrderQuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaKey") && !value["QuotaKey"].IsNull())
    {
        if (!value["QuotaKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderQuotaInfo.QuotaKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaKey = string(value["QuotaKey"].GetString());
        m_quotaKeyHasBeenSet = true;
    }

    if (value.HasMember("QuotaNum") && !value["QuotaNum"].IsNull())
    {
        if (!value["QuotaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderQuotaInfo.QuotaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaNum = value["QuotaNum"].GetInt64();
        m_quotaNumHasBeenSet = true;
    }

    if (value.HasMember("QuotaUsed") && !value["QuotaUsed"].IsNull())
    {
        if (!value["QuotaUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderQuotaInfo.QuotaUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaUsed = value["QuotaUsed"].GetInt64();
        m_quotaUsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderQuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaKey.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaNum, allocator);
    }

    if (m_quotaUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaUsed, allocator);
    }

}


string OrderQuotaInfo::GetQuotaKey() const
{
    return m_quotaKey;
}

void OrderQuotaInfo::SetQuotaKey(const string& _quotaKey)
{
    m_quotaKey = _quotaKey;
    m_quotaKeyHasBeenSet = true;
}

bool OrderQuotaInfo::QuotaKeyHasBeenSet() const
{
    return m_quotaKeyHasBeenSet;
}

int64_t OrderQuotaInfo::GetQuotaNum() const
{
    return m_quotaNum;
}

void OrderQuotaInfo::SetQuotaNum(const int64_t& _quotaNum)
{
    m_quotaNum = _quotaNum;
    m_quotaNumHasBeenSet = true;
}

bool OrderQuotaInfo::QuotaNumHasBeenSet() const
{
    return m_quotaNumHasBeenSet;
}

int64_t OrderQuotaInfo::GetQuotaUsed() const
{
    return m_quotaUsed;
}

void OrderQuotaInfo::SetQuotaUsed(const int64_t& _quotaUsed)
{
    m_quotaUsed = _quotaUsed;
    m_quotaUsedHasBeenSet = true;
}

bool OrderQuotaInfo::QuotaUsedHasBeenSet() const
{
    return m_quotaUsedHasBeenSet;
}

