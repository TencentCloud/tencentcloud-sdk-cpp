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

#include <tencentcloud/clb/v20180317/model/HealthCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

HealthCheck::HealthCheck() :
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unHealthNumHasBeenSet(false),
    m_httpCodeHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_httpCheckMethodHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheck::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnHealthNum") && !value["UnHealthNum"].IsNull())
    {
        if (!value["UnHealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.UnHealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unHealthNum = value["UnHealthNum"].GetInt64();
        m_unHealthNumHasBeenSet = true;
    }

    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HttpCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetInt64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckDomain") && !value["HttpCheckDomain"].IsNull())
    {
        if (!value["HttpCheckDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HttpCheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckDomain = string(value["HttpCheckDomain"].GetString());
        m_httpCheckDomainHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckMethod") && !value["HttpCheckMethod"].IsNull())
    {
        if (!value["HttpCheckMethod"].IsString())
        {
            return CoreInternalOutcome(Error("response `HealthCheck.HttpCheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckMethod = string(value["HttpCheckMethod"].GetString());
        m_httpCheckMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheck::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_healthSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unHealthNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnHealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unHealthNum, allocator);
    }

    if (m_httpCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpCheckDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_httpCheckDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckMethodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_httpCheckMethod.c_str(), allocator).Move(), allocator);
    }

}


int64_t HealthCheck::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void HealthCheck::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool HealthCheck::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t HealthCheck::GetTimeOut() const
{
    return m_timeOut;
}

void HealthCheck::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool HealthCheck::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t HealthCheck::GetIntervalTime() const
{
    return m_intervalTime;
}

void HealthCheck::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool HealthCheck::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t HealthCheck::GetHealthNum() const
{
    return m_healthNum;
}

void HealthCheck::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool HealthCheck::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t HealthCheck::GetUnHealthNum() const
{
    return m_unHealthNum;
}

void HealthCheck::SetUnHealthNum(const int64_t& _unHealthNum)
{
    m_unHealthNum = _unHealthNum;
    m_unHealthNumHasBeenSet = true;
}

bool HealthCheck::UnHealthNumHasBeenSet() const
{
    return m_unHealthNumHasBeenSet;
}

int64_t HealthCheck::GetHttpCode() const
{
    return m_httpCode;
}

void HealthCheck::SetHttpCode(const int64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool HealthCheck::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string HealthCheck::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void HealthCheck::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool HealthCheck::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

string HealthCheck::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void HealthCheck::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool HealthCheck::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

string HealthCheck::GetHttpCheckMethod() const
{
    return m_httpCheckMethod;
}

void HealthCheck::SetHttpCheckMethod(const string& _httpCheckMethod)
{
    m_httpCheckMethod = _httpCheckMethod;
    m_httpCheckMethodHasBeenSet = true;
}

bool HealthCheck::HttpCheckMethodHasBeenSet() const
{
    return m_httpCheckMethodHasBeenSet;
}

