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

#include <tencentcloud/pts/v20210728/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

Job::Job() :
    m_jobIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_loadHasBeenSet(false),
    m_configsHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxVirtualUserCountHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_errorRateHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_loadSourcesHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_maxRequestsPerSecondHasBeenSet(false),
    m_requestTotalHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false),
    m_responseTimeAverageHasBeenSet(false),
    m_responseTimeP99HasBeenSet(false),
    m_responseTimeP95HasBeenSet(false),
    m_responseTimeP90HasBeenSet(false),
    m_scriptsHasBeenSet(false),
    m_responseTimeMaxHasBeenSet(false),
    m_responseTimeMinHasBeenSet(false),
    m_loadSourceInfosHasBeenSet(false),
    m_testScriptsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_requestFilesHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_cronIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_domainNameConfigHasBeenSet(false),
    m_debugHasBeenSet(false),
    m_abortReasonHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_notificationHooksHasBeenSet(false),
    m_networkReceiveRateHasBeenSet(false),
    m_networkSendRateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_scenarioNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("ScenarioId") && !value["ScenarioId"].IsNull())
    {
        if (!value["ScenarioId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ScenarioId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioId = string(value["ScenarioId"].GetString());
        m_scenarioIdHasBeenSet = true;
    }

    if (value.HasMember("Load") && !value["Load"].IsNull())
    {
        if (!value["Load"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Load` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_load.Deserialize(value["Load"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadHasBeenSet = true;
    }

    if (value.HasMember("Configs") && !value["Configs"].IsNull())
    {
        if (!value["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Configs` is not array type"));

        const rapidjson::Value &tmpValue = value["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_configs.push_back((*itr).GetString());
        }
        m_configsHasBeenSet = true;
    }

    if (value.HasMember("Datasets") && !value["Datasets"].IsNull())
    {
        if (!value["Datasets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Datasets` is not array type"));

        const rapidjson::Value &tmpValue = value["Datasets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TestData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasets.push_back(item);
        }
        m_datasetsHasBeenSet = true;
    }

    if (value.HasMember("Extensions") && !value["Extensions"].IsNull())
    {
        if (!value["Extensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Extensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Extensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extensions.push_back((*itr).GetString());
        }
        m_extensionsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxVirtualUserCount") && !value["MaxVirtualUserCount"].IsNull())
    {
        if (!value["MaxVirtualUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.MaxVirtualUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVirtualUserCount = value["MaxVirtualUserCount"].GetInt64();
        m_maxVirtualUserCountHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("ErrorRate") && !value["ErrorRate"].IsNull())
    {
        if (!value["ErrorRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ErrorRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorRate = value["ErrorRate"].GetDouble();
        m_errorRateHasBeenSet = true;
    }

    if (value.HasMember("JobOwner") && !value["JobOwner"].IsNull())
    {
        if (!value["JobOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobOwner = string(value["JobOwner"].GetString());
        m_jobOwnerHasBeenSet = true;
    }

    if (value.HasMember("LoadSources") && !value["LoadSources"].IsNull())
    {
        if (!value["LoadSources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.LoadSources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadSources.Deserialize(value["LoadSources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadSourcesHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestsPerSecond") && !value["MaxRequestsPerSecond"].IsNull())
    {
        if (!value["MaxRequestsPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.MaxRequestsPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestsPerSecond = value["MaxRequestsPerSecond"].GetInt64();
        m_maxRequestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("RequestTotal") && !value["RequestTotal"].IsNull())
    {
        if (!value["RequestTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.RequestTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestTotal = value["RequestTotal"].GetDouble();
        m_requestTotalHasBeenSet = true;
    }

    if (value.HasMember("RequestsPerSecond") && !value["RequestsPerSecond"].IsNull())
    {
        if (!value["RequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.RequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestsPerSecond = value["RequestsPerSecond"].GetDouble();
        m_requestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeAverage") && !value["ResponseTimeAverage"].IsNull())
    {
        if (!value["ResponseTimeAverage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeAverage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeAverage = value["ResponseTimeAverage"].GetDouble();
        m_responseTimeAverageHasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeP99") && !value["ResponseTimeP99"].IsNull())
    {
        if (!value["ResponseTimeP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeP99 = value["ResponseTimeP99"].GetDouble();
        m_responseTimeP99HasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeP95") && !value["ResponseTimeP95"].IsNull())
    {
        if (!value["ResponseTimeP95"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeP95` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeP95 = value["ResponseTimeP95"].GetDouble();
        m_responseTimeP95HasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeP90") && !value["ResponseTimeP90"].IsNull())
    {
        if (!value["ResponseTimeP90"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeP90` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeP90 = value["ResponseTimeP90"].GetDouble();
        m_responseTimeP90HasBeenSet = true;
    }

    if (value.HasMember("Scripts") && !value["Scripts"].IsNull())
    {
        if (!value["Scripts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Scripts` is not array type"));

        const rapidjson::Value &tmpValue = value["Scripts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scripts.push_back((*itr).GetString());
        }
        m_scriptsHasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeMax") && !value["ResponseTimeMax"].IsNull())
    {
        if (!value["ResponseTimeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeMax = value["ResponseTimeMax"].GetDouble();
        m_responseTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("ResponseTimeMin") && !value["ResponseTimeMin"].IsNull())
    {
        if (!value["ResponseTimeMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResponseTimeMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeMin = value["ResponseTimeMin"].GetDouble();
        m_responseTimeMinHasBeenSet = true;
    }

    if (value.HasMember("LoadSourceInfos") && !value["LoadSourceInfos"].IsNull())
    {
        if (!value["LoadSourceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.LoadSourceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadSourceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LoadSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_loadSourceInfos.push_back(item);
        }
        m_loadSourceInfosHasBeenSet = true;
    }

    if (value.HasMember("TestScripts") && !value["TestScripts"].IsNull())
    {
        if (!value["TestScripts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.TestScripts` is not array type"));

        const rapidjson::Value &tmpValue = value["TestScripts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScriptInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_testScripts.push_back(item);
        }
        m_testScriptsHasBeenSet = true;
    }

    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Protocols` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocols.push_back(item);
        }
        m_protocolsHasBeenSet = true;
    }

    if (value.HasMember("RequestFiles") && !value["RequestFiles"].IsNull())
    {
        if (!value["RequestFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.RequestFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestFiles.push_back(item);
        }
        m_requestFilesHasBeenSet = true;
    }

    if (value.HasMember("Plugins") && !value["Plugins"].IsNull())
    {
        if (!value["Plugins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.Plugins` is not array type"));

        const rapidjson::Value &tmpValue = value["Plugins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_plugins.push_back(item);
        }
        m_pluginsHasBeenSet = true;
    }

    if (value.HasMember("CronId") && !value["CronId"].IsNull())
    {
        if (!value["CronId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CronId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronId = string(value["CronId"].GetString());
        m_cronIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DomainNameConfig") && !value["DomainNameConfig"].IsNull())
    {
        if (!value["DomainNameConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.DomainNameConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainNameConfig.Deserialize(value["DomainNameConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainNameConfigHasBeenSet = true;
    }

    if (value.HasMember("Debug") && !value["Debug"].IsNull())
    {
        if (!value["Debug"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Debug` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_debug = value["Debug"].GetBool();
        m_debugHasBeenSet = true;
    }

    if (value.HasMember("AbortReason") && !value["AbortReason"].IsNull())
    {
        if (!value["AbortReason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.AbortReason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abortReason = value["AbortReason"].GetInt64();
        m_abortReasonHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("NotificationHooks") && !value["NotificationHooks"].IsNull())
    {
        if (!value["NotificationHooks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.NotificationHooks` is not array type"));

        const rapidjson::Value &tmpValue = value["NotificationHooks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotificationHook item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notificationHooks.push_back(item);
        }
        m_notificationHooksHasBeenSet = true;
    }

    if (value.HasMember("NetworkReceiveRate") && !value["NetworkReceiveRate"].IsNull())
    {
        if (!value["NetworkReceiveRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.NetworkReceiveRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_networkReceiveRate = value["NetworkReceiveRate"].GetDouble();
        m_networkReceiveRateHasBeenSet = true;
    }

    if (value.HasMember("NetworkSendRate") && !value["NetworkSendRate"].IsNull())
    {
        if (!value["NetworkSendRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Job.NetworkSendRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_networkSendRate = value["NetworkSendRate"].GetDouble();
        m_networkSendRateHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ScenarioName") && !value["ScenarioName"].IsNull())
    {
        if (!value["ScenarioName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ScenarioName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioName = string(value["ScenarioName"].GetString());
        m_scenarioNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Usage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetInt64();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Load";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_load.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datasetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datasets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasets.begin(); itr != m_datasets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extensions.begin(); itr != m_extensions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxVirtualUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVirtualUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVirtualUserCount, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
    }

    if (m_jobOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_loadSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadSources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadSources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_maxRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestsPerSecond, allocator);
    }

    if (m_requestTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestTotal, allocator);
    }

    if (m_requestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestsPerSecond, allocator);
    }

    if (m_responseTimeAverageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeAverage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeAverage, allocator);
    }

    if (m_responseTimeP99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeP99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeP99, allocator);
    }

    if (m_responseTimeP95HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeP95";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeP95, allocator);
    }

    if (m_responseTimeP90HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeP90";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeP90, allocator);
    }

    if (m_scriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scripts.begin(); itr != m_scripts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_responseTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeMax, allocator);
    }

    if (m_responseTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeMin, allocator);
    }

    if (m_loadSourceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadSourceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadSourceInfos.begin(); itr != m_loadSourceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_testScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestScripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_testScripts.begin(); itr != m_testScripts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestFiles.begin(); itr != m_requestFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pluginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plugins.begin(); itr != m_plugins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cronIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNameConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainNameConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_debugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_debug, allocator);
    }

    if (m_abortReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbortReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abortReason, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notificationHooks.begin(); itr != m_notificationHooks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkReceiveRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkReceiveRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkReceiveRate, allocator);
    }

    if (m_networkSendRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkSendRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkSendRate, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

}


string Job::GetJobId() const
{
    return m_jobId;
}

void Job::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool Job::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string Job::GetScenarioId() const
{
    return m_scenarioId;
}

void Job::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool Job::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

Load Job::GetLoad() const
{
    return m_load;
}

void Job::SetLoad(const Load& _load)
{
    m_load = _load;
    m_loadHasBeenSet = true;
}

bool Job::LoadHasBeenSet() const
{
    return m_loadHasBeenSet;
}

vector<string> Job::GetConfigs() const
{
    return m_configs;
}

void Job::SetConfigs(const vector<string>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool Job::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

vector<TestData> Job::GetDatasets() const
{
    return m_datasets;
}

void Job::SetDatasets(const vector<TestData>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool Job::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

vector<string> Job::GetExtensions() const
{
    return m_extensions;
}

void Job::SetExtensions(const vector<string>& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool Job::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

int64_t Job::GetStatus() const
{
    return m_status;
}

void Job::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Job::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Job::GetStartTime() const
{
    return m_startTime;
}

void Job::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Job::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Job::GetEndTime() const
{
    return m_endTime;
}

void Job::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Job::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t Job::GetMaxVirtualUserCount() const
{
    return m_maxVirtualUserCount;
}

void Job::SetMaxVirtualUserCount(const int64_t& _maxVirtualUserCount)
{
    m_maxVirtualUserCount = _maxVirtualUserCount;
    m_maxVirtualUserCountHasBeenSet = true;
}

bool Job::MaxVirtualUserCountHasBeenSet() const
{
    return m_maxVirtualUserCountHasBeenSet;
}

string Job::GetNote() const
{
    return m_note;
}

void Job::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool Job::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

double Job::GetErrorRate() const
{
    return m_errorRate;
}

void Job::SetErrorRate(const double& _errorRate)
{
    m_errorRate = _errorRate;
    m_errorRateHasBeenSet = true;
}

bool Job::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}

string Job::GetJobOwner() const
{
    return m_jobOwner;
}

void Job::SetJobOwner(const string& _jobOwner)
{
    m_jobOwner = _jobOwner;
    m_jobOwnerHasBeenSet = true;
}

bool Job::JobOwnerHasBeenSet() const
{
    return m_jobOwnerHasBeenSet;
}

LoadSource Job::GetLoadSources() const
{
    return m_loadSources;
}

void Job::SetLoadSources(const LoadSource& _loadSources)
{
    m_loadSources = _loadSources;
    m_loadSourcesHasBeenSet = true;
}

bool Job::LoadSourcesHasBeenSet() const
{
    return m_loadSourcesHasBeenSet;
}

int64_t Job::GetDuration() const
{
    return m_duration;
}

void Job::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool Job::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t Job::GetMaxRequestsPerSecond() const
{
    return m_maxRequestsPerSecond;
}

void Job::SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond)
{
    m_maxRequestsPerSecond = _maxRequestsPerSecond;
    m_maxRequestsPerSecondHasBeenSet = true;
}

bool Job::MaxRequestsPerSecondHasBeenSet() const
{
    return m_maxRequestsPerSecondHasBeenSet;
}

double Job::GetRequestTotal() const
{
    return m_requestTotal;
}

void Job::SetRequestTotal(const double& _requestTotal)
{
    m_requestTotal = _requestTotal;
    m_requestTotalHasBeenSet = true;
}

bool Job::RequestTotalHasBeenSet() const
{
    return m_requestTotalHasBeenSet;
}

double Job::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void Job::SetRequestsPerSecond(const double& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool Job::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

double Job::GetResponseTimeAverage() const
{
    return m_responseTimeAverage;
}

void Job::SetResponseTimeAverage(const double& _responseTimeAverage)
{
    m_responseTimeAverage = _responseTimeAverage;
    m_responseTimeAverageHasBeenSet = true;
}

bool Job::ResponseTimeAverageHasBeenSet() const
{
    return m_responseTimeAverageHasBeenSet;
}

double Job::GetResponseTimeP99() const
{
    return m_responseTimeP99;
}

void Job::SetResponseTimeP99(const double& _responseTimeP99)
{
    m_responseTimeP99 = _responseTimeP99;
    m_responseTimeP99HasBeenSet = true;
}

bool Job::ResponseTimeP99HasBeenSet() const
{
    return m_responseTimeP99HasBeenSet;
}

double Job::GetResponseTimeP95() const
{
    return m_responseTimeP95;
}

void Job::SetResponseTimeP95(const double& _responseTimeP95)
{
    m_responseTimeP95 = _responseTimeP95;
    m_responseTimeP95HasBeenSet = true;
}

bool Job::ResponseTimeP95HasBeenSet() const
{
    return m_responseTimeP95HasBeenSet;
}

double Job::GetResponseTimeP90() const
{
    return m_responseTimeP90;
}

void Job::SetResponseTimeP90(const double& _responseTimeP90)
{
    m_responseTimeP90 = _responseTimeP90;
    m_responseTimeP90HasBeenSet = true;
}

bool Job::ResponseTimeP90HasBeenSet() const
{
    return m_responseTimeP90HasBeenSet;
}

vector<string> Job::GetScripts() const
{
    return m_scripts;
}

void Job::SetScripts(const vector<string>& _scripts)
{
    m_scripts = _scripts;
    m_scriptsHasBeenSet = true;
}

bool Job::ScriptsHasBeenSet() const
{
    return m_scriptsHasBeenSet;
}

double Job::GetResponseTimeMax() const
{
    return m_responseTimeMax;
}

void Job::SetResponseTimeMax(const double& _responseTimeMax)
{
    m_responseTimeMax = _responseTimeMax;
    m_responseTimeMaxHasBeenSet = true;
}

bool Job::ResponseTimeMaxHasBeenSet() const
{
    return m_responseTimeMaxHasBeenSet;
}

double Job::GetResponseTimeMin() const
{
    return m_responseTimeMin;
}

void Job::SetResponseTimeMin(const double& _responseTimeMin)
{
    m_responseTimeMin = _responseTimeMin;
    m_responseTimeMinHasBeenSet = true;
}

bool Job::ResponseTimeMinHasBeenSet() const
{
    return m_responseTimeMinHasBeenSet;
}

vector<LoadSource> Job::GetLoadSourceInfos() const
{
    return m_loadSourceInfos;
}

void Job::SetLoadSourceInfos(const vector<LoadSource>& _loadSourceInfos)
{
    m_loadSourceInfos = _loadSourceInfos;
    m_loadSourceInfosHasBeenSet = true;
}

bool Job::LoadSourceInfosHasBeenSet() const
{
    return m_loadSourceInfosHasBeenSet;
}

vector<ScriptInfo> Job::GetTestScripts() const
{
    return m_testScripts;
}

void Job::SetTestScripts(const vector<ScriptInfo>& _testScripts)
{
    m_testScripts = _testScripts;
    m_testScriptsHasBeenSet = true;
}

bool Job::TestScriptsHasBeenSet() const
{
    return m_testScriptsHasBeenSet;
}

vector<ProtocolInfo> Job::GetProtocols() const
{
    return m_protocols;
}

void Job::SetProtocols(const vector<ProtocolInfo>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool Job::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

vector<FileInfo> Job::GetRequestFiles() const
{
    return m_requestFiles;
}

void Job::SetRequestFiles(const vector<FileInfo>& _requestFiles)
{
    m_requestFiles = _requestFiles;
    m_requestFilesHasBeenSet = true;
}

bool Job::RequestFilesHasBeenSet() const
{
    return m_requestFilesHasBeenSet;
}

vector<FileInfo> Job::GetPlugins() const
{
    return m_plugins;
}

void Job::SetPlugins(const vector<FileInfo>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool Job::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

string Job::GetCronId() const
{
    return m_cronId;
}

void Job::SetCronId(const string& _cronId)
{
    m_cronId = _cronId;
    m_cronIdHasBeenSet = true;
}

bool Job::CronIdHasBeenSet() const
{
    return m_cronIdHasBeenSet;
}

string Job::GetType() const
{
    return m_type;
}

void Job::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Job::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DomainNameConfig Job::GetDomainNameConfig() const
{
    return m_domainNameConfig;
}

void Job::SetDomainNameConfig(const DomainNameConfig& _domainNameConfig)
{
    m_domainNameConfig = _domainNameConfig;
    m_domainNameConfigHasBeenSet = true;
}

bool Job::DomainNameConfigHasBeenSet() const
{
    return m_domainNameConfigHasBeenSet;
}

bool Job::GetDebug() const
{
    return m_debug;
}

void Job::SetDebug(const bool& _debug)
{
    m_debug = _debug;
    m_debugHasBeenSet = true;
}

bool Job::DebugHasBeenSet() const
{
    return m_debugHasBeenSet;
}

int64_t Job::GetAbortReason() const
{
    return m_abortReason;
}

void Job::SetAbortReason(const int64_t& _abortReason)
{
    m_abortReason = _abortReason;
    m_abortReasonHasBeenSet = true;
}

bool Job::AbortReasonHasBeenSet() const
{
    return m_abortReasonHasBeenSet;
}

string Job::GetCreatedAt() const
{
    return m_createdAt;
}

void Job::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Job::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Job::GetProjectId() const
{
    return m_projectId;
}

void Job::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Job::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<NotificationHook> Job::GetNotificationHooks() const
{
    return m_notificationHooks;
}

void Job::SetNotificationHooks(const vector<NotificationHook>& _notificationHooks)
{
    m_notificationHooks = _notificationHooks;
    m_notificationHooksHasBeenSet = true;
}

bool Job::NotificationHooksHasBeenSet() const
{
    return m_notificationHooksHasBeenSet;
}

double Job::GetNetworkReceiveRate() const
{
    return m_networkReceiveRate;
}

void Job::SetNetworkReceiveRate(const double& _networkReceiveRate)
{
    m_networkReceiveRate = _networkReceiveRate;
    m_networkReceiveRateHasBeenSet = true;
}

bool Job::NetworkReceiveRateHasBeenSet() const
{
    return m_networkReceiveRateHasBeenSet;
}

double Job::GetNetworkSendRate() const
{
    return m_networkSendRate;
}

void Job::SetNetworkSendRate(const double& _networkSendRate)
{
    m_networkSendRate = _networkSendRate;
    m_networkSendRateHasBeenSet = true;
}

bool Job::NetworkSendRateHasBeenSet() const
{
    return m_networkSendRateHasBeenSet;
}

string Job::GetMessage() const
{
    return m_message;
}

void Job::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Job::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string Job::GetProjectName() const
{
    return m_projectName;
}

void Job::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Job::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string Job::GetScenarioName() const
{
    return m_scenarioName;
}

void Job::SetScenarioName(const string& _scenarioName)
{
    m_scenarioName = _scenarioName;
    m_scenarioNameHasBeenSet = true;
}

bool Job::ScenarioNameHasBeenSet() const
{
    return m_scenarioNameHasBeenSet;
}

int64_t Job::GetPayMode() const
{
    return m_payMode;
}

void Job::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Job::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t Job::GetUsage() const
{
    return m_usage;
}

void Job::SetUsage(const int64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool Job::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

