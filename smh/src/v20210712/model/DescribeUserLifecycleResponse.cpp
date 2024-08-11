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

#include <tencentcloud/smh/v20210712/model/DescribeUserLifecycleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

DescribeUserLifecycleResponse::DescribeUserLifecycleResponse() :
    m_userIdHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_destroyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserLifecycleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateTime") && !rsp["IsolateTime"].IsNull())
    {
        if (!rsp["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(rsp["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DestroyTime") && !rsp["DestroyTime"].IsNull())
    {
        if (!rsp["DestroyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = string(rsp["DestroyTime"].GetString());
        m_destroyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserLifecycleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyTime.c_str(), allocator).Move(), allocator);
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


string DescribeUserLifecycleResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeUserLifecycleResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserLifecycleResponse::GetIsolateTime() const
{
    return m_isolateTime;
}

bool DescribeUserLifecycleResponse::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string DescribeUserLifecycleResponse::GetDestroyTime() const
{
    return m_destroyTime;
}

bool DescribeUserLifecycleResponse::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}


