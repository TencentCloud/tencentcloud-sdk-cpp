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

#include <tencentcloud/tci/v20190318/model/WholeTextItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

WholeTextItem::WholeTextItem() :
    m_textItemHasBeenSet(false),
    m_avgVolumeHasBeenSet(false),
    m_maxVolumeHasBeenSet(false),
    m_minVolumeHasBeenSet(false),
    m_speedHasBeenSet(false)
{
}

CoreInternalOutcome WholeTextItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextItem") && !value["TextItem"].IsNull())
    {
        if (!value["TextItem"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WholeTextItem.TextItem` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textItem.Deserialize(value["TextItem"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textItemHasBeenSet = true;
    }

    if (value.HasMember("AvgVolume") && !value["AvgVolume"].IsNull())
    {
        if (!value["AvgVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WholeTextItem.AvgVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgVolume = value["AvgVolume"].GetDouble();
        m_avgVolumeHasBeenSet = true;
    }

    if (value.HasMember("MaxVolume") && !value["MaxVolume"].IsNull())
    {
        if (!value["MaxVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WholeTextItem.MaxVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxVolume = value["MaxVolume"].GetDouble();
        m_maxVolumeHasBeenSet = true;
    }

    if (value.HasMember("MinVolume") && !value["MinVolume"].IsNull())
    {
        if (!value["MinVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WholeTextItem.MinVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minVolume = value["MinVolume"].GetDouble();
        m_minVolumeHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WholeTextItem.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WholeTextItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textItem.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_avgVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgVolume, allocator);
    }

    if (m_maxVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVolume, allocator);
    }

    if (m_minVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minVolume, allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

}


TextItem WholeTextItem::GetTextItem() const
{
    return m_textItem;
}

void WholeTextItem::SetTextItem(const TextItem& _textItem)
{
    m_textItem = _textItem;
    m_textItemHasBeenSet = true;
}

bool WholeTextItem::TextItemHasBeenSet() const
{
    return m_textItemHasBeenSet;
}

double WholeTextItem::GetAvgVolume() const
{
    return m_avgVolume;
}

void WholeTextItem::SetAvgVolume(const double& _avgVolume)
{
    m_avgVolume = _avgVolume;
    m_avgVolumeHasBeenSet = true;
}

bool WholeTextItem::AvgVolumeHasBeenSet() const
{
    return m_avgVolumeHasBeenSet;
}

double WholeTextItem::GetMaxVolume() const
{
    return m_maxVolume;
}

void WholeTextItem::SetMaxVolume(const double& _maxVolume)
{
    m_maxVolume = _maxVolume;
    m_maxVolumeHasBeenSet = true;
}

bool WholeTextItem::MaxVolumeHasBeenSet() const
{
    return m_maxVolumeHasBeenSet;
}

double WholeTextItem::GetMinVolume() const
{
    return m_minVolume;
}

void WholeTextItem::SetMinVolume(const double& _minVolume)
{
    m_minVolume = _minVolume;
    m_minVolumeHasBeenSet = true;
}

bool WholeTextItem::MinVolumeHasBeenSet() const
{
    return m_minVolumeHasBeenSet;
}

double WholeTextItem::GetSpeed() const
{
    return m_speed;
}

void WholeTextItem::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool WholeTextItem::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

