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

#include <tencentcloud/irp/v20220805/model/RecGoodsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

RecGoodsData::RecGoodsData() :
    m_goodsIdHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_goodsTraceIdHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome RecGoodsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsId") && !value["GoodsId"].IsNull())
    {
        if (!value["GoodsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecGoodsData.GoodsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsId = string(value["GoodsId"].GetString());
        m_goodsIdHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RecGoodsData.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("GoodsTraceId") && !value["GoodsTraceId"].IsNull())
    {
        if (!value["GoodsTraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecGoodsData.GoodsTraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsTraceId = string(value["GoodsTraceId"].GetString());
        m_goodsTraceIdHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecGoodsData.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecGoodsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_goodsTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsTraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

}


string RecGoodsData::GetGoodsId() const
{
    return m_goodsId;
}

void RecGoodsData::SetGoodsId(const string& _goodsId)
{
    m_goodsId = _goodsId;
    m_goodsIdHasBeenSet = true;
}

bool RecGoodsData::GoodsIdHasBeenSet() const
{
    return m_goodsIdHasBeenSet;
}

double RecGoodsData::GetScore() const
{
    return m_score;
}

void RecGoodsData::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool RecGoodsData::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string RecGoodsData::GetGoodsTraceId() const
{
    return m_goodsTraceId;
}

void RecGoodsData::SetGoodsTraceId(const string& _goodsTraceId)
{
    m_goodsTraceId = _goodsTraceId;
    m_goodsTraceIdHasBeenSet = true;
}

bool RecGoodsData::GoodsTraceIdHasBeenSet() const
{
    return m_goodsTraceIdHasBeenSet;
}

int64_t RecGoodsData::GetPosition() const
{
    return m_position;
}

void RecGoodsData::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool RecGoodsData::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

