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

#include <tencentcloud/live/v20180801/model/CommonMixOutputParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CommonMixOutputParams::CommonMixOutputParams() :
    m_outputStreamNameHasBeenSet(false),
    m_outputStreamTypeHasBeenSet(false),
    m_outputStreamBitRateHasBeenSet(false),
    m_outputStreamGopHasBeenSet(false),
    m_outputStreamFrameRateHasBeenSet(false),
    m_outputAudioBitRateHasBeenSet(false),
    m_outputAudioSampleRateHasBeenSet(false),
    m_outputAudioChannelsHasBeenSet(false),
    m_mixSeiHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixOutputParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStreamName") && !value["OutputStreamName"].IsNull())
    {
        if (!value["OutputStreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamName = string(value["OutputStreamName"].GetString());
        m_outputStreamNameHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamType") && !value["OutputStreamType"].IsNull())
    {
        if (!value["OutputStreamType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputStreamType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamType = value["OutputStreamType"].GetInt64();
        m_outputStreamTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamBitRate") && !value["OutputStreamBitRate"].IsNull())
    {
        if (!value["OutputStreamBitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputStreamBitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamBitRate = value["OutputStreamBitRate"].GetInt64();
        m_outputStreamBitRateHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamGop") && !value["OutputStreamGop"].IsNull())
    {
        if (!value["OutputStreamGop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputStreamGop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamGop = value["OutputStreamGop"].GetInt64();
        m_outputStreamGopHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamFrameRate") && !value["OutputStreamFrameRate"].IsNull())
    {
        if (!value["OutputStreamFrameRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputStreamFrameRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamFrameRate = value["OutputStreamFrameRate"].GetInt64();
        m_outputStreamFrameRateHasBeenSet = true;
    }

    if (value.HasMember("OutputAudioBitRate") && !value["OutputAudioBitRate"].IsNull())
    {
        if (!value["OutputAudioBitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputAudioBitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputAudioBitRate = value["OutputAudioBitRate"].GetInt64();
        m_outputAudioBitRateHasBeenSet = true;
    }

    if (value.HasMember("OutputAudioSampleRate") && !value["OutputAudioSampleRate"].IsNull())
    {
        if (!value["OutputAudioSampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputAudioSampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputAudioSampleRate = value["OutputAudioSampleRate"].GetInt64();
        m_outputAudioSampleRateHasBeenSet = true;
    }

    if (value.HasMember("OutputAudioChannels") && !value["OutputAudioChannels"].IsNull())
    {
        if (!value["OutputAudioChannels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.OutputAudioChannels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputAudioChannels = value["OutputAudioChannels"].GetInt64();
        m_outputAudioChannelsHasBeenSet = true;
    }

    if (value.HasMember("MixSei") && !value["MixSei"].IsNull())
    {
        if (!value["MixSei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixOutputParams.MixSei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mixSei = string(value["MixSei"].GetString());
        m_mixSeiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixOutputParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamType, allocator);
    }

    if (m_outputStreamBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamBitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamBitRate, allocator);
    }

    if (m_outputStreamGopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamGop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamGop, allocator);
    }

    if (m_outputStreamFrameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamFrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamFrameRate, allocator);
    }

    if (m_outputAudioBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAudioBitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputAudioBitRate, allocator);
    }

    if (m_outputAudioSampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAudioSampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputAudioSampleRate, allocator);
    }

    if (m_outputAudioChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAudioChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputAudioChannels, allocator);
    }

    if (m_mixSeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixSei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mixSei.c_str(), allocator).Move(), allocator);
    }

}


string CommonMixOutputParams::GetOutputStreamName() const
{
    return m_outputStreamName;
}

void CommonMixOutputParams::SetOutputStreamName(const string& _outputStreamName)
{
    m_outputStreamName = _outputStreamName;
    m_outputStreamNameHasBeenSet = true;
}

bool CommonMixOutputParams::OutputStreamNameHasBeenSet() const
{
    return m_outputStreamNameHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputStreamType() const
{
    return m_outputStreamType;
}

void CommonMixOutputParams::SetOutputStreamType(const int64_t& _outputStreamType)
{
    m_outputStreamType = _outputStreamType;
    m_outputStreamTypeHasBeenSet = true;
}

bool CommonMixOutputParams::OutputStreamTypeHasBeenSet() const
{
    return m_outputStreamTypeHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputStreamBitRate() const
{
    return m_outputStreamBitRate;
}

void CommonMixOutputParams::SetOutputStreamBitRate(const int64_t& _outputStreamBitRate)
{
    m_outputStreamBitRate = _outputStreamBitRate;
    m_outputStreamBitRateHasBeenSet = true;
}

bool CommonMixOutputParams::OutputStreamBitRateHasBeenSet() const
{
    return m_outputStreamBitRateHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputStreamGop() const
{
    return m_outputStreamGop;
}

void CommonMixOutputParams::SetOutputStreamGop(const int64_t& _outputStreamGop)
{
    m_outputStreamGop = _outputStreamGop;
    m_outputStreamGopHasBeenSet = true;
}

bool CommonMixOutputParams::OutputStreamGopHasBeenSet() const
{
    return m_outputStreamGopHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputStreamFrameRate() const
{
    return m_outputStreamFrameRate;
}

void CommonMixOutputParams::SetOutputStreamFrameRate(const int64_t& _outputStreamFrameRate)
{
    m_outputStreamFrameRate = _outputStreamFrameRate;
    m_outputStreamFrameRateHasBeenSet = true;
}

bool CommonMixOutputParams::OutputStreamFrameRateHasBeenSet() const
{
    return m_outputStreamFrameRateHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputAudioBitRate() const
{
    return m_outputAudioBitRate;
}

void CommonMixOutputParams::SetOutputAudioBitRate(const int64_t& _outputAudioBitRate)
{
    m_outputAudioBitRate = _outputAudioBitRate;
    m_outputAudioBitRateHasBeenSet = true;
}

bool CommonMixOutputParams::OutputAudioBitRateHasBeenSet() const
{
    return m_outputAudioBitRateHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputAudioSampleRate() const
{
    return m_outputAudioSampleRate;
}

void CommonMixOutputParams::SetOutputAudioSampleRate(const int64_t& _outputAudioSampleRate)
{
    m_outputAudioSampleRate = _outputAudioSampleRate;
    m_outputAudioSampleRateHasBeenSet = true;
}

bool CommonMixOutputParams::OutputAudioSampleRateHasBeenSet() const
{
    return m_outputAudioSampleRateHasBeenSet;
}

int64_t CommonMixOutputParams::GetOutputAudioChannels() const
{
    return m_outputAudioChannels;
}

void CommonMixOutputParams::SetOutputAudioChannels(const int64_t& _outputAudioChannels)
{
    m_outputAudioChannels = _outputAudioChannels;
    m_outputAudioChannelsHasBeenSet = true;
}

bool CommonMixOutputParams::OutputAudioChannelsHasBeenSet() const
{
    return m_outputAudioChannelsHasBeenSet;
}

string CommonMixOutputParams::GetMixSei() const
{
    return m_mixSei;
}

void CommonMixOutputParams::SetMixSei(const string& _mixSei)
{
    m_mixSei = _mixSei;
    m_mixSeiHasBeenSet = true;
}

bool CommonMixOutputParams::MixSeiHasBeenSet() const
{
    return m_mixSeiHasBeenSet;
}

