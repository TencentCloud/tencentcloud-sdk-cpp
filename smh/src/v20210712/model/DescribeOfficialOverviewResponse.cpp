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

#include <tencentcloud/smh/v20210712/model/DescribeOfficialOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

DescribeOfficialOverviewResponse::DescribeOfficialOverviewResponse() :
    m_quantityHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_internetTrafficHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOfficialOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Quantity") && !rsp["Quantity"].IsNull())
    {
        if (!rsp["Quantity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quantity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = rsp["Quantity"].GetUint64();
        m_quantityHasBeenSet = true;
    }

    if (rsp.HasMember("Storage") && !rsp["Storage"].IsNull())
    {
        if (!rsp["Storage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storage = string(rsp["Storage"].GetString());
        m_storageHasBeenSet = true;
    }

    if (rsp.HasMember("UserCount") && !rsp["UserCount"].IsNull())
    {
        if (!rsp["UserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = rsp["UserCount"].GetUint64();
        m_userCountHasBeenSet = true;
    }

    if (rsp.HasMember("InternetTraffic") && !rsp["InternetTraffic"].IsNull())
    {
        if (!rsp["InternetTraffic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetTraffic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetTraffic = string(rsp["InternetTraffic"].GetString());
        m_internetTrafficHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOfficialOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quantity, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storage.c_str(), allocator).Move(), allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

    if (m_internetTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetTraffic.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeOfficialOverviewResponse::GetQuantity() const
{
    return m_quantity;
}

bool DescribeOfficialOverviewResponse::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string DescribeOfficialOverviewResponse::GetStorage() const
{
    return m_storage;
}

bool DescribeOfficialOverviewResponse::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t DescribeOfficialOverviewResponse::GetUserCount() const
{
    return m_userCount;
}

bool DescribeOfficialOverviewResponse::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

string DescribeOfficialOverviewResponse::GetInternetTraffic() const
{
    return m_internetTraffic;
}

bool DescribeOfficialOverviewResponse::InternetTrafficHasBeenSet() const
{
    return m_internetTrafficHasBeenSet;
}


