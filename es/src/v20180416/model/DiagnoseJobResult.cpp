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

#include <tencentcloud/es/v20180416/model/DiagnoseJobResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiagnoseJobResult::DiagnoseJobResult() :
    m_jobNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_adviseHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_metricDetailsHasBeenSet(false),
    m_logDetailsHasBeenSet(false),
    m_settingDetailsHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseJobResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Advise") && !value["Advise"].IsNull())
    {
        if (!value["Advise"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.Advise` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advise = string(value["Advise"].GetString());
        m_adviseHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("MetricDetails") && !value["MetricDetails"].IsNull())
    {
        if (!value["MetricDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.MetricDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricDetails.push_back(item);
        }
        m_metricDetailsHasBeenSet = true;
    }

    if (value.HasMember("LogDetails") && !value["LogDetails"].IsNull())
    {
        if (!value["LogDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.LogDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["LogDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logDetails.push_back(item);
        }
        m_logDetailsHasBeenSet = true;
    }

    if (value.HasMember("SettingDetails") && !value["SettingDetails"].IsNull())
    {
        if (!value["SettingDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobResult.SettingDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["SettingDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SettingDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_settingDetails.push_back(item);
        }
        m_settingDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseJobResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_adviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advise.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDetails.begin(); itr != m_metricDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logDetails.begin(); itr != m_logDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_settingDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettingDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_settingDetails.begin(); itr != m_settingDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DiagnoseJobResult::GetJobName() const
{
    return m_jobName;
}

void DiagnoseJobResult::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DiagnoseJobResult::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

int64_t DiagnoseJobResult::GetStatus() const
{
    return m_status;
}

void DiagnoseJobResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DiagnoseJobResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DiagnoseJobResult::GetScore() const
{
    return m_score;
}

void DiagnoseJobResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DiagnoseJobResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string DiagnoseJobResult::GetSummary() const
{
    return m_summary;
}

void DiagnoseJobResult::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool DiagnoseJobResult::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string DiagnoseJobResult::GetAdvise() const
{
    return m_advise;
}

void DiagnoseJobResult::SetAdvise(const string& _advise)
{
    m_advise = _advise;
    m_adviseHasBeenSet = true;
}

bool DiagnoseJobResult::AdviseHasBeenSet() const
{
    return m_adviseHasBeenSet;
}

string DiagnoseJobResult::GetDetail() const
{
    return m_detail;
}

void DiagnoseJobResult::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool DiagnoseJobResult::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

vector<MetricDetail> DiagnoseJobResult::GetMetricDetails() const
{
    return m_metricDetails;
}

void DiagnoseJobResult::SetMetricDetails(const vector<MetricDetail>& _metricDetails)
{
    m_metricDetails = _metricDetails;
    m_metricDetailsHasBeenSet = true;
}

bool DiagnoseJobResult::MetricDetailsHasBeenSet() const
{
    return m_metricDetailsHasBeenSet;
}

vector<LogDetail> DiagnoseJobResult::GetLogDetails() const
{
    return m_logDetails;
}

void DiagnoseJobResult::SetLogDetails(const vector<LogDetail>& _logDetails)
{
    m_logDetails = _logDetails;
    m_logDetailsHasBeenSet = true;
}

bool DiagnoseJobResult::LogDetailsHasBeenSet() const
{
    return m_logDetailsHasBeenSet;
}

vector<SettingDetail> DiagnoseJobResult::GetSettingDetails() const
{
    return m_settingDetails;
}

void DiagnoseJobResult::SetSettingDetails(const vector<SettingDetail>& _settingDetails)
{
    m_settingDetails = _settingDetails;
    m_settingDetailsHasBeenSet = true;
}

bool DiagnoseJobResult::SettingDetailsHasBeenSet() const
{
    return m_settingDetailsHasBeenSet;
}

