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

#include <tencentcloud/csip/v20221121/model/BehaviorSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BehaviorSummary::BehaviorSummary() :
    m_behaviorInfoHasBeenSet(false),
    m_abnormalCountHasBeenSet(false),
    m_isAccessHasBeenSet(false)
{
}

CoreInternalOutcome BehaviorSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BehaviorInfo") && !value["BehaviorInfo"].IsNull())
    {
        if (!value["BehaviorInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BehaviorSummary.BehaviorInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["BehaviorInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BehaviorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_behaviorInfo.push_back(item);
        }
        m_behaviorInfoHasBeenSet = true;
    }

    if (value.HasMember("AbnormalCount") && !value["AbnormalCount"].IsNull())
    {
        if (!value["AbnormalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BehaviorSummary.AbnormalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalCount = value["AbnormalCount"].GetUint64();
        m_abnormalCountHasBeenSet = true;
    }

    if (value.HasMember("IsAccess") && !value["IsAccess"].IsNull())
    {
        if (!value["IsAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BehaviorSummary.IsAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAccess = value["IsAccess"].GetBool();
        m_isAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BehaviorSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_behaviorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_behaviorInfo.begin(); itr != m_behaviorInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abnormalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalCount, allocator);
    }

    if (m_isAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAccess, allocator);
    }

}


vector<BehaviorInfo> BehaviorSummary::GetBehaviorInfo() const
{
    return m_behaviorInfo;
}

void BehaviorSummary::SetBehaviorInfo(const vector<BehaviorInfo>& _behaviorInfo)
{
    m_behaviorInfo = _behaviorInfo;
    m_behaviorInfoHasBeenSet = true;
}

bool BehaviorSummary::BehaviorInfoHasBeenSet() const
{
    return m_behaviorInfoHasBeenSet;
}

uint64_t BehaviorSummary::GetAbnormalCount() const
{
    return m_abnormalCount;
}

void BehaviorSummary::SetAbnormalCount(const uint64_t& _abnormalCount)
{
    m_abnormalCount = _abnormalCount;
    m_abnormalCountHasBeenSet = true;
}

bool BehaviorSummary::AbnormalCountHasBeenSet() const
{
    return m_abnormalCountHasBeenSet;
}

bool BehaviorSummary::GetIsAccess() const
{
    return m_isAccess;
}

void BehaviorSummary::SetIsAccess(const bool& _isAccess)
{
    m_isAccess = _isAccess;
    m_isAccessHasBeenSet = true;
}

bool BehaviorSummary::IsAccessHasBeenSet() const
{
    return m_isAccessHasBeenSet;
}

