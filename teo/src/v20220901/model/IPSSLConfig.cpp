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

#include <tencentcloud/teo/v20220901/model/IPSSLConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPSSLConfig::IPSSLConfig() :
    m_associatedDomainHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome IPSSLConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssociatedDomain") && !value["AssociatedDomain"].IsNull())
    {
        if (!value["AssociatedDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSSLConfig.AssociatedDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedDomain = string(value["AssociatedDomain"].GetString());
        m_associatedDomainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPSSLConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPSSLConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_associatedDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string IPSSLConfig::GetAssociatedDomain() const
{
    return m_associatedDomain;
}

void IPSSLConfig::SetAssociatedDomain(const string& _associatedDomain)
{
    m_associatedDomain = _associatedDomain;
    m_associatedDomainHasBeenSet = true;
}

bool IPSSLConfig::AssociatedDomainHasBeenSet() const
{
    return m_associatedDomainHasBeenSet;
}

string IPSSLConfig::GetStatus() const
{
    return m_status;
}

void IPSSLConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IPSSLConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

