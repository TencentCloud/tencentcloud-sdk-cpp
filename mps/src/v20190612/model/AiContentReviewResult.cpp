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

#include <tencentcloud/mps/v20190612/model/AiContentReviewResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiContentReviewResult::AiContentReviewResult() :
    m_typeHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_pornTaskHasBeenSet(false),
    m_terrorismTaskHasBeenSet(false),
    m_politicalTaskHasBeenSet(false),
    m_pornAsrTaskHasBeenSet(false),
    m_pornOcrTaskHasBeenSet(false),
    m_politicalAsrTaskHasBeenSet(false),
    m_politicalOcrTaskHasBeenSet(false),
    m_terrorismOcrTaskHasBeenSet(false),
    m_prohibitedAsrTaskHasBeenSet(false),
    m_prohibitedOcrTaskHasBeenSet(false)
{
}

CoreInternalOutcome AiContentReviewResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.SampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetDouble();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("PornTask") && !value["PornTask"].IsNull())
    {
        if (!value["PornTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PornTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornTask.Deserialize(value["PornTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornTaskHasBeenSet = true;
    }

    if (value.HasMember("TerrorismTask") && !value["TerrorismTask"].IsNull())
    {
        if (!value["TerrorismTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.TerrorismTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismTask.Deserialize(value["TerrorismTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalTask") && !value["PoliticalTask"].IsNull())
    {
        if (!value["PoliticalTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PoliticalTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalTask.Deserialize(value["PoliticalTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalTaskHasBeenSet = true;
    }

    if (value.HasMember("PornAsrTask") && !value["PornAsrTask"].IsNull())
    {
        if (!value["PornAsrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PornAsrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornAsrTask.Deserialize(value["PornAsrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornAsrTaskHasBeenSet = true;
    }

    if (value.HasMember("PornOcrTask") && !value["PornOcrTask"].IsNull())
    {
        if (!value["PornOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PornOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornOcrTask.Deserialize(value["PornOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornOcrTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalAsrTask") && !value["PoliticalAsrTask"].IsNull())
    {
        if (!value["PoliticalAsrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PoliticalAsrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalAsrTask.Deserialize(value["PoliticalAsrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalAsrTaskHasBeenSet = true;
    }

    if (value.HasMember("PoliticalOcrTask") && !value["PoliticalOcrTask"].IsNull())
    {
        if (!value["PoliticalOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.PoliticalOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalOcrTask.Deserialize(value["PoliticalOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalOcrTaskHasBeenSet = true;
    }

    if (value.HasMember("TerrorismOcrTask") && !value["TerrorismOcrTask"].IsNull())
    {
        if (!value["TerrorismOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.TerrorismOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismOcrTask.Deserialize(value["TerrorismOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismOcrTaskHasBeenSet = true;
    }

    if (value.HasMember("ProhibitedAsrTask") && !value["ProhibitedAsrTask"].IsNull())
    {
        if (!value["ProhibitedAsrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.ProhibitedAsrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prohibitedAsrTask.Deserialize(value["ProhibitedAsrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prohibitedAsrTaskHasBeenSet = true;
    }

    if (value.HasMember("ProhibitedOcrTask") && !value["ProhibitedOcrTask"].IsNull())
    {
        if (!value["ProhibitedOcrTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiContentReviewResult.ProhibitedOcrTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prohibitedOcrTask.Deserialize(value["ProhibitedOcrTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prohibitedOcrTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiContentReviewResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_pornTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornAsrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornAsrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornAsrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornOcrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalAsrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalAsrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalAsrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalOcrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismOcrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prohibitedAsrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProhibitedAsrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prohibitedAsrTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prohibitedOcrTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProhibitedOcrTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prohibitedOcrTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiContentReviewResult::GetType() const
{
    return m_type;
}

void AiContentReviewResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiContentReviewResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double AiContentReviewResult::GetSampleRate() const
{
    return m_sampleRate;
}

void AiContentReviewResult::SetSampleRate(const double& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AiContentReviewResult::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

double AiContentReviewResult::GetDuration() const
{
    return m_duration;
}

void AiContentReviewResult::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AiContentReviewResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

AiReviewTaskPornResult AiContentReviewResult::GetPornTask() const
{
    return m_pornTask;
}

void AiContentReviewResult::SetPornTask(const AiReviewTaskPornResult& _pornTask)
{
    m_pornTask = _pornTask;
    m_pornTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornTaskHasBeenSet() const
{
    return m_pornTaskHasBeenSet;
}

AiReviewTaskTerrorismResult AiContentReviewResult::GetTerrorismTask() const
{
    return m_terrorismTask;
}

void AiContentReviewResult::SetTerrorismTask(const AiReviewTaskTerrorismResult& _terrorismTask)
{
    m_terrorismTask = _terrorismTask;
    m_terrorismTaskHasBeenSet = true;
}

bool AiContentReviewResult::TerrorismTaskHasBeenSet() const
{
    return m_terrorismTaskHasBeenSet;
}

AiReviewTaskPoliticalResult AiContentReviewResult::GetPoliticalTask() const
{
    return m_politicalTask;
}

void AiContentReviewResult::SetPoliticalTask(const AiReviewTaskPoliticalResult& _politicalTask)
{
    m_politicalTask = _politicalTask;
    m_politicalTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalTaskHasBeenSet() const
{
    return m_politicalTaskHasBeenSet;
}

AiReviewTaskPornAsrResult AiContentReviewResult::GetPornAsrTask() const
{
    return m_pornAsrTask;
}

void AiContentReviewResult::SetPornAsrTask(const AiReviewTaskPornAsrResult& _pornAsrTask)
{
    m_pornAsrTask = _pornAsrTask;
    m_pornAsrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornAsrTaskHasBeenSet() const
{
    return m_pornAsrTaskHasBeenSet;
}

AiReviewTaskPornOcrResult AiContentReviewResult::GetPornOcrTask() const
{
    return m_pornOcrTask;
}

void AiContentReviewResult::SetPornOcrTask(const AiReviewTaskPornOcrResult& _pornOcrTask)
{
    m_pornOcrTask = _pornOcrTask;
    m_pornOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PornOcrTaskHasBeenSet() const
{
    return m_pornOcrTaskHasBeenSet;
}

AiReviewTaskPoliticalAsrResult AiContentReviewResult::GetPoliticalAsrTask() const
{
    return m_politicalAsrTask;
}

void AiContentReviewResult::SetPoliticalAsrTask(const AiReviewTaskPoliticalAsrResult& _politicalAsrTask)
{
    m_politicalAsrTask = _politicalAsrTask;
    m_politicalAsrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalAsrTaskHasBeenSet() const
{
    return m_politicalAsrTaskHasBeenSet;
}

AiReviewTaskPoliticalOcrResult AiContentReviewResult::GetPoliticalOcrTask() const
{
    return m_politicalOcrTask;
}

void AiContentReviewResult::SetPoliticalOcrTask(const AiReviewTaskPoliticalOcrResult& _politicalOcrTask)
{
    m_politicalOcrTask = _politicalOcrTask;
    m_politicalOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::PoliticalOcrTaskHasBeenSet() const
{
    return m_politicalOcrTaskHasBeenSet;
}

AiReviewTaskTerrorismOcrResult AiContentReviewResult::GetTerrorismOcrTask() const
{
    return m_terrorismOcrTask;
}

void AiContentReviewResult::SetTerrorismOcrTask(const AiReviewTaskTerrorismOcrResult& _terrorismOcrTask)
{
    m_terrorismOcrTask = _terrorismOcrTask;
    m_terrorismOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::TerrorismOcrTaskHasBeenSet() const
{
    return m_terrorismOcrTaskHasBeenSet;
}

AiReviewTaskProhibitedAsrResult AiContentReviewResult::GetProhibitedAsrTask() const
{
    return m_prohibitedAsrTask;
}

void AiContentReviewResult::SetProhibitedAsrTask(const AiReviewTaskProhibitedAsrResult& _prohibitedAsrTask)
{
    m_prohibitedAsrTask = _prohibitedAsrTask;
    m_prohibitedAsrTaskHasBeenSet = true;
}

bool AiContentReviewResult::ProhibitedAsrTaskHasBeenSet() const
{
    return m_prohibitedAsrTaskHasBeenSet;
}

AiReviewTaskProhibitedOcrResult AiContentReviewResult::GetProhibitedOcrTask() const
{
    return m_prohibitedOcrTask;
}

void AiContentReviewResult::SetProhibitedOcrTask(const AiReviewTaskProhibitedOcrResult& _prohibitedOcrTask)
{
    m_prohibitedOcrTask = _prohibitedOcrTask;
    m_prohibitedOcrTaskHasBeenSet = true;
}

bool AiContentReviewResult::ProhibitedOcrTaskHasBeenSet() const
{
    return m_prohibitedOcrTaskHasBeenSet;
}

