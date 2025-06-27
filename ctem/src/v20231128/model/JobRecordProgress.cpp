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

#include <tencentcloud/ctem/v20231128/model/JobRecordProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

JobRecordProgress::JobRecordProgress() :
    m_doingHasBeenSet(false),
    m_doneHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_stopHasBeenSet(false),
    m_todoHasBeenSet(false)
{
}

CoreInternalOutcome JobRecordProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Doing") && !value["Doing"].IsNull())
    {
        if (!value["Doing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Doing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doing = value["Doing"].GetInt64();
        m_doingHasBeenSet = true;
    }

    if (value.HasMember("Done") && !value["Done"].IsNull())
    {
        if (!value["Done"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Done` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_done = value["Done"].GetInt64();
        m_doneHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Error` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_error = value["Error"].GetInt64();
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Stop") && !value["Stop"].IsNull())
    {
        if (!value["Stop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Stop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stop = value["Stop"].GetInt64();
        m_stopHasBeenSet = true;
    }

    if (value.HasMember("Todo") && !value["Todo"].IsNull())
    {
        if (!value["Todo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobRecordProgress.Todo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_todo = value["Todo"].GetInt64();
        m_todoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobRecordProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_doingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Doing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doing, allocator);
    }

    if (m_doneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Done";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_done, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_error, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_stopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stop, allocator);
    }

    if (m_todoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Todo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todo, allocator);
    }

}


int64_t JobRecordProgress::GetDoing() const
{
    return m_doing;
}

void JobRecordProgress::SetDoing(const int64_t& _doing)
{
    m_doing = _doing;
    m_doingHasBeenSet = true;
}

bool JobRecordProgress::DoingHasBeenSet() const
{
    return m_doingHasBeenSet;
}

int64_t JobRecordProgress::GetDone() const
{
    return m_done;
}

void JobRecordProgress::SetDone(const int64_t& _done)
{
    m_done = _done;
    m_doneHasBeenSet = true;
}

bool JobRecordProgress::DoneHasBeenSet() const
{
    return m_doneHasBeenSet;
}

int64_t JobRecordProgress::GetError() const
{
    return m_error;
}

void JobRecordProgress::SetError(const int64_t& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool JobRecordProgress::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

int64_t JobRecordProgress::GetTimeout() const
{
    return m_timeout;
}

void JobRecordProgress::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool JobRecordProgress::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t JobRecordProgress::GetStop() const
{
    return m_stop;
}

void JobRecordProgress::SetStop(const int64_t& _stop)
{
    m_stop = _stop;
    m_stopHasBeenSet = true;
}

bool JobRecordProgress::StopHasBeenSet() const
{
    return m_stopHasBeenSet;
}

int64_t JobRecordProgress::GetTodo() const
{
    return m_todo;
}

void JobRecordProgress::SetTodo(const int64_t& _todo)
{
    m_todo = _todo;
    m_todoHasBeenSet = true;
}

bool JobRecordProgress::TodoHasBeenSet() const
{
    return m_todoHasBeenSet;
}

