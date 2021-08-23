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

#include <tencentcloud/youmall/v20180228/model/PersonCoordinate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonCoordinate::PersonCoordinate() :
    m_cADXHasBeenSet(false),
    m_cADYHasBeenSet(false),
    m_capTimeHasBeenSet(false),
    m_capPicHasBeenSet(false),
    m_mallAreaTypeHasBeenSet(false),
    m_posIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_eventHasBeenSet(false)
{
}

CoreInternalOutcome PersonCoordinate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CADX") && !value["CADX"].IsNull())
    {
        if (!value["CADX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.CADX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cADX = value["CADX"].GetDouble();
        m_cADXHasBeenSet = true;
    }

    if (value.HasMember("CADY") && !value["CADY"].IsNull())
    {
        if (!value["CADY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.CADY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cADY = value["CADY"].GetDouble();
        m_cADYHasBeenSet = true;
    }

    if (value.HasMember("CapTime") && !value["CapTime"].IsNull())
    {
        if (!value["CapTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.CapTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capTime = string(value["CapTime"].GetString());
        m_capTimeHasBeenSet = true;
    }

    if (value.HasMember("CapPic") && !value["CapPic"].IsNull())
    {
        if (!value["CapPic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.CapPic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capPic = string(value["CapPic"].GetString());
        m_capPicHasBeenSet = true;
    }

    if (value.HasMember("MallAreaType") && !value["MallAreaType"].IsNull())
    {
        if (!value["MallAreaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.MallAreaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mallAreaType = value["MallAreaType"].GetInt64();
        m_mallAreaTypeHasBeenSet = true;
    }

    if (value.HasMember("PosId") && !value["PosId"].IsNull())
    {
        if (!value["PosId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.PosId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posId = value["PosId"].GetInt64();
        m_posIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("Event") && !value["Event"].IsNull())
    {
        if (!value["Event"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonCoordinate.Event` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_event = string(value["Event"].GetString());
        m_eventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonCoordinate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cADXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CADX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cADX, allocator);
    }

    if (m_cADYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CADY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cADY, allocator);
    }

    if (m_capTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capTime.c_str(), allocator).Move(), allocator);
    }

    if (m_capPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapPic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capPic.c_str(), allocator).Move(), allocator);
    }

    if (m_mallAreaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallAreaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallAreaType, allocator);
    }

    if (m_posIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posId, allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

}


double PersonCoordinate::GetCADX() const
{
    return m_cADX;
}

void PersonCoordinate::SetCADX(const double& _cADX)
{
    m_cADX = _cADX;
    m_cADXHasBeenSet = true;
}

bool PersonCoordinate::CADXHasBeenSet() const
{
    return m_cADXHasBeenSet;
}

double PersonCoordinate::GetCADY() const
{
    return m_cADY;
}

void PersonCoordinate::SetCADY(const double& _cADY)
{
    m_cADY = _cADY;
    m_cADYHasBeenSet = true;
}

bool PersonCoordinate::CADYHasBeenSet() const
{
    return m_cADYHasBeenSet;
}

string PersonCoordinate::GetCapTime() const
{
    return m_capTime;
}

void PersonCoordinate::SetCapTime(const string& _capTime)
{
    m_capTime = _capTime;
    m_capTimeHasBeenSet = true;
}

bool PersonCoordinate::CapTimeHasBeenSet() const
{
    return m_capTimeHasBeenSet;
}

string PersonCoordinate::GetCapPic() const
{
    return m_capPic;
}

void PersonCoordinate::SetCapPic(const string& _capPic)
{
    m_capPic = _capPic;
    m_capPicHasBeenSet = true;
}

bool PersonCoordinate::CapPicHasBeenSet() const
{
    return m_capPicHasBeenSet;
}

int64_t PersonCoordinate::GetMallAreaType() const
{
    return m_mallAreaType;
}

void PersonCoordinate::SetMallAreaType(const int64_t& _mallAreaType)
{
    m_mallAreaType = _mallAreaType;
    m_mallAreaTypeHasBeenSet = true;
}

bool PersonCoordinate::MallAreaTypeHasBeenSet() const
{
    return m_mallAreaTypeHasBeenSet;
}

int64_t PersonCoordinate::GetPosId() const
{
    return m_posId;
}

void PersonCoordinate::SetPosId(const int64_t& _posId)
{
    m_posId = _posId;
    m_posIdHasBeenSet = true;
}

bool PersonCoordinate::PosIdHasBeenSet() const
{
    return m_posIdHasBeenSet;
}

int64_t PersonCoordinate::GetShopId() const
{
    return m_shopId;
}

void PersonCoordinate::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool PersonCoordinate::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string PersonCoordinate::GetEvent() const
{
    return m_event;
}

void PersonCoordinate::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool PersonCoordinate::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

