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

#include <tencentcloud/clb/v20180317/model/RuleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

RuleInput::RuleInput() :
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_schedulerHasBeenSet(false)
{
}

CoreInternalOutcome RuleInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInput.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInput.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuleInput.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleInput.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleInput.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleInput.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

}


string RuleInput::GetDomain() const
{
    return m_domain;
}

void RuleInput::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RuleInput::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RuleInput::GetUrl() const
{
    return m_url;
}

void RuleInput::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RuleInput::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t RuleInput::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void RuleInput::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool RuleInput::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

HealthCheck RuleInput::GetHealthCheck() const
{
    return m_healthCheck;
}

void RuleInput::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool RuleInput::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateInput RuleInput::GetCertificate() const
{
    return m_certificate;
}

void RuleInput::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool RuleInput::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string RuleInput::GetScheduler() const
{
    return m_scheduler;
}

void RuleInput::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool RuleInput::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

