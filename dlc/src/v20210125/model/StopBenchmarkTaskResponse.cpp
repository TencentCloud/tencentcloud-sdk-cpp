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

#include <tencentcloud/dlc/v20210125/model/StopBenchmarkTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StopBenchmarkTaskResponse::StopBenchmarkTaskResponse() :
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
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_deploymentResourcesHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome StopBenchmarkTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("InputTokens") && !rsp["InputTokens"].IsNull())
    {
        if (!rsp["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = rsp["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (rsp.HasMember("OutputTokens") && !rsp["OutputTokens"].IsNull())
    {
        if (!rsp["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = rsp["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (rsp.HasMember("RequestsPerSecond") && !rsp["RequestsPerSecond"].IsNull())
    {
        if (!rsp["RequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestsPerSecond = rsp["RequestsPerSecond"].GetDouble();
        m_requestsPerSecondHasBeenSet = true;
    }

    if (rsp.HasMember("MaxConcurrency") && !rsp["MaxConcurrency"].IsNull())
    {
        if (!rsp["MaxConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = rsp["MaxConcurrency"].GetUint64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPrompts") && !rsp["TotalPrompts"].IsNull())
    {
        if (!rsp["TotalPrompts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPrompts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPrompts = rsp["TotalPrompts"].GetUint64();
        m_totalPromptsHasBeenSet = true;
    }

    if (rsp.HasMember("UseGateway") && !rsp["UseGateway"].IsNull())
    {
        if (!rsp["UseGateway"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UseGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useGateway = rsp["UseGateway"].GetBool();
        m_useGatewayHasBeenSet = true;
    }

    if (rsp.HasMember("DeploymentName") && !rsp["DeploymentName"].IsNull())
    {
        if (!rsp["DeploymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentName = string(rsp["DeploymentName"].GetString());
        m_deploymentNameHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyId") && !rsp["ApiKeyId"].IsNull())
    {
        if (!rsp["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(rsp["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyName") && !rsp["ApiKeyName"].IsNull())
    {
        if (!rsp["ApiKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyName = string(rsp["ApiKeyName"].GetString());
        m_apiKeyNameHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountUin") && !rsp["SubAccountUin"].IsNull())
    {
        if (!rsp["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(rsp["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (rsp.HasMember("Resources") && !rsp["Resources"].IsNull())
    {
        if (!rsp["Resources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Resources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resources.Deserialize(rsp["Resources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcesHasBeenSet = true;
    }

    if (rsp.HasMember("DeploymentResources") && !rsp["DeploymentResources"].IsNull())
    {
        if (!rsp["DeploymentResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeploymentResources` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeploymentResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeploymentResourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deploymentResources.push_back(item);
        }
        m_deploymentResourcesHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string StopBenchmarkTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deploymentResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deploymentResources.begin(); itr != m_deploymentResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string StopBenchmarkTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool StopBenchmarkTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string StopBenchmarkTaskResponse::GetTaskName() const
{
    return m_taskName;
}

bool StopBenchmarkTaskResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string StopBenchmarkTaskResponse::GetServiceId() const
{
    return m_serviceId;
}

bool StopBenchmarkTaskResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string StopBenchmarkTaskResponse::GetServiceName() const
{
    return m_serviceName;
}

bool StopBenchmarkTaskResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string StopBenchmarkTaskResponse::GetStatus() const
{
    return m_status;
}

bool StopBenchmarkTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetInputTokens() const
{
    return m_inputTokens;
}

bool StopBenchmarkTaskResponse::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetOutputTokens() const
{
    return m_outputTokens;
}

bool StopBenchmarkTaskResponse::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

double StopBenchmarkTaskResponse::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

bool StopBenchmarkTaskResponse::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

bool StopBenchmarkTaskResponse::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetTotalPrompts() const
{
    return m_totalPrompts;
}

bool StopBenchmarkTaskResponse::TotalPromptsHasBeenSet() const
{
    return m_totalPromptsHasBeenSet;
}

bool StopBenchmarkTaskResponse::GetUseGateway() const
{
    return m_useGateway;
}

bool StopBenchmarkTaskResponse::UseGatewayHasBeenSet() const
{
    return m_useGatewayHasBeenSet;
}

string StopBenchmarkTaskResponse::GetDeploymentName() const
{
    return m_deploymentName;
}

bool StopBenchmarkTaskResponse::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string StopBenchmarkTaskResponse::GetApiKeyId() const
{
    return m_apiKeyId;
}

bool StopBenchmarkTaskResponse::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string StopBenchmarkTaskResponse::GetApiKeyName() const
{
    return m_apiKeyName;
}

bool StopBenchmarkTaskResponse::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

string StopBenchmarkTaskResponse::GetUin() const
{
    return m_uin;
}

bool StopBenchmarkTaskResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool StopBenchmarkTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t StopBenchmarkTaskResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool StopBenchmarkTaskResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t StopBenchmarkTaskResponse::GetAppId() const
{
    return m_appId;
}

bool StopBenchmarkTaskResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string StopBenchmarkTaskResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool StopBenchmarkTaskResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

BenchmarkResourceInfo StopBenchmarkTaskResponse::GetResources() const
{
    return m_resources;
}

bool StopBenchmarkTaskResponse::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

vector<DeploymentResourceInfo> StopBenchmarkTaskResponse::GetDeploymentResources() const
{
    return m_deploymentResources;
}

bool StopBenchmarkTaskResponse::DeploymentResourcesHasBeenSet() const
{
    return m_deploymentResourcesHasBeenSet;
}

string StopBenchmarkTaskResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool StopBenchmarkTaskResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}


