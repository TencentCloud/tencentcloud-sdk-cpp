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

#include <tencentcloud/bmlb/v20180625/model/L7ListenerInfoLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L7ListenerInfoLocation::L7ListenerInfoLocation() :
    m_urlHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_httpCodesHasBeenSet(false),
    m_balanceModeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimestampHasBeenSet(false),
    m_backendSetHasBeenSet(false)
{
}

CoreInternalOutcome L7ListenerInfoLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckDomain") && !value["HttpCheckDomain"].IsNull())
    {
        if (!value["HttpCheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.HttpCheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckDomain = string(value["HttpCheckDomain"].GetString());
        m_httpCheckDomainHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("HttpCodes") && !value["HttpCodes"].IsNull())
    {
        if (!value["HttpCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.HttpCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HttpCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_httpCodes.push_back((*itr).GetUint64());
        }
        m_httpCodesHasBeenSet = true;
    }

    if (value.HasMember("BalanceMode") && !value["BalanceMode"].IsNull())
    {
        if (!value["BalanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.BalanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_balanceMode = string(value["BalanceMode"].GetString());
        m_balanceModeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }

    if (value.HasMember("BackendSet") && !value["BackendSet"].IsNull())
    {
        if (!value["BackendSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfoLocation.BackendSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackendSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L7ListenerInfoBackend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backendSet.push_back(item);
        }
        m_backendSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7ListenerInfoLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpire, allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_httpCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_httpCheckDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCheckDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpCheckDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_httpCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_httpCodes.begin(); itr != m_httpCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_balanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_balanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_backendSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backendSet.begin(); itr != m_backendSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string L7ListenerInfoLocation::GetUrl() const
{
    return m_url;
}

void L7ListenerInfoLocation::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool L7ListenerInfoLocation::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string L7ListenerInfoLocation::GetLocationId() const
{
    return m_locationId;
}

void L7ListenerInfoLocation::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool L7ListenerInfoLocation::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetSessionExpire() const
{
    return m_sessionExpire;
}

void L7ListenerInfoLocation::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool L7ListenerInfoLocation::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void L7ListenerInfoLocation::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool L7ListenerInfoLocation::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

string L7ListenerInfoLocation::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void L7ListenerInfoLocation::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool L7ListenerInfoLocation::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

string L7ListenerInfoLocation::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void L7ListenerInfoLocation::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool L7ListenerInfoLocation::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetIntervalTime() const
{
    return m_intervalTime;
}

void L7ListenerInfoLocation::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool L7ListenerInfoLocation::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetHealthNum() const
{
    return m_healthNum;
}

void L7ListenerInfoLocation::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool L7ListenerInfoLocation::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void L7ListenerInfoLocation::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool L7ListenerInfoLocation::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

vector<uint64_t> L7ListenerInfoLocation::GetHttpCodes() const
{
    return m_httpCodes;
}

void L7ListenerInfoLocation::SetHttpCodes(const vector<uint64_t>& _httpCodes)
{
    m_httpCodes = _httpCodes;
    m_httpCodesHasBeenSet = true;
}

bool L7ListenerInfoLocation::HttpCodesHasBeenSet() const
{
    return m_httpCodesHasBeenSet;
}

string L7ListenerInfoLocation::GetBalanceMode() const
{
    return m_balanceMode;
}

void L7ListenerInfoLocation::SetBalanceMode(const string& _balanceMode)
{
    m_balanceMode = _balanceMode;
    m_balanceModeHasBeenSet = true;
}

bool L7ListenerInfoLocation::BalanceModeHasBeenSet() const
{
    return m_balanceModeHasBeenSet;
}

int64_t L7ListenerInfoLocation::GetStatus() const
{
    return m_status;
}

void L7ListenerInfoLocation::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7ListenerInfoLocation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L7ListenerInfoLocation::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L7ListenerInfoLocation::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L7ListenerInfoLocation::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}

vector<L7ListenerInfoBackend> L7ListenerInfoLocation::GetBackendSet() const
{
    return m_backendSet;
}

void L7ListenerInfoLocation::SetBackendSet(const vector<L7ListenerInfoBackend>& _backendSet)
{
    m_backendSet = _backendSet;
    m_backendSetHasBeenSet = true;
}

bool L7ListenerInfoLocation::BackendSetHasBeenSet() const
{
    return m_backendSetHasBeenSet;
}

