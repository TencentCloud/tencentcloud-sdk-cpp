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

#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateDataEngineRequest::UpdateDataEngineRequest() :
    m_sizeHasBeenSet(false),
    m_minClustersHasBeenSet(false),
    m_maxClustersHasBeenSet(false),
    m_autoResumeHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_autoSuspendHasBeenSet(false),
    m_crontabResumeSuspendHasBeenSet(false),
    m_crontabResumeSuspendStrategyHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_tolerableQueueTimeHasBeenSet(false),
    m_autoSuspendTimeHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticLimitHasBeenSet(false),
    m_sessionResourceTemplateHasBeenSet(false)
{
}

string UpdateDataEngineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_minClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinClusters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minClusters, allocator);
    }

    if (m_maxClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxClusters, allocator);
    }

    if (m_autoResumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoResume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoResume, allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSuspendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSuspend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSuspend, allocator);
    }

    if (m_crontabResumeSuspendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabResumeSuspend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crontabResumeSuspend, allocator);
    }

    if (m_crontabResumeSuspendStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabResumeSuspendStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crontabResumeSuspendStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_tolerableQueueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TolerableQueueTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tolerableQueueTime, allocator);
    }

    if (m_autoSuspendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSuspendTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSuspendTime, allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elasticLimit, allocator);
    }

    if (m_sessionResourceTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionResourceTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionResourceTemplate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateDataEngineRequest::GetSize() const
{
    return m_size;
}

void UpdateDataEngineRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool UpdateDataEngineRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetMinClusters() const
{
    return m_minClusters;
}

void UpdateDataEngineRequest::SetMinClusters(const int64_t& _minClusters)
{
    m_minClusters = _minClusters;
    m_minClustersHasBeenSet = true;
}

bool UpdateDataEngineRequest::MinClustersHasBeenSet() const
{
    return m_minClustersHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetMaxClusters() const
{
    return m_maxClusters;
}

void UpdateDataEngineRequest::SetMaxClusters(const int64_t& _maxClusters)
{
    m_maxClusters = _maxClusters;
    m_maxClustersHasBeenSet = true;
}

bool UpdateDataEngineRequest::MaxClustersHasBeenSet() const
{
    return m_maxClustersHasBeenSet;
}

bool UpdateDataEngineRequest::GetAutoResume() const
{
    return m_autoResume;
}

void UpdateDataEngineRequest::SetAutoResume(const bool& _autoResume)
{
    m_autoResume = _autoResume;
    m_autoResumeHasBeenSet = true;
}

bool UpdateDataEngineRequest::AutoResumeHasBeenSet() const
{
    return m_autoResumeHasBeenSet;
}

string UpdateDataEngineRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void UpdateDataEngineRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool UpdateDataEngineRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string UpdateDataEngineRequest::GetMessage() const
{
    return m_message;
}

void UpdateDataEngineRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool UpdateDataEngineRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

bool UpdateDataEngineRequest::GetAutoSuspend() const
{
    return m_autoSuspend;
}

void UpdateDataEngineRequest::SetAutoSuspend(const bool& _autoSuspend)
{
    m_autoSuspend = _autoSuspend;
    m_autoSuspendHasBeenSet = true;
}

bool UpdateDataEngineRequest::AutoSuspendHasBeenSet() const
{
    return m_autoSuspendHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetCrontabResumeSuspend() const
{
    return m_crontabResumeSuspend;
}

void UpdateDataEngineRequest::SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend)
{
    m_crontabResumeSuspend = _crontabResumeSuspend;
    m_crontabResumeSuspendHasBeenSet = true;
}

bool UpdateDataEngineRequest::CrontabResumeSuspendHasBeenSet() const
{
    return m_crontabResumeSuspendHasBeenSet;
}

CrontabResumeSuspendStrategy UpdateDataEngineRequest::GetCrontabResumeSuspendStrategy() const
{
    return m_crontabResumeSuspendStrategy;
}

void UpdateDataEngineRequest::SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy)
{
    m_crontabResumeSuspendStrategy = _crontabResumeSuspendStrategy;
    m_crontabResumeSuspendStrategyHasBeenSet = true;
}

bool UpdateDataEngineRequest::CrontabResumeSuspendStrategyHasBeenSet() const
{
    return m_crontabResumeSuspendStrategyHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void UpdateDataEngineRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool UpdateDataEngineRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetTolerableQueueTime() const
{
    return m_tolerableQueueTime;
}

void UpdateDataEngineRequest::SetTolerableQueueTime(const int64_t& _tolerableQueueTime)
{
    m_tolerableQueueTime = _tolerableQueueTime;
    m_tolerableQueueTimeHasBeenSet = true;
}

bool UpdateDataEngineRequest::TolerableQueueTimeHasBeenSet() const
{
    return m_tolerableQueueTimeHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetAutoSuspendTime() const
{
    return m_autoSuspendTime;
}

void UpdateDataEngineRequest::SetAutoSuspendTime(const int64_t& _autoSuspendTime)
{
    m_autoSuspendTime = _autoSuspendTime;
    m_autoSuspendTimeHasBeenSet = true;
}

bool UpdateDataEngineRequest::AutoSuspendTimeHasBeenSet() const
{
    return m_autoSuspendTimeHasBeenSet;
}

bool UpdateDataEngineRequest::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void UpdateDataEngineRequest::SetElasticSwitch(const bool& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool UpdateDataEngineRequest::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t UpdateDataEngineRequest::GetElasticLimit() const
{
    return m_elasticLimit;
}

void UpdateDataEngineRequest::SetElasticLimit(const int64_t& _elasticLimit)
{
    m_elasticLimit = _elasticLimit;
    m_elasticLimitHasBeenSet = true;
}

bool UpdateDataEngineRequest::ElasticLimitHasBeenSet() const
{
    return m_elasticLimitHasBeenSet;
}

SessionResourceTemplate UpdateDataEngineRequest::GetSessionResourceTemplate() const
{
    return m_sessionResourceTemplate;
}

void UpdateDataEngineRequest::SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate)
{
    m_sessionResourceTemplate = _sessionResourceTemplate;
    m_sessionResourceTemplateHasBeenSet = true;
}

bool UpdateDataEngineRequest::SessionResourceTemplateHasBeenSet() const
{
    return m_sessionResourceTemplateHasBeenSet;
}


