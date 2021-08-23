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

#include <tencentcloud/privatedns/v20201028/model/DescribeDashboardResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

DescribeDashboardResponse::DescribeDashboardResponse() :
    m_zoneTotalHasBeenSet(false),
    m_zoneVpcCountHasBeenSet(false),
    m_requestTotalCountHasBeenSet(false),
    m_flowUsageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDashboardResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ZoneTotal") && !rsp["ZoneTotal"].IsNull())
    {
        if (!rsp["ZoneTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneTotal = rsp["ZoneTotal"].GetInt64();
        m_zoneTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneVpcCount") && !rsp["ZoneVpcCount"].IsNull())
    {
        if (!rsp["ZoneVpcCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneVpcCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneVpcCount = rsp["ZoneVpcCount"].GetInt64();
        m_zoneVpcCountHasBeenSet = true;
    }

    if (rsp.HasMember("RequestTotalCount") && !rsp["RequestTotalCount"].IsNull())
    {
        if (!rsp["RequestTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestTotalCount = rsp["RequestTotalCount"].GetInt64();
        m_requestTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("FlowUsage") && !rsp["FlowUsage"].IsNull())
    {
        if (!rsp["FlowUsage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowUsage` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowUsage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowUsage.push_back(item);
        }
        m_flowUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDashboardResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_zoneTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneTotal, allocator);
    }

    if (m_zoneVpcCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneVpcCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneVpcCount, allocator);
    }

    if (m_requestTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestTotalCount, allocator);
    }

    if (m_flowUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowUsage.begin(); itr != m_flowUsage.end(); ++itr, ++i)
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


int64_t DescribeDashboardResponse::GetZoneTotal() const
{
    return m_zoneTotal;
}

bool DescribeDashboardResponse::ZoneTotalHasBeenSet() const
{
    return m_zoneTotalHasBeenSet;
}

int64_t DescribeDashboardResponse::GetZoneVpcCount() const
{
    return m_zoneVpcCount;
}

bool DescribeDashboardResponse::ZoneVpcCountHasBeenSet() const
{
    return m_zoneVpcCountHasBeenSet;
}

int64_t DescribeDashboardResponse::GetRequestTotalCount() const
{
    return m_requestTotalCount;
}

bool DescribeDashboardResponse::RequestTotalCountHasBeenSet() const
{
    return m_requestTotalCountHasBeenSet;
}

vector<FlowUsage> DescribeDashboardResponse::GetFlowUsage() const
{
    return m_flowUsage;
}

bool DescribeDashboardResponse::FlowUsageHasBeenSet() const
{
    return m_flowUsageHasBeenSet;
}


