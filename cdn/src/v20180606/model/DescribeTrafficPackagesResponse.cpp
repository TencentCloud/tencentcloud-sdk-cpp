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

#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeTrafficPackagesResponse::DescribeTrafficPackagesResponse() :
    m_totalCountHasBeenSet(false),
    m_trafficPackagesHasBeenSet(false),
    m_expiringCountHasBeenSet(false),
    m_enabledCountHasBeenSet(false),
    m_paidCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrafficPackagesResponse::Deserialize(const string &payload)
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
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("TrafficPackages") && !rsp["TrafficPackages"].IsNull())
    {
        if (!rsp["TrafficPackages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficPackages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TrafficPackages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficPackage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficPackages.push_back(item);
        }
        m_trafficPackagesHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiringCount") && !rsp["ExpiringCount"].IsNull())
    {
        if (!rsp["ExpiringCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiringCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiringCount = rsp["ExpiringCount"].GetInt64();
        m_expiringCountHasBeenSet = true;
    }

    if (rsp.HasMember("EnabledCount") && !rsp["EnabledCount"].IsNull())
    {
        if (!rsp["EnabledCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnabledCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enabledCount = rsp["EnabledCount"].GetInt64();
        m_enabledCountHasBeenSet = true;
    }

    if (rsp.HasMember("PaidCount") && !rsp["PaidCount"].IsNull())
    {
        if (!rsp["PaidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paidCount = rsp["PaidCount"].GetInt64();
        m_paidCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTrafficPackagesResponse::ToJsonString() const
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

    if (m_trafficPackagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficPackages.begin(); itr != m_trafficPackages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_expiringCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiringCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiringCount, allocator);
    }

    if (m_enabledCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabledCount, allocator);
    }

    if (m_paidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paidCount, allocator);
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


int64_t DescribeTrafficPackagesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeTrafficPackagesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<TrafficPackage> DescribeTrafficPackagesResponse::GetTrafficPackages() const
{
    return m_trafficPackages;
}

bool DescribeTrafficPackagesResponse::TrafficPackagesHasBeenSet() const
{
    return m_trafficPackagesHasBeenSet;
}

int64_t DescribeTrafficPackagesResponse::GetExpiringCount() const
{
    return m_expiringCount;
}

bool DescribeTrafficPackagesResponse::ExpiringCountHasBeenSet() const
{
    return m_expiringCountHasBeenSet;
}

int64_t DescribeTrafficPackagesResponse::GetEnabledCount() const
{
    return m_enabledCount;
}

bool DescribeTrafficPackagesResponse::EnabledCountHasBeenSet() const
{
    return m_enabledCountHasBeenSet;
}

int64_t DescribeTrafficPackagesResponse::GetPaidCount() const
{
    return m_paidCount;
}

bool DescribeTrafficPackagesResponse::PaidCountHasBeenSet() const
{
    return m_paidCountHasBeenSet;
}


