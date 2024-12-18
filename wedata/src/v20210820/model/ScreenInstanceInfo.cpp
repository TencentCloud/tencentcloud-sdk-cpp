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

#include <tencentcloud/wedata/v20210820/model/ScreenInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ScreenInstanceInfo::ScreenInstanceInfo() :
    m_countTagHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_runningNumHasBeenSet(false),
    m_waitRunningNumHasBeenSet(false),
    m_dependencyNumHasBeenSet(false),
    m_waitEventNumHasBeenSet(false),
    m_stoppingNumHasBeenSet(false),
    m_succeedNumHasBeenSet(false),
    m_failedNumHasBeenSet(false),
    m_skipRunningNumHasBeenSet(false)
{
}

CoreInternalOutcome ScreenInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountTag") && !value["CountTag"].IsNull())
    {
        if (!value["CountTag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.CountTag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countTag = value["CountTag"].GetUint64();
        m_countTagHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("RunningNum") && !value["RunningNum"].IsNull())
    {
        if (!value["RunningNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.RunningNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningNum = value["RunningNum"].GetUint64();
        m_runningNumHasBeenSet = true;
    }

    if (value.HasMember("WaitRunningNum") && !value["WaitRunningNum"].IsNull())
    {
        if (!value["WaitRunningNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.WaitRunningNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitRunningNum = value["WaitRunningNum"].GetUint64();
        m_waitRunningNumHasBeenSet = true;
    }

    if (value.HasMember("DependencyNum") && !value["DependencyNum"].IsNull())
    {
        if (!value["DependencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.DependencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyNum = value["DependencyNum"].GetUint64();
        m_dependencyNumHasBeenSet = true;
    }

    if (value.HasMember("WaitEventNum") && !value["WaitEventNum"].IsNull())
    {
        if (!value["WaitEventNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.WaitEventNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitEventNum = string(value["WaitEventNum"].GetString());
        m_waitEventNumHasBeenSet = true;
    }

    if (value.HasMember("StoppingNum") && !value["StoppingNum"].IsNull())
    {
        if (!value["StoppingNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.StoppingNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoppingNum = value["StoppingNum"].GetUint64();
        m_stoppingNumHasBeenSet = true;
    }

    if (value.HasMember("SucceedNum") && !value["SucceedNum"].IsNull())
    {
        if (!value["SucceedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.SucceedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_succeedNum = value["SucceedNum"].GetUint64();
        m_succeedNumHasBeenSet = true;
    }

    if (value.HasMember("FailedNum") && !value["FailedNum"].IsNull())
    {
        if (!value["FailedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.FailedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedNum = value["FailedNum"].GetUint64();
        m_failedNumHasBeenSet = true;
    }

    if (value.HasMember("SkipRunningNum") && !value["SkipRunningNum"].IsNull())
    {
        if (!value["SkipRunningNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInstanceInfo.SkipRunningNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skipRunningNum = value["SkipRunningNum"].GetInt64();
        m_skipRunningNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countTag, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_runningNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningNum, allocator);
    }

    if (m_waitRunningNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitRunningNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitRunningNum, allocator);
    }

    if (m_dependencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dependencyNum, allocator);
    }

    if (m_waitEventNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitEventNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitEventNum.c_str(), allocator).Move(), allocator);
    }

    if (m_stoppingNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoppingNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoppingNum, allocator);
    }

    if (m_succeedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucceedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succeedNum, allocator);
    }

    if (m_failedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedNum, allocator);
    }

    if (m_skipRunningNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipRunningNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipRunningNum, allocator);
    }

}


uint64_t ScreenInstanceInfo::GetCountTag() const
{
    return m_countTag;
}

void ScreenInstanceInfo::SetCountTag(const uint64_t& _countTag)
{
    m_countTag = _countTag;
    m_countTagHasBeenSet = true;
}

bool ScreenInstanceInfo::CountTagHasBeenSet() const
{
    return m_countTagHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetTotalNum() const
{
    return m_totalNum;
}

void ScreenInstanceInfo::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool ScreenInstanceInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetRunningNum() const
{
    return m_runningNum;
}

void ScreenInstanceInfo::SetRunningNum(const uint64_t& _runningNum)
{
    m_runningNum = _runningNum;
    m_runningNumHasBeenSet = true;
}

bool ScreenInstanceInfo::RunningNumHasBeenSet() const
{
    return m_runningNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetWaitRunningNum() const
{
    return m_waitRunningNum;
}

void ScreenInstanceInfo::SetWaitRunningNum(const uint64_t& _waitRunningNum)
{
    m_waitRunningNum = _waitRunningNum;
    m_waitRunningNumHasBeenSet = true;
}

bool ScreenInstanceInfo::WaitRunningNumHasBeenSet() const
{
    return m_waitRunningNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetDependencyNum() const
{
    return m_dependencyNum;
}

void ScreenInstanceInfo::SetDependencyNum(const uint64_t& _dependencyNum)
{
    m_dependencyNum = _dependencyNum;
    m_dependencyNumHasBeenSet = true;
}

bool ScreenInstanceInfo::DependencyNumHasBeenSet() const
{
    return m_dependencyNumHasBeenSet;
}

string ScreenInstanceInfo::GetWaitEventNum() const
{
    return m_waitEventNum;
}

void ScreenInstanceInfo::SetWaitEventNum(const string& _waitEventNum)
{
    m_waitEventNum = _waitEventNum;
    m_waitEventNumHasBeenSet = true;
}

bool ScreenInstanceInfo::WaitEventNumHasBeenSet() const
{
    return m_waitEventNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetStoppingNum() const
{
    return m_stoppingNum;
}

void ScreenInstanceInfo::SetStoppingNum(const uint64_t& _stoppingNum)
{
    m_stoppingNum = _stoppingNum;
    m_stoppingNumHasBeenSet = true;
}

bool ScreenInstanceInfo::StoppingNumHasBeenSet() const
{
    return m_stoppingNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetSucceedNum() const
{
    return m_succeedNum;
}

void ScreenInstanceInfo::SetSucceedNum(const uint64_t& _succeedNum)
{
    m_succeedNum = _succeedNum;
    m_succeedNumHasBeenSet = true;
}

bool ScreenInstanceInfo::SucceedNumHasBeenSet() const
{
    return m_succeedNumHasBeenSet;
}

uint64_t ScreenInstanceInfo::GetFailedNum() const
{
    return m_failedNum;
}

void ScreenInstanceInfo::SetFailedNum(const uint64_t& _failedNum)
{
    m_failedNum = _failedNum;
    m_failedNumHasBeenSet = true;
}

bool ScreenInstanceInfo::FailedNumHasBeenSet() const
{
    return m_failedNumHasBeenSet;
}

int64_t ScreenInstanceInfo::GetSkipRunningNum() const
{
    return m_skipRunningNum;
}

void ScreenInstanceInfo::SetSkipRunningNum(const int64_t& _skipRunningNum)
{
    m_skipRunningNum = _skipRunningNum;
    m_skipRunningNumHasBeenSet = true;
}

bool ScreenInstanceInfo::SkipRunningNumHasBeenSet() const
{
    return m_skipRunningNumHasBeenSet;
}

