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

#include <tencentcloud/teo/v20220901/model/SpeedTestingStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingStatus::SpeedTestingStatus() :
    m_urlHasBeenSet(false),
    m_tlsHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_uAHasBeenSet(false),
    m_connectivityHasBeenSet(false),
    m_reachableHasBeenSet(false),
    m_timedOutHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Tls") && !value["Tls"].IsNull())
    {
        if (!value["Tls"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.Tls` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tls = value["Tls"].GetBool();
        m_tlsHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("UA") && !value["UA"].IsNull())
    {
        if (!value["UA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.UA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uA = string(value["UA"].GetString());
        m_uAHasBeenSet = true;
    }

    if (value.HasMember("Connectivity") && !value["Connectivity"].IsNull())
    {
        if (!value["Connectivity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.Connectivity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectivity = string(value["Connectivity"].GetString());
        m_connectivityHasBeenSet = true;
    }

    if (value.HasMember("Reachable") && !value["Reachable"].IsNull())
    {
        if (!value["Reachable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.Reachable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reachable = value["Reachable"].GetBool();
        m_reachableHasBeenSet = true;
    }

    if (value.HasMember("TimedOut") && !value["TimedOut"].IsNull())
    {
        if (!value["TimedOut"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatus.TimedOut` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_timedOut = value["TimedOut"].GetBool();
        m_timedOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tls, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_uAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uA.c_str(), allocator).Move(), allocator);
    }

    if (m_connectivityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connectivity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectivity.c_str(), allocator).Move(), allocator);
    }

    if (m_reachableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reachable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reachable, allocator);
    }

    if (m_timedOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timedOut, allocator);
    }

}


string SpeedTestingStatus::GetUrl() const
{
    return m_url;
}

void SpeedTestingStatus::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SpeedTestingStatus::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool SpeedTestingStatus::GetTls() const
{
    return m_tls;
}

void SpeedTestingStatus::SetTls(const bool& _tls)
{
    m_tls = _tls;
    m_tlsHasBeenSet = true;
}

bool SpeedTestingStatus::TlsHasBeenSet() const
{
    return m_tlsHasBeenSet;
}

string SpeedTestingStatus::GetCreatedOn() const
{
    return m_createdOn;
}

void SpeedTestingStatus::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool SpeedTestingStatus::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t SpeedTestingStatus::GetStatusCode() const
{
    return m_statusCode;
}

void SpeedTestingStatus::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool SpeedTestingStatus::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string SpeedTestingStatus::GetUA() const
{
    return m_uA;
}

void SpeedTestingStatus::SetUA(const string& _uA)
{
    m_uA = _uA;
    m_uAHasBeenSet = true;
}

bool SpeedTestingStatus::UAHasBeenSet() const
{
    return m_uAHasBeenSet;
}

string SpeedTestingStatus::GetConnectivity() const
{
    return m_connectivity;
}

void SpeedTestingStatus::SetConnectivity(const string& _connectivity)
{
    m_connectivity = _connectivity;
    m_connectivityHasBeenSet = true;
}

bool SpeedTestingStatus::ConnectivityHasBeenSet() const
{
    return m_connectivityHasBeenSet;
}

bool SpeedTestingStatus::GetReachable() const
{
    return m_reachable;
}

void SpeedTestingStatus::SetReachable(const bool& _reachable)
{
    m_reachable = _reachable;
    m_reachableHasBeenSet = true;
}

bool SpeedTestingStatus::ReachableHasBeenSet() const
{
    return m_reachableHasBeenSet;
}

bool SpeedTestingStatus::GetTimedOut() const
{
    return m_timedOut;
}

void SpeedTestingStatus::SetTimedOut(const bool& _timedOut)
{
    m_timedOut = _timedOut;
    m_timedOutHasBeenSet = true;
}

bool SpeedTestingStatus::TimedOutHasBeenSet() const
{
    return m_timedOutHasBeenSet;
}

