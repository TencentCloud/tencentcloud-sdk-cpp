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

#include <tencentcloud/dlc/v20210125/model/CreateDataEngineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateDataEngineRequest::CreateDataEngineRequest() :
    m_engineTypeHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_autoResumeHasBeenSet(false),
    m_minClustersHasBeenSet(false),
    m_maxClustersHasBeenSet(false),
    m_defaultDataEngineHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoSuspendHasBeenSet(false),
    m_crontabResumeSuspendHasBeenSet(false),
    m_crontabResumeSuspendStrategyHasBeenSet(false),
    m_engineExecTypeHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_tolerableQueueTimeHasBeenSet(false),
    m_autoSuspendTimeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_dataEngineConfigPairsHasBeenSet(false),
    m_imageVersionNameHasBeenSet(false),
    m_mainClusterNameHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticLimitHasBeenSet(false),
    m_sessionResourceTemplateHasBeenSet(false),
    m_autoAuthorizationHasBeenSet(false),
    m_engineNetworkIdHasBeenSet(false),
    m_engineGenerationHasBeenSet(false)
{
}

string CreateDataEngineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_autoResumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoResume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoResume, allocator);
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

    if (m_defaultDataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDataEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultDataEngine, allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenew, allocator);
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

    if (m_engineExecTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExecType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineExecType.c_str(), allocator).Move(), allocator);
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

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataEngineConfigPairs.begin(); itr != m_dataEngineConfigPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_mainClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainClusterName.c_str(), allocator).Move(), allocator);
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

    if (m_autoAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAuthorization, allocator);
    }

    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineGeneration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineGeneration.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataEngineRequest::GetEngineType() const
{
    return m_engineType;
}

void CreateDataEngineRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CreateDataEngineRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string CreateDataEngineRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateDataEngineRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateDataEngineRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string CreateDataEngineRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateDataEngineRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateDataEngineRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetMode() const
{
    return m_mode;
}

void CreateDataEngineRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateDataEngineRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

bool CreateDataEngineRequest::GetAutoResume() const
{
    return m_autoResume;
}

void CreateDataEngineRequest::SetAutoResume(const bool& _autoResume)
{
    m_autoResume = _autoResume;
    m_autoResumeHasBeenSet = true;
}

bool CreateDataEngineRequest::AutoResumeHasBeenSet() const
{
    return m_autoResumeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetMinClusters() const
{
    return m_minClusters;
}

void CreateDataEngineRequest::SetMinClusters(const int64_t& _minClusters)
{
    m_minClusters = _minClusters;
    m_minClustersHasBeenSet = true;
}

bool CreateDataEngineRequest::MinClustersHasBeenSet() const
{
    return m_minClustersHasBeenSet;
}

int64_t CreateDataEngineRequest::GetMaxClusters() const
{
    return m_maxClusters;
}

void CreateDataEngineRequest::SetMaxClusters(const int64_t& _maxClusters)
{
    m_maxClusters = _maxClusters;
    m_maxClustersHasBeenSet = true;
}

bool CreateDataEngineRequest::MaxClustersHasBeenSet() const
{
    return m_maxClustersHasBeenSet;
}

bool CreateDataEngineRequest::GetDefaultDataEngine() const
{
    return m_defaultDataEngine;
}

void CreateDataEngineRequest::SetDefaultDataEngine(const bool& _defaultDataEngine)
{
    m_defaultDataEngine = _defaultDataEngine;
    m_defaultDataEngineHasBeenSet = true;
}

bool CreateDataEngineRequest::DefaultDataEngineHasBeenSet() const
{
    return m_defaultDataEngineHasBeenSet;
}

string CreateDataEngineRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CreateDataEngineRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CreateDataEngineRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CreateDataEngineRequest::GetMessage() const
{
    return m_message;
}

void CreateDataEngineRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CreateDataEngineRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t CreateDataEngineRequest::GetSize() const
{
    return m_size;
}

void CreateDataEngineRequest::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool CreateDataEngineRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateDataEngineRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateDataEngineRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateDataEngineRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateDataEngineRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateDataEngineRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateDataEngineRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateDataEngineRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateDataEngineRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void CreateDataEngineRequest::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CreateDataEngineRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

vector<TagInfo> CreateDataEngineRequest::GetTags() const
{
    return m_tags;
}

void CreateDataEngineRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDataEngineRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateDataEngineRequest::GetAutoSuspend() const
{
    return m_autoSuspend;
}

void CreateDataEngineRequest::SetAutoSuspend(const bool& _autoSuspend)
{
    m_autoSuspend = _autoSuspend;
    m_autoSuspendHasBeenSet = true;
}

bool CreateDataEngineRequest::AutoSuspendHasBeenSet() const
{
    return m_autoSuspendHasBeenSet;
}

int64_t CreateDataEngineRequest::GetCrontabResumeSuspend() const
{
    return m_crontabResumeSuspend;
}

void CreateDataEngineRequest::SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend)
{
    m_crontabResumeSuspend = _crontabResumeSuspend;
    m_crontabResumeSuspendHasBeenSet = true;
}

bool CreateDataEngineRequest::CrontabResumeSuspendHasBeenSet() const
{
    return m_crontabResumeSuspendHasBeenSet;
}

CrontabResumeSuspendStrategy CreateDataEngineRequest::GetCrontabResumeSuspendStrategy() const
{
    return m_crontabResumeSuspendStrategy;
}

