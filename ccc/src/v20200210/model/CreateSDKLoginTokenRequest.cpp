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

#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateSDKLoginTokenRequest::CreateSDKLoginTokenRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_seatUserIdHasBeenSet(false),
    m_onlyOnceHasBeenSet(false)
{
}

string CreateSDKLoginTokenRequest::ToJsonString() const
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

    if (m_seatUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_seatUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyOnceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyOnce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyOnce, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateSDKLoginTokenRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateSDKLoginTokenRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateSDKLoginTokenRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateSDKLoginTokenRequest::GetSeatUserId() const
{
    return m_seatUserId;
}

void CreateSDKLoginTokenRequest::SetSeatUserId(const string& _seatUserId)
{
    m_seatUserId = _seatUserId;
    m_seatUserIdHasBeenSet = true;
}

bool CreateSDKLoginTokenRequest::SeatUserIdHasBeenSet() const
{
    return m_seatUserIdHasBeenSet;
}

bool CreateSDKLoginTokenRequest::GetOnlyOnce() const
{
    return m_onlyOnce;
}

void CreateSDKLoginTokenRequest::SetOnlyOnce(const bool& _onlyOnce)
{
    m_onlyOnce = _onlyOnce;
    m_onlyOnceHasBeenSet = true;
}

bool CreateSDKLoginTokenRequest::OnlyOnceHasBeenSet() const
{
    return m_onlyOnceHasBeenSet;
}


