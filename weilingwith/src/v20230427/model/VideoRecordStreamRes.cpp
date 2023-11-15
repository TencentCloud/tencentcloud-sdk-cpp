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

#include <tencentcloud/weilingwith/v20230427/model/VideoRecordStreamRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

VideoRecordStreamRes::VideoRecordStreamRes() :
    m_fLVHasBeenSet(false),
    m_rTMPHasBeenSet(false),
    m_hLSHasBeenSet(false),
    m_webRTCHasBeenSet(false),
    m_rAWHasBeenSet(false),
    m_streamHasBeenSet(false)
{
}

CoreInternalOutcome VideoRecordStreamRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FLV") && !value["FLV"].IsNull())
    {
        if (!value["FLV"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.FLV` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fLV = string(value["FLV"].GetString());
        m_fLVHasBeenSet = true;
    }

    if (value.HasMember("RTMP") && !value["RTMP"].IsNull())
    {
        if (!value["RTMP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.RTMP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTMP = string(value["RTMP"].GetString());
        m_rTMPHasBeenSet = true;
    }

    if (value.HasMember("HLS") && !value["HLS"].IsNull())
    {
        if (!value["HLS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.HLS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hLS = string(value["HLS"].GetString());
        m_hLSHasBeenSet = true;
    }

    if (value.HasMember("WebRTC") && !value["WebRTC"].IsNull())
    {
        if (!value["WebRTC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.WebRTC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webRTC = string(value["WebRTC"].GetString());
        m_webRTCHasBeenSet = true;
    }

    if (value.HasMember("RAW") && !value["RAW"].IsNull())
    {
        if (!value["RAW"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.RAW` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rAW.Deserialize(value["RAW"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rAWHasBeenSet = true;
    }

    if (value.HasMember("Stream") && !value["Stream"].IsNull())
    {
        if (!value["Stream"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoRecordStreamRes.Stream` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stream = string(value["Stream"].GetString());
        m_streamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoRecordStreamRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fLVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FLV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fLV.c_str(), allocator).Move(), allocator);
    }

    if (m_rTMPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTMP.c_str(), allocator).Move(), allocator);
    }

    if (m_hLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hLS.c_str(), allocator).Move(), allocator);
    }

    if (m_webRTCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebRTC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webRTC.c_str(), allocator).Move(), allocator);
    }

    if (m_rAWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RAW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rAW.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stream.c_str(), allocator).Move(), allocator);
    }

}


string VideoRecordStreamRes::GetFLV() const
{
    return m_fLV;
}

void VideoRecordStreamRes::SetFLV(const string& _fLV)
{
    m_fLV = _fLV;
    m_fLVHasBeenSet = true;
}

bool VideoRecordStreamRes::FLVHasBeenSet() const
{
    return m_fLVHasBeenSet;
}

string VideoRecordStreamRes::GetRTMP() const
{
    return m_rTMP;
}

void VideoRecordStreamRes::SetRTMP(const string& _rTMP)
{
    m_rTMP = _rTMP;
    m_rTMPHasBeenSet = true;
}

bool VideoRecordStreamRes::RTMPHasBeenSet() const
{
    return m_rTMPHasBeenSet;
}

string VideoRecordStreamRes::GetHLS() const
{
    return m_hLS;
}

void VideoRecordStreamRes::SetHLS(const string& _hLS)
{
    m_hLS = _hLS;
    m_hLSHasBeenSet = true;
}

bool VideoRecordStreamRes::HLSHasBeenSet() const
{
    return m_hLSHasBeenSet;
}

string VideoRecordStreamRes::GetWebRTC() const
{
    return m_webRTC;
}

void VideoRecordStreamRes::SetWebRTC(const string& _webRTC)
{
    m_webRTC = _webRTC;
    m_webRTCHasBeenSet = true;
}

bool VideoRecordStreamRes::WebRTCHasBeenSet() const
{
    return m_webRTCHasBeenSet;
}

RawInfo VideoRecordStreamRes::GetRAW() const
{
    return m_rAW;
}

void VideoRecordStreamRes::SetRAW(const RawInfo& _rAW)
{
    m_rAW = _rAW;
    m_rAWHasBeenSet = true;
}

bool VideoRecordStreamRes::RAWHasBeenSet() const
{
    return m_rAWHasBeenSet;
}

string VideoRecordStreamRes::GetStream() const
{
    return m_stream;
}

void VideoRecordStreamRes::SetStream(const string& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool VideoRecordStreamRes::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

