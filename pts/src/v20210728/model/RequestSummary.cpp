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

#include <tencentcloud/pts/v20210728/model/RequestSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

RequestSummary::RequestSummary() :
    m_serviceHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_countHasBeenSet(false),
    m_averageHasBeenSet(false),
    m_p90HasBeenSet(false),
    m_p95HasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_errorPercentageHasBeenSet(false),
    m_p99HasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_rPSHasBeenSet(false)
{
}

CoreInternalOutcome RequestSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Average") && !value["Average"].IsNull())
    {
        if (!value["Average"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Average` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_average = value["Average"].GetDouble();
        m_averageHasBeenSet = true;
    }

    if (value.HasMember("P90") && !value["P90"].IsNull())
    {
        if (!value["P90"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.P90` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p90 = value["P90"].GetDouble();
        m_p90HasBeenSet = true;
    }

    if (value.HasMember("P95") && !value["P95"].IsNull())
    {
        if (!value["P95"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.P95` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95 = value["P95"].GetDouble();
        m_p95HasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("ErrorPercentage") && !value["ErrorPercentage"].IsNull())
    {
        if (!value["ErrorPercentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.ErrorPercentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorPercentage = value["ErrorPercentage"].GetDouble();
        m_errorPercentageHasBeenSet = true;
    }

    if (value.HasMember("P99") && !value["P99"].IsNull())
    {
        if (!value["P99"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.P99` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p99 = value["P99"].GetDouble();
        m_p99HasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("RPS") && !value["RPS"].IsNull())
    {
        if (!value["RPS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSummary.RPS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rPS = value["RPS"].GetDouble();
        m_rPSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_averageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Average";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_average, allocator);
    }

    if (m_p90HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P90";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p90, allocator);
    }

    if (m_p95HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p95, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_errorPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorPercentage, allocator);
    }

    if (m_p99HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P99";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p99, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_rPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rPS, allocator);
    }

}


string RequestSummary::GetService() const
{
    return m_service;
}

void RequestSummary::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool RequestSummary::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string RequestSummary::GetMethod() const
{
    return m_method;
}

void RequestSummary::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool RequestSummary::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t RequestSummary::GetCount() const
{
    return m_count;
}

void RequestSummary::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RequestSummary::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double RequestSummary::GetAverage() const
{
    return m_average;
}

void RequestSummary::SetAverage(const double& _average)
{
    m_average = _average;
    m_averageHasBeenSet = true;
}

bool RequestSummary::AverageHasBeenSet() const
{
    return m_averageHasBeenSet;
}

double RequestSummary::GetP90() const
{
    return m_p90;
}

void RequestSummary::SetP90(const double& _p90)
{
    m_p90 = _p90;
    m_p90HasBeenSet = true;
}

bool RequestSummary::P90HasBeenSet() const
{
    return m_p90HasBeenSet;
}

double RequestSummary::GetP95() const
{
    return m_p95;
}

void RequestSummary::SetP95(const double& _p95)
{
    m_p95 = _p95;
    m_p95HasBeenSet = true;
}

bool RequestSummary::P95HasBeenSet() const
{
    return m_p95HasBeenSet;
}

double RequestSummary::GetMin() const
{
    return m_min;
}

void RequestSummary::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool RequestSummary::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

double RequestSummary::GetMax() const
{
    return m_max;
}

void RequestSummary::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool RequestSummary::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double RequestSummary::GetErrorPercentage() const
{
    return m_errorPercentage;
}

void RequestSummary::SetErrorPercentage(const double& _errorPercentage)
{
    m_errorPercentage = _errorPercentage;
    m_errorPercentageHasBeenSet = true;
}

bool RequestSummary::ErrorPercentageHasBeenSet() const
{
    return m_errorPercentageHasBeenSet;
}

double RequestSummary::GetP99() const
{
    return m_p99;
}

void RequestSummary::SetP99(const double& _p99)
{
    m_p99 = _p99;
    m_p99HasBeenSet = true;
}

bool RequestSummary::P99HasBeenSet() const
{
    return m_p99HasBeenSet;
}

string RequestSummary::GetStatus() const
{
    return m_status;
}

void RequestSummary::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RequestSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RequestSummary::GetResult() const
{
    return m_result;
}

void RequestSummary::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool RequestSummary::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

double RequestSummary::GetRPS() const
{
    return m_rPS;
}

void RequestSummary::SetRPS(const double& _rPS)
{
    m_rPS = _rPS;
    m_rPSHasBeenSet = true;
}

bool RequestSummary::RPSHasBeenSet() const
{
    return m_rPSHasBeenSet;
}

