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

#include <tencentcloud/dlc/v20210125/model/BenchmarkSummaryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BenchmarkSummaryInfo::BenchmarkSummaryInfo() :
    m_modelNameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_parameterSizeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_benchmarkCountHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_requestsPerSecondHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
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
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome BenchmarkSummaryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("ParameterSize") && !value["ParameterSize"].IsNull())
    {
        if (!value["ParameterSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.ParameterSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterSize = string(value["ParameterSize"].GetString());
        m_parameterSizeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("BenchmarkCount") && !value["BenchmarkCount"].IsNull())
    {
        if (!value["BenchmarkCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.BenchmarkCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_benchmarkCount = value["BenchmarkCount"].GetUint64();
        m_benchmarkCountHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("RequestsPerSecond") && !value["RequestsPerSecond"].IsNull())
    {
        if (!value["RequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.RequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestsPerSecond = value["RequestsPerSecond"].GetDouble();
        m_requestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.MaxConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetUint64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenAvg") && !value["TimeToFirstTokenAvg"].IsNull())
    {
        if (!value["TimeToFirstTokenAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimeToFirstTokenAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenAvg = value["TimeToFirstTokenAvg"].GetDouble();
        m_timeToFirstTokenAvgHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenMedian") && !value["TimeToFirstTokenMedian"].IsNull())
    {
        if (!value["TimeToFirstTokenMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimeToFirstTokenMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenMedian = value["TimeToFirstTokenMedian"].GetDouble();
        m_timeToFirstTokenMedianHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenP99") && !value["TimeToFirstTokenP99"].IsNull())
    {
        if (!value["TimeToFirstTokenP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimeToFirstTokenP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenP99 = value["TimeToFirstTokenP99"].GetDouble();
        m_timeToFirstTokenP99HasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenAvg") && !value["TimePerOutputTokenAvg"].IsNull())
    {
        if (!value["TimePerOutputTokenAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimePerOutputTokenAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenAvg = value["TimePerOutputTokenAvg"].GetDouble();
        m_timePerOutputTokenAvgHasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenMedian") && !value["TimePerOutputTokenMedian"].IsNull())
    {
        if (!value["TimePerOutputTokenMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimePerOutputTokenMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenMedian = value["TimePerOutputTokenMedian"].GetDouble();
        m_timePerOutputTokenMedianHasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenP99") && !value["TimePerOutputTokenP99"].IsNull())
    {
        if (!value["TimePerOutputTokenP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.TimePerOutputTokenP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenP99 = value["TimePerOutputTokenP99"].GetDouble();
        m_timePerOutputTokenP99HasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyAvg") && !value["InterTokenLatencyAvg"].IsNull())
    {
        if (!value["InterTokenLatencyAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.InterTokenLatencyAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyAvg = value["InterTokenLatencyAvg"].GetDouble();
        m_interTokenLatencyAvgHasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyMedian") && !value["InterTokenLatencyMedian"].IsNull())
    {
        if (!value["InterTokenLatencyMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.InterTokenLatencyMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyMedian = value["InterTokenLatencyMedian"].GetDouble();
        m_interTokenLatencyMedianHasBeenSet = true;
    }

    if (value.HasMember("InterTokenLatencyP99") && !value["InterTokenLatencyP99"].IsNull())
    {
        if (!value["InterTokenLatencyP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.InterTokenLatencyP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_interTokenLatencyP99 = value["InterTokenLatencyP99"].GetDouble();
        m_interTokenLatencyP99HasBeenSet = true;
    }

    if (value.HasMember("EndToEndAvg") && !value["EndToEndAvg"].IsNull())
    {
        if (!value["EndToEndAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.EndToEndAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndAvg = value["EndToEndAvg"].GetDouble();
        m_endToEndAvgHasBeenSet = true;
    }

    if (value.HasMember("EndToEndMedian") && !value["EndToEndMedian"].IsNull())
    {
        if (!value["EndToEndMedian"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.EndToEndMedian` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndMedian = value["EndToEndMedian"].GetDouble();
        m_endToEndMedianHasBeenSet = true;
    }

    if (value.HasMember("EndToEndP99") && !value["EndToEndP99"].IsNull())
    {
        if (!value["EndToEndP99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.EndToEndP99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endToEndP99 = value["EndToEndP99"].GetDouble();
        m_endToEndP99HasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BenchmarkSummaryInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BenchmarkSummaryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterSize.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_benchmarkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BenchmarkCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_benchmarkCount, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string BenchmarkSummaryInfo::GetModelName() const
{
    return m_modelName;
}

void BenchmarkSummaryInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool BenchmarkSummaryInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string BenchmarkSummaryInfo::GetProvider() const
{
    return m_provider;
}

void BenchmarkSummaryInfo::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool BenchmarkSummaryInfo::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string BenchmarkSummaryInfo::GetModelType() const
{
    return m_modelType;
}

void BenchmarkSummaryInfo::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool BenchmarkSummaryInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string BenchmarkSummaryInfo::GetParameterSize() const
{
    return m_parameterSize;
}

void BenchmarkSummaryInfo::SetParameterSize(const string& _parameterSize)
{
    m_parameterSize = _parameterSize;
    m_parameterSizeHasBeenSet = true;
}

bool BenchmarkSummaryInfo::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}

string BenchmarkSummaryInfo::GetServiceName() const
{
    return m_serviceName;
}

void BenchmarkSummaryInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool BenchmarkSummaryInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string BenchmarkSummaryInfo::GetTaskName() const
{
    return m_taskName;
}

void BenchmarkSummaryInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BenchmarkSummaryInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t BenchmarkSummaryInfo::GetBenchmarkCount() const
{
    return m_benchmarkCount;
}

void BenchmarkSummaryInfo::SetBenchmarkCount(const uint64_t& _benchmarkCount)
{
    m_benchmarkCount = _benchmarkCount;
    m_benchmarkCountHasBeenSet = true;
}

bool BenchmarkSummaryInfo::BenchmarkCountHasBeenSet() const
{
    return m_benchmarkCountHasBeenSet;
}

uint64_t BenchmarkSummaryInfo::GetInputTokens() const
{
    return m_inputTokens;
}

void BenchmarkSummaryInfo::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool BenchmarkSummaryInfo::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t BenchmarkSummaryInfo::GetOutputTokens() const
{
    return m_outputTokens;
}

void BenchmarkSummaryInfo::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool BenchmarkSummaryInfo::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

double BenchmarkSummaryInfo::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void BenchmarkSummaryInfo::SetRequestsPerSecond(const double& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool BenchmarkSummaryInfo::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

uint64_t BenchmarkSummaryInfo::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void BenchmarkSummaryInfo::SetMaxConcurrency(const uint64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool BenchmarkSummaryInfo::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

double BenchmarkSummaryInfo::GetTimeToFirstTokenAvg() const
{
    return m_timeToFirstTokenAvg;
}

void BenchmarkSummaryInfo::SetTimeToFirstTokenAvg(const double& _timeToFirstTokenAvg)
{
    m_timeToFirstTokenAvg = _timeToFirstTokenAvg;
    m_timeToFirstTokenAvgHasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimeToFirstTokenAvgHasBeenSet() const
{
    return m_timeToFirstTokenAvgHasBeenSet;
}

double BenchmarkSummaryInfo::GetTimeToFirstTokenMedian() const
{
    return m_timeToFirstTokenMedian;
}

void BenchmarkSummaryInfo::SetTimeToFirstTokenMedian(const double& _timeToFirstTokenMedian)
{
    m_timeToFirstTokenMedian = _timeToFirstTokenMedian;
    m_timeToFirstTokenMedianHasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimeToFirstTokenMedianHasBeenSet() const
{
    return m_timeToFirstTokenMedianHasBeenSet;
}

double BenchmarkSummaryInfo::GetTimeToFirstTokenP99() const
{
    return m_timeToFirstTokenP99;
}

void BenchmarkSummaryInfo::SetTimeToFirstTokenP99(const double& _timeToFirstTokenP99)
{
    m_timeToFirstTokenP99 = _timeToFirstTokenP99;
    m_timeToFirstTokenP99HasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimeToFirstTokenP99HasBeenSet() const
{
    return m_timeToFirstTokenP99HasBeenSet;
}

double BenchmarkSummaryInfo::GetTimePerOutputTokenAvg() const
{
    return m_timePerOutputTokenAvg;
}

void BenchmarkSummaryInfo::SetTimePerOutputTokenAvg(const double& _timePerOutputTokenAvg)
{
    m_timePerOutputTokenAvg = _timePerOutputTokenAvg;
    m_timePerOutputTokenAvgHasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimePerOutputTokenAvgHasBeenSet() const
{
    return m_timePerOutputTokenAvgHasBeenSet;
}

double BenchmarkSummaryInfo::GetTimePerOutputTokenMedian() const
{
    return m_timePerOutputTokenMedian;
}

void BenchmarkSummaryInfo::SetTimePerOutputTokenMedian(const double& _timePerOutputTokenMedian)
{
    m_timePerOutputTokenMedian = _timePerOutputTokenMedian;
    m_timePerOutputTokenMedianHasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimePerOutputTokenMedianHasBeenSet() const
{
    return m_timePerOutputTokenMedianHasBeenSet;
}

double BenchmarkSummaryInfo::GetTimePerOutputTokenP99() const
{
    return m_timePerOutputTokenP99;
}

void BenchmarkSummaryInfo::SetTimePerOutputTokenP99(const double& _timePerOutputTokenP99)
{
    m_timePerOutputTokenP99 = _timePerOutputTokenP99;
    m_timePerOutputTokenP99HasBeenSet = true;
}

bool BenchmarkSummaryInfo::TimePerOutputTokenP99HasBeenSet() const
{
    return m_timePerOutputTokenP99HasBeenSet;
}

double BenchmarkSummaryInfo::GetInterTokenLatencyAvg() const
{
    return m_interTokenLatencyAvg;
}

void BenchmarkSummaryInfo::SetInterTokenLatencyAvg(const double& _interTokenLatencyAvg)
{
    m_interTokenLatencyAvg = _interTokenLatencyAvg;
    m_interTokenLatencyAvgHasBeenSet = true;
}

bool BenchmarkSummaryInfo::InterTokenLatencyAvgHasBeenSet() const
{
    return m_interTokenLatencyAvgHasBeenSet;
}

double BenchmarkSummaryInfo::GetInterTokenLatencyMedian() const
{
    return m_interTokenLatencyMedian;
}

void BenchmarkSummaryInfo::SetInterTokenLatencyMedian(const double& _interTokenLatencyMedian)
{
    m_interTokenLatencyMedian = _interTokenLatencyMedian;
    m_interTokenLatencyMedianHasBeenSet = true;
}

bool BenchmarkSummaryInfo::InterTokenLatencyMedianHasBeenSet() const
{
    return m_interTokenLatencyMedianHasBeenSet;
}

double BenchmarkSummaryInfo::GetInterTokenLatencyP99() const
{
    return m_interTokenLatencyP99;
}

void BenchmarkSummaryInfo::SetInterTokenLatencyP99(const double& _interTokenLatencyP99)
{
    m_interTokenLatencyP99 = _interTokenLatencyP99;
    m_interTokenLatencyP99HasBeenSet = true;
}

bool BenchmarkSummaryInfo::InterTokenLatencyP99HasBeenSet() const
{
    return m_interTokenLatencyP99HasBeenSet;
}

double BenchmarkSummaryInfo::GetEndToEndAvg() const
{
    return m_endToEndAvg;
}

void BenchmarkSummaryInfo::SetEndToEndAvg(const double& _endToEndAvg)
{
    m_endToEndAvg = _endToEndAvg;
    m_endToEndAvgHasBeenSet = true;
}

bool BenchmarkSummaryInfo::EndToEndAvgHasBeenSet() const
{
    return m_endToEndAvgHasBeenSet;
}

double BenchmarkSummaryInfo::GetEndToEndMedian() const
{
    return m_endToEndMedian;
}

void BenchmarkSummaryInfo::SetEndToEndMedian(const double& _endToEndMedian)
{
    m_endToEndMedian = _endToEndMedian;
    m_endToEndMedianHasBeenSet = true;
}

bool BenchmarkSummaryInfo::EndToEndMedianHasBeenSet() const
{
    return m_endToEndMedianHasBeenSet;
}

double BenchmarkSummaryInfo::GetEndToEndP99() const
{
    return m_endToEndP99;
}

void BenchmarkSummaryInfo::SetEndToEndP99(const double& _endToEndP99)
{
    m_endToEndP99 = _endToEndP99;
    m_endToEndP99HasBeenSet = true;
}

bool BenchmarkSummaryInfo::EndToEndP99HasBeenSet() const
{
    return m_endToEndP99HasBeenSet;
}

uint64_t BenchmarkSummaryInfo::GetCreateTime() const
{
    return m_createTime;
}

void BenchmarkSummaryInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BenchmarkSummaryInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

