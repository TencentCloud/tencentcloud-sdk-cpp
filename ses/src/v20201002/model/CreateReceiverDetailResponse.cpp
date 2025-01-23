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

#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

CreateReceiverDetailResponse::CreateReceiverDetailResponse() :
    m_totalCountHasBeenSet(false),
    m_validCountHasBeenSet(false),
    m_tooLongCountHasBeenSet(false),
    m_emptyEmailCountHasBeenSet(false),
    m_repeatCountHasBeenSet(false)
{
}

CoreInternalOutcome CreateReceiverDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ValidCount") && !rsp["ValidCount"].IsNull())
    {
        if (!rsp["ValidCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ValidCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validCount = rsp["ValidCount"].GetUint64();
        m_validCountHasBeenSet = true;
    }

    if (rsp.HasMember("TooLongCount") && !rsp["TooLongCount"].IsNull())
    {
        if (!rsp["TooLongCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TooLongCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tooLongCount = rsp["TooLongCount"].GetUint64();
        m_tooLongCountHasBeenSet = true;
    }

    if (rsp.HasMember("EmptyEmailCount") && !rsp["EmptyEmailCount"].IsNull())
    {
        if (!rsp["EmptyEmailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmptyEmailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emptyEmailCount = rsp["EmptyEmailCount"].GetUint64();
        m_emptyEmailCountHasBeenSet = true;
    }

    if (rsp.HasMember("RepeatCount") && !rsp["RepeatCount"].IsNull())
    {
        if (!rsp["RepeatCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repeatCount = rsp["RepeatCount"].GetUint64();
        m_repeatCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateReceiverDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_validCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validCount, allocator);
    }

    if (m_tooLongCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TooLongCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tooLongCount, allocator);
    }

    if (m_emptyEmailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyEmailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emptyEmailCount, allocator);
    }

    if (m_repeatCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repeatCount, allocator);
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


uint64_t CreateReceiverDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool CreateReceiverDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t CreateReceiverDetailResponse::GetValidCount() const
{
    return m_validCount;
}

bool CreateReceiverDetailResponse::ValidCountHasBeenSet() const
{
    return m_validCountHasBeenSet;
}

uint64_t CreateReceiverDetailResponse::GetTooLongCount() const
{
    return m_tooLongCount;
}

bool CreateReceiverDetailResponse::TooLongCountHasBeenSet() const
{
    return m_tooLongCountHasBeenSet;
}

uint64_t CreateReceiverDetailResponse::GetEmptyEmailCount() const
{
    return m_emptyEmailCount;
}

bool CreateReceiverDetailResponse::EmptyEmailCountHasBeenSet() const
{
    return m_emptyEmailCountHasBeenSet;
}

uint64_t CreateReceiverDetailResponse::GetRepeatCount() const
{
    return m_repeatCount;
}

bool CreateReceiverDetailResponse::RepeatCountHasBeenSet() const
{
    return m_repeatCountHasBeenSet;
}


