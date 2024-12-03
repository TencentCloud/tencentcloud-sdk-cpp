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

#include <tencentcloud/tsf/v20180326/model/CustomPodSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CustomPodSchedule::CustomPodSchedule() :
    m_forceScheduleHasBeenSet(false),
    m_tryScheduleHasBeenSet(false)
{
}

CoreInternalOutcome CustomPodSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ForceSchedule") && !value["ForceSchedule"].IsNull())
    {
        if (!value["ForceSchedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPodSchedule.ForceSchedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceSchedule.Deserialize(value["ForceSchedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceScheduleHasBeenSet = true;
    }

    if (value.HasMember("TrySchedule") && !value["TrySchedule"].IsNull())
    {
        if (!value["TrySchedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomPodSchedule.TrySchedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trySchedule.Deserialize(value["TrySchedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tryScheduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomPodSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_forceScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceSchedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceSchedule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tryScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrySchedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trySchedule.ToJsonObject(value[key.c_str()], allocator);
    }

}


ForceSchedule CustomPodSchedule::GetForceSchedule() const
{
    return m_forceSchedule;
}

void CustomPodSchedule::SetForceSchedule(const ForceSchedule& _forceSchedule)
{
    m_forceSchedule = _forceSchedule;
    m_forceScheduleHasBeenSet = true;
}

bool CustomPodSchedule::ForceScheduleHasBeenSet() const
{
    return m_forceScheduleHasBeenSet;
}

TrySchedule CustomPodSchedule::GetTrySchedule() const
{
    return m_trySchedule;
}

void CustomPodSchedule::SetTrySchedule(const TrySchedule& _trySchedule)
{
    m_trySchedule = _trySchedule;
    m_tryScheduleHasBeenSet = true;
}

bool CustomPodSchedule::TryScheduleHasBeenSet() const
{
    return m_tryScheduleHasBeenSet;
}

