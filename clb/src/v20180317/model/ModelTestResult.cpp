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

#include <tencentcloud/clb/v20180317/model/ModelTestResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelTestResult::ModelTestResult() :
    m_modelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_testConnectionRequestHasBeenSet(false)
{
}

CoreInternalOutcome ModelTestResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelTestResult.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelTestResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelTestResult.ErrorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorInfo.Deserialize(value["ErrorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("TestConnectionRequest") && !value["TestConnectionRequest"].IsNull())
    {
        if (!value["TestConnectionRequest"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelTestResult.TestConnectionRequest` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_testConnectionRequest.Deserialize(value["TestConnectionRequest"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_testConnectionRequestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelTestResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_testConnectionRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestConnectionRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_testConnectionRequest.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelTestResult::GetModel() const
{
    return m_model;
}

void ModelTestResult::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModelTestResult::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModelTestResult::GetStatus() const
{
    return m_status;
}

void ModelTestResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelTestResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ProviderTestConnectionErrorInfo ModelTestResult::GetErrorInfo() const
{
    return m_errorInfo;
}

void ModelTestResult::SetErrorInfo(const ProviderTestConnectionErrorInfo& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool ModelTestResult::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

TestConnectionRequestInfo ModelTestResult::GetTestConnectionRequest() const
{
    return m_testConnectionRequest;
}

void ModelTestResult::SetTestConnectionRequest(const TestConnectionRequestInfo& _testConnectionRequest)
{
    m_testConnectionRequest = _testConnectionRequest;
    m_testConnectionRequestHasBeenSet = true;
}

bool ModelTestResult::TestConnectionRequestHasBeenSet() const
{
    return m_testConnectionRequestHasBeenSet;
}

