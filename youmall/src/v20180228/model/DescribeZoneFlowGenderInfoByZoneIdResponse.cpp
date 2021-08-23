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

#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeZoneFlowGenderInfoByZoneIdResponse::DescribeZoneFlowGenderInfoByZoneIdResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_malePercentHasBeenSet(false),
    m_femalePercentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeZoneFlowGenderInfoByZoneIdResponse::Deserialize(const string &payload)
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
        if (!rsp["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = rsp["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneName") && !rsp["ZoneName"].IsNull())
    {
        if (!rsp["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(rsp["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (rsp.HasMember("MalePercent") && !rsp["MalePercent"].IsNull())
    {
        if (!rsp["MalePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MalePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_malePercent = rsp["MalePercent"].GetDouble();
        m_malePercentHasBeenSet = true;
    }

    if (rsp.HasMember("FemalePercent") && !rsp["FemalePercent"].IsNull())
    {
        if (!rsp["FemalePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FemalePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_femalePercent = rsp["FemalePercent"].GetDouble();
        m_femalePercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeZoneFlowGenderInfoByZoneIdResponse::ToJsonString() const
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

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_malePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malePercent, allocator);
    }

    if (m_femalePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FemalePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_femalePercent, allocator);
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


string DescribeZoneFlowGenderInfoByZoneIdResponse::GetCompanyId() const
{
    return m_companyId;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeZoneFlowGenderInfoByZoneIdResponse::GetShopId() const
{
    return m_shopId;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeZoneFlowGenderInfoByZoneIdResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeZoneFlowGenderInfoByZoneIdResponse::GetZoneName() const
{
    return m_zoneName;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

double DescribeZoneFlowGenderInfoByZoneIdResponse::GetMalePercent() const
{
    return m_malePercent;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::MalePercentHasBeenSet() const
{
    return m_malePercentHasBeenSet;
}

double DescribeZoneFlowGenderInfoByZoneIdResponse::GetFemalePercent() const
{
    return m_femalePercent;
}

bool DescribeZoneFlowGenderInfoByZoneIdResponse::FemalePercentHasBeenSet() const
{
    return m_femalePercentHasBeenSet;
}


