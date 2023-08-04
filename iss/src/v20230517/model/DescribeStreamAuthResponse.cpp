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

#include <tencentcloud/iss/v20230517/model/DescribeStreamAuthResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeStreamAuthResponse::DescribeStreamAuthResponse() :
    m_idHasBeenSet(false),
    m_pullStateHasBeenSet(false),
    m_pullSecretHasBeenSet(false),
    m_pullExpiredHasBeenSet(false),
    m_pushStateHasBeenSet(false),
    m_pushSecretHasBeenSet(false),
    m_pushExpiredHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStreamAuthResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("PullState") && !rsp["PullState"].IsNull())
    {
        if (!rsp["PullState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullState = rsp["PullState"].GetInt64();
        m_pullStateHasBeenSet = true;
    }

    if (rsp.HasMember("PullSecret") && !rsp["PullSecret"].IsNull())
    {
        if (!rsp["PullSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pullSecret = string(rsp["PullSecret"].GetString());
        m_pullSecretHasBeenSet = true;
    }

    if (rsp.HasMember("PullExpired") && !rsp["PullExpired"].IsNull())
    {
        if (!rsp["PullExpired"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PullExpired` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pullExpired = rsp["PullExpired"].GetInt64();
        m_pullExpiredHasBeenSet = true;
    }

    if (rsp.HasMember("PushState") && !rsp["PushState"].IsNull())
    {
        if (!rsp["PushState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PushState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushState = rsp["PushState"].GetInt64();
        m_pushStateHasBeenSet = true;
    }

    if (rsp.HasMember("PushSecret") && !rsp["PushSecret"].IsNull())
    {
        if (!rsp["PushSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushSecret = string(rsp["PushSecret"].GetString());
        m_pushSecretHasBeenSet = true;
    }

    if (rsp.HasMember("PushExpired") && !rsp["PushExpired"].IsNull())
    {
        if (!rsp["PushExpired"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PushExpired` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushExpired = rsp["PushExpired"].GetInt64();
        m_pushExpiredHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStreamAuthResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_pullStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullState, allocator);
    }

    if (m_pullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pullSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pullExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullExpired, allocator);
    }

    if (m_pushStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushState, allocator);
    }

    if (m_pushSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_pushExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushExpired, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamAuthResponse::GetId() const
{
    return m_id;
}

bool DescribeStreamAuthResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DescribeStreamAuthResponse::GetPullState() const
{
    return m_pullState;
}

bool DescribeStreamAuthResponse::PullStateHasBeenSet() const
{
    return m_pullStateHasBeenSet;
}

string DescribeStreamAuthResponse::GetPullSecret() const
{
    return m_pullSecret;
}

bool DescribeStreamAuthResponse::PullSecretHasBeenSet() const
{
    return m_pullSecretHasBeenSet;
}

int64_t DescribeStreamAuthResponse::GetPullExpired() const
{
    return m_pullExpired;
}

bool DescribeStreamAuthResponse::PullExpiredHasBeenSet() const
{
    return m_pullExpiredHasBeenSet;
}

int64_t DescribeStreamAuthResponse::GetPushState() const
{
    return m_pushState;
}

bool DescribeStreamAuthResponse::PushStateHasBeenSet() const
{
    return m_pushStateHasBeenSet;
}

string DescribeStreamAuthResponse::GetPushSecret() const
{
    return m_pushSecret;
}

bool DescribeStreamAuthResponse::PushSecretHasBeenSet() const
{
    return m_pushSecretHasBeenSet;
}

int64_t DescribeStreamAuthResponse::GetPushExpired() const
{
    return m_pushExpired;
}

bool DescribeStreamAuthResponse::PushExpiredHasBeenSet() const
{
    return m_pushExpiredHasBeenSet;
}

int64_t DescribeStreamAuthResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeStreamAuthResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}


