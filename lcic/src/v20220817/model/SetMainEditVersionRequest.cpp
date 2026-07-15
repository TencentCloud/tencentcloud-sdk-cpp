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

#include <tencentcloud/lcic/v20220817/model/SetMainEditVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SetMainEditVersionRequest::SetMainEditVersionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_versionNoHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string SetMainEditVersionRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_versionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionNo, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetMainEditVersionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetMainEditVersionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetMainEditVersionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t SetMainEditVersionRequest::GetRoomId() const
{
    return m_roomId;
}

void SetMainEditVersionRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool SetMainEditVersionRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t SetMainEditVersionRequest::GetVersionNo() const
{
    return m_versionNo;
}

void SetMainEditVersionRequest::SetVersionNo(const uint64_t& _versionNo)
{
    m_versionNo = _versionNo;
    m_versionNoHasBeenSet = true;
}

bool SetMainEditVersionRequest::VersionNoHasBeenSet() const
{
    return m_versionNoHasBeenSet;
}

string SetMainEditVersionRequest::GetOperator() const
{
    return m_operator;
}

void SetMainEditVersionRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SetMainEditVersionRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


