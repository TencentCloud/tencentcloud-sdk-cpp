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

#include <tencentcloud/tcb/v20180608/model/DescribeClientResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeClientResponse::DescribeClientResponse() :
    m_idHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_refreshTokenExpiresInHasBeenSet(false),
    m_accessTokenExpiresInHasBeenSet(false),
    m_maxDeviceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClientResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("RefreshTokenExpiresIn") && !rsp["RefreshTokenExpiresIn"].IsNull())
    {
        if (!rsp["RefreshTokenExpiresIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshTokenExpiresIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refreshTokenExpiresIn = rsp["RefreshTokenExpiresIn"].GetInt64();
        m_refreshTokenExpiresInHasBeenSet = true;
    }

    if (rsp.HasMember("AccessTokenExpiresIn") && !rsp["AccessTokenExpiresIn"].IsNull())
    {
        if (!rsp["AccessTokenExpiresIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessTokenExpiresIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessTokenExpiresIn = rsp["AccessTokenExpiresIn"].GetInt64();
        m_accessTokenExpiresInHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDevice") && !rsp["MaxDevice"].IsNull())
    {
        if (!rsp["MaxDevice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDevice = rsp["MaxDevice"].GetInt64();
        m_maxDeviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClientResponse::ToJsonString() const
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

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshTokenExpiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshTokenExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refreshTokenExpiresIn, allocator);
    }

    if (m_accessTokenExpiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessTokenExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessTokenExpiresIn, allocator);
    }

    if (m_maxDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDevice, allocator);
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


string DescribeClientResponse::GetId() const
{
    return m_id;
}

bool DescribeClientResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeClientResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeClientResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeClientResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool DescribeClientResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t DescribeClientResponse::GetRefreshTokenExpiresIn() const
{
    return m_refreshTokenExpiresIn;
}

bool DescribeClientResponse::RefreshTokenExpiresInHasBeenSet() const
{
    return m_refreshTokenExpiresInHasBeenSet;
}

int64_t DescribeClientResponse::GetAccessTokenExpiresIn() const
{
    return m_accessTokenExpiresIn;
}

bool DescribeClientResponse::AccessTokenExpiresInHasBeenSet() const
{
    return m_accessTokenExpiresInHasBeenSet;
}

int64_t DescribeClientResponse::GetMaxDevice() const
{
    return m_maxDevice;
}

bool DescribeClientResponse::MaxDeviceHasBeenSet() const
{
    return m_maxDeviceHasBeenSet;
}


