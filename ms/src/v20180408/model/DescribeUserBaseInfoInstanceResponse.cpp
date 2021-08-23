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

#include <tencentcloud/ms/v20180408/model/DescribeUserBaseInfoInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeUserBaseInfoInstanceResponse::DescribeUserBaseInfoInstanceResponse() :
    m_userUinHasBeenSet(false),
    m_userAppidHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserBaseInfoInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserUin") && !rsp["UserUin"].IsNull())
    {
        if (!rsp["UserUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = rsp["UserUin"].GetUint64();
        m_userUinHasBeenSet = true;
    }

    if (rsp.HasMember("UserAppid") && !rsp["UserAppid"].IsNull())
    {
        if (!rsp["UserAppid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserAppid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userAppid = rsp["UserAppid"].GetUint64();
        m_userAppidHasBeenSet = true;
    }

    if (rsp.HasMember("TimeStamp") && !rsp["TimeStamp"].IsNull())
    {
        if (!rsp["TimeStamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeStamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = rsp["TimeStamp"].GetUint64();
        m_timeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserBaseInfoInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userUin, allocator);
    }

    if (m_userAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userAppid, allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeStamp, allocator);
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


uint64_t DescribeUserBaseInfoInstanceResponse::GetUserUin() const
{
    return m_userUin;
}

bool DescribeUserBaseInfoInstanceResponse::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

uint64_t DescribeUserBaseInfoInstanceResponse::GetUserAppid() const
{
    return m_userAppid;
}

bool DescribeUserBaseInfoInstanceResponse::UserAppidHasBeenSet() const
{
    return m_userAppidHasBeenSet;
}

uint64_t DescribeUserBaseInfoInstanceResponse::GetTimeStamp() const
{
    return m_timeStamp;
}

bool DescribeUserBaseInfoInstanceResponse::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}


