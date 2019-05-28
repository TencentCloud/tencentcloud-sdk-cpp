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

#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowDailyByZoneIdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeZoneFlowDailyByZoneIdResponse::DescribeZoneFlowDailyByZoneIdResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeZoneFlowDailyByZoneIdResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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
        if (!rsp["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = rsp["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Error("response `Data` is not array type"));

        const Value &tmpValue = rsp["Data"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneDayFlow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeZoneFlowDailyByZoneIdResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeZoneFlowDailyByZoneIdResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeZoneFlowDailyByZoneIdResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeZoneFlowDailyByZoneIdResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeZoneFlowDailyByZoneIdResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeZoneFlowDailyByZoneIdResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeZoneFlowDailyByZoneIdResponse::GetZoneName() const
{
    return m_zoneName;
}

bool DescribeZoneFlowDailyByZoneIdResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

vector<ZoneDayFlow> DescribeZoneFlowDailyByZoneIdResponse::GetData() const
{
    return m_data;
}

bool DescribeZoneFlowDailyByZoneIdResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


