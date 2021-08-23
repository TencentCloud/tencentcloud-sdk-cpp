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

#include <tencentcloud/soe/v20180724/model/PhoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

PhoneInfo::PhoneInfo() :
    m_memBeginTimeHasBeenSet(false),
    m_memEndTimeHasBeenSet(false),
    m_pronAccuracyHasBeenSet(false),
    m_detectedStressHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_stressHasBeenSet(false),
    m_referencePhoneHasBeenSet(false),
    m_matchTagHasBeenSet(false),
    m_referenceLetterHasBeenSet(false)
{
}

CoreInternalOutcome PhoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemBeginTime") && !value["MemBeginTime"].IsNull())
    {
        if (!value["MemBeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.MemBeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memBeginTime = value["MemBeginTime"].GetInt64();
        m_memBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("MemEndTime") && !value["MemEndTime"].IsNull())
    {
        if (!value["MemEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.MemEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memEndTime = value["MemEndTime"].GetInt64();
        m_memEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PronAccuracy") && !value["PronAccuracy"].IsNull())
    {
        if (!value["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("DetectedStress") && !value["DetectedStress"].IsNull())
    {
        if (!value["DetectedStress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.DetectedStress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_detectedStress = value["DetectedStress"].GetBool();
        m_detectedStressHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Stress") && !value["Stress"].IsNull())
    {
        if (!value["Stress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.Stress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stress = value["Stress"].GetBool();
        m_stressHasBeenSet = true;
    }

    if (value.HasMember("ReferencePhone") && !value["ReferencePhone"].IsNull())
    {
        if (!value["ReferencePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.ReferencePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referencePhone = string(value["ReferencePhone"].GetString());
        m_referencePhoneHasBeenSet = true;
    }

    if (value.HasMember("MatchTag") && !value["MatchTag"].IsNull())
    {
        if (!value["MatchTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.MatchTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchTag = value["MatchTag"].GetInt64();
        m_matchTagHasBeenSet = true;
    }

    if (value.HasMember("ReferenceLetter") && !value["ReferenceLetter"].IsNull())
    {
        if (!value["ReferenceLetter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneInfo.ReferenceLetter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceLetter = string(value["ReferenceLetter"].GetString());
        m_referenceLetterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memBeginTime, allocator);
    }

    if (m_memEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memEndTime, allocator);
    }

    if (m_pronAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronAccuracy, allocator);
    }

    if (m_detectedStressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedStress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectedStress, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_stressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stress, allocator);
    }

    if (m_referencePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferencePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referencePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchTag, allocator);
    }

    if (m_referenceLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceLetter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceLetter.c_str(), allocator).Move(), allocator);
    }

}


int64_t PhoneInfo::GetMemBeginTime() const
{
    return m_memBeginTime;
}

void PhoneInfo::SetMemBeginTime(const int64_t& _memBeginTime)
{
    m_memBeginTime = _memBeginTime;
    m_memBeginTimeHasBeenSet = true;
}

bool PhoneInfo::MemBeginTimeHasBeenSet() const
{
    return m_memBeginTimeHasBeenSet;
}

int64_t PhoneInfo::GetMemEndTime() const
{
    return m_memEndTime;
}

void PhoneInfo::SetMemEndTime(const int64_t& _memEndTime)
{
    m_memEndTime = _memEndTime;
    m_memEndTimeHasBeenSet = true;
}

bool PhoneInfo::MemEndTimeHasBeenSet() const
{
    return m_memEndTimeHasBeenSet;
}

double PhoneInfo::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

void PhoneInfo::SetPronAccuracy(const double& _pronAccuracy)
{
    m_pronAccuracy = _pronAccuracy;
    m_pronAccuracyHasBeenSet = true;
}

bool PhoneInfo::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

bool PhoneInfo::GetDetectedStress() const
{
    return m_detectedStress;
}

void PhoneInfo::SetDetectedStress(const bool& _detectedStress)
{
    m_detectedStress = _detectedStress;
    m_detectedStressHasBeenSet = true;
}

bool PhoneInfo::DetectedStressHasBeenSet() const
{
    return m_detectedStressHasBeenSet;
}

string PhoneInfo::GetPhone() const
{
    return m_phone;
}

void PhoneInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool PhoneInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

bool PhoneInfo::GetStress() const
{
    return m_stress;
}

void PhoneInfo::SetStress(const bool& _stress)
{
    m_stress = _stress;
    m_stressHasBeenSet = true;
}

bool PhoneInfo::StressHasBeenSet() const
{
    return m_stressHasBeenSet;
}

string PhoneInfo::GetReferencePhone() const
{
    return m_referencePhone;
}

void PhoneInfo::SetReferencePhone(const string& _referencePhone)
{
    m_referencePhone = _referencePhone;
    m_referencePhoneHasBeenSet = true;
}

bool PhoneInfo::ReferencePhoneHasBeenSet() const
{
    return m_referencePhoneHasBeenSet;
}

int64_t PhoneInfo::GetMatchTag() const
{
    return m_matchTag;
}

void PhoneInfo::SetMatchTag(const int64_t& _matchTag)
{
    m_matchTag = _matchTag;
    m_matchTagHasBeenSet = true;
}

bool PhoneInfo::MatchTagHasBeenSet() const
{
    return m_matchTagHasBeenSet;
}

string PhoneInfo::GetReferenceLetter() const
{
    return m_referenceLetter;
}

void PhoneInfo::SetReferenceLetter(const string& _referenceLetter)
{
    m_referenceLetter = _referenceLetter;
    m_referenceLetterHasBeenSet = true;
}

bool PhoneInfo::ReferenceLetterHasBeenSet() const
{
    return m_referenceLetterHasBeenSet;
}

