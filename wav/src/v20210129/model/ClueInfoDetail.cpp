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

#include <tencentcloud/wav/v20210129/model/ClueInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ClueInfoDetail::ClueInfoDetail() :
    m_clueIdHasBeenSet(false),
    m_dealerIdHasBeenSet(false),
    m_enquireTimeHasBeenSet(false),
    m_unionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_seriesCodeHasBeenSet(false),
    m_modelCodeHasBeenSet(false),
    m_provinceCodeHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_salesPhoneHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_leadUserTypeHasBeenSet(false),
    m_leadTypeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_sourceChannelNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_leadStatusHasBeenSet(false),
    m_levelCodeHasBeenSet(false),
    m_importAtTimeHasBeenSet(false),
    m_distributeTimeHasBeenSet(false),
    m_createAtTimeHasBeenSet(false),
    m_wxIdHasBeenSet(false),
    m_brandCodeHasBeenSet(false),
    m_buildTimeHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_arrivalTimeHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_followTimeHasBeenSet(false),
    m_nextFollowTimeHasBeenSet(false),
    m_orgIdHasBeenSet(false),
    m_orgNameHasBeenSet(false),
    m_introducerHasBeenSet(false),
    m_introducerPhoneHasBeenSet(false),
    m_isBindWxHasBeenSet(false),
    m_isMergeHasBeenSet(false),
    m_isInvalidHasBeenSet(false),
    m_invalidTypeHasBeenSet(false),
    m_invalidTypeNameHasBeenSet(false),
    m_invalidRemarkHasBeenSet(false),
    m_invalidTimeHasBeenSet(false),
    m_dealerNameHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_corpShopIdHasBeenSet(false)
{
}

