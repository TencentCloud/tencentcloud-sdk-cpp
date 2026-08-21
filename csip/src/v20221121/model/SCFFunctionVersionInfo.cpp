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

#include <tencentcloud/csip/v20221121/model/SCFFunctionVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SCFFunctionVersionInfo::SCFFunctionVersionInfo() :
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome SCFFunctionVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionVersionInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SCFFunctionVersionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SCFFunctionVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string SCFFunctionVersionInfo::GetVersion() const
{
    return m_version;
}

void SCFFunctionVersionInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SCFFunctionVersionInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SCFFunctionVersionInfo::GetStatus() const
{
    return m_status;
}

void SCFFunctionVersionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SCFFunctionVersionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

