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

#include <tencentcloud/alb/v20251030/model/HealthCheckTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

HealthCheckTemplate::HealthCheckTemplate() :
    m_createTimeHasBeenSet(false),
    m_healthCheckCodesHasBeenSet(false),
    m_healthCheckHealthyThresholdHasBeenSet(false),
    m_healthCheckHostHasBeenSet(false),
    m_healthCheckHttpVersionHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_healthCheckMethodHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckTemplateIdHasBeenSet(false),
    m_healthCheckTemplateNameHasBeenSet(false),
    m_healthCheckTimeoutHasBeenSet(false),
    m_healthCheckUnhealthyThresholdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckCodes") && !value["HealthCheckCodes"].IsNull())
    {
        if (!value["HealthCheckCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthCheckCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_healthCheckCodes.push_back((*itr).GetString());
        }
        m_healthCheckCodesHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHealthyThreshold") && !value["HealthCheckHealthyThreshold"].IsNull())
    {
        if (!value["HealthCheckHealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckHealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHealthyThreshold = value["HealthCheckHealthyThreshold"].GetUint64();
        m_healthCheckHealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHost") && !value["HealthCheckHost"].IsNull())
    {
        if (!value["HealthCheckHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHost = string(value["HealthCheckHost"].GetString());
        m_healthCheckHostHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckHttpVersion") && !value["HealthCheckHttpVersion"].IsNull())
    {
        if (!value["HealthCheckHttpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckHttpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckHttpVersion = string(value["HealthCheckHttpVersion"].GetString());
        m_healthCheckHttpVersionHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckInterval") && !value["HealthCheckInterval"].IsNull())
    {
        if (!value["HealthCheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckInterval = value["HealthCheckInterval"].GetUint64();
        m_healthCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckMethod") && !value["HealthCheckMethod"].IsNull())
    {
        if (!value["HealthCheckMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckMethod = string(value["HealthCheckMethod"].GetString());
        m_healthCheckMethodHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPath") && !value["HealthCheckPath"].IsNull())
    {
        if (!value["HealthCheckPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPath = string(value["HealthCheckPath"].GetString());
        m_healthCheckPathHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPort") && !value["HealthCheckPort"].IsNull())
    {
        if (!value["HealthCheckPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPort = value["HealthCheckPort"].GetUint64();
        m_healthCheckPortHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckProtocol") && !value["HealthCheckProtocol"].IsNull())
    {
        if (!value["HealthCheckProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckProtocol = string(value["HealthCheckProtocol"].GetString());
        m_healthCheckProtocolHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTemplateId") && !value["HealthCheckTemplateId"].IsNull())
    {
        if (!value["HealthCheckTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTemplateId = string(value["HealthCheckTemplateId"].GetString());
        m_healthCheckTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTemplateName") && !value["HealthCheckTemplateName"].IsNull())
    {
        if (!value["HealthCheckTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTemplateName = string(value["HealthCheckTemplateName"].GetString());
        m_healthCheckTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckTimeout") && !value["HealthCheckTimeout"].IsNull())
    {
        if (!value["HealthCheckTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckTimeout = value["HealthCheckTimeout"].GetUint64();
        m_healthCheckTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckUnhealthyThreshold") && !value["HealthCheckUnhealthyThreshold"].IsNull())
    {
        if (!value["HealthCheckUnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.HealthCheckUnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckUnhealthyThreshold = value["HealthCheckUnhealthyThreshold"].GetUint64();
        m_healthCheckUnhealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplate.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthCheckCodes.begin(); itr != m_healthCheckCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthCheckHealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckHealthyThreshold, allocator);
    }

    if (m_healthCheckHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckHost.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHttpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckHttpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckHttpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_healthCheckMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckPath.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckPort, allocator);
    }

    if (m_healthCheckProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckTimeout, allocator);
    }

    if (m_healthCheckUnhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckUnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckUnhealthyThreshold, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HealthCheckTemplate::GetCreateTime() const
{
    return m_createTime;
}

void HealthCheckTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HealthCheckTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> HealthCheckTemplate::GetHealthCheckCodes() const
{
    return m_healthCheckCodes;
}

void HealthCheckTemplate::SetHealthCheckCodes(const vector<string>& _healthCheckCodes)
{
    m_healthCheckCodes = _healthCheckCodes;
    m_healthCheckCodesHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckCodesHasBeenSet() const
{
    return m_healthCheckCodesHasBeenSet;
}

uint64_t HealthCheckTemplate::GetHealthCheckHealthyThreshold() const
{
    return m_healthCheckHealthyThreshold;
}

void HealthCheckTemplate::SetHealthCheckHealthyThreshold(const uint64_t& _healthCheckHealthyThreshold)
{
    m_healthCheckHealthyThreshold = _healthCheckHealthyThreshold;
    m_healthCheckHealthyThresholdHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckHealthyThresholdHasBeenSet() const
{
    return m_healthCheckHealthyThresholdHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckHost() const
{
    return m_healthCheckHost;
}

void HealthCheckTemplate::SetHealthCheckHost(const string& _healthCheckHost)
{
    m_healthCheckHost = _healthCheckHost;
    m_healthCheckHostHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckHostHasBeenSet() const
{
    return m_healthCheckHostHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckHttpVersion() const
{
    return m_healthCheckHttpVersion;
}

void HealthCheckTemplate::SetHealthCheckHttpVersion(const string& _healthCheckHttpVersion)
{
    m_healthCheckHttpVersion = _healthCheckHttpVersion;
    m_healthCheckHttpVersionHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckHttpVersionHasBeenSet() const
{
    return m_healthCheckHttpVersionHasBeenSet;
}

uint64_t HealthCheckTemplate::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void HealthCheckTemplate::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckMethod() const
{
    return m_healthCheckMethod;
}

void HealthCheckTemplate::SetHealthCheckMethod(const string& _healthCheckMethod)
{
    m_healthCheckMethod = _healthCheckMethod;
    m_healthCheckMethodHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckMethodHasBeenSet() const
{
    return m_healthCheckMethodHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckPath() const
{
    return m_healthCheckPath;
}

void HealthCheckTemplate::SetHealthCheckPath(const string& _healthCheckPath)
{
    m_healthCheckPath = _healthCheckPath;
    m_healthCheckPathHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckPathHasBeenSet() const
{
    return m_healthCheckPathHasBeenSet;
}

uint64_t HealthCheckTemplate::GetHealthCheckPort() const
{
    return m_healthCheckPort;
}

void HealthCheckTemplate::SetHealthCheckPort(const uint64_t& _healthCheckPort)
{
    m_healthCheckPort = _healthCheckPort;
    m_healthCheckPortHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckPortHasBeenSet() const
{
    return m_healthCheckPortHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckProtocol() const
{
    return m_healthCheckProtocol;
}

void HealthCheckTemplate::SetHealthCheckProtocol(const string& _healthCheckProtocol)
{
    m_healthCheckProtocol = _healthCheckProtocol;
    m_healthCheckProtocolHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckProtocolHasBeenSet() const
{
    return m_healthCheckProtocolHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckTemplateId() const
{
    return m_healthCheckTemplateId;
}

void HealthCheckTemplate::SetHealthCheckTemplateId(const string& _healthCheckTemplateId)
{
    m_healthCheckTemplateId = _healthCheckTemplateId;
    m_healthCheckTemplateIdHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckTemplateIdHasBeenSet() const
{
    return m_healthCheckTemplateIdHasBeenSet;
}

string HealthCheckTemplate::GetHealthCheckTemplateName() const
{
    return m_healthCheckTemplateName;
}

void HealthCheckTemplate::SetHealthCheckTemplateName(const string& _healthCheckTemplateName)
{
    m_healthCheckTemplateName = _healthCheckTemplateName;
    m_healthCheckTemplateNameHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckTemplateNameHasBeenSet() const
{
    return m_healthCheckTemplateNameHasBeenSet;
}

uint64_t HealthCheckTemplate::GetHealthCheckTimeout() const
{
    return m_healthCheckTimeout;
}

void HealthCheckTemplate::SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout)
{
    m_healthCheckTimeout = _healthCheckTimeout;
    m_healthCheckTimeoutHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckTimeoutHasBeenSet() const
{
    return m_healthCheckTimeoutHasBeenSet;
}

uint64_t HealthCheckTemplate::GetHealthCheckUnhealthyThreshold() const
{
    return m_healthCheckUnhealthyThreshold;
}

void HealthCheckTemplate::SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold)
{
    m_healthCheckUnhealthyThreshold = _healthCheckUnhealthyThreshold;
    m_healthCheckUnhealthyThresholdHasBeenSet = true;
}

bool HealthCheckTemplate::HealthCheckUnhealthyThresholdHasBeenSet() const
{
    return m_healthCheckUnhealthyThresholdHasBeenSet;
}

string HealthCheckTemplate::GetModifyTime() const
{
    return m_modifyTime;
}

void HealthCheckTemplate::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool HealthCheckTemplate::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<TagInfo> HealthCheckTemplate::GetTags() const
{
    return m_tags;
}

void HealthCheckTemplate::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HealthCheckTemplate::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

