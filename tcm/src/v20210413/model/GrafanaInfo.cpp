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

#include <tencentcloud/tcm/v20210413/model/GrafanaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

GrafanaInfo::GrafanaInfo() :
    m_enabledHasBeenSet(false),
    m_internalURLHasBeenSet(false),
    m_publicURLHasBeenSet(false),
    m_publicFailedReasonHasBeenSet(false),
    m_publicFailedMessageHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("InternalURL") && !value["InternalURL"].IsNull())
    {
        if (!value["InternalURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInfo.InternalURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalURL = string(value["InternalURL"].GetString());
        m_internalURLHasBeenSet = true;
    }

    if (value.HasMember("PublicURL") && !value["PublicURL"].IsNull())
    {
        if (!value["PublicURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInfo.PublicURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicURL = string(value["PublicURL"].GetString());
        m_publicURLHasBeenSet = true;
    }

    if (value.HasMember("PublicFailedReason") && !value["PublicFailedReason"].IsNull())
    {
        if (!value["PublicFailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInfo.PublicFailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicFailedReason = string(value["PublicFailedReason"].GetString());
        m_publicFailedReasonHasBeenSet = true;
    }

    if (value.HasMember("PublicFailedMessage") && !value["PublicFailedMessage"].IsNull())
    {
        if (!value["PublicFailedMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInfo.PublicFailedMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicFailedMessage = string(value["PublicFailedMessage"].GetString());
        m_publicFailedMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_internalURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalURL.c_str(), allocator).Move(), allocator);
    }

    if (m_publicURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicURL.c_str(), allocator).Move(), allocator);
    }

    if (m_publicFailedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicFailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicFailedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_publicFailedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicFailedMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicFailedMessage.c_str(), allocator).Move(), allocator);
    }

}


bool GrafanaInfo::GetEnabled() const
{
    return m_enabled;
}

void GrafanaInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool GrafanaInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string GrafanaInfo::GetInternalURL() const
{
    return m_internalURL;
}

void GrafanaInfo::SetInternalURL(const string& _internalURL)
{
    m_internalURL = _internalURL;
    m_internalURLHasBeenSet = true;
}

bool GrafanaInfo::InternalURLHasBeenSet() const
{
    return m_internalURLHasBeenSet;
}

string GrafanaInfo::GetPublicURL() const
{
    return m_publicURL;
}

void GrafanaInfo::SetPublicURL(const string& _publicURL)
{
    m_publicURL = _publicURL;
    m_publicURLHasBeenSet = true;
}

bool GrafanaInfo::PublicURLHasBeenSet() const
{
    return m_publicURLHasBeenSet;
}

string GrafanaInfo::GetPublicFailedReason() const
{
    return m_publicFailedReason;
}

void GrafanaInfo::SetPublicFailedReason(const string& _publicFailedReason)
{
    m_publicFailedReason = _publicFailedReason;
    m_publicFailedReasonHasBeenSet = true;
}

bool GrafanaInfo::PublicFailedReasonHasBeenSet() const
{
    return m_publicFailedReasonHasBeenSet;
}

string GrafanaInfo::GetPublicFailedMessage() const
{
    return m_publicFailedMessage;
}

void GrafanaInfo::SetPublicFailedMessage(const string& _publicFailedMessage)
{
    m_publicFailedMessage = _publicFailedMessage;
    m_publicFailedMessageHasBeenSet = true;
}

bool GrafanaInfo::PublicFailedMessageHasBeenSet() const
{
    return m_publicFailedMessageHasBeenSet;
}

