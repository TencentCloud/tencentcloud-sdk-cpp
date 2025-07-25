/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/Goods.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

Goods::Goods() :
    m_payModeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_goodsDetailHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsCategoryIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome Goods::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = value["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }

    if (value.HasMember("GoodsDetail") && !value["GoodsDetail"].IsNull())
    {
        if (!value["GoodsDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.GoodsDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_goodsDetail.Deserialize(value["GoodsDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_goodsDetailHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsCategoryId") && !value["GoodsCategoryId"].IsNull())
    {
        if (!value["GoodsCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.GoodsCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = value["GoodsCategoryId"].GetInt64();
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.Platform` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetInt64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Goods.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Goods::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_goodsCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsCategoryId, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platform, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


int64_t Goods::GetPayMode() const
{
    return m_payMode;
}

void Goods::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Goods::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t Goods::GetGoodsNum() const
{
    return m_goodsNum;
}

void Goods::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool Goods::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

GoodsDetail Goods::GetGoodsDetail() const
{
    return m_goodsDetail;
}

void Goods::SetGoodsDetail(const GoodsDetail& _goodsDetail)
{
    m_goodsDetail = _goodsDetail;
    m_goodsDetailHasBeenSet = true;
}

bool Goods::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

int64_t Goods::GetProjectId() const
{
    return m_projectId;
}

void Goods::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Goods::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t Goods::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

void Goods::SetGoodsCategoryId(const int64_t& _goodsCategoryId)
{
    m_goodsCategoryId = _goodsCategoryId;
    m_goodsCategoryIdHasBeenSet = true;
}

bool Goods::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

int64_t Goods::GetPlatform() const
{
    return m_platform;
}

void Goods::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Goods::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

int64_t Goods::GetRegionId() const
{
    return m_regionId;
}

void Goods::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Goods::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

