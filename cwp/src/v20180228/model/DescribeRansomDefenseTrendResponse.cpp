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

#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeRansomDefenseTrendResponse::DescribeRansomDefenseTrendResponse() :
    m_eventCountHasBeenSet(false),
    m_industryCountHasBeenSet(false),
    m_companyCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRansomDefenseTrendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventCount") && !rsp["EventCount"].IsNull())
    {
        if (!rsp["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = rsp["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (rsp.HasMember("IndustryCount") && !rsp["IndustryCount"].IsNull())
    {
        if (!rsp["IndustryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IndustryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_industryCount = rsp["IndustryCount"].GetUint64();
        m_industryCountHasBeenSet = true;
    }

    if (rsp.HasMember("CompanyCount") && !rsp["CompanyCount"].IsNull())
    {
        if (!rsp["CompanyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_companyCount = rsp["CompanyCount"].GetUint64();
        m_companyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRansomDefenseTrendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_industryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_industryCount, allocator);
    }

    if (m_companyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyCount, allocator);
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


uint64_t DescribeRansomDefenseTrendResponse::GetEventCount() const
{
    return m_eventCount;
}

bool DescribeRansomDefenseTrendResponse::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

uint64_t DescribeRansomDefenseTrendResponse::GetIndustryCount() const
{
    return m_industryCount;
}

bool DescribeRansomDefenseTrendResponse::IndustryCountHasBeenSet() const
{
    return m_industryCountHasBeenSet;
}

uint64_t DescribeRansomDefenseTrendResponse::GetCompanyCount() const
{
    return m_companyCount;
}

bool DescribeRansomDefenseTrendResponse::CompanyCountHasBeenSet() const
{
    return m_companyCountHasBeenSet;
}


