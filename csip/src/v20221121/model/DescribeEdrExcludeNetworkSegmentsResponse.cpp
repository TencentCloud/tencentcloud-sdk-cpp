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

#include <tencentcloud/csip/v20221121/model/DescribeEdrExcludeNetworkSegmentsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeEdrExcludeNetworkSegmentsResponse::DescribeEdrExcludeNetworkSegmentsResponse() :
    m_networkSegmentsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_defaultNetworkSegmentsHasBeenSet(false),
    m_isModifiedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEdrExcludeNetworkSegmentsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NetworkSegments") && !rsp["NetworkSegments"].IsNull())
    {
        if (!rsp["NetworkSegments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkSegments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetworkSegments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_networkSegments.push_back((*itr).GetString());
        }
        m_networkSegmentsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultNetworkSegments") && !rsp["DefaultNetworkSegments"].IsNull())
    {
        if (!rsp["DefaultNetworkSegments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefaultNetworkSegments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DefaultNetworkSegments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkSegment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultNetworkSegments.push_back(item);
        }
        m_defaultNetworkSegmentsHasBeenSet = true;
    }

    if (rsp.HasMember("IsModified") && !rsp["IsModified"].IsNull())
    {
        if (!rsp["IsModified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsModified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isModified = rsp["IsModified"].GetBool();
        m_isModifiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEdrExcludeNetworkSegmentsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_networkSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkSegments.begin(); itr != m_networkSegments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_defaultNetworkSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultNetworkSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultNetworkSegments.begin(); itr != m_defaultNetworkSegments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isModified, allocator);
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


vector<string> DescribeEdrExcludeNetworkSegmentsResponse::GetNetworkSegments() const
{
    return m_networkSegments;
}

bool DescribeEdrExcludeNetworkSegmentsResponse::NetworkSegmentsHasBeenSet() const
{
    return m_networkSegmentsHasBeenSet;
}

int64_t DescribeEdrExcludeNetworkSegmentsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeEdrExcludeNetworkSegmentsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<NetworkSegment> DescribeEdrExcludeNetworkSegmentsResponse::GetDefaultNetworkSegments() const
{
    return m_defaultNetworkSegments;
}

bool DescribeEdrExcludeNetworkSegmentsResponse::DefaultNetworkSegmentsHasBeenSet() const
{
    return m_defaultNetworkSegmentsHasBeenSet;
}

bool DescribeEdrExcludeNetworkSegmentsResponse::GetIsModified() const
{
    return m_isModified;
}

bool DescribeEdrExcludeNetworkSegmentsResponse::IsModifiedHasBeenSet() const
{
    return m_isModifiedHasBeenSet;
}


