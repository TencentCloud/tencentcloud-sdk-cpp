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

#include <tencentcloud/wedata/v20210820/model/SubmitWorkflow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitWorkflow::SubmitWorkflow() :
    m_taskIdsHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_errorIdHasBeenSet(false)
{
}

CoreInternalOutcome SubmitWorkflow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubmitWorkflow.TaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitWorkflow.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitWorkflow.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("ErrorId") && !value["ErrorId"].IsNull())
    {
        if (!value["ErrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitWorkflow.ErrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorId = string(value["ErrorId"].GetString());
        m_errorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubmitWorkflow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_errorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> SubmitWorkflow::GetTaskIds() const
{
    return m_taskIds;
}

void SubmitWorkflow::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool SubmitWorkflow::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

bool SubmitWorkflow::GetResult() const
{
    return m_result;
}

void SubmitWorkflow::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SubmitWorkflow::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string SubmitWorkflow::GetErrorDesc() const
{
    return m_errorDesc;
}

void SubmitWorkflow::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool SubmitWorkflow::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

string SubmitWorkflow::GetErrorId() const
{
    return m_errorId;
}

void SubmitWorkflow::SetErrorId(const string& _errorId)
{
    m_errorId = _errorId;
    m_errorIdHasBeenSet = true;
}

bool SubmitWorkflow::ErrorIdHasBeenSet() const
{
    return m_errorIdHasBeenSet;
}

