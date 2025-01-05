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

#include <tencentcloud/tke/v20180525/model/ReleaseDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ReleaseDetails::ReleaseDetails() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_configHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_chartVersionHasBeenSet(false),
    m_chartNameHasBeenSet(false),
    m_chartDescriptionHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_firstDeployedTimeHasBeenSet(false),
    m_lastDeployedTimeHasBeenSet(false),
    m_computedValuesHasBeenSet(false),
    m_chartFromHasBeenSet(false),
    m_chartURLHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Notes") && !value["Notes"].IsNull())
    {
        if (!value["Notes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Notes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notes = string(value["Notes"].GetString());
        m_notesHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Manifest") && !value["Manifest"].IsNull())
    {
        if (!value["Manifest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Manifest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifest = string(value["Manifest"].GetString());
        m_manifestHasBeenSet = true;
    }

    if (value.HasMember("ChartVersion") && !value["ChartVersion"].IsNull())
    {
        if (!value["ChartVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ChartVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartVersion = string(value["ChartVersion"].GetString());
        m_chartVersionHasBeenSet = true;
    }

    if (value.HasMember("ChartName") && !value["ChartName"].IsNull())
    {
        if (!value["ChartName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ChartName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartName = string(value["ChartName"].GetString());
        m_chartNameHasBeenSet = true;
    }

    if (value.HasMember("ChartDescription") && !value["ChartDescription"].IsNull())
    {
        if (!value["ChartDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ChartDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartDescription = string(value["ChartDescription"].GetString());
        m_chartDescriptionHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("FirstDeployedTime") && !value["FirstDeployedTime"].IsNull())
    {
        if (!value["FirstDeployedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.FirstDeployedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDeployedTime = string(value["FirstDeployedTime"].GetString());
        m_firstDeployedTimeHasBeenSet = true;
    }

    if (value.HasMember("LastDeployedTime") && !value["LastDeployedTime"].IsNull())
    {
        if (!value["LastDeployedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.LastDeployedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDeployedTime = string(value["LastDeployedTime"].GetString());
        m_lastDeployedTimeHasBeenSet = true;
    }

    if (value.HasMember("ComputedValues") && !value["ComputedValues"].IsNull())
    {
        if (!value["ComputedValues"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ComputedValues` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computedValues = string(value["ComputedValues"].GetString());
        m_computedValuesHasBeenSet = true;
    }

    if (value.HasMember("ChartFrom") && !value["ChartFrom"].IsNull())
    {
        if (!value["ChartFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ChartFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartFrom = string(value["ChartFrom"].GetString());
        m_chartFromHasBeenSet = true;
    }

    if (value.HasMember("ChartURL") && !value["ChartURL"].IsNull())
    {
        if (!value["ChartURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.ChartURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartURL = string(value["ChartURL"].GetString());
        m_chartURLHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseDetails.Resources` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resources = string(value["Resources"].GetString());
        m_resourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_chartVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chartNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartName.c_str(), allocator).Move(), allocator);
    }

    if (m_chartDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_firstDeployedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDeployedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDeployedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDeployedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDeployedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDeployedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computedValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputedValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computedValues.c_str(), allocator).Move(), allocator);
    }

    if (m_chartFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_chartURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartURL.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resources.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseDetails::GetName() const
{
    return m_name;
}

void ReleaseDetails::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReleaseDetails::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReleaseDetails::GetNamespace() const
{
    return m_namespace;
}

void ReleaseDetails::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ReleaseDetails::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

uint64_t ReleaseDetails::GetVersion() const
{
    return m_version;
}

void ReleaseDetails::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ReleaseDetails::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ReleaseDetails::GetStatus() const
{
    return m_status;
}

void ReleaseDetails::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReleaseDetails::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReleaseDetails::GetDescription() const
{
    return m_description;
}

void ReleaseDetails::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReleaseDetails::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ReleaseDetails::GetNotes() const
{
    return m_notes;
}

void ReleaseDetails::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool ReleaseDetails::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string ReleaseDetails::GetConfig() const
{
    return m_config;
}

void ReleaseDetails::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ReleaseDetails::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ReleaseDetails::GetManifest() const
{
    return m_manifest;
}

void ReleaseDetails::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool ReleaseDetails::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string ReleaseDetails::GetChartVersion() const
{
    return m_chartVersion;
}

void ReleaseDetails::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool ReleaseDetails::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}

string ReleaseDetails::GetChartName() const
{
    return m_chartName;
}

void ReleaseDetails::SetChartName(const string& _chartName)
{
    m_chartName = _chartName;
    m_chartNameHasBeenSet = true;
}

bool ReleaseDetails::ChartNameHasBeenSet() const
{
    return m_chartNameHasBeenSet;
}

string ReleaseDetails::GetChartDescription() const
{
    return m_chartDescription;
}

void ReleaseDetails::SetChartDescription(const string& _chartDescription)
{
    m_chartDescription = _chartDescription;
    m_chartDescriptionHasBeenSet = true;
}

bool ReleaseDetails::ChartDescriptionHasBeenSet() const
{
    return m_chartDescriptionHasBeenSet;
}

string ReleaseDetails::GetAppVersion() const
{
    return m_appVersion;
}

void ReleaseDetails::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool ReleaseDetails::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string ReleaseDetails::GetFirstDeployedTime() const
{
    return m_firstDeployedTime;
}

void ReleaseDetails::SetFirstDeployedTime(const string& _firstDeployedTime)
{
    m_firstDeployedTime = _firstDeployedTime;
    m_firstDeployedTimeHasBeenSet = true;
}

bool ReleaseDetails::FirstDeployedTimeHasBeenSet() const
{
    return m_firstDeployedTimeHasBeenSet;
}

string ReleaseDetails::GetLastDeployedTime() const
{
    return m_lastDeployedTime;
}

void ReleaseDetails::SetLastDeployedTime(const string& _lastDeployedTime)
{
    m_lastDeployedTime = _lastDeployedTime;
    m_lastDeployedTimeHasBeenSet = true;
}

bool ReleaseDetails::LastDeployedTimeHasBeenSet() const
{
    return m_lastDeployedTimeHasBeenSet;
}

string ReleaseDetails::GetComputedValues() const
{
    return m_computedValues;
}

void ReleaseDetails::SetComputedValues(const string& _computedValues)
{
    m_computedValues = _computedValues;
    m_computedValuesHasBeenSet = true;
}

bool ReleaseDetails::ComputedValuesHasBeenSet() const
{
    return m_computedValuesHasBeenSet;
}

string ReleaseDetails::GetChartFrom() const
{
    return m_chartFrom;
}

void ReleaseDetails::SetChartFrom(const string& _chartFrom)
{
    m_chartFrom = _chartFrom;
    m_chartFromHasBeenSet = true;
}

bool ReleaseDetails::ChartFromHasBeenSet() const
{
    return m_chartFromHasBeenSet;
}

string ReleaseDetails::GetChartURL() const
{
    return m_chartURL;
}

void ReleaseDetails::SetChartURL(const string& _chartURL)
{
    m_chartURL = _chartURL;
    m_chartURLHasBeenSet = true;
}

bool ReleaseDetails::ChartURLHasBeenSet() const
{
    return m_chartURLHasBeenSet;
}

string ReleaseDetails::GetResources() const
{
    return m_resources;
}

void ReleaseDetails::SetResources(const string& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ReleaseDetails::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

