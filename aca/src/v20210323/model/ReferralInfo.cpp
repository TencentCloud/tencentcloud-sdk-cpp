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

#include <tencentcloud/aca/v20210323/model/ReferralInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

ReferralInfo::ReferralInfo() :
    m_hitHasBeenSet(false),
    m_tipsHasBeenSet(false)
{
}

CoreInternalOutcome ReferralInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hit") && !value["Hit"].IsNull())
    {
        if (!value["Hit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReferralInfo.Hit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hit = value["Hit"].GetBool();
        m_hitHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferralInfo.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferralInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hit, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
    }

}


bool ReferralInfo::GetHit() const
{
    return m_hit;
}

void ReferralInfo::SetHit(const bool& _hit)
{
    m_hit = _hit;
    m_hitHasBeenSet = true;
}

bool ReferralInfo::HitHasBeenSet() const
{
    return m_hitHasBeenSet;
}

string ReferralInfo::GetTips() const
{
    return m_tips;
}

void ReferralInfo::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool ReferralInfo::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

