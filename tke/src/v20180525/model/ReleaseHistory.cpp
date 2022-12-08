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

#include <tencentcloud/tke/v20180525/model/ReleaseHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ReleaseHistory::ReleaseHistory() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_chartHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Revision` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_revision = value["Revision"].GetUint64();
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Chart") && !value["Chart"].IsNull())
    {
        if (!value["Chart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Chart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chart = string(value["Chart"].GetString());
        m_chartHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseHistory.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_revision, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_chartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chart.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseHistory::GetName() const
{
    return m_name;
}

void ReleaseHistory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReleaseHistory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReleaseHistory::GetNamespace() const
{
    return m_namespace;
}

void ReleaseHistory::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ReleaseHistory::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

uint64_t ReleaseHistory::GetRevision() const
{
    return m_revision;
}

void ReleaseHistory::SetRevision(const uint64_t& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool ReleaseHistory::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string ReleaseHistory::GetStatus() const
{
    return m_status;
}

void ReleaseHistory::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReleaseHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReleaseHistory::GetChart() const
{
    return m_chart;
}

void ReleaseHistory::SetChart(const string& _chart)
{
    m_chart = _chart;
    m_chartHasBeenSet = true;
}

bool ReleaseHistory::ChartHasBeenSet() const
{
    return m_chartHasBeenSet;
}

string ReleaseHistory::GetAppVersion() const
{
    return m_appVersion;
}

void ReleaseHistory::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool ReleaseHistory::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string ReleaseHistory::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ReleaseHistory::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ReleaseHistory::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string ReleaseHistory::GetDescription() const
{
    return m_description;
}

void ReleaseHistory::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReleaseHistory::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

