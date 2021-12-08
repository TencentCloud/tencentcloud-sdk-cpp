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

#include <tencentcloud/scf/v20180416/model/AsyncEventStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

AsyncEventStatus::AsyncEventStatus() :
    m_statusHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_invokeRequestIdHasBeenSet(false)
{
}

CoreInternalOutcome AsyncEventStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEventStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEventStatus.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("InvokeRequestId") && !value["InvokeRequestId"].IsNull())
    {
        if (!value["InvokeRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEventStatus.InvokeRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeRequestId = string(value["InvokeRequestId"].GetString());
        m_invokeRequestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncEventStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_invokeRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeRequestId.c_str(), allocator).Move(), allocator);
    }

}


string AsyncEventStatus::GetStatus() const
{
    return m_status;
}

void AsyncEventStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsyncEventStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AsyncEventStatus::GetStatusCode() const
{
    return m_statusCode;
}

void AsyncEventStatus::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AsyncEventStatus::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AsyncEventStatus::GetInvokeRequestId() const
{
    return m_invokeRequestId;
}

void AsyncEventStatus::SetInvokeRequestId(const string& _invokeRequestId)
{
    m_invokeRequestId = _invokeRequestId;
    m_invokeRequestIdHasBeenSet = true;
}

bool AsyncEventStatus::InvokeRequestIdHasBeenSet() const
{
    return m_invokeRequestIdHasBeenSet;
}

