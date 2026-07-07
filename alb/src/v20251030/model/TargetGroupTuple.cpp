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

#include <tencentcloud/alb/v20251030/model/TargetGroupTuple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetGroupTuple::TargetGroupTuple() :
    m_targetGroupIdHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupTuple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupTuple.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupTuple.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupTuple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string TargetGroupTuple::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void TargetGroupTuple::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool TargetGroupTuple::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

int64_t TargetGroupTuple::GetWeight() const
{
    return m_weight;
}

void TargetGroupTuple::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TargetGroupTuple::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

