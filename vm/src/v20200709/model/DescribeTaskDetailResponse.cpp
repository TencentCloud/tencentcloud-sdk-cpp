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

#include <tencentcloud/vm/v20200709/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20200709::Model;
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
    m_tryInSecondsHasBeenSet(false),
    m_imageSegmentsHasBeenSet(false),
    m_audioSegmentsHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_errorDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Error("response `Labels` is not array type"));

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
            return CoreInternalOutcome(Error("response `MediaInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `InputInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("TryInSeconds") && !rsp["TryInSeconds"].IsNull())
    {
        if (!rsp["TryInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TryInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryInSeconds = rsp["TryInSeconds"].GetInt64();
        m_tryInSecondsHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSegments") && !rsp["ImageSegments"].IsNull())
    {
        if (!rsp["ImageSegments"].IsArray())
            return CoreInternalOutcome(Error("response `ImageSegments` is not array type"));

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
            return CoreInternalOutcome(Error("response `AudioSegments` is not array type"));

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
            return CoreInternalOutcome(Error("response `ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(rsp["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorDescription") && !rsp["ErrorDescription"].IsNull())
    {
        if (!rsp["ErrorDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDescription = string(rsp["ErrorDescription"].GetString());
        m_errorDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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

int64_t DescribeTaskDetailResponse::GetTryInSeconds() const
{
    return m_tryInSeconds;
}

bool DescribeTaskDetailResponse::TryInSecondsHasBeenSet() const
{
    return m_tryInSecondsHasBeenSet;
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


