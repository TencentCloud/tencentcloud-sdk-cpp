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

#include <tencentcloud/trro/v20220325/model/DurationDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DurationDetails::DurationDetails() :
    m_sessionTimeHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_sDHasBeenSet(false),
    m_hDHasBeenSet(false),
    m_fHDHasBeenSet(false),
    m_twoKHasBeenSet(false),
    m_fourKHasBeenSet(false),
    m_onlineHasBeenSet(false),
    m_multiSDHasBeenSet(false),
    m_multiHDHasBeenSet(false),
    m_multiFHDHasBeenSet(false),
    m_multiTwoKHasBeenSet(false),
    m_multiFourKHasBeenSet(false),
    m_multiOnlineHasBeenSet(false),
    m_deductDurationHasBeenSet(false)
{
}

CoreInternalOutcome DurationDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionTime") && !value["SessionTime"].IsNull())
    {
        if (!value["SessionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.SessionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionTime = string(value["SessionTime"].GetString());
        m_sessionTimeHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.Voice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voice = value["Voice"].GetInt64();
        m_voiceHasBeenSet = true;
    }

    if (value.HasMember("SD") && !value["SD"].IsNull())
    {
        if (!value["SD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.SD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sD = value["SD"].GetInt64();
        m_sDHasBeenSet = true;
    }

    if (value.HasMember("HD") && !value["HD"].IsNull())
    {
        if (!value["HD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.HD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hD = value["HD"].GetInt64();
        m_hDHasBeenSet = true;
    }

    if (value.HasMember("FHD") && !value["FHD"].IsNull())
    {
        if (!value["FHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.FHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fHD = value["FHD"].GetInt64();
        m_fHDHasBeenSet = true;
    }

    if (value.HasMember("TwoK") && !value["TwoK"].IsNull())
    {
        if (!value["TwoK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.TwoK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_twoK = value["TwoK"].GetInt64();
        m_twoKHasBeenSet = true;
    }

    if (value.HasMember("FourK") && !value["FourK"].IsNull())
    {
        if (!value["FourK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.FourK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourK = value["FourK"].GetInt64();
        m_fourKHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.Online` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetInt64();
        m_onlineHasBeenSet = true;
    }

    if (value.HasMember("MultiSD") && !value["MultiSD"].IsNull())
    {
        if (!value["MultiSD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiSD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiSD = value["MultiSD"].GetInt64();
        m_multiSDHasBeenSet = true;
    }

    if (value.HasMember("MultiHD") && !value["MultiHD"].IsNull())
    {
        if (!value["MultiHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiHD = value["MultiHD"].GetInt64();
        m_multiHDHasBeenSet = true;
    }

    if (value.HasMember("MultiFHD") && !value["MultiFHD"].IsNull())
    {
        if (!value["MultiFHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiFHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiFHD = value["MultiFHD"].GetInt64();
        m_multiFHDHasBeenSet = true;
    }

    if (value.HasMember("MultiTwoK") && !value["MultiTwoK"].IsNull())
    {
        if (!value["MultiTwoK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiTwoK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiTwoK = value["MultiTwoK"].GetInt64();
        m_multiTwoKHasBeenSet = true;
    }

    if (value.HasMember("MultiFourK") && !value["MultiFourK"].IsNull())
    {
        if (!value["MultiFourK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiFourK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiFourK = value["MultiFourK"].GetInt64();
        m_multiFourKHasBeenSet = true;
    }

    if (value.HasMember("MultiOnline") && !value["MultiOnline"].IsNull())
    {
        if (!value["MultiOnline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.MultiOnline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiOnline = value["MultiOnline"].GetInt64();
        m_multiOnlineHasBeenSet = true;
    }

    if (value.HasMember("DeductDuration") && !value["DeductDuration"].IsNull())
    {
        if (!value["DeductDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationDetails.DeductDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductDuration = value["DeductDuration"].GetInt64();
        m_deductDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DurationDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voice, allocator);
    }

    if (m_sDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sD, allocator);
    }

    if (m_hDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hD, allocator);
    }

    if (m_fHDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FHD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fHD, allocator);
    }

    if (m_twoKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwoK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_twoK, allocator);
    }

    if (m_fourKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourK, allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

    if (m_multiSDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiSD, allocator);
    }

    if (m_multiHDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiHD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiHD, allocator);
    }

    if (m_multiFHDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiFHD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiFHD, allocator);
    }

    if (m_multiTwoKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiTwoK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiTwoK, allocator);
    }

    if (m_multiFourKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiFourK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiFourK, allocator);
    }

    if (m_multiOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiOnline, allocator);
    }

    if (m_deductDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductDuration, allocator);
    }

}


string DurationDetails::GetSessionTime() const
{
    return m_sessionTime;
}

void DurationDetails::SetSessionTime(const string& _sessionTime)
{
    m_sessionTime = _sessionTime;
    m_sessionTimeHasBeenSet = true;
}

bool DurationDetails::SessionTimeHasBeenSet() const
{
    return m_sessionTimeHasBeenSet;
}

int64_t DurationDetails::GetVoice() const
{
    return m_voice;
}

void DurationDetails::SetVoice(const int64_t& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool DurationDetails::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

int64_t DurationDetails::GetSD() const
{
    return m_sD;
}

void DurationDetails::SetSD(const int64_t& _sD)
{
    m_sD = _sD;
    m_sDHasBeenSet = true;
}

bool DurationDetails::SDHasBeenSet() const
{
    return m_sDHasBeenSet;
}

int64_t DurationDetails::GetHD() const
{
    return m_hD;
}

void DurationDetails::SetHD(const int64_t& _hD)
{
    m_hD = _hD;
    m_hDHasBeenSet = true;
}

bool DurationDetails::HDHasBeenSet() const
{
    return m_hDHasBeenSet;
}

int64_t DurationDetails::GetFHD() const
{
    return m_fHD;
}

void DurationDetails::SetFHD(const int64_t& _fHD)
{
    m_fHD = _fHD;
    m_fHDHasBeenSet = true;
}

bool DurationDetails::FHDHasBeenSet() const
{
    return m_fHDHasBeenSet;
}

int64_t DurationDetails::GetTwoK() const
{
    return m_twoK;
}

void DurationDetails::SetTwoK(const int64_t& _twoK)
{
    m_twoK = _twoK;
    m_twoKHasBeenSet = true;
}

bool DurationDetails::TwoKHasBeenSet() const
{
    return m_twoKHasBeenSet;
}

int64_t DurationDetails::GetFourK() const
{
    return m_fourK;
}

void DurationDetails::SetFourK(const int64_t& _fourK)
{
    m_fourK = _fourK;
    m_fourKHasBeenSet = true;
}

bool DurationDetails::FourKHasBeenSet() const
{
    return m_fourKHasBeenSet;
}

int64_t DurationDetails::GetOnline() const
{
    return m_online;
}

void DurationDetails::SetOnline(const int64_t& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool DurationDetails::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

int64_t DurationDetails::GetMultiSD() const
{
    return m_multiSD;
}

void DurationDetails::SetMultiSD(const int64_t& _multiSD)
{
    m_multiSD = _multiSD;
    m_multiSDHasBeenSet = true;
}

bool DurationDetails::MultiSDHasBeenSet() const
{
    return m_multiSDHasBeenSet;
}

int64_t DurationDetails::GetMultiHD() const
{
    return m_multiHD;
}

void DurationDetails::SetMultiHD(const int64_t& _multiHD)
{
    m_multiHD = _multiHD;
    m_multiHDHasBeenSet = true;
}

bool DurationDetails::MultiHDHasBeenSet() const
{
    return m_multiHDHasBeenSet;
}

int64_t DurationDetails::GetMultiFHD() const
{
    return m_multiFHD;
}

void DurationDetails::SetMultiFHD(const int64_t& _multiFHD)
{
    m_multiFHD = _multiFHD;
    m_multiFHDHasBeenSet = true;
}

bool DurationDetails::MultiFHDHasBeenSet() const
{
    return m_multiFHDHasBeenSet;
}

int64_t DurationDetails::GetMultiTwoK() const
{
    return m_multiTwoK;
}

void DurationDetails::SetMultiTwoK(const int64_t& _multiTwoK)
{
    m_multiTwoK = _multiTwoK;
    m_multiTwoKHasBeenSet = true;
}

bool DurationDetails::MultiTwoKHasBeenSet() const
{
    return m_multiTwoKHasBeenSet;
}

int64_t DurationDetails::GetMultiFourK() const
{
    return m_multiFourK;
}

void DurationDetails::SetMultiFourK(const int64_t& _multiFourK)
{
    m_multiFourK = _multiFourK;
    m_multiFourKHasBeenSet = true;
}

bool DurationDetails::MultiFourKHasBeenSet() const
{
    return m_multiFourKHasBeenSet;
}

int64_t DurationDetails::GetMultiOnline() const
{
    return m_multiOnline;
}

void DurationDetails::SetMultiOnline(const int64_t& _multiOnline)
{
    m_multiOnline = _multiOnline;
    m_multiOnlineHasBeenSet = true;
}

bool DurationDetails::MultiOnlineHasBeenSet() const
{
    return m_multiOnlineHasBeenSet;
}

int64_t DurationDetails::GetDeductDuration() const
{
    return m_deductDuration;
}

void DurationDetails::SetDeductDuration(const int64_t& _deductDuration)
{
    m_deductDuration = _deductDuration;
    m_deductDurationHasBeenSet = true;
}

bool DurationDetails::DeductDurationHasBeenSet() const
{
    return m_deductDurationHasBeenSet;
}

