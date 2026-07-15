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

#include <tencentcloud/lcic/v20220817/model/SetMainEditVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SetMainEditVersionResponse::SetMainEditVersionResponse() :
    m_classIdHasBeenSet(false),
    m_previousMainVersionHasBeenSet(false),
    m_mainVersionHasBeenSet(false)
{
}

CoreInternalOutcome SetMainEditVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClassId") && !rsp["ClassId"].IsNull())
    {
        if (!rsp["ClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = rsp["ClassId"].GetUint64();
        m_classIdHasBeenSet = true;
    }

    if (rsp.HasMember("PreviousMainVersion") && !rsp["PreviousMainVersion"].IsNull())
    {
        if (!rsp["PreviousMainVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviousMainVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_previousMainVersion = rsp["PreviousMainVersion"].GetUint64();
        m_previousMainVersionHasBeenSet = true;
    }

    if (rsp.HasMember("MainVersion") && !rsp["MainVersion"].IsNull())
    {
        if (!rsp["MainVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainVersion = rsp["MainVersion"].GetUint64();
        m_mainVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SetMainEditVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_previousMainVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviousMainVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previousMainVersion, allocator);
    }

    if (m_mainVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainVersion, allocator);
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


uint64_t SetMainEditVersionResponse::GetClassId() const
{
    return m_classId;
}

bool SetMainEditVersionResponse::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

uint64_t SetMainEditVersionResponse::GetPreviousMainVersion() const
{
    return m_previousMainVersion;
}

bool SetMainEditVersionResponse::PreviousMainVersionHasBeenSet() const
{
    return m_previousMainVersionHasBeenSet;
}

uint64_t SetMainEditVersionResponse::GetMainVersion() const
{
    return m_mainVersion;
}

bool SetMainEditVersionResponse::MainVersionHasBeenSet() const
{
    return m_mainVersionHasBeenSet;
}


