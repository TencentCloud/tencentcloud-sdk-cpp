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

#include <tencentcloud/wedata/v20210820/model/OperationOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OperationOpsDto::OperationOpsDto() :
    m_resultHasBeenSet(false),
    m_resultMsgHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_asyncActionIdHasBeenSet(false)
{
}

CoreInternalOutcome OperationOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperationOpsDto.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ResultMsg") && !value["ResultMsg"].IsNull())
    {
        if (!value["ResultMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationOpsDto.ResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMsg = string(value["ResultMsg"].GetString());
        m_resultMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrorId") && !value["ErrorId"].IsNull())
    {
        if (!value["ErrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationOpsDto.ErrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorId = string(value["ErrorId"].GetString());
        m_errorIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationOpsDto.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("AsyncActionId") && !value["AsyncActionId"].IsNull())
    {
        if (!value["AsyncActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationOpsDto.AsyncActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncActionId = string(value["AsyncActionId"].GetString());
        m_asyncActionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_resultMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncActionId.c_str(), allocator).Move(), allocator);
    }

}


bool OperationOpsDto::GetResult() const
{
    return m_result;
}

void OperationOpsDto::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool OperationOpsDto::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string OperationOpsDto::GetResultMsg() const
{
    return m_resultMsg;
}

void OperationOpsDto::SetResultMsg(const string& _resultMsg)
{
    m_resultMsg = _resultMsg;
    m_resultMsgHasBeenSet = true;
}

bool OperationOpsDto::ResultMsgHasBeenSet() const
{
    return m_resultMsgHasBeenSet;
}

string OperationOpsDto::GetErrorId() const
{
    return m_errorId;
}

void OperationOpsDto::SetErrorId(const string& _errorId)
{
    m_errorId = _errorId;
    m_errorIdHasBeenSet = true;
}

bool OperationOpsDto::ErrorIdHasBeenSet() const
{
    return m_errorIdHasBeenSet;
}

string OperationOpsDto::GetErrorDesc() const
{
    return m_errorDesc;
}

void OperationOpsDto::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool OperationOpsDto::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

string OperationOpsDto::GetAsyncActionId() const
{
    return m_asyncActionId;
}

void OperationOpsDto::SetAsyncActionId(const string& _asyncActionId)
{
    m_asyncActionId = _asyncActionId;
    m_asyncActionIdHasBeenSet = true;
}

bool OperationOpsDto::AsyncActionIdHasBeenSet() const
{
    return m_asyncActionIdHasBeenSet;
}

