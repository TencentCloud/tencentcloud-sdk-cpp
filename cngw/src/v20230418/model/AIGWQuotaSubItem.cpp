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

#include <tencentcloud/cngw/v20230418/model/AIGWQuotaSubItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWQuotaSubItem::AIGWQuotaSubItem() :
    m_subResourceIdHasBeenSet(false),
    m_quotaLimitHasBeenSet(false)
{
}

CoreInternalOutcome AIGWQuotaSubItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubResourceId") && !value["SubResourceId"].IsNull())
    {
        if (!value["SubResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaSubItem.SubResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subResourceId = string(value["SubResourceId"].GetString());
        m_subResourceIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWQuotaSubItem.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWQuotaSubItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaLimit, allocator);
    }

}


string AIGWQuotaSubItem::GetSubResourceId() const
{
    return m_subResourceId;
}

void AIGWQuotaSubItem::SetSubResourceId(const string& _subResourceId)
{
    m_subResourceId = _subResourceId;
    m_subResourceIdHasBeenSet = true;
}

bool AIGWQuotaSubItem::SubResourceIdHasBeenSet() const
{
    return m_subResourceIdHasBeenSet;
}

uint64_t AIGWQuotaSubItem::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AIGWQuotaSubItem::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AIGWQuotaSubItem::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

