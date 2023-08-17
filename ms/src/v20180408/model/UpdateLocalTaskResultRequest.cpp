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

#include <tencentcloud/ms/v20180408/model/UpdateLocalTaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

UpdateLocalTaskResultRequest::UpdateLocalTaskResultRequest() :
    m_sidHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_subCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

string UpdateLocalTaskResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_subCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateLocalTaskResultRequest::GetSid() const
{
    return m_sid;
}

void UpdateLocalTaskResultRequest::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool UpdateLocalTaskResultRequest::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

int64_t UpdateLocalTaskResultRequest::GetResultCode() const
{
    return m_resultCode;
}

void UpdateLocalTaskResultRequest::SetResultCode(const int64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool UpdateLocalTaskResultRequest::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

int64_t UpdateLocalTaskResultRequest::GetSubCode() const
{
    return m_subCode;
}

void UpdateLocalTaskResultRequest::SetSubCode(const int64_t& _subCode)
{
    m_subCode = _subCode;
    m_subCodeHasBeenSet = true;
}

bool UpdateLocalTaskResultRequest::SubCodeHasBeenSet() const
{
    return m_subCodeHasBeenSet;
}

string UpdateLocalTaskResultRequest::GetErrMsg() const
{
    return m_errMsg;
}

void UpdateLocalTaskResultRequest::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool UpdateLocalTaskResultRequest::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string UpdateLocalTaskResultRequest::GetResult() const
{
    return m_result;
}

void UpdateLocalTaskResultRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool UpdateLocalTaskResultRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}


