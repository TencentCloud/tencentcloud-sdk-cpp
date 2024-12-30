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

#include <tencentcloud/clb/v20180317/model/BasicTargetGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BasicTargetGroupInfo::BasicTargetGroupInfo() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome BasicTargetGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BasicTargetGroupInfo.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupName") && !value["TargetGroupName"].IsNull())
    {
        if (!value["TargetGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BasicTargetGroupInfo.TargetGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupName = string(value["TargetGroupName"].GetString());
        m_targetGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BasicTargetGroupInfo.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BasicTargetGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string BasicTargetGroupInfo::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void BasicTargetGroupInfo::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool BasicTargetGroupInfo::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string BasicTargetGroupInfo::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void BasicTargetGroupInfo::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool BasicTargetGroupInfo::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

uint64_t BasicTargetGroupInfo::GetWeight() const
{
    return m_weight;
}

void BasicTargetGroupInfo::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool BasicTargetGroupInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

