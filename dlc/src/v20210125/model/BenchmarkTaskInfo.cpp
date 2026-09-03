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

#include <tencentcloud/dlc/v20210125/model/BenchmarkTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BenchmarkTaskInfo::BenchmarkTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_totalPromptsHasBeenSet(false),
    m_useGatewayHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_apiKeyIdHasBeenSet(false),
    m_apiKeyNameHasBeenSet(false),
    m_timeToFirstTokenAvgHasBeenSet(false),
    m_timeToFirstTokenMedianHasBeenSet(false),
    m_timeToFirstTokenP99HasBeenSet(false),
    m_timePerOutputTokenAvgHasBeenSet(false),
    m_timePerOutputTokenMedianHasBeenSet(false),
    m_timePerOutputTokenP99HasBeenSet(false),
    m_interTokenLatencyAvgHasBeenSet(false),
    m_interTokenLatencyMedianHasBeenSet(false),
    m_interTokenLatencyP99HasBeenSet(false),
    m_endToEndAvgHasBeenSet(false),
    m_endToEndMedianHasBeenSet(false),
    m_endToEndP99HasBeenSet(false),
    m_tokenThroughputHasBeenSet(false),
    m_requestThroughputHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome BenchmarkTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("RequestsPerSecond") && !value["RequestsPerSecond"].IsNull())
    {
        if (!value["RequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.RequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestsPerSecond = value["RequestsPerSecond"].GetDouble();
        m_requestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.MaxConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetUint64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("TotalPrompts") && !value["TotalPrompts"].IsNull())
    {
        if (!value["TotalPrompts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TotalPrompts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPrompts = value["TotalPrompts"].GetUint64();
        m_totalPromptsHasBeenSet = true;
    }

    if (value.HasMember("UseGateway") && !value["UseGateway"].IsNull())
    {
        if (!value["UseGateway"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.UseGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useGateway = value["UseGateway"].GetBool();
        m_useGatewayHasBeenSet = true;
    }

    if (value.HasMember("DeploymentName") && !value["DeploymentName"].IsNull())
    {
        if (!value["DeploymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.DeploymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentName = string(value["DeploymentName"].GetString());
        m_deploymentNameHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyId") && !value["ApiKeyId"].IsNull())
    {
        if (!value["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(value["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyName") && !value["ApiKeyName"].IsNull())
    {
        if (!value["ApiKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.ApiKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyName = string(value["ApiKeyName"].GetString());
        m_apiKeyNameHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenAvg") && !value["TimeToFirstTokenAvg"].IsNull())
    {
        if (!value["TimeToFirstTokenAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimeToFirstTokenAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenAvg = value["TimeToFirstTokenAvg"].GetDouble();
        m_timeToFirstTokenAvgHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenMedian") && !value["TimeToFirstTokenMedian"].IsNull())
    {
        if (!value["TimeToFirstTokenMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimeToFirstTokenMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenMedian = value["TimeToFirstTokenMedian"].GetDouble();
        m_timeToFirstTokenMedianHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenP99") && !value["TimeToFirstTokenP99"].IsNull())
    {
        if (!value["TimeToFirstTokenP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimeToFirstTokenP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenP99 = value["TimeToFirstTokenP99"].GetDouble();
        m_timeToFirstTokenP99HasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenAvg") && !value["TimePerOutputTokenAvg"].IsNull())
    {
        if (!value["TimePerOutputTokenAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimePerOutputTokenAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenAvg = value["TimePerOutputTokenAvg"].GetDouble();
        m_timePerOutputTokenAvgHasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenMedian") && !value["TimePerOutputTokenMedian"].IsNull())
    {
        if (!value["TimePerOutputTokenMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimePerOutputTokenMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenMedian = value["TimePerOutputTokenMedian"].GetDouble();
        m_timePerOutputTokenMedianHasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenP99") && !value["TimePerOutputTokenP99"].IsNull())
    {
        if (!value["TimePerOutputTokenP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TimePerOutputTokenP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenP99 = value["TimePerOutputTokenP99"].GetDouble();
        m_timePerOutputTokenP99HasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyAvg") && !value["InterTokenLatencyAvg"].IsNull())
    {
        if (!value["InterTokenLatencyAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.InterTokenLatencyAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyAvg = value["InterTokenLatencyAvg"].GetDouble();
        m_interTokenLatencyAvgHasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyMedian") && !value["InterTokenLatencyMedian"].IsNull())
    {
        if (!value["InterTokenLatencyMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.InterTokenLatencyMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyMedian = value["InterTokenLatencyMedian"].GetDouble();
        m_interTokenLatencyMedianHasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyP99") && !value["InterTokenLatencyP99"].IsNull())
    {
        if (!value["InterTokenLatencyP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.InterTokenLatencyP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyP99 = value["InterTokenLatencyP99"].GetDouble();
        m_interTokenLatencyP99HasBeenSet = true;
    }

    if (value.HasMember("EndToEndAvg") && !value["EndToEndAvg"].IsNull())
    {
        if (!value["EndToEndAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.EndToEndAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndAvg = value["EndToEndAvg"].GetDouble();
        m_endToEndAvgHasBeenSet = true;
    }

    if (value.HasMember("EndToEndMedian") && !value["EndToEndMedian"].IsNull())
    {
        if (!value["EndToEndMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.EndToEndMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndMedian = value["EndToEndMedian"].GetDouble();
        m_endToEndMedianHasBeenSet = true;
    }

    if (value.HasMember("EndToEndP99") && !value["EndToEndP99"].IsNull())
    {
        if (!value["EndToEndP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.EndToEndP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndP99 = value["EndToEndP99"].GetDouble();
        m_endToEndP99HasBeenSet = true;
    }

    if (value.HasMember("TokenThroughput") && !value["TokenThroughput"].IsNull())
    {
        if (!value["TokenThroughput"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.TokenThroughput` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tokenThroughput = value["TokenThroughput"].GetDouble();
        m_tokenThroughputHasBeenSet = true;
    }

    if (value.HasMember("RequestThroughput") && !value["RequestThroughput"].IsNull())
    {
        if (!value["RequestThroughput"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.RequestThroughput` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestThroughput = value["RequestThroughput"].GetDouble();
        m_requestThroughputHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkTaskInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BenchmarkTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_requestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestsPerSecond, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_totalPromptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrompts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPrompts, allocator);
    }

    if (m_useGatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseGateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useGateway, allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToFirstTokenAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToFirstTokenAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeToFirstTokenAvg, allocator);
    }

    if (m_timeToFirstTokenMedianHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToFirstTokenMedian";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeToFirstTokenMedian, allocator);
    }

    if (m_timeToFirstTokenP99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToFirstTokenP99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeToFirstTokenP99, allocator);
    }

    if (m_timePerOutputTokenAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePerOutputTokenAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timePerOutputTokenAvg, allocator);
    }

    if (m_timePerOutputTokenMedianHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePerOutputTokenMedian";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timePerOutputTokenMedian, allocator);
    }

    if (m_timePerOutputTokenP99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePerOutputTokenP99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timePerOutputTokenP99, allocator);
    }

    if (m_interTokenLatencyAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterTokenLatencyAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interTokenLatencyAvg, allocator);
    }

    if (m_interTokenLatencyMedianHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterTokenLatencyMedian";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interTokenLatencyMedian, allocator);
    }

    if (m_interTokenLatencyP99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterTokenLatencyP99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interTokenLatencyP99, allocator);
    }

    if (m_endToEndAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndToEndAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endToEndAvg, allocator);
    }

    if (m_endToEndMedianHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndToEndMedian";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endToEndMedian, allocator);
    }

    if (m_endToEndP99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndToEndP99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endToEndP99, allocator);
    }

    if (m_tokenThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenThroughput, allocator);
    }

    if (m_requestThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestThroughput, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

}


string BenchmarkTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void BenchmarkTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BenchmarkTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BenchmarkTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void BenchmarkTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BenchmarkTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string BenchmarkTaskInfo::GetServiceId() const
{
    return m_serviceId;
}

void BenchmarkTaskInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool BenchmarkTaskInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string BenchmarkTaskInfo::GetServiceName() const
{
    return m_serviceName;
}

void BenchmarkTaskInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool BenchmarkTaskInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string BenchmarkTaskInfo::GetStatus() const
{
    return m_status;
}

void BenchmarkTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BenchmarkTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetInputTokens() const
{
    return m_inputTokens;
}

void BenchmarkTaskInfo::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool BenchmarkTaskInfo::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetOutputTokens() const
{
    return m_outputTokens;
}

void BenchmarkTaskInfo::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool BenchmarkTaskInfo::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

double BenchmarkTaskInfo::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void BenchmarkTaskInfo::SetRequestsPerSecond(const double& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool BenchmarkTaskInfo::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void BenchmarkTaskInfo::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool BenchmarkTaskInfo::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetTotalPrompts() const
{
    return m_totalPrompts;
}

void BenchmarkTaskInfo::SetTotalPrompts(const uint64_t& _totalPrompts)
{
    m_totalPrompts = _totalPrompts;
    m_totalPromptsHasBeenSet = true;
}

bool BenchmarkTaskInfo::TotalPromptsHasBeenSet() const
{
    return m_totalPromptsHasBeenSet;
}

bool BenchmarkTaskInfo::GetUseGateway() const
{
    return m_useGateway;
}

void BenchmarkTaskInfo::SetUseGateway(const bool& _useGateway)
{
    m_useGateway = _useGateway;
    m_useGatewayHasBeenSet = true;
}

bool BenchmarkTaskInfo::UseGatewayHasBeenSet() const
{
    return m_useGatewayHasBeenSet;
}

string BenchmarkTaskInfo::GetDeploymentName() const
{
    return m_deploymentName;
}

void BenchmarkTaskInfo::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool BenchmarkTaskInfo::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string BenchmarkTaskInfo::GetApiKeyId() const
{
    return m_apiKeyId;
}

void BenchmarkTaskInfo::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool BenchmarkTaskInfo::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string BenchmarkTaskInfo::GetApiKeyName() const
{
    return m_apiKeyName;
}

void BenchmarkTaskInfo::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool BenchmarkTaskInfo::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

double BenchmarkTaskInfo::GetTimeToFirstTokenAvg() const
{
    return m_timeToFirstTokenAvg;
}

void BenchmarkTaskInfo::SetTimeToFirstTokenAvg(const double& _timeToFirstTokenAvg)
{
    m_timeToFirstTokenAvg = _timeToFirstTokenAvg;
    m_timeToFirstTokenAvgHasBeenSet = true;
}

bool BenchmarkTaskInfo::TimeToFirstTokenAvgHasBeenSet() const
{
    return m_timeToFirstTokenAvgHasBeenSet;
}

double BenchmarkTaskInfo::GetTimeToFirstTokenMedian() const
{
    return m_timeToFirstTokenMedian;
}

void BenchmarkTaskInfo::SetTimeToFirstTokenMedian(const double& _timeToFirstTokenMedian)
{
    m_timeToFirstTokenMedian = _timeToFirstTokenMedian;
    m_timeToFirstTokenMedianHasBeenSet = true;
}

bool BenchmarkTaskInfo::TimeToFirstTokenMedianHasBeenSet() const
{
    return m_timeToFirstTokenMedianHasBeenSet;
}

double BenchmarkTaskInfo::GetTimeToFirstTokenP99() const
{
    return m_timeToFirstTokenP99;
}

void BenchmarkTaskInfo::SetTimeToFirstTokenP99(const double& _timeToFirstTokenP99)
{
    m_timeToFirstTokenP99 = _timeToFirstTokenP99;
    m_timeToFirstTokenP99HasBeenSet = true;
}

bool BenchmarkTaskInfo::TimeToFirstTokenP99HasBeenSet() const
{
    return m_timeToFirstTokenP99HasBeenSet;
}

double BenchmarkTaskInfo::GetTimePerOutputTokenAvg() const
{
    return m_timePerOutputTokenAvg;
}

void BenchmarkTaskInfo::SetTimePerOutputTokenAvg(const double& _timePerOutputTokenAvg)
{
    m_timePerOutputTokenAvg = _timePerOutputTokenAvg;
    m_timePerOutputTokenAvgHasBeenSet = true;
}

bool BenchmarkTaskInfo::TimePerOutputTokenAvgHasBeenSet() const
{
    return m_timePerOutputTokenAvgHasBeenSet;
}

double BenchmarkTaskInfo::GetTimePerOutputTokenMedian() const
{
    return m_timePerOutputTokenMedian;
}

void BenchmarkTaskInfo::SetTimePerOutputTokenMedian(const double& _timePerOutputTokenMedian)
{
    m_timePerOutputTokenMedian = _timePerOutputTokenMedian;
    m_timePerOutputTokenMedianHasBeenSet = true;
}

bool BenchmarkTaskInfo::TimePerOutputTokenMedianHasBeenSet() const
{
    return m_timePerOutputTokenMedianHasBeenSet;
}

double BenchmarkTaskInfo::GetTimePerOutputTokenP99() const
{
    return m_timePerOutputTokenP99;
}

void BenchmarkTaskInfo::SetTimePerOutputTokenP99(const double& _timePerOutputTokenP99)
{
    m_timePerOutputTokenP99 = _timePerOutputTokenP99;
    m_timePerOutputTokenP99HasBeenSet = true;
}

bool BenchmarkTaskInfo::TimePerOutputTokenP99HasBeenSet() const
{
    return m_timePerOutputTokenP99HasBeenSet;
}

double BenchmarkTaskInfo::GetInterTokenLatencyAvg() const
{
    return m_interTokenLatencyAvg;
}

void BenchmarkTaskInfo::SetInterTokenLatencyAvg(const double& _interTokenLatencyAvg)
{
    m_interTokenLatencyAvg = _interTokenLatencyAvg;
    m_interTokenLatencyAvgHasBeenSet = true;
}

bool BenchmarkTaskInfo::InterTokenLatencyAvgHasBeenSet() const
{
    return m_interTokenLatencyAvgHasBeenSet;
}

double BenchmarkTaskInfo::GetInterTokenLatencyMedian() const
{
    return m_interTokenLatencyMedian;
}

void BenchmarkTaskInfo::SetInterTokenLatencyMedian(const double& _interTokenLatencyMedian)
{
    m_interTokenLatencyMedian = _interTokenLatencyMedian;
    m_interTokenLatencyMedianHasBeenSet = true;
}

bool BenchmarkTaskInfo::InterTokenLatencyMedianHasBeenSet() const
{
    return m_interTokenLatencyMedianHasBeenSet;
}

double BenchmarkTaskInfo::GetInterTokenLatencyP99() const
{
    return m_interTokenLatencyP99;
}

void BenchmarkTaskInfo::SetInterTokenLatencyP99(const double& _interTokenLatencyP99)
{
    m_interTokenLatencyP99 = _interTokenLatencyP99;
    m_interTokenLatencyP99HasBeenSet = true;
}

bool BenchmarkTaskInfo::InterTokenLatencyP99HasBeenSet() const
{
    return m_interTokenLatencyP99HasBeenSet;
}

double BenchmarkTaskInfo::GetEndToEndAvg() const
{
    return m_endToEndAvg;
}

void BenchmarkTaskInfo::SetEndToEndAvg(const double& _endToEndAvg)
{
    m_endToEndAvg = _endToEndAvg;
    m_endToEndAvgHasBeenSet = true;
}

bool BenchmarkTaskInfo::EndToEndAvgHasBeenSet() const
{
    return m_endToEndAvgHasBeenSet;
}

double BenchmarkTaskInfo::GetEndToEndMedian() const
{
    return m_endToEndMedian;
}

void BenchmarkTaskInfo::SetEndToEndMedian(const double& _endToEndMedian)
{
    m_endToEndMedian = _endToEndMedian;
    m_endToEndMedianHasBeenSet = true;
}

bool BenchmarkTaskInfo::EndToEndMedianHasBeenSet() const
{
    return m_endToEndMedianHasBeenSet;
}

double BenchmarkTaskInfo::GetEndToEndP99() const
{
    return m_endToEndP99;
}

void BenchmarkTaskInfo::SetEndToEndP99(const double& _endToEndP99)
{
    m_endToEndP99 = _endToEndP99;
    m_endToEndP99HasBeenSet = true;
}

bool BenchmarkTaskInfo::EndToEndP99HasBeenSet() const
{
    return m_endToEndP99HasBeenSet;
}

double BenchmarkTaskInfo::GetTokenThroughput() const
{
    return m_tokenThroughput;
}

void BenchmarkTaskInfo::SetTokenThroughput(const double& _tokenThroughput)
{
    m_tokenThroughput = _tokenThroughput;
    m_tokenThroughputHasBeenSet = true;
}

bool BenchmarkTaskInfo::TokenThroughputHasBeenSet() const
{
    return m_tokenThroughputHasBeenSet;
}

double BenchmarkTaskInfo::GetRequestThroughput() const
{
    return m_requestThroughput;
}

void BenchmarkTaskInfo::SetRequestThroughput(const double& _requestThroughput)
{
    m_requestThroughput = _requestThroughput;
    m_requestThroughputHasBeenSet = true;
}

bool BenchmarkTaskInfo::RequestThroughputHasBeenSet() const
{
    return m_requestThroughputHasBeenSet;
}

string BenchmarkTaskInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void BenchmarkTaskInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool BenchmarkTaskInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

int64_t BenchmarkTaskInfo::GetAppId() const
{
    return m_appId;
}

void BenchmarkTaskInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BenchmarkTaskInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void BenchmarkTaskInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BenchmarkTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BenchmarkTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void BenchmarkTaskInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BenchmarkTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BenchmarkTaskInfo::GetUin() const
{
    return m_uin;
}

void BenchmarkTaskInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool BenchmarkTaskInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string BenchmarkTaskInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void BenchmarkTaskInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool BenchmarkTaskInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

