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

#include <tencentcloud/cynosdb/v20190107/model/ServerlessQuotaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ServerlessQuotaConfig::ServerlessQuotaConfig() :
    m_instanceTypeHasBeenSet(false),
    m_maxCcuHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessQuotaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessQuotaConfig.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxCcu") && !value["MaxCcu"].IsNull())
    {
        if (!value["MaxCcu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessQuotaConfig.MaxCcu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCcu = value["MaxCcu"].GetDouble();
        m_maxCcuHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessQuotaConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessQuotaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCcuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCcu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCcu, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string ServerlessQuotaConfig::GetInstanceType() const
{
    return m_instanceType;
}

void ServerlessQuotaConfig::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ServerlessQuotaConfig::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

double ServerlessQuotaConfig::GetMaxCcu() const
{
    return m_maxCcu;
}

void ServerlessQuotaConfig::SetMaxCcu(const double& _maxCcu)
{
    m_maxCcu = _maxCcu;
    m_maxCcuHasBeenSet = true;
}

bool ServerlessQuotaConfig::MaxCcuHasBeenSet() const
{
    return m_maxCcuHasBeenSet;
}

bool ServerlessQuotaConfig::GetEnabled() const
{
    return m_enabled;
}

void ServerlessQuotaConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ServerlessQuotaConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

