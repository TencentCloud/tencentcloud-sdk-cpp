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

#include <tencentcloud/emr/v20190103/model/YarnApplication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

YarnApplication::YarnApplication() :
    m_idHasBeenSet(false),
    m_userHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_elapsedTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_finalStatusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_startedTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false),
    m_allocatedMBHasBeenSet(false),
    m_allocatedVCoresHasBeenSet(false),
    m_runningContainersHasBeenSet(false),
    m_memorySecondsHasBeenSet(false),
    m_vCoreSecondsHasBeenSet(false),
    m_queueUsagePercentageHasBeenSet(false),
    m_clusterUsagePercentageHasBeenSet(false),
    m_preemptedResourceMBHasBeenSet(false),
    m_preemptedResourceVCoresHasBeenSet(false),
    m_numNonAMContainerPreemptedHasBeenSet(false),
    m_numAMContainerPreemptedHasBeenSet(false),
    m_mapsTotalHasBeenSet(false),
    m_mapsCompletedHasBeenSet(false),
    m_reducesTotalHasBeenSet(false),
    m_reducesCompletedHasBeenSet(false),
    m_avgMapTimeHasBeenSet(false),
    m_avgReduceTimeHasBeenSet(false),
    m_avgShuffleTimeHasBeenSet(false),
    m_avgMergeTimeHasBeenSet(false),
    m_failedReduceAttemptsHasBeenSet(false),
    m_killedReduceAttemptsHasBeenSet(false),
    m_successfulReduceAttemptsHasBeenSet(false),
    m_failedMapAttemptsHasBeenSet(false),
    m_killedMapAttemptsHasBeenSet(false),
    m_successfulMapAttemptsHasBeenSet(false),
    m_gcTimeMillisHasBeenSet(false),
    m_vCoreMillisMapsHasBeenSet(false),
    m_mbMillisMapsHasBeenSet(false),
    m_vCoreMillisReducesHasBeenSet(false),
    m_mbMillisReducesHasBeenSet(false),
    m_totalLaunchedMapsHasBeenSet(false),
    m_totalLaunchedReducesHasBeenSet(false),
    m_mapInputRecordsHasBeenSet(false),
    m_mapOutputRecordsHasBeenSet(false),
    m_reduceInputRecordsHasBeenSet(false),
    m_reduceOutputRecordsHasBeenSet(false),
    m_hDFSBytesWrittenHasBeenSet(false),
    m_hDFSBytesReadHasBeenSet(false)
{
}

