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

#include <tencentcloud/apm/v20210622/model/ModifyApmInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ModifyApmInstanceRequest::ModifyApmInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_traceDurationHasBeenSet(false),
    m_openBillingHasBeenSet(false),
    m_spanDailyCountersHasBeenSet(false),
    m_errRateThresholdHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_errorSampleHasBeenSet(false),
    m_slowRequestSavedThresholdHasBeenSet(false),
    m_isRelatedLogHasBeenSet(false),
    m_logRegionHasBeenSet(false),
    m_logTopicIDHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_customShowTagsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_responseDurationWarningThresholdHasBeenSet(false),
    m_freeHasBeenSet(false),
    m_isRelatedDashboardHasBeenSet(false),
    m_dashboardTopicIDHasBeenSet(false),
    m_isSqlInjectionAnalysisHasBeenSet(false),
    m_isInstrumentationVulnerabilityScanHasBeenSet(false),
    m_isRemoteCommandExecutionAnalysisHasBeenSet(false),
    m_isMemoryHijackingAnalysisHasBeenSet(false),
    m_logIndexTypeHasBeenSet(false),
    m_logTraceIdKeyHasBeenSet(false)
{
}

string ModifyApmInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_traceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceDuration, allocator);
    }

    if (m_openBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenBilling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openBilling, allocator);
    }

    if (m_spanDailyCountersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanDailyCounters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spanDailyCounters, allocator);
    }

    if (m_errRateThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrRateThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_errRateThreshold, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_errorSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorSample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_errorSample, allocator);
    }

    if (m_slowRequestSavedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowRequestSavedThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_slowRequestSavedThreshold, allocator);
    }

    if (m_isRelatedLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRelatedLog, allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_customShowTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customShowTags.begin(); itr != m_customShowTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_responseDurationWarningThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseDurationWarningThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_responseDurationWarningThreshold, allocator);
    }

    if (m_freeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Free";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_free, allocator);
    }

    if (m_isRelatedDashboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedDashboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRelatedDashboard, allocator);
    }

    if (m_dashboardTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardTopicID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dashboardTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_isSqlInjectionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSqlInjectionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSqlInjectionAnalysis, allocator);
    }

    if (m_isInstrumentationVulnerabilityScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInstrumentationVulnerabilityScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isInstrumentationVulnerabilityScan, allocator);
    }

    if (m_isRemoteCommandExecutionAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteCommandExecutionAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRemoteCommandExecutionAnalysis, allocator);
    }

    if (m_isMemoryHijackingAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMemoryHijackingAnalysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMemoryHijackingAnalysis, allocator);
    }

    if (m_logIndexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogIndexType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logIndexType, allocator);
    }

    if (m_logTraceIdKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTraceIdKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTraceIdKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApmInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApmInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApmInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyApmInstanceRequest::GetName() const
{
    return m_name;
}

void ModifyApmInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyApmInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ApmTag> ModifyApmInstanceRequest::GetTags() const
{
    return m_tags;
}

void ModifyApmInstanceRequest::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyApmInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModifyApmInstanceRequest::GetDescription() const
{
    return m_description;
}

void ModifyApmInstanceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyApmInstanceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetTraceDuration() const
{
    return m_traceDuration;
}

void ModifyApmInstanceRequest::SetTraceDuration(const int64_t& _traceDuration)
{
    m_traceDuration = _traceDuration;
    m_traceDurationHasBeenSet = true;
}

bool ModifyApmInstanceRequest::TraceDurationHasBeenSet() const
{
    return m_traceDurationHasBeenSet;
}

bool ModifyApmInstanceRequest::GetOpenBilling() const
{
    return m_openBilling;
}

void ModifyApmInstanceRequest::SetOpenBilling(const bool& _openBilling)
{
    m_openBilling = _openBilling;
    m_openBillingHasBeenSet = true;
}

bool ModifyApmInstanceRequest::OpenBillingHasBeenSet() const
{
    return m_openBillingHasBeenSet;
}

uint64_t ModifyApmInstanceRequest::GetSpanDailyCounters() const
{
    return m_spanDailyCounters;
}

void ModifyApmInstanceRequest::SetSpanDailyCounters(const uint64_t& _spanDailyCounters)
{
    m_spanDailyCounters = _spanDailyCounters;
    m_spanDailyCountersHasBeenSet = true;
}

bool ModifyApmInstanceRequest::SpanDailyCountersHasBeenSet() const
{
    return m_spanDailyCountersHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetErrRateThreshold() const
{
    return m_errRateThreshold;
}

void ModifyApmInstanceRequest::SetErrRateThreshold(const int64_t& _errRateThreshold)
{
    m_errRateThreshold = _errRateThreshold;
    m_errRateThresholdHasBeenSet = true;
}

bool ModifyApmInstanceRequest::ErrRateThresholdHasBeenSet() const
{
    return m_errRateThresholdHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void ModifyApmInstanceRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ModifyApmInstanceRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetErrorSample() const
{
    return m_errorSample;
}

void ModifyApmInstanceRequest::SetErrorSample(const int64_t& _errorSample)
{
    m_errorSample = _errorSample;
    m_errorSampleHasBeenSet = true;
}

bool ModifyApmInstanceRequest::ErrorSampleHasBeenSet() const
{
    return m_errorSampleHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetSlowRequestSavedThreshold() const
{
    return m_slowRequestSavedThreshold;
}

void ModifyApmInstanceRequest::SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold)
{
    m_slowRequestSavedThreshold = _slowRequestSavedThreshold;
    m_slowRequestSavedThresholdHasBeenSet = true;
}

bool ModifyApmInstanceRequest::SlowRequestSavedThresholdHasBeenSet() const
{
    return m_slowRequestSavedThresholdHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsRelatedLog() const
{
    return m_isRelatedLog;
}

void ModifyApmInstanceRequest::SetIsRelatedLog(const int64_t& _isRelatedLog)
{
    m_isRelatedLog = _isRelatedLog;
    m_isRelatedLogHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsRelatedLogHasBeenSet() const
{
    return m_isRelatedLogHasBeenSet;
}

string ModifyApmInstanceRequest::GetLogRegion() const
{
    return m_logRegion;
}

void ModifyApmInstanceRequest::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

string ModifyApmInstanceRequest::GetLogTopicID() const
{
    return m_logTopicID;
}

void ModifyApmInstanceRequest::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

string ModifyApmInstanceRequest::GetLogSet() const
{
    return m_logSet;
}

void ModifyApmInstanceRequest::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

string ModifyApmInstanceRequest::GetLogSource() const
{
    return m_logSource;
}

void ModifyApmInstanceRequest::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

vector<string> ModifyApmInstanceRequest::GetCustomShowTags() const
{
    return m_customShowTags;
}

void ModifyApmInstanceRequest::SetCustomShowTags(const vector<string>& _customShowTags)
{
    m_customShowTags = _customShowTags;
    m_customShowTagsHasBeenSet = true;
}

bool ModifyApmInstanceRequest::CustomShowTagsHasBeenSet() const
{
    return m_customShowTagsHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void ModifyApmInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ModifyApmInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetResponseDurationWarningThreshold() const
{
    return m_responseDurationWarningThreshold;
}

void ModifyApmInstanceRequest::SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold)
{
    m_responseDurationWarningThreshold = _responseDurationWarningThreshold;
    m_responseDurationWarningThresholdHasBeenSet = true;
}

bool ModifyApmInstanceRequest::ResponseDurationWarningThresholdHasBeenSet() const
{
    return m_responseDurationWarningThresholdHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetFree() const
{
    return m_free;
}

void ModifyApmInstanceRequest::SetFree(const int64_t& _free)
{
    m_free = _free;
    m_freeHasBeenSet = true;
}

bool ModifyApmInstanceRequest::FreeHasBeenSet() const
{
    return m_freeHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsRelatedDashboard() const
{
    return m_isRelatedDashboard;
}

void ModifyApmInstanceRequest::SetIsRelatedDashboard(const int64_t& _isRelatedDashboard)
{
    m_isRelatedDashboard = _isRelatedDashboard;
    m_isRelatedDashboardHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsRelatedDashboardHasBeenSet() const
{
    return m_isRelatedDashboardHasBeenSet;
}

string ModifyApmInstanceRequest::GetDashboardTopicID() const
{
    return m_dashboardTopicID;
}

void ModifyApmInstanceRequest::SetDashboardTopicID(const string& _dashboardTopicID)
{
    m_dashboardTopicID = _dashboardTopicID;
    m_dashboardTopicIDHasBeenSet = true;
}

bool ModifyApmInstanceRequest::DashboardTopicIDHasBeenSet() const
{
    return m_dashboardTopicIDHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsSqlInjectionAnalysis() const
{
    return m_isSqlInjectionAnalysis;
}

void ModifyApmInstanceRequest::SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis)
{
    m_isSqlInjectionAnalysis = _isSqlInjectionAnalysis;
    m_isSqlInjectionAnalysisHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsSqlInjectionAnalysisHasBeenSet() const
{
    return m_isSqlInjectionAnalysisHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsInstrumentationVulnerabilityScan() const
{
    return m_isInstrumentationVulnerabilityScan;
}

void ModifyApmInstanceRequest::SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan)
{
    m_isInstrumentationVulnerabilityScan = _isInstrumentationVulnerabilityScan;
    m_isInstrumentationVulnerabilityScanHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsInstrumentationVulnerabilityScanHasBeenSet() const
{
    return m_isInstrumentationVulnerabilityScanHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsRemoteCommandExecutionAnalysis() const
{
    return m_isRemoteCommandExecutionAnalysis;
}

void ModifyApmInstanceRequest::SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis)
{
    m_isRemoteCommandExecutionAnalysis = _isRemoteCommandExecutionAnalysis;
    m_isRemoteCommandExecutionAnalysisHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsRemoteCommandExecutionAnalysisHasBeenSet() const
{
    return m_isRemoteCommandExecutionAnalysisHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetIsMemoryHijackingAnalysis() const
{
    return m_isMemoryHijackingAnalysis;
}

void ModifyApmInstanceRequest::SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis)
{
    m_isMemoryHijackingAnalysis = _isMemoryHijackingAnalysis;
    m_isMemoryHijackingAnalysisHasBeenSet = true;
}

bool ModifyApmInstanceRequest::IsMemoryHijackingAnalysisHasBeenSet() const
{
    return m_isMemoryHijackingAnalysisHasBeenSet;
}

int64_t ModifyApmInstanceRequest::GetLogIndexType() const
{
    return m_logIndexType;
}

void ModifyApmInstanceRequest::SetLogIndexType(const int64_t& _logIndexType)
{
    m_logIndexType = _logIndexType;
    m_logIndexTypeHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogIndexTypeHasBeenSet() const
{
    return m_logIndexTypeHasBeenSet;
}

string ModifyApmInstanceRequest::GetLogTraceIdKey() const
{
    return m_logTraceIdKey;
}

void ModifyApmInstanceRequest::SetLogTraceIdKey(const string& _logTraceIdKey)
{
    m_logTraceIdKey = _logTraceIdKey;
    m_logTraceIdKeyHasBeenSet = true;
}

bool ModifyApmInstanceRequest::LogTraceIdKeyHasBeenSet() const
{
    return m_logTraceIdKeyHasBeenSet;
}


