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

#include <tencentcloud/cvd/v20201104/model/DescribeUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

DescribeUsageResponse::DescribeUsageResponse() :
    m_totalHasBeenSet(false),
    m_queryKeyHasBeenSet(false),
    m_usageSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("QueryKey") && !rsp["QueryKey"].IsNull())
    {
        if (!rsp["QueryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryKey = string(rsp["QueryKey"].GetString());
        m_queryKeyHasBeenSet = true;
    }

    if (rsp.HasMember("UsageSet") && !rsp["UsageSet"].IsNull())
    {
        if (!rsp["UsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsageSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UsageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Usage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usageSet.push_back(item);
        }
        m_usageSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_queryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_usageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usageSet.begin(); itr != m_usageSet.end(); ++itr, ++i)
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


int64_t DescribeUsageResponse::GetTotal() const
{
    return m_total;
}

bool DescribeUsageResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string DescribeUsageResponse::GetQueryKey() const
{
    return m_queryKey;
}

bool DescribeUsageResponse::QueryKeyHasBeenSet() const
{
    return m_queryKeyHasBeenSet;
}

vector<Usage> DescribeUsageResponse::GetUsageSet() const
{
    return m_usageSet;
}

bool DescribeUsageResponse::UsageSetHasBeenSet() const
{
    return m_usageSetHasBeenSet;
}


