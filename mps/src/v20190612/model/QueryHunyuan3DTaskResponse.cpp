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

#include <tencentcloud/mps/v20190612/model/QueryHunyuan3DTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

QueryHunyuan3DTaskResponse::QueryHunyuan3DTaskResponse() :
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resultFile3DsHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_refImageHasBeenSet(false),
    m_multiViewImagesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_faceCountHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_queuePositionHasBeenSet(false)
{
}

CoreInternalOutcome QueryHunyuan3DTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultFile3Ds") && !rsp["ResultFile3Ds"].IsNull())
    {
        if (!rsp["ResultFile3Ds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultFile3Ds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResultFile3Ds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            File3D item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultFile3Ds.push_back(item);
        }
        m_resultFile3DsHasBeenSet = true;
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

    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Prompt") && !rsp["Prompt"].IsNull())
    {
        if (!rsp["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(rsp["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (rsp.HasMember("RefImage") && !rsp["RefImage"].IsNull())
    {
        if (!rsp["RefImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refImage = string(rsp["RefImage"].GetString());
        m_refImageHasBeenSet = true;
    }

    if (rsp.HasMember("MultiViewImages") && !rsp["MultiViewImages"].IsNull())
    {
        if (!rsp["MultiViewImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiViewImages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MultiViewImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ViewImage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiViewImages.push_back(item);
        }
        m_multiViewImagesHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FaceCount") && !rsp["FaceCount"].IsNull())
    {
        if (!rsp["FaceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_faceCount = rsp["FaceCount"].GetUint64();
        m_faceCountHasBeenSet = true;
    }

    if (rsp.HasMember("GenerateType") && !rsp["GenerateType"].IsNull())
    {
        if (!rsp["GenerateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GenerateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateType = string(rsp["GenerateType"].GetString());
        m_generateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("QueuePosition") && !rsp["QueuePosition"].IsNull())
    {
        if (!rsp["QueuePosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueuePosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuePosition = rsp["QueuePosition"].GetInt64();
        m_queuePositionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryHunyuan3DTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultFile3DsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFile3Ds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultFile3Ds.begin(); itr != m_resultFile3Ds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_refImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refImage.c_str(), allocator).Move(), allocator);
    }

    if (m_multiViewImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiViewImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiViewImages.begin(); itr != m_multiViewImages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_faceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceCount, allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_queuePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuePosition, allocator);
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


string QueryHunyuan3DTaskResponse::GetStatus() const
{
    return m_status;
}

bool QueryHunyuan3DTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t QueryHunyuan3DTaskResponse::GetProgress() const
{
    return m_progress;
}

bool QueryHunyuan3DTaskResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool QueryHunyuan3DTaskResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool QueryHunyuan3DTaskResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

vector<File3D> QueryHunyuan3DTaskResponse::GetResultFile3Ds() const
{
    return m_resultFile3Ds;
}

bool QueryHunyuan3DTaskResponse::ResultFile3DsHasBeenSet() const
{
    return m_resultFile3DsHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool QueryHunyuan3DTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetTaskType() const
{
    return m_taskType;
}

bool QueryHunyuan3DTaskResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetPrompt() const
{
    return m_prompt;
}

bool QueryHunyuan3DTaskResponse::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetRefImage() const
{
    return m_refImage;
}

bool QueryHunyuan3DTaskResponse::RefImageHasBeenSet() const
{
    return m_refImageHasBeenSet;
}

vector<ViewImage> QueryHunyuan3DTaskResponse::GetMultiViewImages() const
{
    return m_multiViewImages;
}

bool QueryHunyuan3DTaskResponse::MultiViewImagesHasBeenSet() const
{
    return m_multiViewImagesHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool QueryHunyuan3DTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool QueryHunyuan3DTaskResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t QueryHunyuan3DTaskResponse::GetFaceCount() const
{
    return m_faceCount;
}

bool QueryHunyuan3DTaskResponse::FaceCountHasBeenSet() const
{
    return m_faceCountHasBeenSet;
}

string QueryHunyuan3DTaskResponse::GetGenerateType() const
{
    return m_generateType;
}

bool QueryHunyuan3DTaskResponse::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

int64_t QueryHunyuan3DTaskResponse::GetQueuePosition() const
{
    return m_queuePosition;
}

bool QueryHunyuan3DTaskResponse::QueuePositionHasBeenSet() const
{
    return m_queuePositionHasBeenSet;
}


