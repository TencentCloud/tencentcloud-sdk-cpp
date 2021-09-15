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

#include <tencentcloud/essbasic/v20201222/model/DeleteSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DeleteSealRequest::DeleteSealRequest() :
    m_callerHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string DeleteSealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller DeleteSealRequest::GetCaller() const
{
    return m_caller;
}

void DeleteSealRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool DeleteSealRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string DeleteSealRequest::GetSealId() const
{
    return m_sealId;
}

void DeleteSealRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool DeleteSealRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string DeleteSealRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void DeleteSealRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DeleteSealRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string DeleteSealRequest::GetUserId() const
{
    return m_userId;
}

void DeleteSealRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DeleteSealRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