CoreInternalOutcome ClueInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClueId") && !value["ClueId"].IsNull())
    {
        if (!value["ClueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ClueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clueId = string(value["ClueId"].GetString());
        m_clueIdHasBeenSet = true;
    }

    if (value.HasMember("DealerId") && !value["DealerId"].IsNull())
    {
        if (!value["DealerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.DealerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerId = string(value["DealerId"].GetString());
        m_dealerIdHasBeenSet = true;
    }

    if (value.HasMember("EnquireTime") && !value["EnquireTime"].IsNull())
    {
        if (!value["EnquireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.EnquireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enquireTime = value["EnquireTime"].GetUint64();
        m_enquireTimeHasBeenSet = true;
    }

    if (value.HasMember("UnionId") && !value["UnionId"].IsNull())
    {
        if (!value["UnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.UnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionId = string(value["UnionId"].GetString());
        m_unionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("SeriesCode") && !value["SeriesCode"].IsNull())
    {
        if (!value["SeriesCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SeriesCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seriesCode = string(value["SeriesCode"].GetString());
        m_seriesCodeHasBeenSet = true;
    }

    if (value.HasMember("ModelCode") && !value["ModelCode"].IsNull())
    {
        if (!value["ModelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ModelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelCode = string(value["ModelCode"].GetString());
        m_modelCodeHasBeenSet = true;
    }

    if (value.HasMember("ProvinceCode") && !value["ProvinceCode"].IsNull())
    {
        if (!value["ProvinceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ProvinceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceCode = string(value["ProvinceCode"].GetString());
        m_provinceCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCode") && !value["CityCode"].IsNull())
    {
        if (!value["CityCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.CityCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = string(value["CityCode"].GetString());
        m_cityCodeHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("SalesPhone") && !value["SalesPhone"].IsNull())
    {
        if (!value["SalesPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SalesPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesPhone = string(value["SalesPhone"].GetString());
        m_salesPhoneHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("LeadUserType") && !value["LeadUserType"].IsNull())
    {
        if (!value["LeadUserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.LeadUserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadUserType = value["LeadUserType"].GetInt64();
        m_leadUserTypeHasBeenSet = true;
    }

    if (value.HasMember("LeadType") && !value["LeadType"].IsNull())
    {
        if (!value["LeadType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.LeadType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadType = value["LeadType"].GetInt64();
        m_leadTypeHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("SourceChannelName") && !value["SourceChannelName"].IsNull())
    {
        if (!value["SourceChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SourceChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceChannelName = string(value["SourceChannelName"].GetString());
        m_sourceChannelNameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LeadStatus") && !value["LeadStatus"].IsNull())
    {
        if (!value["LeadStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.LeadStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leadStatus = value["LeadStatus"].GetInt64();
        m_leadStatusHasBeenSet = true;
    }

    if (value.HasMember("LevelCode") && !value["LevelCode"].IsNull())
    {
        if (!value["LevelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.LevelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelCode = string(value["LevelCode"].GetString());
        m_levelCodeHasBeenSet = true;
    }

    if (value.HasMember("ImportAtTime") && !value["ImportAtTime"].IsNull())
    {
        if (!value["ImportAtTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ImportAtTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_importAtTime = value["ImportAtTime"].GetUint64();
        m_importAtTimeHasBeenSet = true;
    }

    if (value.HasMember("DistributeTime") && !value["DistributeTime"].IsNull())
    {
        if (!value["DistributeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.DistributeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_distributeTime = value["DistributeTime"].GetUint64();
        m_distributeTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateAtTime") && !value["CreateAtTime"].IsNull())
    {
        if (!value["CreateAtTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.CreateAtTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createAtTime = value["CreateAtTime"].GetUint64();
        m_createAtTimeHasBeenSet = true;
    }

    if (value.HasMember("WxId") && !value["WxId"].IsNull())
    {
        if (!value["WxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.WxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxId = string(value["WxId"].GetString());
        m_wxIdHasBeenSet = true;
    }

    if (value.HasMember("BrandCode") && !value["BrandCode"].IsNull())
    {
        if (!value["BrandCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.BrandCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandCode = string(value["BrandCode"].GetString());
        m_brandCodeHasBeenSet = true;
    }

    if (value.HasMember("BuildTime") && !value["BuildTime"].IsNull())
    {
        if (!value["BuildTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.BuildTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildTime = value["BuildTime"].GetUint64();
        m_buildTimeHasBeenSet = true;
    }

    if (value.HasMember("OrderTime") && !value["OrderTime"].IsNull())
    {
        if (!value["OrderTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.OrderTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = value["OrderTime"].GetUint64();
        m_orderTimeHasBeenSet = true;
    }

    if (value.HasMember("ArrivalTime") && !value["ArrivalTime"].IsNull())
    {
        if (!value["ArrivalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ArrivalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_arrivalTime = value["ArrivalTime"].GetUint64();
        m_arrivalTimeHasBeenSet = true;
    }

    if (value.HasMember("DeliveryTime") && !value["DeliveryTime"].IsNull())
    {
        if (!value["DeliveryTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.DeliveryTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryTime = value["DeliveryTime"].GetUint64();
        m_deliveryTimeHasBeenSet = true;
    }

    if (value.HasMember("FollowTime") && !value["FollowTime"].IsNull())
    {
        if (!value["FollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.FollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_followTime = value["FollowTime"].GetUint64();
        m_followTimeHasBeenSet = true;
    }

    if (value.HasMember("NextFollowTime") && !value["NextFollowTime"].IsNull())
    {
        if (!value["NextFollowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.NextFollowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextFollowTime = value["NextFollowTime"].GetUint64();
        m_nextFollowTimeHasBeenSet = true;
    }

    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.OrgId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = value["OrgId"].GetUint64();
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("OrgName") && !value["OrgName"].IsNull())
    {
        if (!value["OrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.OrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgName = string(value["OrgName"].GetString());
        m_orgNameHasBeenSet = true;
    }

    if (value.HasMember("Introducer") && !value["Introducer"].IsNull())
    {
        if (!value["Introducer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Introducer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introducer = string(value["Introducer"].GetString());
        m_introducerHasBeenSet = true;
    }

    if (value.HasMember("IntroducerPhone") && !value["IntroducerPhone"].IsNull())
    {
        if (!value["IntroducerPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.IntroducerPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introducerPhone = string(value["IntroducerPhone"].GetString());
        m_introducerPhoneHasBeenSet = true;
    }

    if (value.HasMember("IsBindWx") && !value["IsBindWx"].IsNull())
    {
        if (!value["IsBindWx"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.IsBindWx` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBindWx = value["IsBindWx"].GetInt64();
        m_isBindWxHasBeenSet = true;
    }

    if (value.HasMember("IsMerge") && !value["IsMerge"].IsNull())
    {
        if (!value["IsMerge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.IsMerge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMerge = value["IsMerge"].GetInt64();
        m_isMergeHasBeenSet = true;
    }

    if (value.HasMember("IsInvalid") && !value["IsInvalid"].IsNull())
    {
        if (!value["IsInvalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.IsInvalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInvalid = value["IsInvalid"].GetInt64();
        m_isInvalidHasBeenSet = true;
    }

    if (value.HasMember("InvalidType") && !value["InvalidType"].IsNull())
    {
        if (!value["InvalidType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.InvalidType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invalidType = string(value["InvalidType"].GetString());
        m_invalidTypeHasBeenSet = true;
    }

    if (value.HasMember("InvalidTypeName") && !value["InvalidTypeName"].IsNull())
    {
        if (!value["InvalidTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.InvalidTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invalidTypeName = string(value["InvalidTypeName"].GetString());
        m_invalidTypeNameHasBeenSet = true;
    }

    if (value.HasMember("InvalidRemark") && !value["InvalidRemark"].IsNull())
    {
        if (!value["InvalidRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.InvalidRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invalidRemark = string(value["InvalidRemark"].GetString());
        m_invalidRemarkHasBeenSet = true;
    }

    if (value.HasMember("InvalidTime") && !value["InvalidTime"].IsNull())
    {
        if (!value["InvalidTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.InvalidTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidTime = value["InvalidTime"].GetUint64();
        m_invalidTimeHasBeenSet = true;
    }

    if (value.HasMember("DealerName") && !value["DealerName"].IsNull())
    {
        if (!value["DealerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.DealerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerName = string(value["DealerName"].GetString());
        m_dealerNameHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("CorpShopId") && !value["CorpShopId"].IsNull())
    {
        if (!value["CorpShopId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.CorpShopId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpShopId = string(value["CorpShopId"].GetString());
        m_corpShopIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClueInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clueId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerId.c_str(), allocator).Move(), allocator);
    }

    if (m_enquireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnquireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enquireTime, allocator);
    }

    if (m_unionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seriesCode.c_str(), allocator).Move(), allocator);
    }

    if (m_modelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityCode.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_leadUserTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadUserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadUserType, allocator);
    }

    if (m_leadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadType, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceChannelName.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_leadStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadStatus, allocator);
    }

    if (m_levelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_importAtTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportAtTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importAtTime, allocator);
    }

    if (m_distributeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_distributeTime, allocator);
    }

    if (m_createAtTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAtTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAtTime, allocator);
    }

    if (m_wxIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wxId.c_str(), allocator).Move(), allocator);
    }

    if (m_brandCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandCode.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildTime, allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderTime, allocator);
    }

    if (m_arrivalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrivalTime, allocator);
    }

    if (m_deliveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryTime, allocator);
    }

    if (m_followTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followTime, allocator);
    }

    if (m_nextFollowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFollowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextFollowTime, allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgId, allocator);
    }

    if (m_orgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgName.c_str(), allocator).Move(), allocator);
    }

    if (m_introducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Introducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introducer.c_str(), allocator).Move(), allocator);
    }

    if (m_introducerPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntroducerPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introducerPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_isBindWxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBindWx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBindWx, allocator);
    }

    if (m_isMergeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMerge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMerge, allocator);
    }

    if (m_isInvalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInvalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInvalid, allocator);
    }

    if (m_invalidTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invalidType.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invalidTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invalidRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidTime, allocator);
    }

    if (m_dealerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerName.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_corpShopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpShopId.c_str(), allocator).Move(), allocator);
    }

}


string ClueInfoDetail::GetClueId() const
{
    return m_clueId;
}

void ClueInfoDetail::SetClueId(const string& _clueId)
{
    m_clueId = _clueId;
    m_clueIdHasBeenSet = true;
}

bool ClueInfoDetail::ClueIdHasBeenSet() const
{
    return m_clueIdHasBeenSet;
}

string ClueInfoDetail::GetDealerId() const
{
    return m_dealerId;
}

void ClueInfoDetail::SetDealerId(const string& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool ClueInfoDetail::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

uint64_t ClueInfoDetail::GetEnquireTime() const
{
    return m_enquireTime;
}

void ClueInfoDetail::SetEnquireTime(const uint64_t& _enquireTime)
{
    m_enquireTime = _enquireTime;
    m_enquireTimeHasBeenSet = true;
}

bool ClueInfoDetail::EnquireTimeHasBeenSet() const
{
    return m_enquireTimeHasBeenSet;
}

string ClueInfoDetail::GetUnionId() const
{
    return m_unionId;
}

void ClueInfoDetail::SetUnionId(const string& _unionId)
{
    m_unionId = _unionId;
    m_unionIdHasBeenSet = true;
}

bool ClueInfoDetail::UnionIdHasBeenSet() const
{
    return m_unionIdHasBeenSet;
}

string ClueInfoDetail::GetName() const
{
    return m_name;
}

void ClueInfoDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClueInfoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClueInfoDetail::GetPhone() const
{
    return m_phone;
}

void ClueInfoDetail::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ClueInfoDetail::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ClueInfoDetail::GetSeriesCode() const
{
    return m_seriesCode;
}

void ClueInfoDetail::SetSeriesCode(const string& _seriesCode)
{
    m_seriesCode = _seriesCode;
    m_seriesCodeHasBeenSet = true;
}

bool ClueInfoDetail::SeriesCodeHasBeenSet() const
{
    return m_seriesCodeHasBeenSet;
}

string ClueInfoDetail::GetModelCode() const
{
    return m_modelCode;
}

void ClueInfoDetail::SetModelCode(const string& _modelCode)
{
    m_modelCode = _modelCode;
    m_modelCodeHasBeenSet = true;
}

bool ClueInfoDetail::ModelCodeHasBeenSet() const
{
    return m_modelCodeHasBeenSet;
}

string ClueInfoDetail::GetProvinceCode() const
{
    return m_provinceCode;
}

void ClueInfoDetail::SetProvinceCode(const string& _provinceCode)
{
    m_provinceCode = _provinceCode;
    m_provinceCodeHasBeenSet = true;
}

bool ClueInfoDetail::ProvinceCodeHasBeenSet() const
{
    return m_provinceCodeHasBeenSet;
}

string ClueInfoDetail::GetCityCode() const
{
    return m_cityCode;
}

void ClueInfoDetail::SetCityCode(const string& _cityCode)
{
    m_cityCode = _cityCode;
    m_cityCodeHasBeenSet = true;
}

bool ClueInfoDetail::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

string ClueInfoDetail::GetSalesName() const
{
    return m_salesName;
}

void ClueInfoDetail::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool ClueInfoDetail::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string ClueInfoDetail::GetSalesPhone() const
{
    return m_salesPhone;
}

void ClueInfoDetail::SetSalesPhone(const string& _salesPhone)
{
    m_salesPhone = _salesPhone;
    m_salesPhoneHasBeenSet = true;
}

bool ClueInfoDetail::SalesPhoneHasBeenSet() const
{
    return m_salesPhoneHasBeenSet;
}

string ClueInfoDetail::GetRemark() const
{
    return m_remark;
}

void ClueInfoDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ClueInfoDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ClueInfoDetail::GetTagList() const
{
    return m_tagList;
}

void ClueInfoDetail::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ClueInfoDetail::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string ClueInfoDetail::GetUserName() const
{
    return m_userName;
}

void ClueInfoDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ClueInfoDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t ClueInfoDetail::GetLeadUserType() const
{
    return m_leadUserType;
}

void ClueInfoDetail::SetLeadUserType(const int64_t& _leadUserType)
{
    m_leadUserType = _leadUserType;
    m_leadUserTypeHasBeenSet = true;
}

bool ClueInfoDetail::LeadUserTypeHasBeenSet() const
{
    return m_leadUserTypeHasBeenSet;
}

int64_t ClueInfoDetail::GetLeadType() const
{
    return m_leadType;
}

void ClueInfoDetail::SetLeadType(const int64_t& _leadType)
{
    m_leadType = _leadType;
    m_leadTypeHasBeenSet = true;
}

bool ClueInfoDetail::LeadTypeHasBeenSet() const
{
    return m_leadTypeHasBeenSet;
}

uint64_t ClueInfoDetail::GetChannelId() const
{
    return m_channelId;
}

void ClueInfoDetail::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ClueInfoDetail::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ClueInfoDetail::GetChannelName() const
{
    return m_channelName;
}

void ClueInfoDetail::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ClueInfoDetail::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ClueInfoDetail::GetSourceChannelName() const
{
    return m_sourceChannelName;
}

void ClueInfoDetail::SetSourceChannelName(const string& _sourceChannelName)
{
    m_sourceChannelName = _sourceChannelName;
    m_sourceChannelNameHasBeenSet = true;
}

bool ClueInfoDetail::SourceChannelNameHasBeenSet() const
{
    return m_sourceChannelNameHasBeenSet;
}

int64_t ClueInfoDetail::GetGender() const
{
    return m_gender;
}

void ClueInfoDetail::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool ClueInfoDetail::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string ClueInfoDetail::GetCreateTime() const
{
    return m_createTime;
}

void ClueInfoDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClueInfoDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClueInfoDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ClueInfoDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClueInfoDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ClueInfoDetail::GetLeadStatus() const
{
    return m_leadStatus;
}

void ClueInfoDetail::SetLeadStatus(const int64_t& _leadStatus)
{
    m_leadStatus = _leadStatus;
    m_leadStatusHasBeenSet = true;
}

bool ClueInfoDetail::LeadStatusHasBeenSet() const
{
    return m_leadStatusHasBeenSet;
}

string ClueInfoDetail::GetLevelCode() const
{
    return m_levelCode;
}

void ClueInfoDetail::SetLevelCode(const string& _levelCode)
{
    m_levelCode = _levelCode;
    m_levelCodeHasBeenSet = true;
}

bool ClueInfoDetail::LevelCodeHasBeenSet() const
{
    return m_levelCodeHasBeenSet;
}

uint64_t ClueInfoDetail::GetImportAtTime() const
{
    return m_importAtTime;
}

void ClueInfoDetail::SetImportAtTime(const uint64_t& _importAtTime)
{
    m_importAtTime = _importAtTime;
    m_importAtTimeHasBeenSet = true;
}

bool ClueInfoDetail::ImportAtTimeHasBeenSet() const
{
    return m_importAtTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetDistributeTime() const
{
    return m_distributeTime;
}

void ClueInfoDetail::SetDistributeTime(const uint64_t& _distributeTime)
{
    m_distributeTime = _distributeTime;
    m_distributeTimeHasBeenSet = true;
}

bool ClueInfoDetail::DistributeTimeHasBeenSet() const
{
    return m_distributeTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetCreateAtTime() const
{
    return m_createAtTime;
}

void ClueInfoDetail::SetCreateAtTime(const uint64_t& _createAtTime)
{
    m_createAtTime = _createAtTime;
    m_createAtTimeHasBeenSet = true;
}

bool ClueInfoDetail::CreateAtTimeHasBeenSet() const
{
    return m_createAtTimeHasBeenSet;
}

string ClueInfoDetail::GetWxId() const
{
    return m_wxId;
}

void ClueInfoDetail::SetWxId(const string& _wxId)
{
    m_wxId = _wxId;
    m_wxIdHasBeenSet = true;
}

bool ClueInfoDetail::WxIdHasBeenSet() const
{
    return m_wxIdHasBeenSet;
}

string ClueInfoDetail::GetBrandCode() const
{
    return m_brandCode;
}

void ClueInfoDetail::SetBrandCode(const string& _brandCode)
{
    m_brandCode = _brandCode;
    m_brandCodeHasBeenSet = true;
}

bool ClueInfoDetail::BrandCodeHasBeenSet() const
{
    return m_brandCodeHasBeenSet;
}

uint64_t ClueInfoDetail::GetBuildTime() const
{
    return m_buildTime;
}

void ClueInfoDetail::SetBuildTime(const uint64_t& _buildTime)
{
    m_buildTime = _buildTime;
    m_buildTimeHasBeenSet = true;
}

bool ClueInfoDetail::BuildTimeHasBeenSet() const
{
    return m_buildTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetOrderTime() const
{
    return m_orderTime;
}

void ClueInfoDetail::SetOrderTime(const uint64_t& _orderTime)
{
    m_orderTime = _orderTime;
    m_orderTimeHasBeenSet = true;
}

bool ClueInfoDetail::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetArrivalTime() const
{
    return m_arrivalTime;
}

void ClueInfoDetail::SetArrivalTime(const uint64_t& _arrivalTime)
{
    m_arrivalTime = _arrivalTime;
    m_arrivalTimeHasBeenSet = true;
}

bool ClueInfoDetail::ArrivalTimeHasBeenSet() const
{
    return m_arrivalTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetDeliveryTime() const
{
    return m_deliveryTime;
}

void ClueInfoDetail::SetDeliveryTime(const uint64_t& _deliveryTime)
{
    m_deliveryTime = _deliveryTime;
    m_deliveryTimeHasBeenSet = true;
}

bool ClueInfoDetail::DeliveryTimeHasBeenSet() const
{
    return m_deliveryTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetFollowTime() const
{
    return m_followTime;
}

void ClueInfoDetail::SetFollowTime(const uint64_t& _followTime)
{
    m_followTime = _followTime;
    m_followTimeHasBeenSet = true;
}

bool ClueInfoDetail::FollowTimeHasBeenSet() const
{
    return m_followTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetNextFollowTime() const
{
    return m_nextFollowTime;
}

void ClueInfoDetail::SetNextFollowTime(const uint64_t& _nextFollowTime)
{
    m_nextFollowTime = _nextFollowTime;
    m_nextFollowTimeHasBeenSet = true;
}

bool ClueInfoDetail::NextFollowTimeHasBeenSet() const
{
    return m_nextFollowTimeHasBeenSet;
}

uint64_t ClueInfoDetail::GetOrgId() const
{
    return m_orgId;
}

void ClueInfoDetail::SetOrgId(const uint64_t& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool ClueInfoDetail::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

string ClueInfoDetail::GetOrgName() const
{
    return m_orgName;
}

void ClueInfoDetail::SetOrgName(const string& _orgName)
{
    m_orgName = _orgName;
    m_orgNameHasBeenSet = true;
}

bool ClueInfoDetail::OrgNameHasBeenSet() const
{
    return m_orgNameHasBeenSet;
}

string ClueInfoDetail::GetIntroducer() const
{
    return m_introducer;
}

void ClueInfoDetail::SetIntroducer(const string& _introducer)
{
    m_introducer = _introducer;
    m_introducerHasBeenSet = true;
}

bool ClueInfoDetail::IntroducerHasBeenSet() const
{
    return m_introducerHasBeenSet;
}

string ClueInfoDetail::GetIntroducerPhone() const
{
    return m_introducerPhone;
}

void ClueInfoDetail::SetIntroducerPhone(const string& _introducerPhone)
{
    m_introducerPhone = _introducerPhone;
    m_introducerPhoneHasBeenSet = true;
}

bool ClueInfoDetail::IntroducerPhoneHasBeenSet() const
{
    return m_introducerPhoneHasBeenSet;
}

int64_t ClueInfoDetail::GetIsBindWx() const
{
    return m_isBindWx;
}

void ClueInfoDetail::SetIsBindWx(const int64_t& _isBindWx)
{
    m_isBindWx = _isBindWx;
    m_isBindWxHasBeenSet = true;
}

bool ClueInfoDetail::IsBindWxHasBeenSet() const
{
    return m_isBindWxHasBeenSet;
}

int64_t ClueInfoDetail::GetIsMerge() const
{
    return m_isMerge;
}

void ClueInfoDetail::SetIsMerge(const int64_t& _isMerge)
{
    m_isMerge = _isMerge;
    m_isMergeHasBeenSet = true;
}

bool ClueInfoDetail::IsMergeHasBeenSet() const
{
    return m_isMergeHasBeenSet;
}

int64_t ClueInfoDetail::GetIsInvalid() const
{
    return m_isInvalid;
}

void ClueInfoDetail::SetIsInvalid(const int64_t& _isInvalid)
{
    m_isInvalid = _isInvalid;
    m_isInvalidHasBeenSet = true;
}

bool ClueInfoDetail::IsInvalidHasBeenSet() const
{
    return m_isInvalidHasBeenSet;
}

string ClueInfoDetail::GetInvalidType() const
{
    return m_invalidType;
}

void ClueInfoDetail::SetInvalidType(const string& _invalidType)
{
    m_invalidType = _invalidType;
    m_invalidTypeHasBeenSet = true;
}

bool ClueInfoDetail::InvalidTypeHasBeenSet() const
{
    return m_invalidTypeHasBeenSet;
}

string ClueInfoDetail::GetInvalidTypeName() const
{
    return m_invalidTypeName;
}

void ClueInfoDetail::SetInvalidTypeName(const string& _invalidTypeName)
{
    m_invalidTypeName = _invalidTypeName;
    m_invalidTypeNameHasBeenSet = true;
}

bool ClueInfoDetail::InvalidTypeNameHasBeenSet() const
{
    return m_invalidTypeNameHasBeenSet;
}

string ClueInfoDetail::GetInvalidRemark() const
{
    return m_invalidRemark;
}

void ClueInfoDetail::SetInvalidRemark(const string& _invalidRemark)
{
    m_invalidRemark = _invalidRemark;
    m_invalidRemarkHasBeenSet = true;
}

bool ClueInfoDetail::InvalidRemarkHasBeenSet() const
{
    return m_invalidRemarkHasBeenSet;
}

uint64_t ClueInfoDetail::GetInvalidTime() const
{
    return m_invalidTime;
}

void ClueInfoDetail::SetInvalidTime(const uint64_t& _invalidTime)
{
    m_invalidTime = _invalidTime;
    m_invalidTimeHasBeenSet = true;
}

bool ClueInfoDetail::InvalidTimeHasBeenSet() const
{
    return m_invalidTimeHasBeenSet;
}

string ClueInfoDetail::GetDealerName() const
{
    return m_dealerName;
}

void ClueInfoDetail::SetDealerName(const string& _dealerName)
{
    m_dealerName = _dealerName;
    m_dealerNameHasBeenSet = true;
}

bool ClueInfoDetail::DealerNameHasBeenSet() const
{
    return m_dealerNameHasBeenSet;
}

uint64_t ClueInfoDetail::GetShopId() const
{
    return m_shopId;
}

void ClueInfoDetail::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool ClueInfoDetail::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string ClueInfoDetail::GetShopName() const
{
    return m_shopName;
}

void ClueInfoDetail::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool ClueInfoDetail::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string ClueInfoDetail::GetPosition() const
{
    return m_position;
}

void ClueInfoDetail::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ClueInfoDetail::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string ClueInfoDetail::GetCorpShopId() const
{
    return m_corpShopId;
}

void ClueInfoDetail::SetCorpShopId(const string& _corpShopId)
{
    m_corpShopId = _corpShopId;
    m_corpShopIdHasBeenSet = true;
}

bool ClueInfoDetail::CorpShopIdHasBeenSet() const
{
    return m_corpShopIdHasBeenSet;
}

