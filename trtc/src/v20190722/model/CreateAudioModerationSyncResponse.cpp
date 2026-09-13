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

#include <tencentcloud/trtc/v20190722/model/CreateAudioModerationSyncResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateAudioModerationSyncResponse::CreateAudioModerationSyncResponse() :
    m_dataIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_suggestHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_audioTextHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_checkDetailHasBeenSet(false)
{
}

CoreInternalOutcome CreateAudioModerationSyncResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("MediaType") && !rsp["MediaType"].IsNull())
    {
        if (!rsp["MediaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = rsp["MediaType"].GetInt64();
        m_mediaTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggest") && !rsp["Suggest"].IsNull())
    {
        if (!rsp["Suggest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Suggest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggest = rsp["Suggest"].GetInt64();
        m_suggestHasBeenSet = true;
    }

    if (rsp.HasMember("Rate") && !rsp["Rate"].IsNull())
    {
        if (!rsp["Rate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Rate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = rsp["Rate"].GetInt64();
        m_rateHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("SubLabel") && !rsp["SubLabel"].IsNull())
    {
        if (!rsp["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(rsp["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (rsp.HasMember("Audio") && !rsp["Audio"].IsNull())
    {
        if (!rsp["Audio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audio = string(rsp["Audio"].GetString());
        m_audioHasBeenSet = true;
    }

    if (rsp.HasMember("AudioText") && !rsp["AudioText"].IsNull())
    {
        if (!rsp["AudioText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioText = string(rsp["AudioText"].GetString());
        m_audioTextHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("CheckDetail") && !rsp["CheckDetail"].IsNull())
    {
        if (!rsp["CheckDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModerationCheckDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkDetail.push_back(item);
        }
        m_checkDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAudioModerationSyncResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaType, allocator);
    }

    if (m_suggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggest, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audio.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioText.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_checkDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkDetail.begin(); itr != m_checkDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string CreateAudioModerationSyncResponse::GetDataId() const
{
    return m_dataId;
}

bool CreateAudioModerationSyncResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetTaskId() const
{
    return m_taskId;
}

bool CreateAudioModerationSyncResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetFileName() const
{
    return m_fileName;
}

bool CreateAudioModerationSyncResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t CreateAudioModerationSyncResponse::GetMediaType() const
{
    return m_mediaType;
}

bool CreateAudioModerationSyncResponse::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

int64_t CreateAudioModerationSyncResponse::GetSuggest() const
{
    return m_suggest;
}

bool CreateAudioModerationSyncResponse::SuggestHasBeenSet() const
{
    return m_suggestHasBeenSet;
}

int64_t CreateAudioModerationSyncResponse::GetRate() const
{
    return m_rate;
}

bool CreateAudioModerationSyncResponse::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetLabel() const
{
    return m_label;
}

bool CreateAudioModerationSyncResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetSubLabel() const
{
    return m_subLabel;
}

bool CreateAudioModerationSyncResponse::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetAudio() const
{
    return m_audio;
}

bool CreateAudioModerationSyncResponse::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string CreateAudioModerationSyncResponse::GetAudioText() const
{
    return m_audioText;
}

bool CreateAudioModerationSyncResponse::AudioTextHasBeenSet() const
{
    return m_audioTextHasBeenSet;
}

int64_t CreateAudioModerationSyncResponse::GetDuration() const
{
    return m_duration;
}

bool CreateAudioModerationSyncResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<ModerationCheckDetail> CreateAudioModerationSyncResponse::GetCheckDetail() const
{
    return m_checkDetail;
}

bool CreateAudioModerationSyncResponse::CheckDetailHasBeenSet() const
{
    return m_checkDetailHasBeenSet;
}


