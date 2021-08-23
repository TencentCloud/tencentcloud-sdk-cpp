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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeDeviceStreamsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeDeviceStreamsData::DescribeDeviceStreamsData() :
    m_rtspAddrHasBeenSet(false),
    m_rtmpAddrHasBeenSet(false),
    m_hlsAddrHasBeenSet(false),
    m_flvAddrHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceStreamsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RtspAddr") && !value["RtspAddr"].IsNull())
    {
        if (!value["RtspAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceStreamsData.RtspAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rtspAddr = string(value["RtspAddr"].GetString());
        m_rtspAddrHasBeenSet = true;
    }

    if (value.HasMember("RtmpAddr") && !value["RtmpAddr"].IsNull())
    {
        if (!value["RtmpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceStreamsData.RtmpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rtmpAddr = string(value["RtmpAddr"].GetString());
        m_rtmpAddrHasBeenSet = true;
    }

    if (value.HasMember("HlsAddr") && !value["HlsAddr"].IsNull())
    {
        if (!value["HlsAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceStreamsData.HlsAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hlsAddr = string(value["HlsAddr"].GetString());
        m_hlsAddrHasBeenSet = true;
    }

    if (value.HasMember("FlvAddr") && !value["FlvAddr"].IsNull())
    {
        if (!value["FlvAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceStreamsData.FlvAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flvAddr = string(value["FlvAddr"].GetString());
        m_flvAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceStreamsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rtspAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RtspAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rtspAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_rtmpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RtmpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rtmpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hlsAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_flvAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flvAddr.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDeviceStreamsData::GetRtspAddr() const
{
    return m_rtspAddr;
}

void DescribeDeviceStreamsData::SetRtspAddr(const string& _rtspAddr)
{
    m_rtspAddr = _rtspAddr;
    m_rtspAddrHasBeenSet = true;
}

bool DescribeDeviceStreamsData::RtspAddrHasBeenSet() const
{
    return m_rtspAddrHasBeenSet;
}

string DescribeDeviceStreamsData::GetRtmpAddr() const
{
    return m_rtmpAddr;
}

void DescribeDeviceStreamsData::SetRtmpAddr(const string& _rtmpAddr)
{
    m_rtmpAddr = _rtmpAddr;
    m_rtmpAddrHasBeenSet = true;
}

bool DescribeDeviceStreamsData::RtmpAddrHasBeenSet() const
{
    return m_rtmpAddrHasBeenSet;
}

string DescribeDeviceStreamsData::GetHlsAddr() const
{
    return m_hlsAddr;
}

void DescribeDeviceStreamsData::SetHlsAddr(const string& _hlsAddr)
{
    m_hlsAddr = _hlsAddr;
    m_hlsAddrHasBeenSet = true;
}

bool DescribeDeviceStreamsData::HlsAddrHasBeenSet() const
{
    return m_hlsAddrHasBeenSet;
}

string DescribeDeviceStreamsData::GetFlvAddr() const
{
    return m_flvAddr;
}

void DescribeDeviceStreamsData::SetFlvAddr(const string& _flvAddr)
{
    m_flvAddr = _flvAddr;
    m_flvAddrHasBeenSet = true;
}

bool DescribeDeviceStreamsData::FlvAddrHasBeenSet() const
{
    return m_flvAddrHasBeenSet;
}

