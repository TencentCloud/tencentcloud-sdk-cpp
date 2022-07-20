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

#include <tencentcloud/emr/v20190103/model/ApplicationStatics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ApplicationStatics::ApplicationStatics() :
    m_queueHasBeenSet(false),
    m_userHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_sumMemorySecondsHasBeenSet(false),
    m_sumVCoreSecondsHasBeenSet(false),
    m_sumHDFSBytesWrittenHasBeenSet(false),
    m_sumHDFSBytesReadHasBeenSet(false),
    m_countAppsHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationStatics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("SumMemorySeconds") && !value["SumMemorySeconds"].IsNull())
    {
        if (!value["SumMemorySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.SumMemorySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumMemorySeconds = value["SumMemorySeconds"].GetInt64();
        m_sumMemorySecondsHasBeenSet = true;
    }

    if (value.HasMember("SumVCoreSeconds") && !value["SumVCoreSeconds"].IsNull())
    {
        if (!value["SumVCoreSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.SumVCoreSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumVCoreSeconds = value["SumVCoreSeconds"].GetInt64();
        m_sumVCoreSecondsHasBeenSet = true;
    }

    if (value.HasMember("SumHDFSBytesWritten") && !value["SumHDFSBytesWritten"].IsNull())
    {
        if (!value["SumHDFSBytesWritten"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.SumHDFSBytesWritten` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumHDFSBytesWritten = string(value["SumHDFSBytesWritten"].GetString());
        m_sumHDFSBytesWrittenHasBeenSet = true;
    }

    if (value.HasMember("SumHDFSBytesRead") && !value["SumHDFSBytesRead"].IsNull())
    {
        if (!value["SumHDFSBytesRead"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.SumHDFSBytesRead` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumHDFSBytesRead = string(value["SumHDFSBytesRead"].GetString());
        m_sumHDFSBytesReadHasBeenSet = true;
    }

    if (value.HasMember("CountApps") && !value["CountApps"].IsNull())
    {
        if (!value["CountApps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationStatics.CountApps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countApps = value["CountApps"].GetInt64();
        m_countAppsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationStatics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_sumMemorySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumMemorySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumMemorySeconds, allocator);
    }

    if (m_sumVCoreSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumVCoreSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumVCoreSeconds, allocator);
    }

    if (m_sumHDFSBytesWrittenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumHDFSBytesWritten";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumHDFSBytesWritten.c_str(), allocator).Move(), allocator);
    }

    if (m_sumHDFSBytesReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumHDFSBytesRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumHDFSBytesRead.c_str(), allocator).Move(), allocator);
    }

    if (m_countAppsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountApps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countApps, allocator);
    }

}


string ApplicationStatics::GetQueue() const
{
    return m_queue;
}

void ApplicationStatics::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool ApplicationStatics::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string ApplicationStatics::GetUser() const
{
    return m_user;
}

void ApplicationStatics::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ApplicationStatics::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string ApplicationStatics::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationStatics::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationStatics::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

int64_t ApplicationStatics::GetSumMemorySeconds() const
{
    return m_sumMemorySeconds;
}

void ApplicationStatics::SetSumMemorySeconds(const int64_t& _sumMemorySeconds)
{
    m_sumMemorySeconds = _sumMemorySeconds;
    m_sumMemorySecondsHasBeenSet = true;
}

bool ApplicationStatics::SumMemorySecondsHasBeenSet() const
{
    return m_sumMemorySecondsHasBeenSet;
}

int64_t ApplicationStatics::GetSumVCoreSeconds() const
{
    return m_sumVCoreSeconds;
}

void ApplicationStatics::SetSumVCoreSeconds(const int64_t& _sumVCoreSeconds)
{
    m_sumVCoreSeconds = _sumVCoreSeconds;
    m_sumVCoreSecondsHasBeenSet = true;
}

bool ApplicationStatics::SumVCoreSecondsHasBeenSet() const
{
    return m_sumVCoreSecondsHasBeenSet;
}

string ApplicationStatics::GetSumHDFSBytesWritten() const
{
    return m_sumHDFSBytesWritten;
}

void ApplicationStatics::SetSumHDFSBytesWritten(const string& _sumHDFSBytesWritten)
{
    m_sumHDFSBytesWritten = _sumHDFSBytesWritten;
    m_sumHDFSBytesWrittenHasBeenSet = true;
}

bool ApplicationStatics::SumHDFSBytesWrittenHasBeenSet() const
{
    return m_sumHDFSBytesWrittenHasBeenSet;
}

string ApplicationStatics::GetSumHDFSBytesRead() const
{
    return m_sumHDFSBytesRead;
}

void ApplicationStatics::SetSumHDFSBytesRead(const string& _sumHDFSBytesRead)
{
    m_sumHDFSBytesRead = _sumHDFSBytesRead;
    m_sumHDFSBytesReadHasBeenSet = true;
}

bool ApplicationStatics::SumHDFSBytesReadHasBeenSet() const
{
    return m_sumHDFSBytesReadHasBeenSet;
}

int64_t ApplicationStatics::GetCountApps() const
{
    return m_countApps;
}

void ApplicationStatics::SetCountApps(const int64_t& _countApps)
{
    m_countApps = _countApps;
    m_countAppsHasBeenSet = true;
}

bool ApplicationStatics::CountAppsHasBeenSet() const
{
    return m_countAppsHasBeenSet;
}

