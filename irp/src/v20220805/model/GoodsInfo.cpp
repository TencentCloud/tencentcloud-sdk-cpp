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

#include <tencentcloud/irp/v20220805/model/GoodsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

GoodsInfo::GoodsInfo() :
    m_goodsIdHasBeenSet(false),
    m_goodsTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publishTimestampHasBeenSet(false),
    m_expireTimestampHasBeenSet(false),
    m_spuIdHasBeenSet(false),
    m_categoryLevelHasBeenSet(false),
    m_categoryPathHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_orgPriceHasBeenSet(false),
    m_curPriceHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_picUrlListHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_freeShippingHasBeenSet(false),
    m_shippingPriceHasBeenSet(false),
    m_praiseCntHasBeenSet(false),
    m_commentCntHasBeenSet(false),
    m_shareCntHasBeenSet(false),
    m_collectCntHasBeenSet(false),
    m_orderCntHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome GoodsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsId") && !value["GoodsId"].IsNull())
    {
        if (!value["GoodsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.GoodsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsId = string(value["GoodsId"].GetString());
        m_goodsIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsType") && !value["GoodsType"].IsNull())
    {
        if (!value["GoodsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.GoodsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsType = string(value["GoodsType"].GetString());
        m_goodsTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PublishTimestamp") && !value["PublishTimestamp"].IsNull())
    {
        if (!value["PublishTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.PublishTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishTimestamp = value["PublishTimestamp"].GetInt64();
        m_publishTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExpireTimestamp") && !value["ExpireTimestamp"].IsNull())
    {
        if (!value["ExpireTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.ExpireTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTimestamp = value["ExpireTimestamp"].GetInt64();
        m_expireTimestampHasBeenSet = true;
    }

    if (value.HasMember("SpuId") && !value["SpuId"].IsNull())
    {
        if (!value["SpuId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.SpuId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spuId = string(value["SpuId"].GetString());
        m_spuIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryLevel") && !value["CategoryLevel"].IsNull())
    {
        if (!value["CategoryLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.CategoryLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryLevel = value["CategoryLevel"].GetInt64();
        m_categoryLevelHasBeenSet = true;
    }

    if (value.HasMember("CategoryPath") && !value["CategoryPath"].IsNull())
    {
        if (!value["CategoryPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.CategoryPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryPath = string(value["CategoryPath"].GetString());
        m_categoryPathHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.ShopId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = string(value["ShopId"].GetString());
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("OrgPrice") && !value["OrgPrice"].IsNull())
    {
        if (!value["OrgPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.OrgPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_orgPrice = value["OrgPrice"].GetDouble();
        m_orgPriceHasBeenSet = true;
    }

    if (value.HasMember("CurPrice") && !value["CurPrice"].IsNull())
    {
        if (!value["CurPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.CurPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_curPrice = value["CurPrice"].GetDouble();
        m_curPriceHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentUrl") && !value["ContentUrl"].IsNull())
    {
        if (!value["ContentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.ContentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentUrl = string(value["ContentUrl"].GetString());
        m_contentUrlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlList") && !value["PicUrlList"].IsNull())
    {
        if (!value["PicUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.PicUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["PicUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_picUrlList.push_back((*itr).GetString());
        }
        m_picUrlListHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("FreeShipping") && !value["FreeShipping"].IsNull())
    {
        if (!value["FreeShipping"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.FreeShipping` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeShipping = value["FreeShipping"].GetInt64();
        m_freeShippingHasBeenSet = true;
    }

    if (value.HasMember("ShippingPrice") && !value["ShippingPrice"].IsNull())
    {
        if (!value["ShippingPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.ShippingPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shippingPrice = value["ShippingPrice"].GetDouble();
        m_shippingPriceHasBeenSet = true;
    }

    if (value.HasMember("PraiseCnt") && !value["PraiseCnt"].IsNull())
    {
        if (!value["PraiseCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.PraiseCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_praiseCnt = value["PraiseCnt"].GetInt64();
        m_praiseCntHasBeenSet = true;
    }

    if (value.HasMember("CommentCnt") && !value["CommentCnt"].IsNull())
    {
        if (!value["CommentCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.CommentCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commentCnt = value["CommentCnt"].GetInt64();
        m_commentCntHasBeenSet = true;
    }

    if (value.HasMember("ShareCnt") && !value["ShareCnt"].IsNull())
    {
        if (!value["ShareCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.ShareCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareCnt = value["ShareCnt"].GetInt64();
        m_shareCntHasBeenSet = true;
    }

    if (value.HasMember("CollectCnt") && !value["CollectCnt"].IsNull())
    {
        if (!value["CollectCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.CollectCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_collectCnt = value["CollectCnt"].GetInt64();
        m_collectCntHasBeenSet = true;
    }

    if (value.HasMember("OrderCnt") && !value["OrderCnt"].IsNull())
    {
        if (!value["OrderCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.OrderCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderCnt = value["OrderCnt"].GetInt64();
        m_orderCntHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsInfo.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_publishTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishTimestamp, allocator);
    }

    if (m_expireTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTimestamp, allocator);
    }

    if (m_spuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spuId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryLevel, allocator);
    }

    if (m_categoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgPrice, allocator);
    }

    if (m_curPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_curPrice, allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_picUrlList.begin(); itr != m_picUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_freeShippingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeShipping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeShipping, allocator);
    }

    if (m_shippingPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShippingPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shippingPrice, allocator);
    }

    if (m_praiseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PraiseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_praiseCnt, allocator);
    }

    if (m_commentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commentCnt, allocator);
    }

    if (m_shareCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareCnt, allocator);
    }

    if (m_collectCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectCnt, allocator);
    }

    if (m_orderCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderCnt, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


string GoodsInfo::GetGoodsId() const
{
    return m_goodsId;
}

void GoodsInfo::SetGoodsId(const string& _goodsId)
{
    m_goodsId = _goodsId;
    m_goodsIdHasBeenSet = true;
}

bool GoodsInfo::GoodsIdHasBeenSet() const
{
    return m_goodsIdHasBeenSet;
}

string GoodsInfo::GetGoodsType() const
{
    return m_goodsType;
}

void GoodsInfo::SetGoodsType(const string& _goodsType)
{
    m_goodsType = _goodsType;
    m_goodsTypeHasBeenSet = true;
}

bool GoodsInfo::GoodsTypeHasBeenSet() const
{
    return m_goodsTypeHasBeenSet;
}

uint64_t GoodsInfo::GetStatus() const
{
    return m_status;
}

void GoodsInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GoodsInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t GoodsInfo::GetPublishTimestamp() const
{
    return m_publishTimestamp;
}

void GoodsInfo::SetPublishTimestamp(const int64_t& _publishTimestamp)
{
    m_publishTimestamp = _publishTimestamp;
    m_publishTimestampHasBeenSet = true;
}

bool GoodsInfo::PublishTimestampHasBeenSet() const
{
    return m_publishTimestampHasBeenSet;
}

int64_t GoodsInfo::GetExpireTimestamp() const
{
    return m_expireTimestamp;
}

void GoodsInfo::SetExpireTimestamp(const int64_t& _expireTimestamp)
{
    m_expireTimestamp = _expireTimestamp;
    m_expireTimestampHasBeenSet = true;
}

bool GoodsInfo::ExpireTimestampHasBeenSet() const
{
    return m_expireTimestampHasBeenSet;
}

string GoodsInfo::GetSpuId() const
{
    return m_spuId;
}

void GoodsInfo::SetSpuId(const string& _spuId)
{
    m_spuId = _spuId;
    m_spuIdHasBeenSet = true;
}

bool GoodsInfo::SpuIdHasBeenSet() const
{
    return m_spuIdHasBeenSet;
}

int64_t GoodsInfo::GetCategoryLevel() const
{
    return m_categoryLevel;
}

void GoodsInfo::SetCategoryLevel(const int64_t& _categoryLevel)
{
    m_categoryLevel = _categoryLevel;
    m_categoryLevelHasBeenSet = true;
}

bool GoodsInfo::CategoryLevelHasBeenSet() const
{
    return m_categoryLevelHasBeenSet;
}

string GoodsInfo::GetCategoryPath() const
{
    return m_categoryPath;
}

void GoodsInfo::SetCategoryPath(const string& _categoryPath)
{
    m_categoryPath = _categoryPath;
    m_categoryPathHasBeenSet = true;
}

bool GoodsInfo::CategoryPathHasBeenSet() const
{
    return m_categoryPathHasBeenSet;
}

string GoodsInfo::GetTitle() const
{
    return m_title;
}

void GoodsInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool GoodsInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string GoodsInfo::GetTags() const
{
    return m_tags;
}

void GoodsInfo::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool GoodsInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string GoodsInfo::GetBrand() const
{
    return m_brand;
}

void GoodsInfo::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool GoodsInfo::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string GoodsInfo::GetShopId() const
{
    return m_shopId;
}

void GoodsInfo::SetShopId(const string& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool GoodsInfo::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

double GoodsInfo::GetOrgPrice() const
{
    return m_orgPrice;
}

void GoodsInfo::SetOrgPrice(const double& _orgPrice)
{
    m_orgPrice = _orgPrice;
    m_orgPriceHasBeenSet = true;
}

bool GoodsInfo::OrgPriceHasBeenSet() const
{
    return m_orgPriceHasBeenSet;
}

double GoodsInfo::GetCurPrice() const
{
    return m_curPrice;
}

void GoodsInfo::SetCurPrice(const double& _curPrice)
{
    m_curPrice = _curPrice;
    m_curPriceHasBeenSet = true;
}

bool GoodsInfo::CurPriceHasBeenSet() const
{
    return m_curPriceHasBeenSet;
}

string GoodsInfo::GetSourceId() const
{
    return m_sourceId;
}

void GoodsInfo::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool GoodsInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string GoodsInfo::GetContent() const
{
    return m_content;
}

void GoodsInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool GoodsInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string GoodsInfo::GetContentUrl() const
{
    return m_contentUrl;
}

void GoodsInfo::SetContentUrl(const string& _contentUrl)
{
    m_contentUrl = _contentUrl;
    m_contentUrlHasBeenSet = true;
}

bool GoodsInfo::ContentUrlHasBeenSet() const
{
    return m_contentUrlHasBeenSet;
}

vector<string> GoodsInfo::GetPicUrlList() const
{
    return m_picUrlList;
}

void GoodsInfo::SetPicUrlList(const vector<string>& _picUrlList)
{
    m_picUrlList = _picUrlList;
    m_picUrlListHasBeenSet = true;
}

bool GoodsInfo::PicUrlListHasBeenSet() const
{
    return m_picUrlListHasBeenSet;
}

string GoodsInfo::GetCountry() const
{
    return m_country;
}

void GoodsInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool GoodsInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string GoodsInfo::GetProvince() const
{
    return m_province;
}

void GoodsInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool GoodsInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string GoodsInfo::GetCity() const
{
    return m_city;
}

void GoodsInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool GoodsInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t GoodsInfo::GetFreeShipping() const
{
    return m_freeShipping;
}

void GoodsInfo::SetFreeShipping(const int64_t& _freeShipping)
{
    m_freeShipping = _freeShipping;
    m_freeShippingHasBeenSet = true;
}

bool GoodsInfo::FreeShippingHasBeenSet() const
{
    return m_freeShippingHasBeenSet;
}

double GoodsInfo::GetShippingPrice() const
{
    return m_shippingPrice;
}

void GoodsInfo::SetShippingPrice(const double& _shippingPrice)
{
    m_shippingPrice = _shippingPrice;
    m_shippingPriceHasBeenSet = true;
}

bool GoodsInfo::ShippingPriceHasBeenSet() const
{
    return m_shippingPriceHasBeenSet;
}

int64_t GoodsInfo::GetPraiseCnt() const
{
    return m_praiseCnt;
}

void GoodsInfo::SetPraiseCnt(const int64_t& _praiseCnt)
{
    m_praiseCnt = _praiseCnt;
    m_praiseCntHasBeenSet = true;
}

bool GoodsInfo::PraiseCntHasBeenSet() const
{
    return m_praiseCntHasBeenSet;
}

int64_t GoodsInfo::GetCommentCnt() const
{
    return m_commentCnt;
}

void GoodsInfo::SetCommentCnt(const int64_t& _commentCnt)
{
    m_commentCnt = _commentCnt;
    m_commentCntHasBeenSet = true;
}

bool GoodsInfo::CommentCntHasBeenSet() const
{
    return m_commentCntHasBeenSet;
}

int64_t GoodsInfo::GetShareCnt() const
{
    return m_shareCnt;
}

void GoodsInfo::SetShareCnt(const int64_t& _shareCnt)
{
    m_shareCnt = _shareCnt;
    m_shareCntHasBeenSet = true;
}

bool GoodsInfo::ShareCntHasBeenSet() const
{
    return m_shareCntHasBeenSet;
}

int64_t GoodsInfo::GetCollectCnt() const
{
    return m_collectCnt;
}

void GoodsInfo::SetCollectCnt(const int64_t& _collectCnt)
{
    m_collectCnt = _collectCnt;
    m_collectCntHasBeenSet = true;
}

bool GoodsInfo::CollectCntHasBeenSet() const
{
    return m_collectCntHasBeenSet;
}

int64_t GoodsInfo::GetOrderCnt() const
{
    return m_orderCnt;
}

void GoodsInfo::SetOrderCnt(const int64_t& _orderCnt)
{
    m_orderCnt = _orderCnt;
    m_orderCntHasBeenSet = true;
}

bool GoodsInfo::OrderCntHasBeenSet() const
{
    return m_orderCntHasBeenSet;
}

double GoodsInfo::GetScore() const
{
    return m_score;
}

void GoodsInfo::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool GoodsInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string GoodsInfo::GetExtension() const
{
    return m_extension;
}

void GoodsInfo::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool GoodsInfo::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

