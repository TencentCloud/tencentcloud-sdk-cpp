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

#include <tencentcloud/mrs/v20200910/model/InternalMedicineHeart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InternalMedicineHeart::InternalMedicineHeart() :
    m_textHasBeenSet(false),
    m_heartRhythmHasBeenSet(false),
    m_heartRateHasBeenSet(false),
    m_heartAuscultationHasBeenSet(false)
{
}

CoreInternalOutcome InternalMedicineHeart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineHeart.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("HeartRhythm") && !value["HeartRhythm"].IsNull())
    {
        if (!value["HeartRhythm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineHeart.HeartRhythm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heartRhythm.Deserialize(value["HeartRhythm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartRhythmHasBeenSet = true;
    }

    if (value.HasMember("HeartRate") && !value["HeartRate"].IsNull())
    {
        if (!value["HeartRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineHeart.HeartRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heartRate.Deserialize(value["HeartRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartRateHasBeenSet = true;
    }

    if (value.HasMember("HeartAuscultation") && !value["HeartAuscultation"].IsNull())
    {
        if (!value["HeartAuscultation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternalMedicineHeart.HeartAuscultation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heartAuscultation.Deserialize(value["HeartAuscultation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartAuscultationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalMedicineHeart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heartRhythmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartRhythm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heartRhythm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heartRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heartRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_heartAuscultationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartAuscultation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heartAuscultation.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem InternalMedicineHeart::GetText() const
{
    return m_text;
}

void InternalMedicineHeart::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool InternalMedicineHeart::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem InternalMedicineHeart::GetHeartRhythm() const
{
    return m_heartRhythm;
}

void InternalMedicineHeart::SetHeartRhythm(const KeyValueItem& _heartRhythm)
{
    m_heartRhythm = _heartRhythm;
    m_heartRhythmHasBeenSet = true;
}

bool InternalMedicineHeart::HeartRhythmHasBeenSet() const
{
    return m_heartRhythmHasBeenSet;
}

ValueUnitItem InternalMedicineHeart::GetHeartRate() const
{
    return m_heartRate;
}

void InternalMedicineHeart::SetHeartRate(const ValueUnitItem& _heartRate)
{
    m_heartRate = _heartRate;
    m_heartRateHasBeenSet = true;
}

bool InternalMedicineHeart::HeartRateHasBeenSet() const
{
    return m_heartRateHasBeenSet;
}

KeyValueItem InternalMedicineHeart::GetHeartAuscultation() const
{
    return m_heartAuscultation;
}

void InternalMedicineHeart::SetHeartAuscultation(const KeyValueItem& _heartAuscultation)
{
    m_heartAuscultation = _heartAuscultation;
    m_heartAuscultationHasBeenSet = true;
}

bool InternalMedicineHeart::HeartAuscultationHasBeenSet() const
{
    return m_heartAuscultationHasBeenSet;
}

