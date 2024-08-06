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

#include <tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusRespData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

DescribeVRSTaskStatusRespData::DescribeVRSTaskStatusRespData() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusStrHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fastVoiceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVRSTaskStatusRespData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusStr") && !value["StatusStr"].IsNull())
    {
        if (!value["StatusStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.StatusStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusStr = string(value["StatusStr"].GetString());
        m_statusStrHasBeenSet = true;
    }

    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.VoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetInt64();
        m_voiceTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FastVoiceType") && !value["FastVoiceType"].IsNull())
    {
        if (!value["FastVoiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVRSTaskStatusRespData.FastVoiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fastVoiceType = string(value["FastVoiceType"].GetString());
        m_fastVoiceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeVRSTaskStatusRespData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusStr.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fastVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FastVoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fastVoiceType.c_str(), allocator).Move(), allocator);
    }

}


string DescribeVRSTaskStatusRespData::GetTaskId() const
{
    return m_taskId;
}

void DescribeVRSTaskStatusRespData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeVRSTaskStatusRespData::GetStatus() const
{
    return m_status;
}

void DescribeVRSTaskStatusRespData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVRSTaskStatusRespData::GetStatusStr() const
{
    return m_statusStr;
}

void DescribeVRSTaskStatusRespData::SetStatusStr(const string& _statusStr)
{
    m_statusStr = _statusStr;
    m_statusStrHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::StatusStrHasBeenSet() const
{
    return m_statusStrHasBeenSet;
}

int64_t DescribeVRSTaskStatusRespData::GetVoiceType() const
{
    return m_voiceType;
}

void DescribeVRSTaskStatusRespData::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string DescribeVRSTaskStatusRespData::GetErrorMsg() const
{
    return m_errorMsg;
}

void DescribeVRSTaskStatusRespData::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string DescribeVRSTaskStatusRespData::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeVRSTaskStatusRespData::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeVRSTaskStatusRespData::GetFastVoiceType() const
{
    return m_fastVoiceType;
}

void DescribeVRSTaskStatusRespData::SetFastVoiceType(const string& _fastVoiceType)
{
    m_fastVoiceType = _fastVoiceType;
    m_fastVoiceTypeHasBeenSet = true;
}

bool DescribeVRSTaskStatusRespData::FastVoiceTypeHasBeenSet() const
{
    return m_fastVoiceTypeHasBeenSet;
}

