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

#include <tencentcloud/dlc/v20210125/model/DescribeUserRegisterTimeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeUserRegisterTimeResponse::DescribeUserRegisterTimeResponse() :
    m_registerTimeHasBeenSet(false),
    m_isOldUserHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserRegisterTimeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RegisterTime") && !rsp["RegisterTime"].IsNull())
    {
        if (!rsp["RegisterTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = rsp["RegisterTime"].GetInt64();
        m_registerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsOldUser") && !rsp["IsOldUser"].IsNull())
    {
        if (!rsp["IsOldUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsOldUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOldUser = rsp["IsOldUser"].GetBool();
        m_isOldUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserRegisterTimeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerTime, allocator);
    }

    if (m_isOldUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOldUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOldUser, allocator);
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


int64_t DescribeUserRegisterTimeResponse::GetRegisterTime() const
{
    return m_registerTime;
}

bool DescribeUserRegisterTimeResponse::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

bool DescribeUserRegisterTimeResponse::GetIsOldUser() const
{
    return m_isOldUser;
}

bool DescribeUserRegisterTimeResponse::IsOldUserHasBeenSet() const
{
    return m_isOldUserHasBeenSet;
}


