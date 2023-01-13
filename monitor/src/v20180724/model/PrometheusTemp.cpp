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

#include <tencentcloud/monitor/v20180724/model/PrometheusTemp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusTemp::PrometheusTemp() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_recordRulesHasBeenSet(false),
    m_serviceMonitorsHasBeenSet(false),
    m_podMonitorsHasBeenSet(false),
    m_rawJobsHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_alertDetailRulesHasBeenSet(false),
    m_targetsTotalHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusTemp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("RecordRules") && !value["RecordRules"].IsNull())
    {
        if (!value["RecordRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.RecordRules` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordRules.push_back(item);
        }
        m_recordRulesHasBeenSet = true;
    }

    if (value.HasMember("ServiceMonitors") && !value["ServiceMonitors"].IsNull())
    {
        if (!value["ServiceMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.ServiceMonitors` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceMonitors.push_back(item);
        }
        m_serviceMonitorsHasBeenSet = true;
    }

    if (value.HasMember("PodMonitors") && !value["PodMonitors"].IsNull())
    {
        if (!value["PodMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.PodMonitors` is not array type"));

        const rapidjson::Value &tmpValue = value["PodMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podMonitors.push_back(item);
        }
        m_podMonitorsHasBeenSet = true;
    }

    if (value.HasMember("RawJobs") && !value["RawJobs"].IsNull())
    {
        if (!value["RawJobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.RawJobs` is not array type"));

        const rapidjson::Value &tmpValue = value["RawJobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rawJobs.push_back(item);
        }
        m_rawJobsHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AlertDetailRules") && !value["AlertDetailRules"].IsNull())
    {
        if (!value["AlertDetailRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.AlertDetailRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AlertDetailRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertPolicyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alertDetailRules.push_back(item);
        }
        m_alertDetailRulesHasBeenSet = true;
    }

    if (value.HasMember("TargetsTotal") && !value["TargetsTotal"].IsNull())
    {
        if (!value["TargetsTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemp.TargetsTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetsTotal = value["TargetsTotal"].GetInt64();
        m_targetsTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusTemp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_recordRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordRules.begin(); itr != m_recordRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceMonitors.begin(); itr != m_serviceMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_podMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podMonitors.begin(); itr != m_podMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rawJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawJobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rawJobs.begin(); itr != m_rawJobs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_alertDetailRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertDetailRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alertDetailRules.begin(); itr != m_alertDetailRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetsTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetsTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetsTotal, allocator);
    }

}


string PrometheusTemp::GetName() const
{
    return m_name;
}

void PrometheusTemp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusTemp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusTemp::GetLevel() const
{
    return m_level;
}

void PrometheusTemp::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool PrometheusTemp::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string PrometheusTemp::GetDescribe() const
{
    return m_describe;
}

void PrometheusTemp::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool PrometheusTemp::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemp::GetRecordRules() const
{
    return m_recordRules;
}

void PrometheusTemp::SetRecordRules(const vector<PrometheusConfigItem>& _recordRules)
{
    m_recordRules = _recordRules;
    m_recordRulesHasBeenSet = true;
}

bool PrometheusTemp::RecordRulesHasBeenSet() const
{
    return m_recordRulesHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemp::GetServiceMonitors() const
{
    return m_serviceMonitors;
}

void PrometheusTemp::SetServiceMonitors(const vector<PrometheusConfigItem>& _serviceMonitors)
{
    m_serviceMonitors = _serviceMonitors;
    m_serviceMonitorsHasBeenSet = true;
}

bool PrometheusTemp::ServiceMonitorsHasBeenSet() const
{
    return m_serviceMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemp::GetPodMonitors() const
{
    return m_podMonitors;
}

void PrometheusTemp::SetPodMonitors(const vector<PrometheusConfigItem>& _podMonitors)
{
    m_podMonitors = _podMonitors;
    m_podMonitorsHasBeenSet = true;
}

bool PrometheusTemp::PodMonitorsHasBeenSet() const
{
    return m_podMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemp::GetRawJobs() const
{
    return m_rawJobs;
}

void PrometheusTemp::SetRawJobs(const vector<PrometheusConfigItem>& _rawJobs)
{
    m_rawJobs = _rawJobs;
    m_rawJobsHasBeenSet = true;
}

bool PrometheusTemp::RawJobsHasBeenSet() const
{
    return m_rawJobsHasBeenSet;
}

string PrometheusTemp::GetTemplateId() const
{
    return m_templateId;
}

void PrometheusTemp::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool PrometheusTemp::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string PrometheusTemp::GetUpdateTime() const
{
    return m_updateTime;
}

void PrometheusTemp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PrometheusTemp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PrometheusTemp::GetVersion() const
{
    return m_version;
}

void PrometheusTemp::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PrometheusTemp::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

bool PrometheusTemp::GetIsDefault() const
{
    return m_isDefault;
}

void PrometheusTemp::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool PrometheusTemp::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

vector<PrometheusAlertPolicyItem> PrometheusTemp::GetAlertDetailRules() const
{
    return m_alertDetailRules;
}

void PrometheusTemp::SetAlertDetailRules(const vector<PrometheusAlertPolicyItem>& _alertDetailRules)
{
    m_alertDetailRules = _alertDetailRules;
    m_alertDetailRulesHasBeenSet = true;
}

bool PrometheusTemp::AlertDetailRulesHasBeenSet() const
{
    return m_alertDetailRulesHasBeenSet;
}

int64_t PrometheusTemp::GetTargetsTotal() const
{
    return m_targetsTotal;
}

void PrometheusTemp::SetTargetsTotal(const int64_t& _targetsTotal)
{
    m_targetsTotal = _targetsTotal;
    m_targetsTotalHasBeenSet = true;
}

bool PrometheusTemp::TargetsTotalHasBeenSet() const
{
    return m_targetsTotalHasBeenSet;
}

