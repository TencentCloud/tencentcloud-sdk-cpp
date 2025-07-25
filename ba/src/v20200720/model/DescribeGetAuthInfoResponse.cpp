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

#include <tencentcloud/ba/v20200720/model/DescribeGetAuthInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ba::V20200720::Model;
using namespace std;

DescribeGetAuthInfoResponse::DescribeGetAuthInfoResponse() :
    m_isTenPayMaskedHasBeenSet(false),
    m_isAuthenticatedHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGetAuthInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsTenPayMasked") && !rsp["IsTenPayMasked"].IsNull())
    {
        if (!rsp["IsTenPayMasked"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsTenPayMasked` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isTenPayMasked = string(rsp["IsTenPayMasked"].GetString());
        m_isTenPayMaskedHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuthenticated") && !rsp["IsAuthenticated"].IsNull())
    {
        if (!rsp["IsAuthenticated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuthenticated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthenticated = string(rsp["IsAuthenticated"].GetString());
        m_isAuthenticatedHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(rsp["Level"].GetString());
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGetAuthInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isTenPayMaskedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTenPayMasked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isTenPayMasked.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuthenticatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthenticated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAuthenticated.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
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


string DescribeGetAuthInfoResponse::GetIsTenPayMasked() const
{
    return m_isTenPayMasked;
}

bool DescribeGetAuthInfoResponse::IsTenPayMaskedHasBeenSet() const
{
    return m_isTenPayMaskedHasBeenSet;
}

string DescribeGetAuthInfoResponse::GetIsAuthenticated() const
{
    return m_isAuthenticated;
}

bool DescribeGetAuthInfoResponse::IsAuthenticatedHasBeenSet() const
{
    return m_isAuthenticatedHasBeenSet;
}

string DescribeGetAuthInfoResponse::GetType() const
{
    return m_type;
}

bool DescribeGetAuthInfoResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeGetAuthInfoResponse::GetLevel() const
{
    return m_level;
}

bool DescribeGetAuthInfoResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}


