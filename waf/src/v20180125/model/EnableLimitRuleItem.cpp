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

#include <tencentcloud/waf/v20180125/model/EnableLimitRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

EnableLimitRuleItem::EnableLimitRuleItem() :
    m_limitRuleIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome EnableLimitRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitRuleId") && !value["LimitRuleId"].IsNull())
    {
        if (!value["LimitRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableLimitRuleItem.LimitRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitRuleId = value["LimitRuleId"].GetInt64();
        m_limitRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableLimitRuleItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnableLimitRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitRuleId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t EnableLimitRuleItem::GetLimitRuleId() const
{
    return m_limitRuleId;
}

void EnableLimitRuleItem::SetLimitRuleId(const int64_t& _limitRuleId)
{
    m_limitRuleId = _limitRuleId;
    m_limitRuleIdHasBeenSet = true;
}

bool EnableLimitRuleItem::LimitRuleIdHasBeenSet() const
{
    return m_limitRuleIdHasBeenSet;
}

int64_t EnableLimitRuleItem::GetStatus() const
{
    return m_status;
}

void EnableLimitRuleItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnableLimitRuleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

