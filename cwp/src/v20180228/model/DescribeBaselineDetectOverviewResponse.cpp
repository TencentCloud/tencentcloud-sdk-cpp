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

#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetectOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBaselineDetectOverviewResponse::DescribeBaselineDetectOverviewResponse() :
    m_hostCountHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_policyCountHasBeenSet(false),
    m_passRateHasBeenSet(false),
    m_latestPassCountHasBeenSet(false),
    m_latestNotPassCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineDetectOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HostCount") && !rsp["HostCount"].IsNull())
    {
        if (!rsp["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = rsp["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (rsp.HasMember("ItemCount") && !rsp["ItemCount"].IsNull())
    {
        if (!rsp["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = rsp["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyCount") && !rsp["PolicyCount"].IsNull())
    {
        if (!rsp["PolicyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyCount = rsp["PolicyCount"].GetInt64();
        m_policyCountHasBeenSet = true;
    }

    if (rsp.HasMember("PassRate") && !rsp["PassRate"].IsNull())
    {
        if (!rsp["PassRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PassRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passRate = rsp["PassRate"].GetInt64();
        m_passRateHasBeenSet = true;
    }

    if (rsp.HasMember("LatestPassCount") && !rsp["LatestPassCount"].IsNull())
    {
        if (!rsp["LatestPassCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LatestPassCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestPassCount = rsp["LatestPassCount"].GetInt64();
        m_latestPassCountHasBeenSet = true;
    }

    if (rsp.HasMember("LatestNotPassCount") && !rsp["LatestNotPassCount"].IsNull())
    {
        if (!rsp["LatestNotPassCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LatestNotPassCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestNotPassCount = rsp["LatestNotPassCount"].GetInt64();
        m_latestNotPassCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineDetectOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_policyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyCount, allocator);
    }

    if (m_passRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passRate, allocator);
    }

    if (m_latestPassCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestPassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestPassCount, allocator);
    }

    if (m_latestNotPassCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestNotPassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestNotPassCount, allocator);
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


int64_t DescribeBaselineDetectOverviewResponse::GetHostCount() const
{
    return m_hostCount;
}

bool DescribeBaselineDetectOverviewResponse::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t DescribeBaselineDetectOverviewResponse::GetItemCount() const
{
    return m_itemCount;
}

bool DescribeBaselineDetectOverviewResponse::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t DescribeBaselineDetectOverviewResponse::GetPolicyCount() const
{
    return m_policyCount;
}

bool DescribeBaselineDetectOverviewResponse::PolicyCountHasBeenSet() const
{
    return m_policyCountHasBeenSet;
}

int64_t DescribeBaselineDetectOverviewResponse::GetPassRate() const
{
    return m_passRate;
}

bool DescribeBaselineDetectOverviewResponse::PassRateHasBeenSet() const
{
    return m_passRateHasBeenSet;
}

int64_t DescribeBaselineDetectOverviewResponse::GetLatestPassCount() const
{
    return m_latestPassCount;
}

bool DescribeBaselineDetectOverviewResponse::LatestPassCountHasBeenSet() const
{
    return m_latestPassCountHasBeenSet;
}

int64_t DescribeBaselineDetectOverviewResponse::GetLatestNotPassCount() const
{
    return m_latestNotPassCount;
}

bool DescribeBaselineDetectOverviewResponse::LatestNotPassCountHasBeenSet() const
{
    return m_latestNotPassCountHasBeenSet;
}


