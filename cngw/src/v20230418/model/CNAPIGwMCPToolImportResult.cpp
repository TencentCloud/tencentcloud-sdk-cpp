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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolImportResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwMCPToolImportResult::CNAPIGwMCPToolImportResult() :
    m_failedMessageHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_upstreamUrlHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwMCPToolImportResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedMessage") && !value["FailedMessage"].IsNull())
    {
        if (!value["FailedMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.FailedMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedMessage = string(value["FailedMessage"].GetString());
        m_failedMessageHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpstreamUrl") && !value["UpstreamUrl"].IsNull())
    {
        if (!value["UpstreamUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwMCPToolImportResult.UpstreamUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamUrl = string(value["UpstreamUrl"].GetString());
        m_upstreamUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwMCPToolImportResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamUrl.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwMCPToolImportResult::GetFailedMessage() const
{
    return m_failedMessage;
}

void CNAPIGwMCPToolImportResult::SetFailedMessage(const string& _failedMessage)
{
    m_failedMessage = _failedMessage;
    m_failedMessageHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::FailedMessageHasBeenSet() const
{
    return m_failedMessageHasBeenSet;
}

string CNAPIGwMCPToolImportResult::GetMethod() const
{
    return m_method;
}

void CNAPIGwMCPToolImportResult::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CNAPIGwMCPToolImportResult::GetName() const
{
    return m_name;
}

void CNAPIGwMCPToolImportResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwMCPToolImportResult::GetPath() const
{
    return m_path;
}

void CNAPIGwMCPToolImportResult::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CNAPIGwMCPToolImportResult::GetStatus() const
{
    return m_status;
}

void CNAPIGwMCPToolImportResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CNAPIGwMCPToolImportResult::GetUpstreamUrl() const
{
    return m_upstreamUrl;
}

void CNAPIGwMCPToolImportResult::SetUpstreamUrl(const string& _upstreamUrl)
{
    m_upstreamUrl = _upstreamUrl;
    m_upstreamUrlHasBeenSet = true;
}

bool CNAPIGwMCPToolImportResult::UpstreamUrlHasBeenSet() const
{
    return m_upstreamUrlHasBeenSet;
}

