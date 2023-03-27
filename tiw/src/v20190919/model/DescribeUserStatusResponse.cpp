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

#include <tencentcloud/tiw/v20190919/model/DescribeUserStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeUserStatusResponse::DescribeUserStatusResponse() :
    m_appIdHasBeenSet(false),
    m_isTiwUserHasBeenSet(false),
    m_isSaaSUserHasBeenSet(false),
    m_isTiwOfflineRecordUserHasBeenSet(false),
    m_isAuthenticatedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsTiwUser") && !rsp["IsTiwUser"].IsNull())
    {
        if (!rsp["IsTiwUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsTiwUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTiwUser = rsp["IsTiwUser"].GetInt64();
        m_isTiwUserHasBeenSet = true;
    }

    if (rsp.HasMember("IsSaaSUser") && !rsp["IsSaaSUser"].IsNull())
    {
        if (!rsp["IsSaaSUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsSaaSUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSaaSUser = rsp["IsSaaSUser"].GetInt64();
        m_isSaaSUserHasBeenSet = true;
    }

    if (rsp.HasMember("IsTiwOfflineRecordUser") && !rsp["IsTiwOfflineRecordUser"].IsNull())
    {
        if (!rsp["IsTiwOfflineRecordUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsTiwOfflineRecordUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTiwOfflineRecordUser = rsp["IsTiwOfflineRecordUser"].GetInt64();
        m_isTiwOfflineRecordUserHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuthenticated") && !rsp["IsAuthenticated"].IsNull())
    {
        if (!rsp["IsAuthenticated"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuthenticated` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthenticated = rsp["IsAuthenticated"].GetInt64();
        m_isAuthenticatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_isTiwUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTiwUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTiwUser, allocator);
    }

    if (m_isSaaSUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSaaSUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSaaSUser, allocator);
    }

    if (m_isTiwOfflineRecordUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTiwOfflineRecordUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTiwOfflineRecordUser, allocator);
    }

    if (m_isAuthenticatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthenticated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthenticated, allocator);
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


int64_t DescribeUserStatusResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeUserStatusResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeUserStatusResponse::GetIsTiwUser() const
{
    return m_isTiwUser;
}

bool DescribeUserStatusResponse::IsTiwUserHasBeenSet() const
{
    return m_isTiwUserHasBeenSet;
}

int64_t DescribeUserStatusResponse::GetIsSaaSUser() const
{
    return m_isSaaSUser;
}

bool DescribeUserStatusResponse::IsSaaSUserHasBeenSet() const
{
    return m_isSaaSUserHasBeenSet;
}

int64_t DescribeUserStatusResponse::GetIsTiwOfflineRecordUser() const
{
    return m_isTiwOfflineRecordUser;
}

bool DescribeUserStatusResponse::IsTiwOfflineRecordUserHasBeenSet() const
{
    return m_isTiwOfflineRecordUserHasBeenSet;
}

int64_t DescribeUserStatusResponse::GetIsAuthenticated() const
{
    return m_isAuthenticated;
}

bool DescribeUserStatusResponse::IsAuthenticatedHasBeenSet() const
{
    return m_isAuthenticatedHasBeenSet;
}


