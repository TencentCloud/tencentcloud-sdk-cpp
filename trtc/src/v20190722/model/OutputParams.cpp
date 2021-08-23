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

#include <tencentcloud/trtc/v20190722/model/OutputParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

OutputParams::OutputParams() :
    m_streamIdHasBeenSet(false),
    m_pureAudioStreamHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordAudioOnlyHasBeenSet(false)
{
}

CoreInternalOutcome OutputParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputParams.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("PureAudioStream") && !value["PureAudioStream"].IsNull())
    {
        if (!value["PureAudioStream"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputParams.PureAudioStream` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pureAudioStream = value["PureAudioStream"].GetUint64();
        m_pureAudioStreamHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputParams.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("RecordAudioOnly") && !value["RecordAudioOnly"].IsNull())
    {
        if (!value["RecordAudioOnly"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputParams.RecordAudioOnly` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordAudioOnly = value["RecordAudioOnly"].GetUint64();
        m_recordAudioOnlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_pureAudioStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureAudioStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pureAudioStream, allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordAudioOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordAudioOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordAudioOnly, allocator);
    }

}


string OutputParams::GetStreamId() const
{
    return m_streamId;
}

void OutputParams::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool OutputParams::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

uint64_t OutputParams::GetPureAudioStream() const
{
    return m_pureAudioStream;
}

void OutputParams::SetPureAudioStream(const uint64_t& _pureAudioStream)
{
    m_pureAudioStream = _pureAudioStream;
    m_pureAudioStreamHasBeenSet = true;
}

bool OutputParams::PureAudioStreamHasBeenSet() const
{
    return m_pureAudioStreamHasBeenSet;
}

string OutputParams::GetRecordId() const
{
    return m_recordId;
}

void OutputParams::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool OutputParams::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t OutputParams::GetRecordAudioOnly() const
{
    return m_recordAudioOnly;
}

void OutputParams::SetRecordAudioOnly(const uint64_t& _recordAudioOnly)
{
    m_recordAudioOnly = _recordAudioOnly;
    m_recordAudioOnlyHasBeenSet = true;
}

bool OutputParams::RecordAudioOnlyHasBeenSet() const
{
    return m_recordAudioOnlyHasBeenSet;
}

