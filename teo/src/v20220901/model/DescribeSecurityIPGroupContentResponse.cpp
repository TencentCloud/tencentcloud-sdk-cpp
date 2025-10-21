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

#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupContentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeSecurityIPGroupContentResponse::DescribeSecurityIPGroupContentResponse() :
    m_iPTotalCountHasBeenSet(false),
    m_iPListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityIPGroupContentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IPTotalCount") && !rsp["IPTotalCount"].IsNull())
    {
        if (!rsp["IPTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IPTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPTotalCount = rsp["IPTotalCount"].GetInt64();
        m_iPTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("IPList") && !rsp["IPList"].IsNull())
    {
        if (!rsp["IPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPList.push_back((*itr).GetString());
        }
        m_iPListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityIPGroupContentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iPTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPTotalCount, allocator);
    }

    if (m_iPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPList.begin(); itr != m_iPList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeSecurityIPGroupContentResponse::GetIPTotalCount() const
{
    return m_iPTotalCount;
}

bool DescribeSecurityIPGroupContentResponse::IPTotalCountHasBeenSet() const
{
    return m_iPTotalCountHasBeenSet;
}

vector<string> DescribeSecurityIPGroupContentResponse::GetIPList() const
{
    return m_iPList;
}

bool DescribeSecurityIPGroupContentResponse::IPListHasBeenSet() const
{
    return m_iPListHasBeenSet;
}


