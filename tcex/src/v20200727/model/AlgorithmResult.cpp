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

#include <tencentcloud/tcex/v20200727/model/AlgorithmResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcex::V20200727::Model;
using namespace std;

AlgorithmResult::AlgorithmResult() :
    m_algoIdHasBeenSet(false),
    m_algoNameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_algoTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlgorithmResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlgoId") && !value["AlgoId"].IsNull())
    {
        if (!value["AlgoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmResult.AlgoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algoId = string(value["AlgoId"].GetString());
        m_algoIdHasBeenSet = true;
    }

    if (value.HasMember("AlgoName") && !value["AlgoName"].IsNull())
    {
        if (!value["AlgoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmResult.AlgoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algoName = string(value["AlgoName"].GetString());
        m_algoNameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmResult.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("AlgoType") && !value["AlgoType"].IsNull())
    {
        if (!value["AlgoType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgorithmResult.AlgoType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_algoType = value["AlgoType"].GetInt64();
        m_algoTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgorithmResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_algoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algoId.c_str(), allocator).Move(), allocator);
    }

    if (m_algoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algoName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

    if (m_algoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_algoType, allocator);
    }

}


string AlgorithmResult::GetAlgoId() const
{
    return m_algoId;
}

void AlgorithmResult::SetAlgoId(const string& _algoId)
{
    m_algoId = _algoId;
    m_algoIdHasBeenSet = true;
}

bool AlgorithmResult::AlgoIdHasBeenSet() const
{
    return m_algoIdHasBeenSet;
}

string AlgorithmResult::GetAlgoName() const
{
    return m_algoName;
}

void AlgorithmResult::SetAlgoName(const string& _algoName)
{
    m_algoName = _algoName;
    m_algoNameHasBeenSet = true;
}

bool AlgorithmResult::AlgoNameHasBeenSet() const
{
    return m_algoNameHasBeenSet;
}

string AlgorithmResult::GetResult() const
{
    return m_result;
}

void AlgorithmResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AlgorithmResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string AlgorithmResult::GetError() const
{
    return m_error;
}

void AlgorithmResult::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool AlgorithmResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

int64_t AlgorithmResult::GetAlgoType() const
{
    return m_algoType;
}

void AlgorithmResult::SetAlgoType(const int64_t& _algoType)
{
    m_algoType = _algoType;
    m_algoTypeHasBeenSet = true;
}

bool AlgorithmResult::AlgoTypeHasBeenSet() const
{
    return m_algoTypeHasBeenSet;
}

