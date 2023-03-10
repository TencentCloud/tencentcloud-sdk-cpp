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

#include <tencentcloud/irp/v20220805/model/GoodsBehaviorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

GoodsBehaviorInfo::GoodsBehaviorInfo() :
    m_userIdHasBeenSet(false),
    m_goodsIdHasBeenSet(false),
    m_behaviorTypeHasBeenSet(false),
    m_behaviorValueHasBeenSet(false),
    m_behaviorTimestampHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_goodsTraceIdHasBeenSet(false),
    m_referrerGoodsIdHasBeenSet(false),
    m_orderGoodsCntHasBeenSet(false),
    m_orderAmountHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_userPortraitInfoHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome GoodsBehaviorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsId") && !value["GoodsId"].IsNull())
    {
        if (!value["GoodsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.GoodsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsId = string(value["GoodsId"].GetString());
        m_goodsIdHasBeenSet = true;
    }

    if (value.HasMember("BehaviorType") && !value["BehaviorType"].IsNull())
    {
        if (!value["BehaviorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.BehaviorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorType = string(value["BehaviorType"].GetString());
        m_behaviorTypeHasBeenSet = true;
    }

    if (value.HasMember("BehaviorValue") && !value["BehaviorValue"].IsNull())
    {
        if (!value["BehaviorValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.BehaviorValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorValue = string(value["BehaviorValue"].GetString());
        m_behaviorValueHasBeenSet = true;
    }

    if (value.HasMember("BehaviorTimestamp") && !value["BehaviorTimestamp"].IsNull())
    {
        if (!value["BehaviorTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.BehaviorTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorTimestamp = value["BehaviorTimestamp"].GetInt64();
        m_behaviorTimestampHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.Page` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_page = string(value["Page"].GetString());
        m_pageHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("GoodsTraceId") && !value["GoodsTraceId"].IsNull())
    {
        if (!value["GoodsTraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.GoodsTraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsTraceId = string(value["GoodsTraceId"].GetString());
        m_goodsTraceIdHasBeenSet = true;
    }

    if (value.HasMember("ReferrerGoodsId") && !value["ReferrerGoodsId"].IsNull())
    {
        if (!value["ReferrerGoodsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.ReferrerGoodsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referrerGoodsId = string(value["ReferrerGoodsId"].GetString());
        m_referrerGoodsIdHasBeenSet = true;
    }

    if (value.HasMember("OrderGoodsCnt") && !value["OrderGoodsCnt"].IsNull())
    {
        if (!value["OrderGoodsCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.OrderGoodsCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderGoodsCnt = value["OrderGoodsCnt"].GetInt64();
        m_orderGoodsCntHasBeenSet = true;
    }

    if (value.HasMember("OrderAmount") && !value["OrderAmount"].IsNull())
    {
        if (!value["OrderAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.OrderAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_orderAmount = value["OrderAmount"].GetDouble();
        m_orderAmountHasBeenSet = true;
    }

    if (value.HasMember("UserIdList") && !value["UserIdList"].IsNull())
    {
        if (!value["UserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.UserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StrUserIdInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userIdList.push_back(item);
        }
        m_userIdListHasBeenSet = true;
    }

    if (value.HasMember("UserPortraitInfo") && !value["UserPortraitInfo"].IsNull())
    {
        if (!value["UserPortraitInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.UserPortraitInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userPortraitInfo.Deserialize(value["UserPortraitInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userPortraitInfoHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsBehaviorInfo.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsBehaviorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsId.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behaviorType.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behaviorValue.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_behaviorTimestamp, allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_page.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsTraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_referrerGoodsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferrerGoodsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referrerGoodsId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderGoodsCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderGoodsCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderGoodsCnt, allocator);
    }

    if (m_orderAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderAmount, allocator);
    }

    if (m_userIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userIdList.begin(); itr != m_userIdList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userPortraitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPortraitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userPortraitInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


string GoodsBehaviorInfo::GetUserId() const
{
    return m_userId;
}

void GoodsBehaviorInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GoodsBehaviorInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GoodsBehaviorInfo::GetGoodsId() const
{
    return m_goodsId;
}

void GoodsBehaviorInfo::SetGoodsId(const string& _goodsId)
{
    m_goodsId = _goodsId;
    m_goodsIdHasBeenSet = true;
}

bool GoodsBehaviorInfo::GoodsIdHasBeenSet() const
{
    return m_goodsIdHasBeenSet;
}

string GoodsBehaviorInfo::GetBehaviorType() const
{
    return m_behaviorType;
}

void GoodsBehaviorInfo::SetBehaviorType(const string& _behaviorType)
{
    m_behaviorType = _behaviorType;
    m_behaviorTypeHasBeenSet = true;
}

bool GoodsBehaviorInfo::BehaviorTypeHasBeenSet() const
{
    return m_behaviorTypeHasBeenSet;
}

string GoodsBehaviorInfo::GetBehaviorValue() const
{
    return m_behaviorValue;
}

void GoodsBehaviorInfo::SetBehaviorValue(const string& _behaviorValue)
{
    m_behaviorValue = _behaviorValue;
    m_behaviorValueHasBeenSet = true;
}

bool GoodsBehaviorInfo::BehaviorValueHasBeenSet() const
{
    return m_behaviorValueHasBeenSet;
}

int64_t GoodsBehaviorInfo::GetBehaviorTimestamp() const
{
    return m_behaviorTimestamp;
}

void GoodsBehaviorInfo::SetBehaviorTimestamp(const int64_t& _behaviorTimestamp)
{
    m_behaviorTimestamp = _behaviorTimestamp;
    m_behaviorTimestampHasBeenSet = true;
}

bool GoodsBehaviorInfo::BehaviorTimestampHasBeenSet() const
{
    return m_behaviorTimestampHasBeenSet;
}

string GoodsBehaviorInfo::GetSceneId() const
{
    return m_sceneId;
}

void GoodsBehaviorInfo::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool GoodsBehaviorInfo::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string GoodsBehaviorInfo::GetSource() const
{
    return m_source;
}

void GoodsBehaviorInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool GoodsBehaviorInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string GoodsBehaviorInfo::GetPage() const
{
    return m_page;
}

void GoodsBehaviorInfo::SetPage(const string& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool GoodsBehaviorInfo::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

string GoodsBehaviorInfo::GetModule() const
{
    return m_module;
}

void GoodsBehaviorInfo::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GoodsBehaviorInfo::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GoodsBehaviorInfo::GetGoodsTraceId() const
{
    return m_goodsTraceId;
}

void GoodsBehaviorInfo::SetGoodsTraceId(const string& _goodsTraceId)
{
    m_goodsTraceId = _goodsTraceId;
    m_goodsTraceIdHasBeenSet = true;
}

bool GoodsBehaviorInfo::GoodsTraceIdHasBeenSet() const
{
    return m_goodsTraceIdHasBeenSet;
}

string GoodsBehaviorInfo::GetReferrerGoodsId() const
{
    return m_referrerGoodsId;
}

void GoodsBehaviorInfo::SetReferrerGoodsId(const string& _referrerGoodsId)
{
    m_referrerGoodsId = _referrerGoodsId;
    m_referrerGoodsIdHasBeenSet = true;
}

bool GoodsBehaviorInfo::ReferrerGoodsIdHasBeenSet() const
{
    return m_referrerGoodsIdHasBeenSet;
}

int64_t GoodsBehaviorInfo::GetOrderGoodsCnt() const
{
    return m_orderGoodsCnt;
}

void GoodsBehaviorInfo::SetOrderGoodsCnt(const int64_t& _orderGoodsCnt)
{
    m_orderGoodsCnt = _orderGoodsCnt;
    m_orderGoodsCntHasBeenSet = true;
}

bool GoodsBehaviorInfo::OrderGoodsCntHasBeenSet() const
{
    return m_orderGoodsCntHasBeenSet;
}

double GoodsBehaviorInfo::GetOrderAmount() const
{
    return m_orderAmount;
}

void GoodsBehaviorInfo::SetOrderAmount(const double& _orderAmount)
{
    m_orderAmount = _orderAmount;
    m_orderAmountHasBeenSet = true;
}

bool GoodsBehaviorInfo::OrderAmountHasBeenSet() const
{
    return m_orderAmountHasBeenSet;
}

vector<StrUserIdInfo> GoodsBehaviorInfo::GetUserIdList() const
{
    return m_userIdList;
}

void GoodsBehaviorInfo::SetUserIdList(const vector<StrUserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool GoodsBehaviorInfo::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

UserPortraitInfo GoodsBehaviorInfo::GetUserPortraitInfo() const
{
    return m_userPortraitInfo;
}

void GoodsBehaviorInfo::SetUserPortraitInfo(const UserPortraitInfo& _userPortraitInfo)
{
    m_userPortraitInfo = _userPortraitInfo;
    m_userPortraitInfoHasBeenSet = true;
}

bool GoodsBehaviorInfo::UserPortraitInfoHasBeenSet() const
{
    return m_userPortraitInfoHasBeenSet;
}

int64_t GoodsBehaviorInfo::GetPosition() const
{
    return m_position;
}

void GoodsBehaviorInfo::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool GoodsBehaviorInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string GoodsBehaviorInfo::GetExtension() const
{
    return m_extension;
}

void GoodsBehaviorInfo::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool GoodsBehaviorInfo::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

