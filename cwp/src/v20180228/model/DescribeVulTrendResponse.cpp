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

#include <tencentcloud/cwp/v20180228/model/DescribeVulTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulTrendResponse::DescribeVulTrendResponse() :
    m_vulEventCountHasBeenSet(false),
    m_increaseVulEventCountHasBeenSet(false),
    m_hotVulCountHasBeenSet(false),
    m_increaseHotVulCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulTrendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulEventCount") && !rsp["VulEventCount"].IsNull())
    {
        if (!rsp["VulEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulEventCount = rsp["VulEventCount"].GetUint64();
        m_vulEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseVulEventCount") && !rsp["IncreaseVulEventCount"].IsNull())
    {
        if (!rsp["IncreaseVulEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseVulEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseVulEventCount = rsp["IncreaseVulEventCount"].GetUint64();
        m_increaseVulEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("HotVulCount") && !rsp["HotVulCount"].IsNull())
    {
        if (!rsp["HotVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HotVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hotVulCount = rsp["HotVulCount"].GetUint64();
        m_hotVulCountHasBeenSet = true;
    }

    if (rsp.HasMember("IncreaseHotVulCount") && !rsp["IncreaseHotVulCount"].IsNull())
    {
        if (!rsp["IncreaseHotVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncreaseHotVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_increaseHotVulCount = rsp["IncreaseHotVulCount"].GetUint64();
        m_increaseHotVulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulTrendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulEventCount, allocator);
    }

    if (m_increaseVulEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseVulEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseVulEventCount, allocator);
    }

    if (m_hotVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hotVulCount, allocator);
    }

    if (m_increaseHotVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseHotVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_increaseHotVulCount, allocator);
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


uint64_t DescribeVulTrendResponse::GetVulEventCount() const
{
    return m_vulEventCount;
}

bool DescribeVulTrendResponse::VulEventCountHasBeenSet() const
{
    return m_vulEventCountHasBeenSet;
}

uint64_t DescribeVulTrendResponse::GetIncreaseVulEventCount() const
{
    return m_increaseVulEventCount;
}

bool DescribeVulTrendResponse::IncreaseVulEventCountHasBeenSet() const
{
    return m_increaseVulEventCountHasBeenSet;
}

uint64_t DescribeVulTrendResponse::GetHotVulCount() const
{
    return m_hotVulCount;
}

bool DescribeVulTrendResponse::HotVulCountHasBeenSet() const
{
    return m_hotVulCountHasBeenSet;
}

uint64_t DescribeVulTrendResponse::GetIncreaseHotVulCount() const
{
    return m_increaseHotVulCount;
}

bool DescribeVulTrendResponse::IncreaseHotVulCountHasBeenSet() const
{
    return m_increaseHotVulCountHasBeenSet;
}


