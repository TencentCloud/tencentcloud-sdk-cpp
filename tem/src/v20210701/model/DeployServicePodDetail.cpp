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

#include <tencentcloud/tem/v20210701/model/DeployServicePodDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DeployServicePodDetail::DeployServicePodDetail() :
    m_podIdHasBeenSet(false),
    m_podStatusHasBeenSet(false),
    m_podVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_webshellHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DeployServicePodDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("PodStatus") && !value["PodStatus"].IsNull())
    {
        if (!value["PodStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.PodStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["PodStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_podStatus.push_back((*itr).GetString());
        }
        m_podStatusHasBeenSet = true;
    }

    if (value.HasMember("PodVersion") && !value["PodVersion"].IsNull())
    {
        if (!value["PodVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.PodVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podVersion = string(value["PodVersion"].GetString());
        m_podVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Webshell") && !value["Webshell"].IsNull())
    {
        if (!value["Webshell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.Webshell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webshell = string(value["Webshell"].GetString());
        m_webshellHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployServicePodDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployServicePodDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_podStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podStatus.begin(); itr != m_podStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_podVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_webshellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webshell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webshell.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DeployServicePodDetail::GetPodId() const
{
    return m_podId;
}

void DeployServicePodDetail::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool DeployServicePodDetail::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

vector<string> DeployServicePodDetail::GetPodStatus() const
{
    return m_podStatus;
}

void DeployServicePodDetail::SetPodStatus(const vector<string>& _podStatus)
{
    m_podStatus = _podStatus;
    m_podStatusHasBeenSet = true;
}

bool DeployServicePodDetail::PodStatusHasBeenSet() const
{
    return m_podStatusHasBeenSet;
}

string DeployServicePodDetail::GetPodVersion() const
{
    return m_podVersion;
}

void DeployServicePodDetail::SetPodVersion(const string& _podVersion)
{
    m_podVersion = _podVersion;
    m_podVersionHasBeenSet = true;
}

bool DeployServicePodDetail::PodVersionHasBeenSet() const
{
    return m_podVersionHasBeenSet;
}

string DeployServicePodDetail::GetCreateTime() const
{
    return m_createTime;
}

void DeployServicePodDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeployServicePodDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DeployServicePodDetail::GetZone() const
{
    return m_zone;
}

void DeployServicePodDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DeployServicePodDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DeployServicePodDetail::GetWebshell() const
{
    return m_webshell;
}

void DeployServicePodDetail::SetWebshell(const string& _webshell)
{
    m_webshell = _webshell;
    m_webshellHasBeenSet = true;
}

bool DeployServicePodDetail::WebshellHasBeenSet() const
{
    return m_webshellHasBeenSet;
}

string DeployServicePodDetail::GetStatus() const
{
    return m_status;
}

void DeployServicePodDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeployServicePodDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

