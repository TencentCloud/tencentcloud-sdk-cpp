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

#include <tencentcloud/waf/v20180125/model/CreateDealsGoods.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateDealsGoods::CreateDealsGoods() :
    m_goodsNumHasBeenSet(false),
    m_goodsDetailHasBeenSet(false),
    m_goodsCategoryIdHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDealsGoods::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoods.GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = value["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }

    if (value.HasMember("GoodsDetail") && !value["GoodsDetail"].IsNull())
    {
        if (!value["GoodsDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoods.GoodsDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_goodsDetail.Deserialize(value["GoodsDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_goodsDetailHasBeenSet = true;
    }

    if (value.HasMember("GoodsCategoryId") && !value["GoodsCategoryId"].IsNull())
    {
        if (!value["GoodsCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoods.GoodsCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = value["GoodsCategoryId"].GetInt64();
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoods.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDealsGoods::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_goodsDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_goodsDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_goodsCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsCategoryId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


int64_t CreateDealsGoods::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDealsGoods::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDealsGoods::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

CreateDealsGoodsDetail CreateDealsGoods::GetGoodsDetail() const
{
    return m_goodsDetail;
}

void CreateDealsGoods::SetGoodsDetail(const CreateDealsGoodsDetail& _goodsDetail)
{
    m_goodsDetail = _goodsDetail;
    m_goodsDetailHasBeenSet = true;
}

bool CreateDealsGoods::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

int64_t CreateDealsGoods::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

void CreateDealsGoods::SetGoodsCategoryId(const int64_t& _goodsCategoryId)
{
    m_goodsCategoryId = _goodsCategoryId;
    m_goodsCategoryIdHasBeenSet = true;
}

bool CreateDealsGoods::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

int64_t CreateDealsGoods::GetRegionId() const
{
    return m_regionId;
}

void CreateDealsGoods::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CreateDealsGoods::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

