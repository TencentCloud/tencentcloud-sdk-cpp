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

#include <tencentcloud/pts/v20210728/model/CheckSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CheckSummary::CheckSummary() :
    m_nameHasBeenSet(false),
    m_stepHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_errorRateHasBeenSet(false)
{
}

CoreInternalOutcome CheckSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckSummary.Step` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_step = string(value["Step"].GetString());
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckSummary.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckSummary.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorRate") && !value["ErrorRate"].IsNull())
    {
        if (!value["ErrorRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CheckSummary.ErrorRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorRate = value["ErrorRate"].GetDouble();
        m_errorRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_step.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
    }

}


string CheckSummary::GetName() const
{
    return m_name;
}

void CheckSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CheckSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckSummary::GetStep() const
{
    return m_step;
}

void CheckSummary::SetStep(const string& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool CheckSummary::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

int64_t CheckSummary::GetSuccessCount() const
{
    return m_successCount;
}

void CheckSummary::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool CheckSummary::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t CheckSummary::GetFailCount() const
{
    return m_failCount;
}

void CheckSummary::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool CheckSummary::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

double CheckSummary::GetErrorRate() const
{
    return m_errorRate;
}

void CheckSummary::SetErrorRate(const double& _errorRate)
{
    m_errorRate = _errorRate;
    m_errorRateHasBeenSet = true;
}

bool CheckSummary::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}

