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

#include <tencentcloud/asr/v20190614/model/VoicePrintGroupVerifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintGroupVerifyRequest::VoicePrintGroupVerifyRequest() :
    m_voiceFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_topNHasBeenSet(false)
{
}

string VoicePrintGroupVerifyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voiceFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFormat, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t VoicePrintGroupVerifyRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void VoicePrintGroupVerifyRequest::SetVoiceFormat(const int64_t& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool VoicePrintGroupVerifyRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

int64_t VoicePrintGroupVerifyRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void VoicePrintGroupVerifyRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool VoicePrintGroupVerifyRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string VoicePrintGroupVerifyRequest::GetData() const
{
    return m_data;
}

void VoicePrintGroupVerifyRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool VoicePrintGroupVerifyRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string VoicePrintGroupVerifyRequest::GetGroupId() const
{
    return m_groupId;
}

void VoicePrintGroupVerifyRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VoicePrintGroupVerifyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t VoicePrintGroupVerifyRequest::GetTopN() const
{
    return m_topN;
}

void VoicePrintGroupVerifyRequest::SetTopN(const uint64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool VoicePrintGroupVerifyRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}