CoreInternalOutcome YarnApplication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ElapsedTime") && !value["ElapsedTime"].IsNull())
    {
        if (!value["ElapsedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ElapsedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elapsedTime = string(value["ElapsedTime"].GetString());
        m_elapsedTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FinalStatus") && !value["FinalStatus"].IsNull())
    {
        if (!value["FinalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.FinalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalStatus = string(value["FinalStatus"].GetString());
        m_finalStatusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("StartedTime") && !value["StartedTime"].IsNull())
    {
        if (!value["StartedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.StartedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startedTime = value["StartedTime"].GetInt64();
        m_startedTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.FinishedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = value["FinishedTime"].GetInt64();
        m_finishedTimeHasBeenSet = true;
    }

    if (value.HasMember("AllocatedMB") && !value["AllocatedMB"].IsNull())
    {
        if (!value["AllocatedMB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AllocatedMB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedMB = value["AllocatedMB"].GetInt64();
        m_allocatedMBHasBeenSet = true;
    }

    if (value.HasMember("AllocatedVCores") && !value["AllocatedVCores"].IsNull())
    {
        if (!value["AllocatedVCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AllocatedVCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedVCores = value["AllocatedVCores"].GetInt64();
        m_allocatedVCoresHasBeenSet = true;
    }

    if (value.HasMember("RunningContainers") && !value["RunningContainers"].IsNull())
    {
        if (!value["RunningContainers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.RunningContainers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningContainers = value["RunningContainers"].GetInt64();
        m_runningContainersHasBeenSet = true;
    }

    if (value.HasMember("MemorySeconds") && !value["MemorySeconds"].IsNull())
    {
        if (!value["MemorySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MemorySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySeconds = value["MemorySeconds"].GetInt64();
        m_memorySecondsHasBeenSet = true;
    }

    if (value.HasMember("VCoreSeconds") && !value["VCoreSeconds"].IsNull())
    {
        if (!value["VCoreSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.VCoreSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vCoreSeconds = value["VCoreSeconds"].GetInt64();
        m_vCoreSecondsHasBeenSet = true;
    }

    if (value.HasMember("QueueUsagePercentage") && !value["QueueUsagePercentage"].IsNull())
    {
        if (!value["QueueUsagePercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.QueueUsagePercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queueUsagePercentage = value["QueueUsagePercentage"].GetDouble();
        m_queueUsagePercentageHasBeenSet = true;
    }

    if (value.HasMember("ClusterUsagePercentage") && !value["ClusterUsagePercentage"].IsNull())
    {
        if (!value["ClusterUsagePercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ClusterUsagePercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUsagePercentage = value["ClusterUsagePercentage"].GetDouble();
        m_clusterUsagePercentageHasBeenSet = true;
    }

    if (value.HasMember("PreemptedResourceMB") && !value["PreemptedResourceMB"].IsNull())
    {
        if (!value["PreemptedResourceMB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.PreemptedResourceMB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preemptedResourceMB = value["PreemptedResourceMB"].GetInt64();
        m_preemptedResourceMBHasBeenSet = true;
    }

    if (value.HasMember("PreemptedResourceVCores") && !value["PreemptedResourceVCores"].IsNull())
    {
        if (!value["PreemptedResourceVCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.PreemptedResourceVCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preemptedResourceVCores = value["PreemptedResourceVCores"].GetInt64();
        m_preemptedResourceVCoresHasBeenSet = true;
    }

    if (value.HasMember("NumNonAMContainerPreempted") && !value["NumNonAMContainerPreempted"].IsNull())
    {
        if (!value["NumNonAMContainerPreempted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.NumNonAMContainerPreempted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numNonAMContainerPreempted = value["NumNonAMContainerPreempted"].GetInt64();
        m_numNonAMContainerPreemptedHasBeenSet = true;
    }

    if (value.HasMember("NumAMContainerPreempted") && !value["NumAMContainerPreempted"].IsNull())
    {
        if (!value["NumAMContainerPreempted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.NumAMContainerPreempted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numAMContainerPreempted = value["NumAMContainerPreempted"].GetInt64();
        m_numAMContainerPreemptedHasBeenSet = true;
    }

    if (value.HasMember("MapsTotal") && !value["MapsTotal"].IsNull())
    {
        if (!value["MapsTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MapsTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mapsTotal = value["MapsTotal"].GetInt64();
        m_mapsTotalHasBeenSet = true;
    }

    if (value.HasMember("MapsCompleted") && !value["MapsCompleted"].IsNull())
    {
        if (!value["MapsCompleted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MapsCompleted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mapsCompleted = value["MapsCompleted"].GetInt64();
        m_mapsCompletedHasBeenSet = true;
    }

    if (value.HasMember("ReducesTotal") && !value["ReducesTotal"].IsNull())
    {
        if (!value["ReducesTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ReducesTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reducesTotal = value["ReducesTotal"].GetInt64();
        m_reducesTotalHasBeenSet = true;
    }

    if (value.HasMember("ReducesCompleted") && !value["ReducesCompleted"].IsNull())
    {
        if (!value["ReducesCompleted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ReducesCompleted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reducesCompleted = value["ReducesCompleted"].GetInt64();
        m_reducesCompletedHasBeenSet = true;
    }

    if (value.HasMember("AvgMapTime") && !value["AvgMapTime"].IsNull())
    {
        if (!value["AvgMapTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AvgMapTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgMapTime = value["AvgMapTime"].GetInt64();
        m_avgMapTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgReduceTime") && !value["AvgReduceTime"].IsNull())
    {
        if (!value["AvgReduceTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AvgReduceTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgReduceTime = value["AvgReduceTime"].GetInt64();
        m_avgReduceTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgShuffleTime") && !value["AvgShuffleTime"].IsNull())
    {
        if (!value["AvgShuffleTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AvgShuffleTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgShuffleTime = value["AvgShuffleTime"].GetInt64();
        m_avgShuffleTimeHasBeenSet = true;
    }

    if (value.HasMember("AvgMergeTime") && !value["AvgMergeTime"].IsNull())
    {
        if (!value["AvgMergeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.AvgMergeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgMergeTime = value["AvgMergeTime"].GetInt64();
        m_avgMergeTimeHasBeenSet = true;
    }

    if (value.HasMember("FailedReduceAttempts") && !value["FailedReduceAttempts"].IsNull())
    {
        if (!value["FailedReduceAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.FailedReduceAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedReduceAttempts = value["FailedReduceAttempts"].GetInt64();
        m_failedReduceAttemptsHasBeenSet = true;
    }

    if (value.HasMember("KilledReduceAttempts") && !value["KilledReduceAttempts"].IsNull())
    {
        if (!value["KilledReduceAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.KilledReduceAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_killedReduceAttempts = value["KilledReduceAttempts"].GetInt64();
        m_killedReduceAttemptsHasBeenSet = true;
    }

    if (value.HasMember("SuccessfulReduceAttempts") && !value["SuccessfulReduceAttempts"].IsNull())
    {
        if (!value["SuccessfulReduceAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.SuccessfulReduceAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successfulReduceAttempts = value["SuccessfulReduceAttempts"].GetInt64();
        m_successfulReduceAttemptsHasBeenSet = true;
    }

    if (value.HasMember("FailedMapAttempts") && !value["FailedMapAttempts"].IsNull())
    {
        if (!value["FailedMapAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.FailedMapAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedMapAttempts = value["FailedMapAttempts"].GetInt64();
        m_failedMapAttemptsHasBeenSet = true;
    }

    if (value.HasMember("KilledMapAttempts") && !value["KilledMapAttempts"].IsNull())
    {
        if (!value["KilledMapAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.KilledMapAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_killedMapAttempts = value["KilledMapAttempts"].GetInt64();
        m_killedMapAttemptsHasBeenSet = true;
    }

    if (value.HasMember("SuccessfulMapAttempts") && !value["SuccessfulMapAttempts"].IsNull())
    {
        if (!value["SuccessfulMapAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.SuccessfulMapAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successfulMapAttempts = value["SuccessfulMapAttempts"].GetInt64();
        m_successfulMapAttemptsHasBeenSet = true;
    }

    if (value.HasMember("GcTimeMillis") && !value["GcTimeMillis"].IsNull())
    {
        if (!value["GcTimeMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.GcTimeMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gcTimeMillis = value["GcTimeMillis"].GetInt64();
        m_gcTimeMillisHasBeenSet = true;
    }

    if (value.HasMember("VCoreMillisMaps") && !value["VCoreMillisMaps"].IsNull())
    {
        if (!value["VCoreMillisMaps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.VCoreMillisMaps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vCoreMillisMaps = value["VCoreMillisMaps"].GetInt64();
        m_vCoreMillisMapsHasBeenSet = true;
    }

    if (value.HasMember("MbMillisMaps") && !value["MbMillisMaps"].IsNull())
    {
        if (!value["MbMillisMaps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MbMillisMaps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mbMillisMaps = value["MbMillisMaps"].GetInt64();
        m_mbMillisMapsHasBeenSet = true;
    }

    if (value.HasMember("VCoreMillisReduces") && !value["VCoreMillisReduces"].IsNull())
    {
        if (!value["VCoreMillisReduces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.VCoreMillisReduces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vCoreMillisReduces = value["VCoreMillisReduces"].GetInt64();
        m_vCoreMillisReducesHasBeenSet = true;
    }

    if (value.HasMember("MbMillisReduces") && !value["MbMillisReduces"].IsNull())
    {
        if (!value["MbMillisReduces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MbMillisReduces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mbMillisReduces = value["MbMillisReduces"].GetInt64();
        m_mbMillisReducesHasBeenSet = true;
    }

    if (value.HasMember("TotalLaunchedMaps") && !value["TotalLaunchedMaps"].IsNull())
    {
        if (!value["TotalLaunchedMaps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.TotalLaunchedMaps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLaunchedMaps = value["TotalLaunchedMaps"].GetInt64();
        m_totalLaunchedMapsHasBeenSet = true;
    }

    if (value.HasMember("TotalLaunchedReduces") && !value["TotalLaunchedReduces"].IsNull())
    {
        if (!value["TotalLaunchedReduces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.TotalLaunchedReduces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLaunchedReduces = value["TotalLaunchedReduces"].GetInt64();
        m_totalLaunchedReducesHasBeenSet = true;
    }

    if (value.HasMember("MapInputRecords") && !value["MapInputRecords"].IsNull())
    {
        if (!value["MapInputRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MapInputRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mapInputRecords = value["MapInputRecords"].GetInt64();
        m_mapInputRecordsHasBeenSet = true;
    }

    if (value.HasMember("MapOutputRecords") && !value["MapOutputRecords"].IsNull())
    {
        if (!value["MapOutputRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.MapOutputRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mapOutputRecords = value["MapOutputRecords"].GetInt64();
        m_mapOutputRecordsHasBeenSet = true;
    }

    if (value.HasMember("ReduceInputRecords") && !value["ReduceInputRecords"].IsNull())
    {
        if (!value["ReduceInputRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ReduceInputRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reduceInputRecords = value["ReduceInputRecords"].GetInt64();
        m_reduceInputRecordsHasBeenSet = true;
    }

    if (value.HasMember("ReduceOutputRecords") && !value["ReduceOutputRecords"].IsNull())
    {
        if (!value["ReduceOutputRecords"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.ReduceOutputRecords` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reduceOutputRecords = value["ReduceOutputRecords"].GetInt64();
        m_reduceOutputRecordsHasBeenSet = true;
    }

    if (value.HasMember("HDFSBytesWritten") && !value["HDFSBytesWritten"].IsNull())
    {
        if (!value["HDFSBytesWritten"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.HDFSBytesWritten` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hDFSBytesWritten = value["HDFSBytesWritten"].GetInt64();
        m_hDFSBytesWrittenHasBeenSet = true;
    }

    if (value.HasMember("HDFSBytesRead") && !value["HDFSBytesRead"].IsNull())
    {
        if (!value["HDFSBytesRead"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YarnApplication.HDFSBytesRead` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hDFSBytesRead = value["HDFSBytesRead"].GetInt64();
        m_hDFSBytesReadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void YarnApplication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_elapsedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElapsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elapsedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_finalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_startedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startedTime, allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishedTime, allocator);
    }

    if (m_allocatedMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedMB, allocator);
    }

    if (m_allocatedVCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedVCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedVCores, allocator);
    }

    if (m_runningContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningContainers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningContainers, allocator);
    }

    if (m_memorySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySeconds, allocator);
    }

    if (m_vCoreSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCoreSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vCoreSeconds, allocator);
    }

    if (m_queueUsagePercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueUsagePercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueUsagePercentage, allocator);
    }

    if (m_clusterUsagePercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterUsagePercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterUsagePercentage, allocator);
    }

    if (m_preemptedResourceMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreemptedResourceMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preemptedResourceMB, allocator);
    }

    if (m_preemptedResourceVCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreemptedResourceVCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preemptedResourceVCores, allocator);
    }

    if (m_numNonAMContainerPreemptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumNonAMContainerPreempted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numNonAMContainerPreempted, allocator);
    }

    if (m_numAMContainerPreemptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumAMContainerPreempted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numAMContainerPreempted, allocator);
    }

    if (m_mapsTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapsTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mapsTotal, allocator);
    }

    if (m_mapsCompletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapsCompleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mapsCompleted, allocator);
    }

    if (m_reducesTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReducesTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reducesTotal, allocator);
    }

    if (m_reducesCompletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReducesCompleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reducesCompleted, allocator);
    }

    if (m_avgMapTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgMapTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgMapTime, allocator);
    }

    if (m_avgReduceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgReduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgReduceTime, allocator);
    }

    if (m_avgShuffleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgShuffleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgShuffleTime, allocator);
    }

    if (m_avgMergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgMergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgMergeTime, allocator);
    }

    if (m_failedReduceAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReduceAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedReduceAttempts, allocator);
    }

    if (m_killedReduceAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KilledReduceAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_killedReduceAttempts, allocator);
    }

    if (m_successfulReduceAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessfulReduceAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successfulReduceAttempts, allocator);
    }

    if (m_failedMapAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMapAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedMapAttempts, allocator);
    }

    if (m_killedMapAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KilledMapAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_killedMapAttempts, allocator);
    }

    if (m_successfulMapAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessfulMapAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successfulMapAttempts, allocator);
    }

    if (m_gcTimeMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GcTimeMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gcTimeMillis, allocator);
    }

    if (m_vCoreMillisMapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCoreMillisMaps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vCoreMillisMaps, allocator);
    }

    if (m_mbMillisMapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MbMillisMaps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbMillisMaps, allocator);
    }

    if (m_vCoreMillisReducesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCoreMillisReduces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vCoreMillisReduces, allocator);
    }

    if (m_mbMillisReducesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MbMillisReduces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbMillisReduces, allocator);
    }

    if (m_totalLaunchedMapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLaunchedMaps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLaunchedMaps, allocator);
    }

    if (m_totalLaunchedReducesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLaunchedReduces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLaunchedReduces, allocator);
    }

    if (m_mapInputRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapInputRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mapInputRecords, allocator);
    }

    if (m_mapOutputRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapOutputRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mapOutputRecords, allocator);
    }

    if (m_reduceInputRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReduceInputRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reduceInputRecords, allocator);
    }

    if (m_reduceOutputRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReduceOutputRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reduceOutputRecords, allocator);
    }

    if (m_hDFSBytesWrittenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HDFSBytesWritten";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hDFSBytesWritten, allocator);
    }

    if (m_hDFSBytesReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HDFSBytesRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hDFSBytesRead, allocator);
    }

}


string YarnApplication::GetId() const
{
    return m_id;
}

void YarnApplication::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool YarnApplication::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string YarnApplication::GetUser() const
{
    return m_user;
}

void YarnApplication::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool YarnApplication::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string YarnApplication::GetName() const
{
    return m_name;
}

void YarnApplication::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool YarnApplication::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string YarnApplication::GetQueue() const
{
    return m_queue;
}

void YarnApplication::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool YarnApplication::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string YarnApplication::GetApplicationType() const
{
    return m_applicationType;
}

void YarnApplication::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool YarnApplication::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string YarnApplication::GetElapsedTime() const
{
    return m_elapsedTime;
}

void YarnApplication::SetElapsedTime(const string& _elapsedTime)
{
    m_elapsedTime = _elapsedTime;
    m_elapsedTimeHasBeenSet = true;
}

bool YarnApplication::ElapsedTimeHasBeenSet() const
{
    return m_elapsedTimeHasBeenSet;
}

string YarnApplication::GetState() const
{
    return m_state;
}

void YarnApplication::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool YarnApplication::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string YarnApplication::GetFinalStatus() const
{
    return m_finalStatus;
}

void YarnApplication::SetFinalStatus(const string& _finalStatus)
{
    m_finalStatus = _finalStatus;
    m_finalStatusHasBeenSet = true;
}

bool YarnApplication::FinalStatusHasBeenSet() const
{
    return m_finalStatusHasBeenSet;
}

int64_t YarnApplication::GetProgress() const
{
    return m_progress;
}

void YarnApplication::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool YarnApplication::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t YarnApplication::GetStartedTime() const
{
    return m_startedTime;
}

void YarnApplication::SetStartedTime(const int64_t& _startedTime)
{
    m_startedTime = _startedTime;
    m_startedTimeHasBeenSet = true;
}

bool YarnApplication::StartedTimeHasBeenSet() const
{
    return m_startedTimeHasBeenSet;
}

int64_t YarnApplication::GetFinishedTime() const
{
    return m_finishedTime;
}

void YarnApplication::SetFinishedTime(const int64_t& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool YarnApplication::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

int64_t YarnApplication::GetAllocatedMB() const
{
    return m_allocatedMB;
}

void YarnApplication::SetAllocatedMB(const int64_t& _allocatedMB)
{
    m_allocatedMB = _allocatedMB;
    m_allocatedMBHasBeenSet = true;
}

bool YarnApplication::AllocatedMBHasBeenSet() const
{
    return m_allocatedMBHasBeenSet;
}

int64_t YarnApplication::GetAllocatedVCores() const
{
    return m_allocatedVCores;
}

void YarnApplication::SetAllocatedVCores(const int64_t& _allocatedVCores)
{
    m_allocatedVCores = _allocatedVCores;
    m_allocatedVCoresHasBeenSet = true;
}

bool YarnApplication::AllocatedVCoresHasBeenSet() const
{
    return m_allocatedVCoresHasBeenSet;
}

int64_t YarnApplication::GetRunningContainers() const
{
    return m_runningContainers;
}

void YarnApplication::SetRunningContainers(const int64_t& _runningContainers)
{
    m_runningContainers = _runningContainers;
    m_runningContainersHasBeenSet = true;
}

bool YarnApplication::RunningContainersHasBeenSet() const
{
    return m_runningContainersHasBeenSet;
}

int64_t YarnApplication::GetMemorySeconds() const
{
    return m_memorySeconds;
}

void YarnApplication::SetMemorySeconds(const int64_t& _memorySeconds)
{
    m_memorySeconds = _memorySeconds;
    m_memorySecondsHasBeenSet = true;
}

bool YarnApplication::MemorySecondsHasBeenSet() const
{
    return m_memorySecondsHasBeenSet;
}

int64_t YarnApplication::GetVCoreSeconds() const
{
    return m_vCoreSeconds;
}

void YarnApplication::SetVCoreSeconds(const int64_t& _vCoreSeconds)
{
    m_vCoreSeconds = _vCoreSeconds;
    m_vCoreSecondsHasBeenSet = true;
}

bool YarnApplication::VCoreSecondsHasBeenSet() const
{
    return m_vCoreSecondsHasBeenSet;
}

double YarnApplication::GetQueueUsagePercentage() const
{
    return m_queueUsagePercentage;
}

void YarnApplication::SetQueueUsagePercentage(const double& _queueUsagePercentage)
{
    m_queueUsagePercentage = _queueUsagePercentage;
    m_queueUsagePercentageHasBeenSet = true;
}

bool YarnApplication::QueueUsagePercentageHasBeenSet() const
{
    return m_queueUsagePercentageHasBeenSet;
}

double YarnApplication::GetClusterUsagePercentage() const
{
    return m_clusterUsagePercentage;
}

void YarnApplication::SetClusterUsagePercentage(const double& _clusterUsagePercentage)
{
    m_clusterUsagePercentage = _clusterUsagePercentage;
    m_clusterUsagePercentageHasBeenSet = true;
}

bool YarnApplication::ClusterUsagePercentageHasBeenSet() const
{
    return m_clusterUsagePercentageHasBeenSet;
}

int64_t YarnApplication::GetPreemptedResourceMB() const
{
    return m_preemptedResourceMB;
}

void YarnApplication::SetPreemptedResourceMB(const int64_t& _preemptedResourceMB)
{
    m_preemptedResourceMB = _preemptedResourceMB;
    m_preemptedResourceMBHasBeenSet = true;
}

bool YarnApplication::PreemptedResourceMBHasBeenSet() const
{
    return m_preemptedResourceMBHasBeenSet;
}

int64_t YarnApplication::GetPreemptedResourceVCores() const
{
    return m_preemptedResourceVCores;
}

void YarnApplication::SetPreemptedResourceVCores(const int64_t& _preemptedResourceVCores)
{
    m_preemptedResourceVCores = _preemptedResourceVCores;
    m_preemptedResourceVCoresHasBeenSet = true;
}

bool YarnApplication::PreemptedResourceVCoresHasBeenSet() const
{
    return m_preemptedResourceVCoresHasBeenSet;
}

int64_t YarnApplication::GetNumNonAMContainerPreempted() const
{
    return m_numNonAMContainerPreempted;
}

void YarnApplication::SetNumNonAMContainerPreempted(const int64_t& _numNonAMContainerPreempted)
{
    m_numNonAMContainerPreempted = _numNonAMContainerPreempted;
    m_numNonAMContainerPreemptedHasBeenSet = true;
}

bool YarnApplication::NumNonAMContainerPreemptedHasBeenSet() const
{
    return m_numNonAMContainerPreemptedHasBeenSet;
}

int64_t YarnApplication::GetNumAMContainerPreempted() const
{
    return m_numAMContainerPreempted;
}

void YarnApplication::SetNumAMContainerPreempted(const int64_t& _numAMContainerPreempted)
{
    m_numAMContainerPreempted = _numAMContainerPreempted;
    m_numAMContainerPreemptedHasBeenSet = true;
}

bool YarnApplication::NumAMContainerPreemptedHasBeenSet() const
{
    return m_numAMContainerPreemptedHasBeenSet;
}

int64_t YarnApplication::GetMapsTotal() const
{
    return m_mapsTotal;
}

void YarnApplication::SetMapsTotal(const int64_t& _mapsTotal)
{
    m_mapsTotal = _mapsTotal;
    m_mapsTotalHasBeenSet = true;
}

bool YarnApplication::MapsTotalHasBeenSet() const
{
    return m_mapsTotalHasBeenSet;
}

int64_t YarnApplication::GetMapsCompleted() const
{
    return m_mapsCompleted;
}

void YarnApplication::SetMapsCompleted(const int64_t& _mapsCompleted)
{
    m_mapsCompleted = _mapsCompleted;
    m_mapsCompletedHasBeenSet = true;
}

bool YarnApplication::MapsCompletedHasBeenSet() const
{
    return m_mapsCompletedHasBeenSet;
}

int64_t YarnApplication::GetReducesTotal() const
{
    return m_reducesTotal;
}

void YarnApplication::SetReducesTotal(const int64_t& _reducesTotal)
{
    m_reducesTotal = _reducesTotal;
    m_reducesTotalHasBeenSet = true;
}

bool YarnApplication::ReducesTotalHasBeenSet() const
{
    return m_reducesTotalHasBeenSet;
}

int64_t YarnApplication::GetReducesCompleted() const
{
    return m_reducesCompleted;
}

void YarnApplication::SetReducesCompleted(const int64_t& _reducesCompleted)
{
    m_reducesCompleted = _reducesCompleted;
    m_reducesCompletedHasBeenSet = true;
}

bool YarnApplication::ReducesCompletedHasBeenSet() const
{
    return m_reducesCompletedHasBeenSet;
}

int64_t YarnApplication::GetAvgMapTime() const
{
    return m_avgMapTime;
}

void YarnApplication::SetAvgMapTime(const int64_t& _avgMapTime)
{
    m_avgMapTime = _avgMapTime;
    m_avgMapTimeHasBeenSet = true;
}

bool YarnApplication::AvgMapTimeHasBeenSet() const
{
    return m_avgMapTimeHasBeenSet;
}

int64_t YarnApplication::GetAvgReduceTime() const
{
    return m_avgReduceTime;
}

void YarnApplication::SetAvgReduceTime(const int64_t& _avgReduceTime)
{
    m_avgReduceTime = _avgReduceTime;
    m_avgReduceTimeHasBeenSet = true;
}

bool YarnApplication::AvgReduceTimeHasBeenSet() const
{
    return m_avgReduceTimeHasBeenSet;
}

int64_t YarnApplication::GetAvgShuffleTime() const
{
    return m_avgShuffleTime;
}

void YarnApplication::SetAvgShuffleTime(const int64_t& _avgShuffleTime)
{
    m_avgShuffleTime = _avgShuffleTime;
    m_avgShuffleTimeHasBeenSet = true;
}

bool YarnApplication::AvgShuffleTimeHasBeenSet() const
{
    return m_avgShuffleTimeHasBeenSet;
}

int64_t YarnApplication::GetAvgMergeTime() const
{
    return m_avgMergeTime;
}

void YarnApplication::SetAvgMergeTime(const int64_t& _avgMergeTime)
{
    m_avgMergeTime = _avgMergeTime;
    m_avgMergeTimeHasBeenSet = true;
}

bool YarnApplication::AvgMergeTimeHasBeenSet() const
{
    return m_avgMergeTimeHasBeenSet;
}

int64_t YarnApplication::GetFailedReduceAttempts() const
{
    return m_failedReduceAttempts;
}

void YarnApplication::SetFailedReduceAttempts(const int64_t& _failedReduceAttempts)
{
    m_failedReduceAttempts = _failedReduceAttempts;
    m_failedReduceAttemptsHasBeenSet = true;
}

bool YarnApplication::FailedReduceAttemptsHasBeenSet() const
{
    return m_failedReduceAttemptsHasBeenSet;
}

int64_t YarnApplication::GetKilledReduceAttempts() const
{
    return m_killedReduceAttempts;
}

void YarnApplication::SetKilledReduceAttempts(const int64_t& _killedReduceAttempts)
{
    m_killedReduceAttempts = _killedReduceAttempts;
    m_killedReduceAttemptsHasBeenSet = true;
}

bool YarnApplication::KilledReduceAttemptsHasBeenSet() const
{
    return m_killedReduceAttemptsHasBeenSet;
}

int64_t YarnApplication::GetSuccessfulReduceAttempts() const
{
    return m_successfulReduceAttempts;
}

void YarnApplication::SetSuccessfulReduceAttempts(const int64_t& _successfulReduceAttempts)
{
    m_successfulReduceAttempts = _successfulReduceAttempts;
    m_successfulReduceAttemptsHasBeenSet = true;
}

bool YarnApplication::SuccessfulReduceAttemptsHasBeenSet() const
{
    return m_successfulReduceAttemptsHasBeenSet;
}

int64_t YarnApplication::GetFailedMapAttempts() const
{
    return m_failedMapAttempts;
}

void YarnApplication::SetFailedMapAttempts(const int64_t& _failedMapAttempts)
{
    m_failedMapAttempts = _failedMapAttempts;
    m_failedMapAttemptsHasBeenSet = true;
}

bool YarnApplication::FailedMapAttemptsHasBeenSet() const
{
    return m_failedMapAttemptsHasBeenSet;
}

int64_t YarnApplication::GetKilledMapAttempts() const
{
    return m_killedMapAttempts;
}

void YarnApplication::SetKilledMapAttempts(const int64_t& _killedMapAttempts)
{
    m_killedMapAttempts = _killedMapAttempts;
    m_killedMapAttemptsHasBeenSet = true;
}

bool YarnApplication::KilledMapAttemptsHasBeenSet() const
{
    return m_killedMapAttemptsHasBeenSet;
}

int64_t YarnApplication::GetSuccessfulMapAttempts() const
{
    return m_successfulMapAttempts;
}

void YarnApplication::SetSuccessfulMapAttempts(const int64_t& _successfulMapAttempts)
{
    m_successfulMapAttempts = _successfulMapAttempts;
    m_successfulMapAttemptsHasBeenSet = true;
}

bool YarnApplication::SuccessfulMapAttemptsHasBeenSet() const
{
    return m_successfulMapAttemptsHasBeenSet;
}

int64_t YarnApplication::GetGcTimeMillis() const
{
    return m_gcTimeMillis;
}

void YarnApplication::SetGcTimeMillis(const int64_t& _gcTimeMillis)
{
    m_gcTimeMillis = _gcTimeMillis;
    m_gcTimeMillisHasBeenSet = true;
}

bool YarnApplication::GcTimeMillisHasBeenSet() const
{
    return m_gcTimeMillisHasBeenSet;
}

int64_t YarnApplication::GetVCoreMillisMaps() const
{
    return m_vCoreMillisMaps;
}

void YarnApplication::SetVCoreMillisMaps(const int64_t& _vCoreMillisMaps)
{
    m_vCoreMillisMaps = _vCoreMillisMaps;
    m_vCoreMillisMapsHasBeenSet = true;
}

bool YarnApplication::VCoreMillisMapsHasBeenSet() const
{
    return m_vCoreMillisMapsHasBeenSet;
}

int64_t YarnApplication::GetMbMillisMaps() const
{
    return m_mbMillisMaps;
}

void YarnApplication::SetMbMillisMaps(const int64_t& _mbMillisMaps)
{
    m_mbMillisMaps = _mbMillisMaps;
    m_mbMillisMapsHasBeenSet = true;
}

bool YarnApplication::MbMillisMapsHasBeenSet() const
{
    return m_mbMillisMapsHasBeenSet;
}

int64_t YarnApplication::GetVCoreMillisReduces() const
{
    return m_vCoreMillisReduces;
}

void YarnApplication::SetVCoreMillisReduces(const int64_t& _vCoreMillisReduces)
{
    m_vCoreMillisReduces = _vCoreMillisReduces;
    m_vCoreMillisReducesHasBeenSet = true;
}

bool YarnApplication::VCoreMillisReducesHasBeenSet() const
{
    return m_vCoreMillisReducesHasBeenSet;
}

int64_t YarnApplication::GetMbMillisReduces() const
{
    return m_mbMillisReduces;
}

void YarnApplication::SetMbMillisReduces(const int64_t& _mbMillisReduces)
{
    m_mbMillisReduces = _mbMillisReduces;
    m_mbMillisReducesHasBeenSet = true;
}

bool YarnApplication::MbMillisReducesHasBeenSet() const
{
    return m_mbMillisReducesHasBeenSet;
}

int64_t YarnApplication::GetTotalLaunchedMaps() const
{
    return m_totalLaunchedMaps;
}

void YarnApplication::SetTotalLaunchedMaps(const int64_t& _totalLaunchedMaps)
{
    m_totalLaunchedMaps = _totalLaunchedMaps;
    m_totalLaunchedMapsHasBeenSet = true;
}

bool YarnApplication::TotalLaunchedMapsHasBeenSet() const
{
    return m_totalLaunchedMapsHasBeenSet;
}

int64_t YarnApplication::GetTotalLaunchedReduces() const
{
    return m_totalLaunchedReduces;
}

void YarnApplication::SetTotalLaunchedReduces(const int64_t& _totalLaunchedReduces)
{
    m_totalLaunchedReduces = _totalLaunchedReduces;
    m_totalLaunchedReducesHasBeenSet = true;
}

bool YarnApplication::TotalLaunchedReducesHasBeenSet() const
{
    return m_totalLaunchedReducesHasBeenSet;
}

int64_t YarnApplication::GetMapInputRecords() const
{
    return m_mapInputRecords;
}

void YarnApplication::SetMapInputRecords(const int64_t& _mapInputRecords)
{
    m_mapInputRecords = _mapInputRecords;
    m_mapInputRecordsHasBeenSet = true;
}

bool YarnApplication::MapInputRecordsHasBeenSet() const
{
    return m_mapInputRecordsHasBeenSet;
}

int64_t YarnApplication::GetMapOutputRecords() const
{
    return m_mapOutputRecords;
}

void YarnApplication::SetMapOutputRecords(const int64_t& _mapOutputRecords)
{
    m_mapOutputRecords = _mapOutputRecords;
    m_mapOutputRecordsHasBeenSet = true;
}

bool YarnApplication::MapOutputRecordsHasBeenSet() const
{
    return m_mapOutputRecordsHasBeenSet;
}

int64_t YarnApplication::GetReduceInputRecords() const
{
    return m_reduceInputRecords;
}

void YarnApplication::SetReduceInputRecords(const int64_t& _reduceInputRecords)
{
    m_reduceInputRecords = _reduceInputRecords;
    m_reduceInputRecordsHasBeenSet = true;
}

bool YarnApplication::ReduceInputRecordsHasBeenSet() const
{
    return m_reduceInputRecordsHasBeenSet;
}

int64_t YarnApplication::GetReduceOutputRecords() const
{
    return m_reduceOutputRecords;
}

void YarnApplication::SetReduceOutputRecords(const int64_t& _reduceOutputRecords)
{
    m_reduceOutputRecords = _reduceOutputRecords;
    m_reduceOutputRecordsHasBeenSet = true;
}

bool YarnApplication::ReduceOutputRecordsHasBeenSet() const
{
    return m_reduceOutputRecordsHasBeenSet;
}

int64_t YarnApplication::GetHDFSBytesWritten() const
{
    return m_hDFSBytesWritten;
}

void YarnApplication::SetHDFSBytesWritten(const int64_t& _hDFSBytesWritten)
{
    m_hDFSBytesWritten = _hDFSBytesWritten;
    m_hDFSBytesWrittenHasBeenSet = true;
}

bool YarnApplication::HDFSBytesWrittenHasBeenSet() const
{
    return m_hDFSBytesWrittenHasBeenSet;
}

int64_t YarnApplication::GetHDFSBytesRead() const
{
    return m_hDFSBytesRead;
}

void YarnApplication::SetHDFSBytesRead(const int64_t& _hDFSBytesRead)
{
    m_hDFSBytesRead = _hDFSBytesRead;
    m_hDFSBytesReadHasBeenSet = true;
}

bool YarnApplication::HDFSBytesReadHasBeenSet() const
{
    return m_hDFSBytesReadHasBeenSet;
}

