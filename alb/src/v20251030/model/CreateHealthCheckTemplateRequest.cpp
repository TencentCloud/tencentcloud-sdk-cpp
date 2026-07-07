/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CreateHealthCheckTemplateRequest::CreateHealthCheckTemplateRequest() :
    m_dryRunHasBeenSet(false),
    m_healthCheckCodesHasBeenSet(false),
    m_healthCheckHealthyThresholdHasBeenSet(false),
    m_healthCheckHostHasBeenSet(false),
    m_healthCheckHttpVersionHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_healthCheckMethodHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckTemplateNameHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false),
    m_healthCheckUnhealthyThresholdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateHealthCheckTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_healthCheckCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthCheckCodes.begin(); itr != m_healthCheckCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthCheckHealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckHealthyThreshold, allocator);
    }

    if (m_healthCheckHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckHost.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHttpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHttpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckHttpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_healthCheckMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckPort, allocator);
    }

    if (m_healthCheckProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckTimeout, allocator);
    }

    if (m_healthCheckUnhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckUnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckUnhealthyThreshold, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateHealthCheckTemplateRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateHealthCheckTemplateRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

vector<string> CreateHealthCheckTemplateRequest::GetHealthCheckCodes() const
{
    return m_healthCheckCodes;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckCodes(const vector<string>& _healthCheckCodes)
{
    m_healthCheckCodes = _healthCheckCodes;
    m_healthCheckCodesHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckCodesHasBeenSet() const
{
    return m_healthCheckCodesHasBeenSet;
}

uint64_t CreateHealthCheckTemplateRequest::GetHealthCheckHealthyThreshold() const
{
    return m_healthCheckHealthyThreshold;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckHealthyThreshold(const uint64_t& _healthCheckHealthyThreshold)
{
    m_healthCheckHealthyThreshold = _healthCheckHealthyThreshold;
    m_healthCheckHealthyThresholdHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckHealthyThresholdHasBeenSet() const
{
    return m_healthCheckHealthyThresholdHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckHost() const
{
    return m_healthCheckHost;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckHost(const string& _healthCheckHost)
{
    m_healthCheckHost = _healthCheckHost;
    m_healthCheckHostHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckHostHasBeenSet() const
{
    return m_healthCheckHostHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckHttpVersion() const
{
    return m_healthCheckHttpVersion;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckHttpVersion(const string& _healthCheckHttpVersion)
{
    m_healthCheckHttpVersion = _healthCheckHttpVersion;
    m_healthCheckHttpVersionHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckHttpVersionHasBeenSet() const
{
    return m_healthCheckHttpVersionHasBeenSet;
}

uint64_t CreateHealthCheckTemplateRequest::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckMethod() const
{
    return m_healthCheckMethod;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckMethod(const string& _healthCheckMethod)
{
    m_healthCheckMethod = _healthCheckMethod;
    m_healthCheckMethodHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckMethodHasBeenSet() const
{
    return m_healthCheckMethodHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

uint64_t CreateHealthCheckTemplateRequest::GetHealthCheckPort() const
{
    return m_healthCheckPort;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckPort(const uint64_t& _healthCheckPort)
{
    m_healthCheckPort = _healthCheckPort;
    m_healthCheckPortHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckPortHasBeenSet() const
{
    return m_healthCheckPortHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckProtocol() const
{
    return m_healthCheckProtocol;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckProtocol(const string& _healthCheckProtocol)
{
    m_healthCheckProtocol = _healthCheckProtocol;
    m_healthCheckProtocolHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckProtocolHasBeenSet() const
{
    return m_healthCheckProtocolHasBeenSet;
}

string CreateHealthCheckTemplateRequest::GetHealthCheckTemplateName() const
{
    return m_healthCheckTemplateName;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckTemplateName(const string& _healthCheckTemplateName)
{
    m_healthCheckTemplateName = _healthCheckTemplateName;
    m_healthCheckTemplateNameHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckTemplateNameHasBeenSet() const
{
    return m_healthCheckTemplateNameHasBeenSet;
}

uint64_t CreateHealthCheckTemplateRequest::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

uint64_t CreateHealthCheckTemplateRequest::GetHealthCheckUnhealthyThreshold() const
{
    return m_healthCheckUnhealthyThreshold;
}

void CreateHealthCheckTemplateRequest::SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold)
{
    m_healthCheckUnhealthyThreshold = _healthCheckUnhealthyThreshold;
    m_healthCheckUnhealthyThresholdHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::HealthCheckUnhealthyThresholdHasBeenSet() const
{
    return m_healthCheckUnhealthyThresholdHasBeenSet;
}

vector<TagInfo> CreateHealthCheckTemplateRequest::GetTags() const
{
    return m_tags;
}

void CreateHealthCheckTemplateRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateHealthCheckTemplateRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


