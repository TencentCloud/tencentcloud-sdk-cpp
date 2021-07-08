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

#include <tencentcloud/ccc/v20200210/model/CreateUserSigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateUserSigRequest::CreateUserSigRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_clientDataHasBeenSet(false)
{
}

string CreateUserSigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_clientDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateUserSigRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateUserSigRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateUserSigRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateUserSigRequest::GetUid() const
{
    return m_uid;
}

void CreateUserSigRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool CreateUserSigRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t CreateUserSigRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void CreateUserSigRequest::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CreateUserSigRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CreateUserSigRequest::GetClientData() const
{
    return m_clientData;
}

void CreateUserSigRequest::SetClientData(const string& _clientData)
{
    m_clientData = _clientData;
    m_clientDataHasBeenSet = true;
}

bool CreateUserSigRequest::ClientDataHasBeenSet() const
{
    return m_clientDataHasBeenSet;
}


