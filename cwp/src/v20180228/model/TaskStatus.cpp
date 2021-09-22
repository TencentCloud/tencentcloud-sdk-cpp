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

#include <tencentcloud/cwp/v20180228/model/TaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

TaskStatus::TaskStatus() :
    m_scanningHasBeenSet(false),
    m_okHasBeenSet(false),
    m_failHasBeenSet(false),
    m_stopHasBeenSet(false)
{
}

CoreInternalOutcome TaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scanning") && !value["Scanning"].IsNull())
    {
        if (!value["Scanning"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Scanning` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanning = string(value["Scanning"].GetString());
        m_scanningHasBeenSet = true;
    }

    if (value.HasMember("Ok") && !value["Ok"].IsNull())
    {
        if (!value["Ok"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Ok` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ok = string(value["Ok"].GetString());
        m_okHasBeenSet = true;
    }

    if (value.HasMember("Fail") && !value["Fail"].IsNull())
    {
        if (!value["Fail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Fail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fail = string(value["Fail"].GetString());
        m_failHasBeenSet = true;
    }

    if (value.HasMember("Stop") && !value["Stop"].IsNull())
    {
        if (!value["Stop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Stop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stop = string(value["Stop"].GetString());
        m_stopHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scanningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scanning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanning.c_str(), allocator).Move(), allocator);
    }

    if (m_okHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ok";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ok.c_str(), allocator).Move(), allocator);
    }

    if (m_failHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fail.c_str(), allocator).Move(), allocator);
    }

    if (m_stopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stop.c_str(), allocator).Move(), allocator);
    }

}


string TaskStatus::GetScanning() const
{
    return m_scanning;
}

void TaskStatus::SetScanning(const string& _scanning)
{
    m_scanning = _scanning;
    m_scanningHasBeenSet = true;
}

bool TaskStatus::ScanningHasBeenSet() const
{
    return m_scanningHasBeenSet;
}

string TaskStatus::GetOk() const
{
    return m_ok;
}

void TaskStatus::SetOk(const string& _ok)
{
    m_ok = _ok;
    m_okHasBeenSet = true;
}

bool TaskStatus::OkHasBeenSet() const
{
    return m_okHasBeenSet;
}

string TaskStatus::GetFail() const
{
    return m_fail;
}

void TaskStatus::SetFail(const string& _fail)
{
    m_fail = _fail;
    m_failHasBeenSet = true;
}

bool TaskStatus::FailHasBeenSet() const
{
    return m_failHasBeenSet;
}

string TaskStatus::GetStop() const
{
    return m_stop;
}

void TaskStatus::SetStop(const string& _stop)
{
    m_stop = _stop;
    m_stopHasBeenSet = true;
}

bool TaskStatus::StopHasBeenSet() const
{
    return m_stopHasBeenSet;
}

