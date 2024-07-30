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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeGoodsDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeGoodsDetailResponse::DescribeGoodsDetailResponse() :
    m_goodsDetailHasBeenSet(false),
    m_goodsCategoryIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGoodsDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GoodsDetail") && !rsp["GoodsDetail"].IsNull())
    {
        if (!rsp["GoodsDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsDetail = string(rsp["GoodsDetail"].GetString());
        m_goodsDetailHasBeenSet = true;
    }

    if (rsp.HasMember("GoodsCategoryId") && !rsp["GoodsCategoryId"].IsNull())
    {
        if (!rsp["GoodsCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = rsp["GoodsCategoryId"].GetInt64();
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = rsp["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
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

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("GoodsNum") && !rsp["GoodsNum"].IsNull())
    {
        if (!rsp["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = rsp["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGoodsDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_goodsDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsCategoryId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsNum, allocator);
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


string DescribeGoodsDetailResponse::GetGoodsDetail() const
{
    return m_goodsDetail;
}

bool DescribeGoodsDetailResponse::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

int64_t DescribeGoodsDetailResponse::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

bool DescribeGoodsDetailResponse::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

string DescribeGoodsDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeGoodsDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeGoodsDetailResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeGoodsDetailResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribeGoodsDetailResponse::GetRegionId() const
{
    return m_regionId;
}

bool DescribeGoodsDetailResponse::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DescribeGoodsDetailResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeGoodsDetailResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeGoodsDetailResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeGoodsDetailResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DescribeGoodsDetailResponse::GetGoodsNum() const
{
    return m_goodsNum;
}

bool DescribeGoodsDetailResponse::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}


