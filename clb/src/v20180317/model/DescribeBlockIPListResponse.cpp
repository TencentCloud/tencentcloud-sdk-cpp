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

#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeBlockIPListResponse::DescribeBlockIPListResponse() :
    m_blockedIPCountHasBeenSet(false),
    m_clientIPFieldHasBeenSet(false),
    m_blockedIPListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBlockIPListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BlockedIPCount") && !rsp["BlockedIPCount"].IsNull())
    {
        if (!rsp["BlockedIPCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockedIPCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedIPCount = rsp["BlockedIPCount"].GetUint64();
        m_blockedIPCountHasBeenSet = true;
    }

    if (rsp.HasMember("ClientIPField") && !rsp["ClientIPField"].IsNull())
    {
        if (!rsp["ClientIPField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIPField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIPField = string(rsp["ClientIPField"].GetString());
        m_clientIPFieldHasBeenSet = true;
    }

    if (rsp.HasMember("BlockedIPList") && !rsp["BlockedIPList"].IsNull())
    {
        if (!rsp["BlockedIPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockedIPList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BlockedIPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BlockedIP item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blockedIPList.push_back(item);
        }
        m_blockedIPListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBlockIPListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_blockedIPCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedIPCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedIPCount, allocator);
    }

    if (m_clientIPFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIPField.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedIPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blockedIPList.begin(); itr != m_blockedIPList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


uint64_t DescribeBlockIPListResponse::GetBlockedIPCount() const
{
    return m_blockedIPCount;
}

bool DescribeBlockIPListResponse::BlockedIPCountHasBeenSet() const
{
    return m_blockedIPCountHasBeenSet;
}

string DescribeBlockIPListResponse::GetClientIPField() const
{
    return m_clientIPField;
}

bool DescribeBlockIPListResponse::ClientIPFieldHasBeenSet() const
{
    return m_clientIPFieldHasBeenSet;
}

vector<BlockedIP> DescribeBlockIPListResponse::GetBlockedIPList() const
{
    return m_blockedIPList;
}

bool DescribeBlockIPListResponse::BlockedIPListHasBeenSet() const
{
    return m_blockedIPListHasBeenSet;
}


