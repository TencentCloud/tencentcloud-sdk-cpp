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

#include <tencentcloud/trro/v20220325/model/GetTotalDurationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

GetTotalDurationResponse::GetTotalDurationResponse() :
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

CoreInternalOutcome GetTotalDurationResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Voice") && !rsp["Voice"].IsNull())
    {
        if (!rsp["Voice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Voice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voice = rsp["Voice"].GetInt64();
        m_voiceHasBeenSet = true;
    }

    if (rsp.HasMember("SD") && !rsp["SD"].IsNull())
    {
        if (!rsp["SD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sD = rsp["SD"].GetInt64();
        m_sDHasBeenSet = true;
    }

    if (rsp.HasMember("HD") && !rsp["HD"].IsNull())
    {
        if (!rsp["HD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hD = rsp["HD"].GetInt64();
        m_hDHasBeenSet = true;
    }

    if (rsp.HasMember("FHD") && !rsp["FHD"].IsNull())
    {
        if (!rsp["FHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fHD = rsp["FHD"].GetInt64();
        m_fHDHasBeenSet = true;
    }

    if (rsp.HasMember("TwoK") && !rsp["TwoK"].IsNull())
    {
        if (!rsp["TwoK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TwoK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_twoK = rsp["TwoK"].GetInt64();
        m_twoKHasBeenSet = true;
    }

    if (rsp.HasMember("FourK") && !rsp["FourK"].IsNull())
    {
        if (!rsp["FourK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FourK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourK = rsp["FourK"].GetInt64();
        m_fourKHasBeenSet = true;
    }

    if (rsp.HasMember("Online") && !rsp["Online"].IsNull())
    {
        if (!rsp["Online"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Online` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_online = rsp["Online"].GetInt64();
        m_onlineHasBeenSet = true;
    }

    if (rsp.HasMember("MultiSD") && !rsp["MultiSD"].IsNull())
    {
        if (!rsp["MultiSD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiSD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiSD = rsp["MultiSD"].GetInt64();
        m_multiSDHasBeenSet = true;
    }

    if (rsp.HasMember("MultiHD") && !rsp["MultiHD"].IsNull())
    {
        if (!rsp["MultiHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiHD = rsp["MultiHD"].GetInt64();
        m_multiHDHasBeenSet = true;
    }

    if (rsp.HasMember("MultiFHD") && !rsp["MultiFHD"].IsNull())
    {
        if (!rsp["MultiFHD"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiFHD` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiFHD = rsp["MultiFHD"].GetInt64();
        m_multiFHDHasBeenSet = true;
    }

    if (rsp.HasMember("MultiTwoK") && !rsp["MultiTwoK"].IsNull())
    {
        if (!rsp["MultiTwoK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiTwoK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiTwoK = rsp["MultiTwoK"].GetInt64();
        m_multiTwoKHasBeenSet = true;
    }

    if (rsp.HasMember("MultiFourK") && !rsp["MultiFourK"].IsNull())
    {
        if (!rsp["MultiFourK"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiFourK` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiFourK = rsp["MultiFourK"].GetInt64();
        m_multiFourKHasBeenSet = true;
    }

    if (rsp.HasMember("MultiOnline") && !rsp["MultiOnline"].IsNull())
    {
        if (!rsp["MultiOnline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MultiOnline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiOnline = rsp["MultiOnline"].GetInt64();
        m_multiOnlineHasBeenSet = true;
    }

    if (rsp.HasMember("DeductDuration") && !rsp["DeductDuration"].IsNull())
    {
        if (!rsp["DeductDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeductDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductDuration = rsp["DeductDuration"].GetInt64();
        m_deductDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetTotalDurationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t GetTotalDurationResponse::GetVoice() const
{
    return m_voice;
}

bool GetTotalDurationResponse::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

int64_t GetTotalDurationResponse::GetSD() const
{
    return m_sD;
}

bool GetTotalDurationResponse::SDHasBeenSet() const
{
    return m_sDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetHD() const
{
    return m_hD;
}

bool GetTotalDurationResponse::HDHasBeenSet() const
{
    return m_hDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetFHD() const
{
    return m_fHD;
}

bool GetTotalDurationResponse::FHDHasBeenSet() const
{
    return m_fHDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetTwoK() const
{
    return m_twoK;
}

bool GetTotalDurationResponse::TwoKHasBeenSet() const
{
    return m_twoKHasBeenSet;
}

int64_t GetTotalDurationResponse::GetFourK() const
{
    return m_fourK;
}

bool GetTotalDurationResponse::FourKHasBeenSet() const
{
    return m_fourKHasBeenSet;
}

int64_t GetTotalDurationResponse::GetOnline() const
{
    return m_online;
}

bool GetTotalDurationResponse::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiSD() const
{
    return m_multiSD;
}

bool GetTotalDurationResponse::MultiSDHasBeenSet() const
{
    return m_multiSDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiHD() const
{
    return m_multiHD;
}

bool GetTotalDurationResponse::MultiHDHasBeenSet() const
{
    return m_multiHDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiFHD() const
{
    return m_multiFHD;
}

bool GetTotalDurationResponse::MultiFHDHasBeenSet() const
{
    return m_multiFHDHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiTwoK() const
{
    return m_multiTwoK;
}

bool GetTotalDurationResponse::MultiTwoKHasBeenSet() const
{
    return m_multiTwoKHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiFourK() const
{
    return m_multiFourK;
}

bool GetTotalDurationResponse::MultiFourKHasBeenSet() const
{
    return m_multiFourKHasBeenSet;
}

int64_t GetTotalDurationResponse::GetMultiOnline() const
{
    return m_multiOnline;
}

bool GetTotalDurationResponse::MultiOnlineHasBeenSet() const
{
    return m_multiOnlineHasBeenSet;
}

int64_t GetTotalDurationResponse::GetDeductDuration() const
{
    return m_deductDuration;
}

bool GetTotalDurationResponse::DeductDurationHasBeenSet() const
{
    return m_deductDurationHasBeenSet;
}


