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

#include <tencentcloud/vm/v20201229/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskIdHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_mediaInfoHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_imageSegmentsHasBeenSet(false),
    m_audioSegmentsHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_errorDescriptionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_segmentCosUrlListHasBeenSet(false),
    m_audioTextHasBeenSet(false),
    m_tryInSecondsHasBeenSet(false),
    m_asrsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
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

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("MediaInfo") && !rsp["MediaInfo"].IsNull())
    {
        if (!rsp["MediaInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaInfo.Deserialize(rsp["MediaInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaInfoHasBeenSet = true;
    }

    if (rsp.HasMember("InputInfo") && !rsp["InputInfo"].IsNull())
    {
        if (!rsp["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(rsp["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSegments") && !rsp["ImageSegments"].IsNull())
    {
        if (!rsp["ImageSegments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageSegments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ImageSegments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageSegments item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageSegments.push_back(item);
        }
        m_imageSegmentsHasBeenSet = true;
    }

    if (rsp.HasMember("AudioSegments") && !rsp["AudioSegments"].IsNull())
    {
        if (!rsp["AudioSegments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioSegments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AudioSegments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioSegments item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioSegments.push_back(item);
        }
        m_audioSegmentsHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorType") && !rsp["ErrorType"].IsNull())
    {
        if (!rsp["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(rsp["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorDescription") && !rsp["ErrorDescription"].IsNull())
    {
        if (!rsp["ErrorDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDescription = string(rsp["ErrorDescription"].GetString());
        m_errorDescriptionHasBeenSet = true;
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

    if (rsp.HasMember("SegmentCosUrlList") && !rsp["SegmentCosUrlList"].IsNull())
    {
        if (!rsp["SegmentCosUrlList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentCosUrlList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentCosUrlList.Deserialize(rsp["SegmentCosUrlList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentCosUrlListHasBeenSet = true;
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

    if (rsp.HasMember("TryInSeconds") && !rsp["TryInSeconds"].IsNull())
    {
        if (!rsp["TryInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TryInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryInSeconds = rsp["TryInSeconds"].GetInt64();
        m_tryInSecondsHasBeenSet = true;
    }

    if (rsp.HasMember("Asrs") && !rsp["Asrs"].IsNull())
    {
        if (!rsp["Asrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asrs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Asrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RcbAsr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_asrs.push_back(item);
        }
        m_asrsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mediaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageSegments.begin(); itr != m_imageSegments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioSegments.begin(); itr != m_audioSegments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentCosUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentCosUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentCosUrlList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioText.c_str(), allocator).Move(), allocator);
    }

    if (m_tryInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryInSeconds, allocator);
    }

    if (m_asrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_asrs.begin(); itr != m_asrs.end(); ++itr, ++i)
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


string DescribeTaskDetailResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeTaskDetailResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTaskDetailResponse::GetDataId() const
{
    return m_dataId;
}

bool DescribeTaskDetailResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string DescribeTaskDetailResponse::GetBizType() const
{
    return m_bizType;
}

bool DescribeTaskDetailResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string DescribeTaskDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeTaskDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTaskDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeTaskDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeTaskDetailResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool DescribeTaskDetailResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<TaskLabel> DescribeTaskDetailResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeTaskDetailResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

MediaInfo DescribeTaskDetailResponse::GetMediaInfo() const
{
    return m_mediaInfo;
}

bool DescribeTaskDetailResponse::MediaInfoHasBeenSet() const
{
    return m_mediaInfoHasBeenSet;
}

InputInfo DescribeTaskDetailResponse::GetInputInfo() const
{
    return m_inputInfo;
}

bool DescribeTaskDetailResponse::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string DescribeTaskDetailResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeTaskDetailResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeTaskDetailResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeTaskDetailResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

vector<ImageSegments> DescribeTaskDetailResponse::GetImageSegments() const
{
    return m_imageSegments;
}

bool DescribeTaskDetailResponse::ImageSegmentsHasBeenSet() const
{
    return m_imageSegmentsHasBeenSet;
}

vector<AudioSegments> DescribeTaskDetailResponse::GetAudioSegments() const
{
    return m_audioSegments;
}

bool DescribeTaskDetailResponse::AudioSegmentsHasBeenSet() const
{
    return m_audioSegmentsHasBeenSet;
}

string DescribeTaskDetailResponse::GetErrorType() const
{
    return m_errorType;
}

bool DescribeTaskDetailResponse::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string DescribeTaskDetailResponse::GetErrorDescription() const
{
    return m_errorDescription;
}

bool DescribeTaskDetailResponse::ErrorDescriptionHasBeenSet() const
{
    return m_errorDescriptionHasBeenSet;
}

string DescribeTaskDetailResponse::GetLabel() const
{
    return m_label;
}

bool DescribeTaskDetailResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

SegmentCosUrlList DescribeTaskDetailResponse::GetSegmentCosUrlList() const
{
    return m_segmentCosUrlList;
}

bool DescribeTaskDetailResponse::SegmentCosUrlListHasBeenSet() const
{
    return m_segmentCosUrlListHasBeenSet;
}

string DescribeTaskDetailResponse::GetAudioText() const
{
    return m_audioText;
}

bool DescribeTaskDetailResponse::AudioTextHasBeenSet() const
{
    return m_audioTextHasBeenSet;
}

int64_t DescribeTaskDetailResponse::GetTryInSeconds() const
{
    return m_tryInSeconds;
}

bool DescribeTaskDetailResponse::TryInSecondsHasBeenSet() const
{
    return m_tryInSecondsHasBeenSet;
}

vector<RcbAsr> DescribeTaskDetailResponse::GetAsrs() const
{
    return m_asrs;
}

bool DescribeTaskDetailResponse::AsrsHasBeenSet() const
{
    return m_asrsHasBeenSet;
}


