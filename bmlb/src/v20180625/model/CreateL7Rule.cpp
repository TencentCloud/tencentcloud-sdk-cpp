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

#include <tencentcloud/bmlb/v20180625/model/CreateL7Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

CreateL7Rule::CreateL7Rule() :
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_httpCodesHasBeenSet(false),
    m_httpCheckPathHasBeenSet(false),
    m_httpCheckDomainHasBeenSet(false),
    m_balanceModeHasBeenSet(false)
{
}

CoreInternalOutcome CreateL7Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("HttpCodes") && !value["HttpCodes"].IsNull())
    {
        if (!value["HttpCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.HttpCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HttpCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_httpCodes.push_back((*itr).GetUint64());
        }
        m_httpCodesHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckPath") && !value["HttpCheckPath"].IsNull())
    {
        if (!value["HttpCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.HttpCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckPath = string(value["HttpCheckPath"].GetString());
        m_httpCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HttpCheckDomain") && !value["HttpCheckDomain"].IsNull())
    {
        if (!value["HttpCheckDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.HttpCheckDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpCheckDomain = string(value["HttpCheckDomain"].GetString());
        m_httpCheckDomainHasBeenSet = true;
    }

    if (value.HasMember("BalanceMode") && !value["BalanceMode"].IsNull())
    {
        if (!value["BalanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateL7Rule.BalanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_balanceMode = string(value["BalanceMode"].GetString());
        m_balanceModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateL7Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
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

    if (m_balanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_balanceMode.c_str(), allocator).Move(), allocator);
    }

}


string CreateL7Rule::GetDomain() const
{
    return m_domain;
}

void CreateL7Rule::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateL7Rule::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateL7Rule::GetUrl() const
{
    return m_url;
}

void CreateL7Rule::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateL7Rule::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t CreateL7Rule::GetSessionExpire() const
{
    return m_sessionExpire;
}

void CreateL7Rule::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool CreateL7Rule::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t CreateL7Rule::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void CreateL7Rule::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool CreateL7Rule::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t CreateL7Rule::GetIntervalTime() const
{
    return m_intervalTime;
}

void CreateL7Rule::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool CreateL7Rule::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t CreateL7Rule::GetHealthNum() const
{
    return m_healthNum;
}

void CreateL7Rule::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool CreateL7Rule::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t CreateL7Rule::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void CreateL7Rule::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool CreateL7Rule::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

vector<uint64_t> CreateL7Rule::GetHttpCodes() const
{
    return m_httpCodes;
}

void CreateL7Rule::SetHttpCodes(const vector<uint64_t>& _httpCodes)
{
    m_httpCodes = _httpCodes;
    m_httpCodesHasBeenSet = true;
}

bool CreateL7Rule::HttpCodesHasBeenSet() const
{
    return m_httpCodesHasBeenSet;
}

string CreateL7Rule::GetHttpCheckPath() const
{
    return m_httpCheckPath;
}

void CreateL7Rule::SetHttpCheckPath(const string& _httpCheckPath)
{
    m_httpCheckPath = _httpCheckPath;
    m_httpCheckPathHasBeenSet = true;
}

bool CreateL7Rule::HttpCheckPathHasBeenSet() const
{
    return m_httpCheckPathHasBeenSet;
}

string CreateL7Rule::GetHttpCheckDomain() const
{
    return m_httpCheckDomain;
}

void CreateL7Rule::SetHttpCheckDomain(const string& _httpCheckDomain)
{
    m_httpCheckDomain = _httpCheckDomain;
    m_httpCheckDomainHasBeenSet = true;
}

bool CreateL7Rule::HttpCheckDomainHasBeenSet() const
{
    return m_httpCheckDomainHasBeenSet;
}

string CreateL7Rule::GetBalanceMode() const
{
    return m_balanceMode;
}

void CreateL7Rule::SetBalanceMode(const string& _balanceMode)
{
    m_balanceMode = _balanceMode;
    m_balanceModeHasBeenSet = true;
}

bool CreateL7Rule::BalanceModeHasBeenSet() const
{
    return m_balanceModeHasBeenSet;
}

