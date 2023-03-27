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

#include <tencentcloud/tiw/v20190919/model/TranscodeTaskSearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

TranscodeTaskSearchResult::TranscodeTaskSearchResult() :
    m_createTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_originalFilenameHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_isStaticHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTaskSearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OriginalFilename") && !value["OriginalFilename"].IsNull())
    {
        if (!value["OriginalFilename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.OriginalFilename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalFilename = string(value["OriginalFilename"].GetString());
        m_originalFilenameHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("IsStatic") && !value["IsStatic"].IsNull())
    {
        if (!value["IsStatic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskSearchResult.IsStatic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isStatic = value["IsStatic"].GetBool();
        m_isStaticHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTaskSearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_originalFilenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFilename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalFilename.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isStaticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStatic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isStatic, allocator);
    }

}


string TranscodeTaskSearchResult::GetCreateTime() const
{
    return m_createTime;
}

void TranscodeTaskSearchResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TranscodeTaskSearchResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TranscodeTaskSearchResult::GetTaskId() const
{
    return m_taskId;
}

void TranscodeTaskSearchResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TranscodeTaskSearchResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TranscodeTaskSearchResult::GetStatus() const
{
    return m_status;
}

void TranscodeTaskSearchResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TranscodeTaskSearchResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TranscodeTaskSearchResult::GetOriginalFilename() const
{
    return m_originalFilename;
}

void TranscodeTaskSearchResult::SetOriginalFilename(const string& _originalFilename)
{
    m_originalFilename = _originalFilename;
    m_originalFilenameHasBeenSet = true;
}

bool TranscodeTaskSearchResult::OriginalFilenameHasBeenSet() const
{
    return m_originalFilenameHasBeenSet;
}

int64_t TranscodeTaskSearchResult::GetSdkAppId() const
{
    return m_sdkAppId;
}

void TranscodeTaskSearchResult::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool TranscodeTaskSearchResult::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

TranscodeTaskResult TranscodeTaskSearchResult::GetResult() const
{
    return m_result;
}

void TranscodeTaskSearchResult::SetResult(const TranscodeTaskResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TranscodeTaskSearchResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

bool TranscodeTaskSearchResult::GetIsStatic() const
{
    return m_isStatic;
}

void TranscodeTaskSearchResult::SetIsStatic(const bool& _isStatic)
{
    m_isStatic = _isStatic;
    m_isStaticHasBeenSet = true;
}

bool TranscodeTaskSearchResult::IsStaticHasBeenSet() const
{
    return m_isStaticHasBeenSet;
}

