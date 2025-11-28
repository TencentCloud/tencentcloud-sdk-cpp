/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/TaskFullRespInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TaskFullRespInfo::TaskFullRespInfo() :
    m_databaseNameHasBeenSet(false),
    m_dataAmountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sQLTypeHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_resultExpiredHasBeenSet(false),
    m_rowAffectInfoHasBeenSet(false),
    m_dataSetHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_outputMessageHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_progressDetailHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputConfHasBeenSet(false),
    m_dataNumberHasBeenSet(false),
    m_canDownloadHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_sparkJobNameHasBeenSet(false),
    m_sparkJobIdHasBeenSet(false),
    m_sparkJobFileHasBeenSet(false),
    m_uiUrlHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_cmdArgsHasBeenSet(false),
    m_imageVersionHasBeenSet(false),
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumsHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_commonMetricsHasBeenSet(false),
    m_sparkMonitorMetricsHasBeenSet(false),
    m_prestoMonitorMetricsHasBeenSet(false),
    m_resultFormatHasBeenSet(false),
    m_engineTypeDetailHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceExtraHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_creatorAliasHasBeenSet(false),
    m_customizedConfHasBeenSet(false),
    m_taskTimeSumHasBeenSet(false),
    m_stageStartTimeHasBeenSet(false),
    m_inputRecordsSumHasBeenSet(false),
    m_analysisStatusTypeHasBeenSet(false),
    m_outputRecordsSumHasBeenSet(false),
    m_outputBytesSumHasBeenSet(false),
    m_outputFilesNumHasBeenSet(false),
    m_outputSmallFilesNumHasBeenSet(false),
    m_shuffleReadRecordsSumHasBeenSet(false),
    m_shuffleReadBytesSumHasBeenSet(false),
    m_sparkAppIdHasBeenSet(false),
    m_taskCategoryHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_engineHasListenerConfigHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_jobTimeSumHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_gpuDriverSizeHasBeenSet(false),
    m_gpuExecutorSizeHasBeenSet(false)
{
}