void CreateDataEngineRequest::SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy)
{
    m_crontabResumeSuspendStrategy = _crontabResumeSuspendStrategy;
    m_crontabResumeSuspendStrategyHasBeenSet = true;
}

bool CreateDataEngineRequest::CrontabResumeSuspendStrategyHasBeenSet() const
{
    return m_crontabResumeSuspendStrategyHasBeenSet;
}

string CreateDataEngineRequest::GetEngineExecType() const
{
    return m_engineExecType;
}

void CreateDataEngineRequest::SetEngineExecType(const string& _engineExecType)
{
    m_engineExecType = _engineExecType;
    m_engineExecTypeHasBeenSet = true;
}

bool CreateDataEngineRequest::EngineExecTypeHasBeenSet() const
{
    return m_engineExecTypeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void CreateDataEngineRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool CreateDataEngineRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

int64_t CreateDataEngineRequest::GetTolerableQueueTime() const
{
    return m_tolerableQueueTime;
}

void CreateDataEngineRequest::SetTolerableQueueTime(const int64_t& _tolerableQueueTime)
{
    m_tolerableQueueTime = _tolerableQueueTime;
    m_tolerableQueueTimeHasBeenSet = true;
}

bool CreateDataEngineRequest::TolerableQueueTimeHasBeenSet() const
{
    return m_tolerableQueueTimeHasBeenSet;
}

int64_t CreateDataEngineRequest::GetAutoSuspendTime() const
{
    return m_autoSuspendTime;
}

void CreateDataEngineRequest::SetAutoSuspendTime(const int64_t& _autoSuspendTime)
{
    m_autoSuspendTime = _autoSuspendTime;
    m_autoSuspendTimeHasBeenSet = true;
}

bool CreateDataEngineRequest::AutoSuspendTimeHasBeenSet() const
{
    return m_autoSuspendTimeHasBeenSet;
}

string CreateDataEngineRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateDataEngineRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateDataEngineRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<DataEngineConfigPair> CreateDataEngineRequest::GetDataEngineConfigPairs() const
{
    return m_dataEngineConfigPairs;
}

void CreateDataEngineRequest::SetDataEngineConfigPairs(const vector<DataEngineConfigPair>& _dataEngineConfigPairs)
{
    m_dataEngineConfigPairs = _dataEngineConfigPairs;
    m_dataEngineConfigPairsHasBeenSet = true;
}

bool CreateDataEngineRequest::DataEngineConfigPairsHasBeenSet() const
{
    return m_dataEngineConfigPairsHasBeenSet;
}

string CreateDataEngineRequest::GetImageVersionName() const
{
    return m_imageVersionName;
}

void CreateDataEngineRequest::SetImageVersionName(const string& _imageVersionName)
{
    m_imageVersionName = _imageVersionName;
    m_imageVersionNameHasBeenSet = true;
}

bool CreateDataEngineRequest::ImageVersionNameHasBeenSet() const
{
    return m_imageVersionNameHasBeenSet;
}

string CreateDataEngineRequest::GetMainClusterName() const
{
    return m_mainClusterName;
}

void CreateDataEngineRequest::SetMainClusterName(const string& _mainClusterName)
{
    m_mainClusterName = _mainClusterName;
    m_mainClusterNameHasBeenSet = true;
}

bool CreateDataEngineRequest::MainClusterNameHasBeenSet() const
{
    return m_mainClusterNameHasBeenSet;
}

bool CreateDataEngineRequest::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void CreateDataEngineRequest::SetElasticSwitch(const bool& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool CreateDataEngineRequest::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t CreateDataEngineRequest::GetElasticLimit() const
{
    return m_elasticLimit;
}

void CreateDataEngineRequest::SetElasticLimit(const int64_t& _elasticLimit)
{
    m_elasticLimit = _elasticLimit;
    m_elasticLimitHasBeenSet = true;
}

bool CreateDataEngineRequest::ElasticLimitHasBeenSet() const
{
    return m_elasticLimitHasBeenSet;
}

SessionResourceTemplate CreateDataEngineRequest::GetSessionResourceTemplate() const
{
    return m_sessionResourceTemplate;
}

void CreateDataEngineRequest::SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate)
{
    m_sessionResourceTemplate = _sessionResourceTemplate;
    m_sessionResourceTemplateHasBeenSet = true;
}

bool CreateDataEngineRequest::SessionResourceTemplateHasBeenSet() const
{
    return m_sessionResourceTemplateHasBeenSet;
}

bool CreateDataEngineRequest::GetAutoAuthorization() const
{
    return m_autoAuthorization;
}

void CreateDataEngineRequest::SetAutoAuthorization(const bool& _autoAuthorization)
{
    m_autoAuthorization = _autoAuthorization;
    m_autoAuthorizationHasBeenSet = true;
}

bool CreateDataEngineRequest::AutoAuthorizationHasBeenSet() const
{
    return m_autoAuthorizationHasBeenSet;
}

string CreateDataEngineRequest::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void CreateDataEngineRequest::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool CreateDataEngineRequest::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

string CreateDataEngineRequest::GetEngineGeneration() const
{
    return m_engineGeneration;
}

void CreateDataEngineRequest::SetEngineGeneration(const string& _engineGeneration)
{
    m_engineGeneration = _engineGeneration;
    m_engineGenerationHasBeenSet = true;
}

bool CreateDataEngineRequest::EngineGenerationHasBeenSet() const
{
    return m_engineGenerationHasBeenSet;
}


