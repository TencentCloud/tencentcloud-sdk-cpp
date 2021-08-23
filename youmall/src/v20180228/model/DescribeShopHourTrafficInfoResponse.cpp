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

#include <tencentcloud/youmall/v20180228/model/DescribeShopHourTrafficInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeShopHourTrafficInfoResponse::DescribeShopHourTrafficInfoResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_shopHourTrafficInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeShopHourTrafficInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(rsp["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShopId") && !rsp["ShopId"].IsNull())
    {
        if (!rsp["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ShopHourTrafficInfoSet") && !rsp["ShopHourTrafficInfoSet"].IsNull())
    {
        if (!rsp["ShopHourTrafficInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShopHourTrafficInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShopHourTrafficInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShopHourTrafficInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shopHourTrafficInfoSet.push_back(item);
        }
        m_shopHourTrafficInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeShopHourTrafficInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_shopHourTrafficInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopHourTrafficInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shopHourTrafficInfoSet.begin(); itr != m_shopHourTrafficInfoSet.end(); ++itr, ++i)
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


string DescribeShopHourTrafficInfoResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeShopHourTrafficInfoResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t DescribeShopHourTrafficInfoResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeShopHourTrafficInfoResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t DescribeShopHourTrafficInfoResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeShopHourTrafficInfoResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ShopHourTrafficInfo> DescribeShopHourTrafficInfoResponse::GetShopHourTrafficInfoSet() const
{
    return m_shopHourTrafficInfoSet;
}

bool DescribeShopHourTrafficInfoResponse::ShopHourTrafficInfoSetHasBeenSet() const
{
    return m_shopHourTrafficInfoSetHasBeenSet;
}


