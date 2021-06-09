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

#include <tencentcloud/youmall/v20180228/model/DescribeShopTrafficInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeShopTrafficInfoResponse::DescribeShopTrafficInfoResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_shopDayTrafficInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeShopTrafficInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(rsp["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShopId") && !rsp["ShopId"].IsNull())
    {
        if (!rsp["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ShopDayTrafficInfoSet") && !rsp["ShopDayTrafficInfoSet"].IsNull())
    {
        if (!rsp["ShopDayTrafficInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `ShopDayTrafficInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShopDayTrafficInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShopDayTrafficInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shopDayTrafficInfoSet.push_back(item);
        }
        m_shopDayTrafficInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeShopTrafficInfoResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeShopTrafficInfoResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t DescribeShopTrafficInfoResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeShopTrafficInfoResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t DescribeShopTrafficInfoResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeShopTrafficInfoResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ShopDayTrafficInfo> DescribeShopTrafficInfoResponse::GetShopDayTrafficInfoSet() const
{
    return m_shopDayTrafficInfoSet;
}

bool DescribeShopTrafficInfoResponse::ShopDayTrafficInfoSetHasBeenSet() const
{
    return m_shopDayTrafficInfoSetHasBeenSet;
}


