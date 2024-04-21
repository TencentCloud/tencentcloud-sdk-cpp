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

#include <tencentcloud/ssl/v20191205/model/DeleteTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeleteTaskResult::DeleteTaskResult() :
    m_taskIdHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_cacheTimeHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.CacheTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = string(value["CacheTime"].GetString());
        m_cacheTimeHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteTaskResult.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DeleteTaskResult::GetTaskId() const
{
    return m_taskId;
}

void DeleteTaskResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteTaskResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeleteTaskResult::GetCertId() const
{
    return m_certId;
}

void DeleteTaskResult::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DeleteTaskResult::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

uint64_t DeleteTaskResult::GetStatus() const
{
    return m_status;
}

void DeleteTaskResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeleteTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeleteTaskResult::GetError() const
{
    return m_error;
}

void DeleteTaskResult::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool DeleteTaskResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string DeleteTaskResult::GetCacheTime() const
{
    return m_cacheTime;
}

void DeleteTaskResult::SetCacheTime(const string& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool DeleteTaskResult::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

vector<string> DeleteTaskResult::GetDomains() const
{
    return m_domains;
}

void DeleteTaskResult::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DeleteTaskResult::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

