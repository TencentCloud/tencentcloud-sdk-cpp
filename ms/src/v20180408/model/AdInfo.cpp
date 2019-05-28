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

#include <tencentcloud/ms/v20180408/model/AdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

AdInfo::AdInfo() :
    m_spotsHasBeenSet(false),
    m_boutiqueRecommandsHasBeenSet(false),
    m_floatWindowsesHasBeenSet(false),
    m_bannersHasBeenSet(false),
    m_integralWallsHasBeenSet(false),
    m_notifyBarsHasBeenSet(false)
{
}

CoreInternalOutcome AdInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Spots") && !value["Spots"].IsNull())
    {
        if (!value["Spots"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.Spots` is not array type"));

        const Value &tmpValue = value["Spots"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spots.push_back(item);
        }
        m_spotsHasBeenSet = true;
    }

    if (value.HasMember("BoutiqueRecommands") && !value["BoutiqueRecommands"].IsNull())
    {
        if (!value["BoutiqueRecommands"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.BoutiqueRecommands` is not array type"));

        const Value &tmpValue = value["BoutiqueRecommands"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_boutiqueRecommands.push_back(item);
        }
        m_boutiqueRecommandsHasBeenSet = true;
    }

    if (value.HasMember("FloatWindowses") && !value["FloatWindowses"].IsNull())
    {
        if (!value["FloatWindowses"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.FloatWindowses` is not array type"));

        const Value &tmpValue = value["FloatWindowses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_floatWindowses.push_back(item);
        }
        m_floatWindowsesHasBeenSet = true;
    }

    if (value.HasMember("Banners") && !value["Banners"].IsNull())
    {
        if (!value["Banners"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.Banners` is not array type"));

        const Value &tmpValue = value["Banners"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_banners.push_back(item);
        }
        m_bannersHasBeenSet = true;
    }

    if (value.HasMember("IntegralWalls") && !value["IntegralWalls"].IsNull())
    {
        if (!value["IntegralWalls"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.IntegralWalls` is not array type"));

        const Value &tmpValue = value["IntegralWalls"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_integralWalls.push_back(item);
        }
        m_integralWallsHasBeenSet = true;
    }

    if (value.HasMember("NotifyBars") && !value["NotifyBars"].IsNull())
    {
        if (!value["NotifyBars"].IsArray())
            return CoreInternalOutcome(Error("response `AdInfo.NotifyBars` is not array type"));

        const Value &tmpValue = value["NotifyBars"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notifyBars.push_back(item);
        }
        m_notifyBarsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_spotsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Spots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spots.begin(); itr != m_spots.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_boutiqueRecommandsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BoutiqueRecommands";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_boutiqueRecommands.begin(); itr != m_boutiqueRecommands.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_floatWindowsesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FloatWindowses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_floatWindowses.begin(); itr != m_floatWindowses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bannersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Banners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_banners.begin(); itr != m_banners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_integralWallsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IntegralWalls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_integralWalls.begin(); itr != m_integralWalls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notifyBarsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyBars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifyBars.begin(); itr != m_notifyBars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PluginInfo> AdInfo::GetSpots() const
{
    return m_spots;
}

void AdInfo::SetSpots(const vector<PluginInfo>& _spots)
{
    m_spots = _spots;
    m_spotsHasBeenSet = true;
}

bool AdInfo::SpotsHasBeenSet() const
{
    return m_spotsHasBeenSet;
}

vector<PluginInfo> AdInfo::GetBoutiqueRecommands() const
{
    return m_boutiqueRecommands;
}

void AdInfo::SetBoutiqueRecommands(const vector<PluginInfo>& _boutiqueRecommands)
{
    m_boutiqueRecommands = _boutiqueRecommands;
    m_boutiqueRecommandsHasBeenSet = true;
}

bool AdInfo::BoutiqueRecommandsHasBeenSet() const
{
    return m_boutiqueRecommandsHasBeenSet;
}

vector<PluginInfo> AdInfo::GetFloatWindowses() const
{
    return m_floatWindowses;
}

void AdInfo::SetFloatWindowses(const vector<PluginInfo>& _floatWindowses)
{
    m_floatWindowses = _floatWindowses;
    m_floatWindowsesHasBeenSet = true;
}

bool AdInfo::FloatWindowsesHasBeenSet() const
{
    return m_floatWindowsesHasBeenSet;
}

vector<PluginInfo> AdInfo::GetBanners() const
{
    return m_banners;
}

void AdInfo::SetBanners(const vector<PluginInfo>& _banners)
{
    m_banners = _banners;
    m_bannersHasBeenSet = true;
}

bool AdInfo::BannersHasBeenSet() const
{
    return m_bannersHasBeenSet;
}

vector<PluginInfo> AdInfo::GetIntegralWalls() const
{
    return m_integralWalls;
}

void AdInfo::SetIntegralWalls(const vector<PluginInfo>& _integralWalls)
{
    m_integralWalls = _integralWalls;
    m_integralWallsHasBeenSet = true;
}

bool AdInfo::IntegralWallsHasBeenSet() const
{
    return m_integralWallsHasBeenSet;
}

vector<PluginInfo> AdInfo::GetNotifyBars() const
{
    return m_notifyBars;
}

void AdInfo::SetNotifyBars(const vector<PluginInfo>& _notifyBars)
{
    m_notifyBars = _notifyBars;
    m_notifyBarsHasBeenSet = true;
}

bool AdInfo::NotifyBarsHasBeenSet() const
{
    return m_notifyBarsHasBeenSet;
}

