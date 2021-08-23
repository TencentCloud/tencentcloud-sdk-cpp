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

#include <tencentcloud/tke/v20180525/model/PrometheusTemplateModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusTemplateModify::PrometheusTemplateModify() :
    m_nameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_alertRulesHasBeenSet(false),
    m_recordRulesHasBeenSet(false),
    m_serviceMonitorsHasBeenSet(false),
    m_podMonitorsHasBeenSet(false),
    m_rawJobsHasBeenSet(false),
    m_alertDetailRulesHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusTemplateModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("AlertRules") && !value["AlertRules"].IsNull())
    {
        if (!value["AlertRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.AlertRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AlertRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alertRules.push_back(item);
        }
        m_alertRulesHasBeenSet = true;
    }

    if (value.HasMember("RecordRules") && !value["RecordRules"].IsNull())
    {
        if (!value["RecordRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.RecordRules` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.ServiceMonitors` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.PodMonitors` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.RawJobs` is not array type"));

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

    if (value.HasMember("AlertDetailRules") && !value["AlertDetailRules"].IsNull())
    {
        if (!value["AlertDetailRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTemplateModify.AlertDetailRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AlertDetailRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertRuleDetail item;
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


    return CoreInternalOutcome(true);
}

void PrometheusTemplateModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_alertRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alertRules.begin(); itr != m_alertRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string PrometheusTemplateModify::GetName() const
{
    return m_name;
}

void PrometheusTemplateModify::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusTemplateModify::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusTemplateModify::GetDescribe() const
{
    return m_describe;
}

void PrometheusTemplateModify::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool PrometheusTemplateModify::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

vector<PrometheusAlertRule> PrometheusTemplateModify::GetAlertRules() const
{
    return m_alertRules;
}

void PrometheusTemplateModify::SetAlertRules(const vector<PrometheusAlertRule>& _alertRules)
{
    m_alertRules = _alertRules;
    m_alertRulesHasBeenSet = true;
}

bool PrometheusTemplateModify::AlertRulesHasBeenSet() const
{
    return m_alertRulesHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemplateModify::GetRecordRules() const
{
    return m_recordRules;
}

void PrometheusTemplateModify::SetRecordRules(const vector<PrometheusConfigItem>& _recordRules)
{
    m_recordRules = _recordRules;
    m_recordRulesHasBeenSet = true;
}

bool PrometheusTemplateModify::RecordRulesHasBeenSet() const
{
    return m_recordRulesHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemplateModify::GetServiceMonitors() const
{
    return m_serviceMonitors;
}

void PrometheusTemplateModify::SetServiceMonitors(const vector<PrometheusConfigItem>& _serviceMonitors)
{
    m_serviceMonitors = _serviceMonitors;
    m_serviceMonitorsHasBeenSet = true;
}

bool PrometheusTemplateModify::ServiceMonitorsHasBeenSet() const
{
    return m_serviceMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemplateModify::GetPodMonitors() const
{
    return m_podMonitors;
}

void PrometheusTemplateModify::SetPodMonitors(const vector<PrometheusConfigItem>& _podMonitors)
{
    m_podMonitors = _podMonitors;
    m_podMonitorsHasBeenSet = true;
}

bool PrometheusTemplateModify::PodMonitorsHasBeenSet() const
{
    return m_podMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> PrometheusTemplateModify::GetRawJobs() const
{
    return m_rawJobs;
}

void PrometheusTemplateModify::SetRawJobs(const vector<PrometheusConfigItem>& _rawJobs)
{
    m_rawJobs = _rawJobs;
    m_rawJobsHasBeenSet = true;
}

bool PrometheusTemplateModify::RawJobsHasBeenSet() const
{
    return m_rawJobsHasBeenSet;
}

vector<PrometheusAlertRuleDetail> PrometheusTemplateModify::GetAlertDetailRules() const
{
    return m_alertDetailRules;
}

void PrometheusTemplateModify::SetAlertDetailRules(const vector<PrometheusAlertRuleDetail>& _alertDetailRules)
{
    m_alertDetailRules = _alertDetailRules;
    m_alertDetailRulesHasBeenSet = true;
}

bool PrometheusTemplateModify::AlertDetailRulesHasBeenSet() const
{
    return m_alertDetailRulesHasBeenSet;
}

