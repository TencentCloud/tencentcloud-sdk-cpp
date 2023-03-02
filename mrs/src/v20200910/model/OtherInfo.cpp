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

#include <tencentcloud/mrs/v20200910/model/OtherInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OtherInfo::OtherInfo() :
    m_anesthesiaHasBeenSet(false),
    m_bloodLossHasBeenSet(false),
    m_bloodTransfusionHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome OtherInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Anesthesia") && !value["Anesthesia"].IsNull())
    {
        if (!value["Anesthesia"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.Anesthesia` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_anesthesia.Deserialize(value["Anesthesia"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_anesthesiaHasBeenSet = true;
    }

    if (value.HasMember("BloodLoss") && !value["BloodLoss"].IsNull())
    {
        if (!value["BloodLoss"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.BloodLoss` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bloodLoss.Deserialize(value["BloodLoss"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bloodLossHasBeenSet = true;
    }

    if (value.HasMember("BloodTransfusion") && !value["BloodTransfusion"].IsNull())
    {
        if (!value["BloodTransfusion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.BloodTransfusion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bloodTransfusion.Deserialize(value["BloodTransfusion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bloodTransfusionHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.Duration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_duration.Deserialize(value["Duration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_durationHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.EndTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endTime.Deserialize(value["EndTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInfo.StartTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_startTime.Deserialize(value["StartTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_anesthesiaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Anesthesia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anesthesia.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bloodLossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BloodLoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bloodLoss.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bloodTransfusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BloodTransfusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bloodTransfusion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_duration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startTime.ToJsonObject(value[key.c_str()], allocator);
    }

}


SurgeryAttr OtherInfo::GetAnesthesia() const
{
    return m_anesthesia;
}

void OtherInfo::SetAnesthesia(const SurgeryAttr& _anesthesia)
{
    m_anesthesia = _anesthesia;
    m_anesthesiaHasBeenSet = true;
}

bool OtherInfo::AnesthesiaHasBeenSet() const
{
    return m_anesthesiaHasBeenSet;
}

SurgeryAttr OtherInfo::GetBloodLoss() const
{
    return m_bloodLoss;
}

void OtherInfo::SetBloodLoss(const SurgeryAttr& _bloodLoss)
{
    m_bloodLoss = _bloodLoss;
    m_bloodLossHasBeenSet = true;
}

bool OtherInfo::BloodLossHasBeenSet() const
{
    return m_bloodLossHasBeenSet;
}

SurgeryAttr OtherInfo::GetBloodTransfusion() const
{
    return m_bloodTransfusion;
}

void OtherInfo::SetBloodTransfusion(const SurgeryAttr& _bloodTransfusion)
{
    m_bloodTransfusion = _bloodTransfusion;
    m_bloodTransfusionHasBeenSet = true;
}

bool OtherInfo::BloodTransfusionHasBeenSet() const
{
    return m_bloodTransfusionHasBeenSet;
}

SurgeryAttr OtherInfo::GetDuration() const
{
    return m_duration;
}

void OtherInfo::SetDuration(const SurgeryAttr& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool OtherInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

SurgeryAttr OtherInfo::GetEndTime() const
{
    return m_endTime;
}

void OtherInfo::SetEndTime(const SurgeryAttr& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OtherInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

SurgeryAttr OtherInfo::GetStartTime() const
{
    return m_startTime;
}

void OtherInfo::SetStartTime(const SurgeryAttr& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OtherInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

