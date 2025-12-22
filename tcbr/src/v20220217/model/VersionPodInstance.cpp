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

#include <tencentcloud/tcbr/v20220217/model/VersionPodInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

VersionPodInstance::VersionPodInstance() :
    m_webshellHasBeenSet(false),
    m_podIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome VersionPodInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Webshell") && !value["Webshell"].IsNull())
    {
        if (!value["Webshell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionPodInstance.Webshell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webshell = string(value["Webshell"].GetString());
        m_webshellHasBeenSet = true;
    }

    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionPodInstance.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionPodInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionPodInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionPodInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webshellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webshell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webshell.c_str(), allocator).Move(), allocator);
    }

    if (m_podIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string VersionPodInstance::GetWebshell() const
{
    return m_webshell;
}

void VersionPodInstance::SetWebshell(const string& _webshell)
{
    m_webshell = _webshell;
    m_webshellHasBeenSet = true;
}

bool VersionPodInstance::WebshellHasBeenSet() const
{
    return m_webshellHasBeenSet;
}

string VersionPodInstance::GetPodId() const
{
    return m_podId;
}

void VersionPodInstance::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool VersionPodInstance::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

string VersionPodInstance::GetStatus() const
{
    return m_status;
}

void VersionPodInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VersionPodInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VersionPodInstance::GetCreateTime() const
{
    return m_createTime;
}

void VersionPodInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VersionPodInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

