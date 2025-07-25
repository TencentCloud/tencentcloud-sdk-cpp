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

#include <tencentcloud/sts/v20180813/model/GetSessionTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

GetSessionTokenRequest::GetSessionTokenRequest() :
    m_serialNumberHasBeenSet(false),
    m_tokenCodeHasBeenSet(false),
    m_durationSecondsHasBeenSet(false)
{
}

string GetSessionTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokenCode.c_str(), allocator).Move(), allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetSessionTokenRequest::GetSerialNumber() const
{
    return m_serialNumber;
}

void GetSessionTokenRequest::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool GetSessionTokenRequest::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string GetSessionTokenRequest::GetTokenCode() const
{
    return m_tokenCode;
}

void GetSessionTokenRequest::SetTokenCode(const string& _tokenCode)
{
    m_tokenCode = _tokenCode;
    m_tokenCodeHasBeenSet = true;
}

bool GetSessionTokenRequest::TokenCodeHasBeenSet() const
{
    return m_tokenCodeHasBeenSet;
}

int64_t GetSessionTokenRequest::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void GetSessionTokenRequest::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool GetSessionTokenRequest::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}


