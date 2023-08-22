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

#include <tencentcloud/tts/v20190823/model/DescribeTtsTaskStatusRespData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tts::V20190823::Model;
using namespace std;

DescribeTtsTaskStatusRespData::DescribeTtsTaskStatusRespData() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusStrHasBeenSet(false),
    m_resultUrlHasBeenSet(false),
    m_subtitlesHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTtsTaskStatusRespData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusStr") && !value["StatusStr"].IsNull())
    {
        if (!value["StatusStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.StatusStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusStr = string(value["StatusStr"].GetString());
        m_statusStrHasBeenSet = true;
    }

    if (value.HasMember("ResultUrl") && !value["ResultUrl"].IsNull())
    {
        if (!value["ResultUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.ResultUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultUrl = string(value["ResultUrl"].GetString());
        m_resultUrlHasBeenSet = true;
    }

    if (value.HasMember("Subtitles") && !value["Subtitles"].IsNull())
    {
        if (!value["Subtitles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.Subtitles` is not array type"));

        const rapidjson::Value &tmpValue = value["Subtitles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Subtitle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitles.push_back(item);
        }
        m_subtitlesHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTtsTaskStatusRespData.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTtsTaskStatusRespData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resultUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subtitles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitles.begin(); itr != m_subtitles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string DescribeTtsTaskStatusRespData::GetTaskId() const
{
    return m_taskId;
}

void DescribeTtsTaskStatusRespData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeTtsTaskStatusRespData::GetStatus() const
{
    return m_status;
}

void DescribeTtsTaskStatusRespData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTtsTaskStatusRespData::GetStatusStr() const
{
    return m_statusStr;
}

void DescribeTtsTaskStatusRespData::SetStatusStr(const string& _statusStr)
{
    m_statusStr = _statusStr;
    m_statusStrHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::StatusStrHasBeenSet() const
{
    return m_statusStrHasBeenSet;
}

string DescribeTtsTaskStatusRespData::GetResultUrl() const
{
    return m_resultUrl;
}

void DescribeTtsTaskStatusRespData::SetResultUrl(const string& _resultUrl)
{
    m_resultUrl = _resultUrl;
    m_resultUrlHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::ResultUrlHasBeenSet() const
{
    return m_resultUrlHasBeenSet;
}

vector<Subtitle> DescribeTtsTaskStatusRespData::GetSubtitles() const
{
    return m_subtitles;
}

void DescribeTtsTaskStatusRespData::SetSubtitles(const vector<Subtitle>& _subtitles)
{
    m_subtitles = _subtitles;
    m_subtitlesHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::SubtitlesHasBeenSet() const
{
    return m_subtitlesHasBeenSet;
}

string DescribeTtsTaskStatusRespData::GetErrorMsg() const
{
    return m_errorMsg;
}

void DescribeTtsTaskStatusRespData::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DescribeTtsTaskStatusRespData::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