CoreInternalOutcome TaskFullRespInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DataAmount") && !value["DataAmount"].IsNull())
    {
        if (!value["DataAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DataAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAmount = value["DataAmount"].GetInt64();
        m_dataAmountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.UsedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetInt64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("SQLType") && !value["SQLType"].IsNull())
    {
        if (!value["SQLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SQLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLType = string(value["SQLType"].GetString());
        m_sQLTypeHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("ResultExpired") && !value["ResultExpired"].IsNull())
    {
        if (!value["ResultExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ResultExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resultExpired = value["ResultExpired"].GetBool();
        m_resultExpiredHasBeenSet = true;
    }

    if (value.HasMember("RowAffectInfo") && !value["RowAffectInfo"].IsNull())
    {
        if (!value["RowAffectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.RowAffectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowAffectInfo = string(value["RowAffectInfo"].GetString());
        m_rowAffectInfoHasBeenSet = true;
    }

    if (value.HasMember("DataSet") && !value["DataSet"].IsNull())
    {
        if (!value["DataSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DataSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSet = string(value["DataSet"].GetString());
        m_dataSetHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.Percentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetInt64();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("OutputMessage") && !value["OutputMessage"].IsNull())
    {
        if (!value["OutputMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMessage = string(value["OutputMessage"].GetString());
        m_outputMessageHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ProgressDetail") && !value["ProgressDetail"].IsNull())
    {
        if (!value["ProgressDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ProgressDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progressDetail = string(value["ProgressDetail"].GetString());
        m_progressDetailHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputConf") && !value["InputConf"].IsNull())
    {
        if (!value["InputConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.InputConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputConf = string(value["InputConf"].GetString());
        m_inputConfHasBeenSet = true;
    }

    if (value.HasMember("DataNumber") && !value["DataNumber"].IsNull())
    {
        if (!value["DataNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DataNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataNumber = value["DataNumber"].GetInt64();
        m_dataNumberHasBeenSet = true;
    }

    if (value.HasMember("CanDownload") && !value["CanDownload"].IsNull())
    {
        if (!value["CanDownload"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CanDownload` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDownload = value["CanDownload"].GetBool();
        m_canDownloadHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("SparkJobName") && !value["SparkJobName"].IsNull())
    {
        if (!value["SparkJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SparkJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobName = string(value["SparkJobName"].GetString());
        m_sparkJobNameHasBeenSet = true;
    }

    if (value.HasMember("SparkJobId") && !value["SparkJobId"].IsNull())
    {
        if (!value["SparkJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SparkJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobId = string(value["SparkJobId"].GetString());
        m_sparkJobIdHasBeenSet = true;
    }

    if (value.HasMember("SparkJobFile") && !value["SparkJobFile"].IsNull())
    {
        if (!value["SparkJobFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SparkJobFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobFile = string(value["SparkJobFile"].GetString());
        m_sparkJobFileHasBeenSet = true;
    }

    if (value.HasMember("UiUrl") && !value["UiUrl"].IsNull())
    {
        if (!value["UiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.UiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uiUrl = string(value["UiUrl"].GetString());
        m_uiUrlHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("CmdArgs") && !value["CmdArgs"].IsNull())
    {
        if (!value["CmdArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CmdArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdArgs = string(value["CmdArgs"].GetString());
        m_cmdArgsHasBeenSet = true;
    }

    if (value.HasMember("ImageVersion") && !value["ImageVersion"].IsNull())
    {
        if (!value["ImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersion = string(value["ImageVersion"].GetString());
        m_imageVersionHasBeenSet = true;
    }

    if (value.HasMember("DriverSize") && !value["DriverSize"].IsNull())
    {
        if (!value["DriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.DriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSize = string(value["DriverSize"].GetString());
        m_driverSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSize") && !value["ExecutorSize"].IsNull())
    {
        if (!value["ExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSize = string(value["ExecutorSize"].GetString());
        m_executorSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNums") && !value["ExecutorNums"].IsNull())
    {
        if (!value["ExecutorNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ExecutorNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNums = value["ExecutorNums"].GetUint64();
        m_executorNumsHasBeenSet = true;
    }

    if (value.HasMember("ExecutorMaxNumbers") && !value["ExecutorMaxNumbers"].IsNull())
    {
        if (!value["ExecutorMaxNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ExecutorMaxNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorMaxNumbers = value["ExecutorMaxNumbers"].GetUint64();
        m_executorMaxNumbersHasBeenSet = true;
    }

    if (value.HasMember("CommonMetrics") && !value["CommonMetrics"].IsNull())
    {
        if (!value["CommonMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CommonMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonMetrics.Deserialize(value["CommonMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonMetricsHasBeenSet = true;
    }

    if (value.HasMember("SparkMonitorMetrics") && !value["SparkMonitorMetrics"].IsNull())
    {
        if (!value["SparkMonitorMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SparkMonitorMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sparkMonitorMetrics.Deserialize(value["SparkMonitorMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sparkMonitorMetricsHasBeenSet = true;
    }

    if (value.HasMember("PrestoMonitorMetrics") && !value["PrestoMonitorMetrics"].IsNull())
    {
        if (!value["PrestoMonitorMetrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.PrestoMonitorMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prestoMonitorMetrics.Deserialize(value["PrestoMonitorMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prestoMonitorMetricsHasBeenSet = true;
    }

    if (value.HasMember("ResultFormat") && !value["ResultFormat"].IsNull())
    {
        if (!value["ResultFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ResultFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultFormat = string(value["ResultFormat"].GetString());
        m_resultFormatHasBeenSet = true;
    }

    if (value.HasMember("EngineTypeDetail") && !value["EngineTypeDetail"].IsNull())
    {
        if (!value["EngineTypeDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.EngineTypeDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineTypeDetail = string(value["EngineTypeDetail"].GetString());
        m_engineTypeDetailHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceExtra") && !value["SourceExtra"].IsNull())
    {
        if (!value["SourceExtra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SourceExtra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceExtra = string(value["SourceExtra"].GetString());
        m_sourceExtraHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorAlias") && !value["CreatorAlias"].IsNull())
    {
        if (!value["CreatorAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CreatorAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorAlias = string(value["CreatorAlias"].GetString());
        m_creatorAliasHasBeenSet = true;
    }

    if (value.HasMember("CustomizedConf") && !value["CustomizedConf"].IsNull())
    {
        if (!value["CustomizedConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.CustomizedConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customizedConf = string(value["CustomizedConf"].GetString());
        m_customizedConfHasBeenSet = true;
    }

    if (value.HasMember("TaskTimeSum") && !value["TaskTimeSum"].IsNull())
    {
        if (!value["TaskTimeSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.TaskTimeSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTimeSum = value["TaskTimeSum"].GetInt64();
        m_taskTimeSumHasBeenSet = true;
    }

    if (value.HasMember("StageStartTime") && !value["StageStartTime"].IsNull())
    {
        if (!value["StageStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.StageStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stageStartTime = value["StageStartTime"].GetInt64();
        m_stageStartTimeHasBeenSet = true;
    }

    if (value.HasMember("InputRecordsSum") && !value["InputRecordsSum"].IsNull())
    {
        if (!value["InputRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.InputRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputRecordsSum = value["InputRecordsSum"].GetInt64();
        m_inputRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("AnalysisStatusType") && !value["AnalysisStatusType"].IsNull())
    {
        if (!value["AnalysisStatusType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.AnalysisStatusType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_analysisStatusType = value["AnalysisStatusType"].GetInt64();
        m_analysisStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputRecordsSum") && !value["OutputRecordsSum"].IsNull())
    {
        if (!value["OutputRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputRecordsSum = value["OutputRecordsSum"].GetInt64();
        m_outputRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("OutputBytesSum") && !value["OutputBytesSum"].IsNull())
    {
        if (!value["OutputBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputBytesSum = value["OutputBytesSum"].GetInt64();
        m_outputBytesSumHasBeenSet = true;
    }

    if (value.HasMember("OutputFilesNum") && !value["OutputFilesNum"].IsNull())
    {
        if (!value["OutputFilesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputFilesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputFilesNum = value["OutputFilesNum"].GetInt64();
        m_outputFilesNumHasBeenSet = true;
    }

    if (value.HasMember("OutputSmallFilesNum") && !value["OutputSmallFilesNum"].IsNull())
    {
        if (!value["OutputSmallFilesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.OutputSmallFilesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputSmallFilesNum = value["OutputSmallFilesNum"].GetInt64();
        m_outputSmallFilesNumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadRecordsSum") && !value["ShuffleReadRecordsSum"].IsNull())
    {
        if (!value["ShuffleReadRecordsSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ShuffleReadRecordsSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadRecordsSum = value["ShuffleReadRecordsSum"].GetInt64();
        m_shuffleReadRecordsSumHasBeenSet = true;
    }

    if (value.HasMember("ShuffleReadBytesSum") && !value["ShuffleReadBytesSum"].IsNull())
    {
        if (!value["ShuffleReadBytesSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ShuffleReadBytesSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleReadBytesSum = value["ShuffleReadBytesSum"].GetInt64();
        m_shuffleReadBytesSumHasBeenSet = true;
    }

    if (value.HasMember("SparkAppId") && !value["SparkAppId"].IsNull())
    {
        if (!value["SparkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.SparkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkAppId = string(value["SparkAppId"].GetString());
        m_sparkAppIdHasBeenSet = true;
    }

    if (value.HasMember("TaskCategory") && !value["TaskCategory"].IsNull())
    {
        if (!value["TaskCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.TaskCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCategory = string(value["TaskCategory"].GetString());
        m_taskCategoryHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineHasListenerConfig") && !value["EngineHasListenerConfig"].IsNull())
    {
        if (!value["EngineHasListenerConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.EngineHasListenerConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_engineHasListenerConfig = value["EngineHasListenerConfig"].GetBool();
        m_engineHasListenerConfigHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("JobTimeSum") && !value["JobTimeSum"].IsNull())
    {
        if (!value["JobTimeSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.JobTimeSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobTimeSum = value["JobTimeSum"].GetInt64();
        m_jobTimeSumHasBeenSet = true;
    }

    if (value.HasMember("LaunchTime") && !value["LaunchTime"].IsNull())
    {
        if (!value["LaunchTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.LaunchTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTime = string(value["LaunchTime"].GetString());
        m_launchTimeHasBeenSet = true;
    }

    if (value.HasMember("GpuDriverSize") && !value["GpuDriverSize"].IsNull())
    {
        if (!value["GpuDriverSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.GpuDriverSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuDriverSize = value["GpuDriverSize"].GetInt64();
        m_gpuDriverSizeHasBeenSet = true;
    }

    if (value.HasMember("GpuExecutorSize") && !value["GpuExecutorSize"].IsNull())
    {
        if (!value["GpuExecutorSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFullRespInfo.GpuExecutorSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuExecutorSize = value["GpuExecutorSize"].GetInt64();
        m_gpuExecutorSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFullRespInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAmount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTime, allocator);
    }

    if (m_outputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_sQLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLType.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_resultExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultExpired, allocator);
    }

    if (m_rowAffectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowAffectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowAffectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSet.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_outputMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_progressDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progressDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputConf.c_str(), allocator).Move(), allocator);
    }

    if (m_dataNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataNumber, allocator);
    }

    if (m_canDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDownload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDownload, allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobFile.c_str(), allocator).Move(), allocator);
    }

    if (m_uiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_cmdArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdArgs.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNums, allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_commonMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commonMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sparkMonitorMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkMonitorMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sparkMonitorMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prestoMonitorMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrestoMonitorMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prestoMonitorMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineTypeDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceExtra.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_customizedConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizedConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customizedConf.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTimeSum, allocator);
    }

    if (m_stageStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StageStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stageStartTime, allocator);
    }

    if (m_inputRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputRecordsSum, allocator);
    }

    if (m_analysisStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysisStatusType, allocator);
    }

    if (m_outputRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputRecordsSum, allocator);
    }

    if (m_outputBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputBytesSum, allocator);
    }

    if (m_outputFilesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFilesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputFilesNum, allocator);
    }

    if (m_outputSmallFilesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSmallFilesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputSmallFilesNum, allocator);
    }

    if (m_shuffleReadRecordsSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleReadRecordsSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleReadRecordsSum, allocator);
    }

    if (m_shuffleReadBytesSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleReadBytesSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleReadBytesSum, allocator);
    }

    if (m_sparkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasListenerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineHasListenerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineHasListenerConfig, allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobTimeSum, allocator);
    }

    if (m_launchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTime.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuDriverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuDriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuDriverSize, allocator);
    }

    if (m_gpuExecutorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuExecutorSize, allocator);
    }

}


string TaskFullRespInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskFullRespInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskFullRespInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t TaskFullRespInfo::GetDataAmount() const
{
    return m_dataAmount;
}

void TaskFullRespInfo::SetDataAmount(const int64_t& _dataAmount)
{
    m_dataAmount = _dataAmount;
    m_dataAmountHasBeenSet = true;
}

bool TaskFullRespInfo::DataAmountHasBeenSet() const
{
    return m_dataAmountHasBeenSet;
}

string TaskFullRespInfo::GetId() const
{
    return m_id;
}

void TaskFullRespInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskFullRespInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t TaskFullRespInfo::GetUsedTime() const
{
    return m_usedTime;
}

void TaskFullRespInfo::SetUsedTime(const int64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool TaskFullRespInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

string TaskFullRespInfo::GetOutputPath() const
{
    return m_outputPath;
}

void TaskFullRespInfo::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool TaskFullRespInfo::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

string TaskFullRespInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskFullRespInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskFullRespInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TaskFullRespInfo::GetState() const
{
    return m_state;
}

void TaskFullRespInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskFullRespInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TaskFullRespInfo::GetSQLType() const
{
    return m_sQLType;
}

void TaskFullRespInfo::SetSQLType(const string& _sQLType)
{
    m_sQLType = _sQLType;
    m_sQLTypeHasBeenSet = true;
}

bool TaskFullRespInfo::SQLTypeHasBeenSet() const
{
    return m_sQLTypeHasBeenSet;
}

string TaskFullRespInfo::GetSQL() const
{
    return m_sQL;
}

void TaskFullRespInfo::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool TaskFullRespInfo::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

bool TaskFullRespInfo::GetResultExpired() const
{
    return m_resultExpired;
}

void TaskFullRespInfo::SetResultExpired(const bool& _resultExpired)
{
    m_resultExpired = _resultExpired;
    m_resultExpiredHasBeenSet = true;
}

bool TaskFullRespInfo::ResultExpiredHasBeenSet() const
{
    return m_resultExpiredHasBeenSet;
}

string TaskFullRespInfo::GetRowAffectInfo() const
{
    return m_rowAffectInfo;
}

void TaskFullRespInfo::SetRowAffectInfo(const string& _rowAffectInfo)
{
    m_rowAffectInfo = _rowAffectInfo;
    m_rowAffectInfoHasBeenSet = true;
}

bool TaskFullRespInfo::RowAffectInfoHasBeenSet() const
{
    return m_rowAffectInfoHasBeenSet;
}

string TaskFullRespInfo::GetDataSet() const
{
    return m_dataSet;
}

void TaskFullRespInfo::SetDataSet(const string& _dataSet)
{
    m_dataSet = _dataSet;
    m_dataSetHasBeenSet = true;
}

bool TaskFullRespInfo::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

string TaskFullRespInfo::GetError() const
{
    return m_error;
}

void TaskFullRespInfo::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TaskFullRespInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

int64_t TaskFullRespInfo::GetPercentage() const
{
    return m_percentage;
}

void TaskFullRespInfo::SetPercentage(const int64_t& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool TaskFullRespInfo::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

string TaskFullRespInfo::GetOutputMessage() const
{
    return m_outputMessage;
}

void TaskFullRespInfo::SetOutputMessage(const string& _outputMessage)
{
    m_outputMessage = _outputMessage;
    m_outputMessageHasBeenSet = true;
}

bool TaskFullRespInfo::OutputMessageHasBeenSet() const
{
    return m_outputMessageHasBeenSet;
}

string TaskFullRespInfo::GetTaskType() const
{
    return m_taskType;
}

void TaskFullRespInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskFullRespInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskFullRespInfo::GetProgressDetail() const
{
    return m_progressDetail;
}

void TaskFullRespInfo::SetProgressDetail(const string& _progressDetail)
{
    m_progressDetail = _progressDetail;
    m_progressDetailHasBeenSet = true;
}

bool TaskFullRespInfo::ProgressDetailHasBeenSet() const
{
    return m_progressDetailHasBeenSet;
}

string TaskFullRespInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskFullRespInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskFullRespInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskFullRespInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void TaskFullRespInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool TaskFullRespInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string TaskFullRespInfo::GetOperateUin() const
{
    return m_operateUin;
}

void TaskFullRespInfo::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool TaskFullRespInfo::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string TaskFullRespInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void TaskFullRespInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool TaskFullRespInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string TaskFullRespInfo::GetInputType() const
{
    return m_inputType;
}

void TaskFullRespInfo::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool TaskFullRespInfo::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string TaskFullRespInfo::GetInputConf() const
{
    return m_inputConf;
}

void TaskFullRespInfo::SetInputConf(const string& _inputConf)
{
    m_inputConf = _inputConf;
    m_inputConfHasBeenSet = true;
}

bool TaskFullRespInfo::InputConfHasBeenSet() const
{
    return m_inputConfHasBeenSet;
}

int64_t TaskFullRespInfo::GetDataNumber() const
{
    return m_dataNumber;
}

void TaskFullRespInfo::SetDataNumber(const int64_t& _dataNumber)
{
    m_dataNumber = _dataNumber;
    m_dataNumberHasBeenSet = true;
}

bool TaskFullRespInfo::DataNumberHasBeenSet() const
{
    return m_dataNumberHasBeenSet;
}

bool TaskFullRespInfo::GetCanDownload() const
{
    return m_canDownload;
}

void TaskFullRespInfo::SetCanDownload(const bool& _canDownload)
{
    m_canDownload = _canDownload;
    m_canDownloadHasBeenSet = true;
}

bool TaskFullRespInfo::CanDownloadHasBeenSet() const
{
    return m_canDownloadHasBeenSet;
}

string TaskFullRespInfo::GetUserAlias() const
{
    return m_userAlias;
}

void TaskFullRespInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool TaskFullRespInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

string TaskFullRespInfo::GetSparkJobName() const
{
    return m_sparkJobName;
}

void TaskFullRespInfo::SetSparkJobName(const string& _sparkJobName)
{
    m_sparkJobName = _sparkJobName;
    m_sparkJobNameHasBeenSet = true;
}

bool TaskFullRespInfo::SparkJobNameHasBeenSet() const
{
    return m_sparkJobNameHasBeenSet;
}

string TaskFullRespInfo::GetSparkJobId() const
{
    return m_sparkJobId;
}

void TaskFullRespInfo::SetSparkJobId(const string& _sparkJobId)
{
    m_sparkJobId = _sparkJobId;
    m_sparkJobIdHasBeenSet = true;
}

bool TaskFullRespInfo::SparkJobIdHasBeenSet() const
{
    return m_sparkJobIdHasBeenSet;
}

string TaskFullRespInfo::GetSparkJobFile() const
{
    return m_sparkJobFile;
}

void TaskFullRespInfo::SetSparkJobFile(const string& _sparkJobFile)
{
    m_sparkJobFile = _sparkJobFile;
    m_sparkJobFileHasBeenSet = true;
}

bool TaskFullRespInfo::SparkJobFileHasBeenSet() const
{
    return m_sparkJobFileHasBeenSet;
}

string TaskFullRespInfo::GetUiUrl() const
{
    return m_uiUrl;
}

void TaskFullRespInfo::SetUiUrl(const string& _uiUrl)
{
    m_uiUrl = _uiUrl;
    m_uiUrlHasBeenSet = true;
}

bool TaskFullRespInfo::UiUrlHasBeenSet() const
{
    return m_uiUrlHasBeenSet;
}

int64_t TaskFullRespInfo::GetTotalTime() const
{
    return m_totalTime;
}

void TaskFullRespInfo::SetTotalTime(const int64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool TaskFullRespInfo::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

string TaskFullRespInfo::GetCmdArgs() const
{
    return m_cmdArgs;
}

void TaskFullRespInfo::SetCmdArgs(const string& _cmdArgs)
{
    m_cmdArgs = _cmdArgs;
    m_cmdArgsHasBeenSet = true;
}

bool TaskFullRespInfo::CmdArgsHasBeenSet() const
{
    return m_cmdArgsHasBeenSet;
}

string TaskFullRespInfo::GetImageVersion() const
{
    return m_imageVersion;
}

void TaskFullRespInfo::SetImageVersion(const string& _imageVersion)
{
    m_imageVersion = _imageVersion;
    m_imageVersionHasBeenSet = true;
}

bool TaskFullRespInfo::ImageVersionHasBeenSet() const
{
    return m_imageVersionHasBeenSet;
}

string TaskFullRespInfo::GetDriverSize() const
{
    return m_driverSize;
}

void TaskFullRespInfo::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool TaskFullRespInfo::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string TaskFullRespInfo::GetExecutorSize() const
{
    return m_executorSize;
}

void TaskFullRespInfo::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool TaskFullRespInfo::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t TaskFullRespInfo::GetExecutorNums() const
{
    return m_executorNums;
}

void TaskFullRespInfo::SetExecutorNums(const uint64_t& _executorNums)
{
    m_executorNums = _executorNums;
    m_executorNumsHasBeenSet = true;
}

bool TaskFullRespInfo::ExecutorNumsHasBeenSet() const
{
    return m_executorNumsHasBeenSet;
}

uint64_t TaskFullRespInfo::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void TaskFullRespInfo::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool TaskFullRespInfo::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

CommonMetrics TaskFullRespInfo::GetCommonMetrics() const
{
    return m_commonMetrics;
}

void TaskFullRespInfo::SetCommonMetrics(const CommonMetrics& _commonMetrics)
{
    m_commonMetrics = _commonMetrics;
    m_commonMetricsHasBeenSet = true;
}

bool TaskFullRespInfo::CommonMetricsHasBeenSet() const
{
    return m_commonMetricsHasBeenSet;
}

SparkMonitorMetrics TaskFullRespInfo::GetSparkMonitorMetrics() const
{
    return m_sparkMonitorMetrics;
}

void TaskFullRespInfo::SetSparkMonitorMetrics(const SparkMonitorMetrics& _sparkMonitorMetrics)
{
    m_sparkMonitorMetrics = _sparkMonitorMetrics;
    m_sparkMonitorMetricsHasBeenSet = true;
}

bool TaskFullRespInfo::SparkMonitorMetricsHasBeenSet() const
{
    return m_sparkMonitorMetricsHasBeenSet;
}

PrestoMonitorMetrics TaskFullRespInfo::GetPrestoMonitorMetrics() const
{
    return m_prestoMonitorMetrics;
}

void TaskFullRespInfo::SetPrestoMonitorMetrics(const PrestoMonitorMetrics& _prestoMonitorMetrics)
{
    m_prestoMonitorMetrics = _prestoMonitorMetrics;
    m_prestoMonitorMetricsHasBeenSet = true;
}

bool TaskFullRespInfo::PrestoMonitorMetricsHasBeenSet() const
{
    return m_prestoMonitorMetricsHasBeenSet;
}

string TaskFullRespInfo::GetResultFormat() const
{
    return m_resultFormat;
}

void TaskFullRespInfo::SetResultFormat(const string& _resultFormat)
{
    m_resultFormat = _resultFormat;
    m_resultFormatHasBeenSet = true;
}

bool TaskFullRespInfo::ResultFormatHasBeenSet() const
{
    return m_resultFormatHasBeenSet;
}

string TaskFullRespInfo::GetEngineTypeDetail() const
{
    return m_engineTypeDetail;
}

void TaskFullRespInfo::SetEngineTypeDetail(const string& _engineTypeDetail)
{
    m_engineTypeDetail = _engineTypeDetail;
    m_engineTypeDetailHasBeenSet = true;
}

bool TaskFullRespInfo::EngineTypeDetailHasBeenSet() const
{
    return m_engineTypeDetailHasBeenSet;
}

string TaskFullRespInfo::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void TaskFullRespInfo::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool TaskFullRespInfo::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string TaskFullRespInfo::GetSource() const
{
    return m_source;
}

void TaskFullRespInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TaskFullRespInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TaskFullRespInfo::GetSourceExtra() const
{
    return m_sourceExtra;
}

void TaskFullRespInfo::SetSourceExtra(const string& _sourceExtra)
{
    m_sourceExtra = _sourceExtra;
    m_sourceExtraHasBeenSet = true;
}

bool TaskFullRespInfo::SourceExtraHasBeenSet() const
{
    return m_sourceExtraHasBeenSet;
}

string TaskFullRespInfo::GetCreatorUin() const
{
    return m_creatorUin;
}

void TaskFullRespInfo::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool TaskFullRespInfo::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string TaskFullRespInfo::GetCreatorAlias() const
{
    return m_creatorAlias;
}

void TaskFullRespInfo::SetCreatorAlias(const string& _creatorAlias)
{
    m_creatorAlias = _creatorAlias;
    m_creatorAliasHasBeenSet = true;
}

bool TaskFullRespInfo::CreatorAliasHasBeenSet() const
{
    return m_creatorAliasHasBeenSet;
}

string TaskFullRespInfo::GetCustomizedConf() const
{
    return m_customizedConf;
}

void TaskFullRespInfo::SetCustomizedConf(const string& _customizedConf)
{
    m_customizedConf = _customizedConf;
    m_customizedConfHasBeenSet = true;
}

bool TaskFullRespInfo::CustomizedConfHasBeenSet() const
{
    return m_customizedConfHasBeenSet;
}

int64_t TaskFullRespInfo::GetTaskTimeSum() const
{
    return m_taskTimeSum;
}

void TaskFullRespInfo::SetTaskTimeSum(const int64_t& _taskTimeSum)
{
    m_taskTimeSum = _taskTimeSum;
    m_taskTimeSumHasBeenSet = true;
}

bool TaskFullRespInfo::TaskTimeSumHasBeenSet() const
{
    return m_taskTimeSumHasBeenSet;
}

int64_t TaskFullRespInfo::GetStageStartTime() const
{
    return m_stageStartTime;
}

void TaskFullRespInfo::SetStageStartTime(const int64_t& _stageStartTime)
{
    m_stageStartTime = _stageStartTime;
    m_stageStartTimeHasBeenSet = true;
}

bool TaskFullRespInfo::StageStartTimeHasBeenSet() const
{
    return m_stageStartTimeHasBeenSet;
}

int64_t TaskFullRespInfo::GetInputRecordsSum() const
{
    return m_inputRecordsSum;
}

void TaskFullRespInfo::SetInputRecordsSum(const int64_t& _inputRecordsSum)
{
    m_inputRecordsSum = _inputRecordsSum;
    m_inputRecordsSumHasBeenSet = true;
}

bool TaskFullRespInfo::InputRecordsSumHasBeenSet() const
{
    return m_inputRecordsSumHasBeenSet;
}

int64_t TaskFullRespInfo::GetAnalysisStatusType() const
{
    return m_analysisStatusType;
}

void TaskFullRespInfo::SetAnalysisStatusType(const int64_t& _analysisStatusType)
{
    m_analysisStatusType = _analysisStatusType;
    m_analysisStatusTypeHasBeenSet = true;
}

bool TaskFullRespInfo::AnalysisStatusTypeHasBeenSet() const
{
    return m_analysisStatusTypeHasBeenSet;
}

int64_t TaskFullRespInfo::GetOutputRecordsSum() const
{
    return m_outputRecordsSum;
}

void TaskFullRespInfo::SetOutputRecordsSum(const int64_t& _outputRecordsSum)
{
    m_outputRecordsSum = _outputRecordsSum;
    m_outputRecordsSumHasBeenSet = true;
}

bool TaskFullRespInfo::OutputRecordsSumHasBeenSet() const
{
    return m_outputRecordsSumHasBeenSet;
}

int64_t TaskFullRespInfo::GetOutputBytesSum() const
{
    return m_outputBytesSum;
}

void TaskFullRespInfo::SetOutputBytesSum(const int64_t& _outputBytesSum)
{
    m_outputBytesSum = _outputBytesSum;
    m_outputBytesSumHasBeenSet = true;
}

bool TaskFullRespInfo::OutputBytesSumHasBeenSet() const
{
    return m_outputBytesSumHasBeenSet;
}

int64_t TaskFullRespInfo::GetOutputFilesNum() const
{
    return m_outputFilesNum;
}

void TaskFullRespInfo::SetOutputFilesNum(const int64_t& _outputFilesNum)
{
    m_outputFilesNum = _outputFilesNum;
    m_outputFilesNumHasBeenSet = true;
}

bool TaskFullRespInfo::OutputFilesNumHasBeenSet() const
{
    return m_outputFilesNumHasBeenSet;
}

int64_t TaskFullRespInfo::GetOutputSmallFilesNum() const
{
    return m_outputSmallFilesNum;
}

void TaskFullRespInfo::SetOutputSmallFilesNum(const int64_t& _outputSmallFilesNum)
{
    m_outputSmallFilesNum = _outputSmallFilesNum;
    m_outputSmallFilesNumHasBeenSet = true;
}

bool TaskFullRespInfo::OutputSmallFilesNumHasBeenSet() const
{
    return m_outputSmallFilesNumHasBeenSet;
}

int64_t TaskFullRespInfo::GetShuffleReadRecordsSum() const
{
    return m_shuffleReadRecordsSum;
}

void TaskFullRespInfo::SetShuffleReadRecordsSum(const int64_t& _shuffleReadRecordsSum)
{
    m_shuffleReadRecordsSum = _shuffleReadRecordsSum;
    m_shuffleReadRecordsSumHasBeenSet = true;
}

bool TaskFullRespInfo::ShuffleReadRecordsSumHasBeenSet() const
{
    return m_shuffleReadRecordsSumHasBeenSet;
}

int64_t TaskFullRespInfo::GetShuffleReadBytesSum() const
{
    return m_shuffleReadBytesSum;
}

void TaskFullRespInfo::SetShuffleReadBytesSum(const int64_t& _shuffleReadBytesSum)
{
    m_shuffleReadBytesSum = _shuffleReadBytesSum;
    m_shuffleReadBytesSumHasBeenSet = true;
}

bool TaskFullRespInfo::ShuffleReadBytesSumHasBeenSet() const
{
    return m_shuffleReadBytesSumHasBeenSet;
}

string TaskFullRespInfo::GetSparkAppId() const
{
    return m_sparkAppId;
}

void TaskFullRespInfo::SetSparkAppId(const string& _sparkAppId)
{
    m_sparkAppId = _sparkAppId;
    m_sparkAppIdHasBeenSet = true;
}

bool TaskFullRespInfo::SparkAppIdHasBeenSet() const
{
    return m_sparkAppIdHasBeenSet;
}

string TaskFullRespInfo::GetTaskCategory() const
{
    return m_taskCategory;
}

void TaskFullRespInfo::SetTaskCategory(const string& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool TaskFullRespInfo::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

string TaskFullRespInfo::GetTaskName() const
{
    return m_taskName;
}

void TaskFullRespInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskFullRespInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskFullRespInfo::GetEngineType() const
{
    return m_engineType;
}

void TaskFullRespInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool TaskFullRespInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

bool TaskFullRespInfo::GetEngineHasListenerConfig() const
{
    return m_engineHasListenerConfig;
}

void TaskFullRespInfo::SetEngineHasListenerConfig(const bool& _engineHasListenerConfig)
{
    m_engineHasListenerConfig = _engineHasListenerConfig;
    m_engineHasListenerConfigHasBeenSet = true;
}

bool TaskFullRespInfo::EngineHasListenerConfigHasBeenSet() const
{
    return m_engineHasListenerConfigHasBeenSet;
}

string TaskFullRespInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void TaskFullRespInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool TaskFullRespInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

int64_t TaskFullRespInfo::GetJobTimeSum() const
{
    return m_jobTimeSum;
}

void TaskFullRespInfo::SetJobTimeSum(const int64_t& _jobTimeSum)
{
    m_jobTimeSum = _jobTimeSum;
    m_jobTimeSumHasBeenSet = true;
}

bool TaskFullRespInfo::JobTimeSumHasBeenSet() const
{
    return m_jobTimeSumHasBeenSet;
}

string TaskFullRespInfo::GetLaunchTime() const
{
    return m_launchTime;
}

void TaskFullRespInfo::SetLaunchTime(const string& _launchTime)
{
    m_launchTime = _launchTime;
    m_launchTimeHasBeenSet = true;
}

bool TaskFullRespInfo::LaunchTimeHasBeenSet() const
{
    return m_launchTimeHasBeenSet;
}

int64_t TaskFullRespInfo::GetGpuDriverSize() const
{
    return m_gpuDriverSize;
}

void TaskFullRespInfo::SetGpuDriverSize(const int64_t& _gpuDriverSize)
{
    m_gpuDriverSize = _gpuDriverSize;
    m_gpuDriverSizeHasBeenSet = true;
}

bool TaskFullRespInfo::GpuDriverSizeHasBeenSet() const
{
    return m_gpuDriverSizeHasBeenSet;
}

int64_t TaskFullRespInfo::GetGpuExecutorSize() const
{
    return m_gpuExecutorSize;
}

void TaskFullRespInfo::SetGpuExecutorSize(const int64_t& _gpuExecutorSize)
{
    m_gpuExecutorSize = _gpuExecutorSize;
    m_gpuExecutorSizeHasBeenSet = true;
}

bool TaskFullRespInfo::GpuExecutorSizeHasBeenSet() const
{
    return m_gpuExecutorSizeHasBeenSet;
}

