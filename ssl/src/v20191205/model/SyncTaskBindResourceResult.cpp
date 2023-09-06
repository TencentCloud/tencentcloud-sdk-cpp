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

#include <tencentcloud/ssl/v20191205/model/SyncTaskBindResourceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

SyncTaskBindResourceResult::SyncTaskBindResourceResult() :
    m_taskIdHasBeenSet(false),
    m_bindResourceResultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_cacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome SyncTaskBindResourceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTaskBindResourceResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("BindResourceResult") && !value["BindResourceResult"].IsNull())
    {
        if (!value["BindResourceResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncTaskBindResourceResult.BindResourceResult` is not array type"));

        const rapidjson::Value &tmpValue = value["BindResourceResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindResourceResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindResourceResult.push_back(item);
        }
        m_bindResourceResultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTaskBindResourceResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTaskBindResourceResult.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncTaskBindResourceResult.CacheTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = string(value["CacheTime"].GetString());
        m_cacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncTaskBindResourceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindResourceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindResourceResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindResourceResult.begin(); itr != m_bindResourceResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheTime.c_str(), allocator).Move(), allocator);
    }

}


string SyncTaskBindResourceResult::GetTaskId() const
{
    return m_taskId;
}

void SyncTaskBindResourceResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SyncTaskBindResourceResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<BindResourceResult> SyncTaskBindResourceResult::GetBindResourceResult() const
{
    return m_bindResourceResult;
}

void SyncTaskBindResourceResult::SetBindResourceResult(const vector<BindResourceResult>& _bindResourceResult)
{
    m_bindResourceResult = _bindResourceResult;
    m_bindResourceResultHasBeenSet = true;
}

bool SyncTaskBindResourceResult::BindResourceResultHasBeenSet() const
{
    return m_bindResourceResultHasBeenSet;
}

uint64_t SyncTaskBindResourceResult::GetStatus() const
{
    return m_status;
}

void SyncTaskBindResourceResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SyncTaskBindResourceResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Error SyncTaskBindResourceResult::GetError() const
{
    return m_error;
}

void SyncTaskBindResourceResult::SetError(const Error& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool SyncTaskBindResourceResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string SyncTaskBindResourceResult::GetCacheTime() const
{
    return m_cacheTime;
}

void SyncTaskBindResourceResult::SetCacheTime(const string& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool SyncTaskBindResourceResult::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

