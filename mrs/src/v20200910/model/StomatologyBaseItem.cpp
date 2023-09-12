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

#include <tencentcloud/mrs/v20200910/model/StomatologyBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

StomatologyBaseItem::StomatologyBaseItem() :
    m_toothDecayHasBeenSet(false),
    m_gingivaHasBeenSet(false),
    m_periodonticsHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome StomatologyBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ToothDecay") && !value["ToothDecay"].IsNull())
    {
        if (!value["ToothDecay"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StomatologyBaseItem.ToothDecay` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_toothDecay.Deserialize(value["ToothDecay"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_toothDecayHasBeenSet = true;
    }

    if (value.HasMember("Gingiva") && !value["Gingiva"].IsNull())
    {
        if (!value["Gingiva"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StomatologyBaseItem.Gingiva` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gingiva.Deserialize(value["Gingiva"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gingivaHasBeenSet = true;
    }

    if (value.HasMember("Periodontics") && !value["Periodontics"].IsNull())
    {
        if (!value["Periodontics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StomatologyBaseItem.Periodontics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_periodontics.Deserialize(value["Periodontics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodonticsHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StomatologyBaseItem.Others` is not array type"));

        const rapidjson::Value &tmpValue = value["Others"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_others.push_back(item);
        }
        m_othersHasBeenSet = true;
    }

    if (value.HasMember("BriefSummary") && !value["BriefSummary"].IsNull())
    {
        if (!value["BriefSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StomatologyBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_briefSummary.Deserialize(value["BriefSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_briefSummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StomatologyBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_toothDecayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToothDecay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_toothDecay.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gingivaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gingiva";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gingiva.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_periodonticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Periodontics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodontics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Others";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_others.begin(); itr != m_others.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_briefSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_briefSummary.ToJsonObject(value[key.c_str()], allocator);
    }

}


StomatologyToothDecay StomatologyBaseItem::GetToothDecay() const
{
    return m_toothDecay;
}

void StomatologyBaseItem::SetToothDecay(const StomatologyToothDecay& _toothDecay)
{
    m_toothDecay = _toothDecay;
    m_toothDecayHasBeenSet = true;
}

bool StomatologyBaseItem::ToothDecayHasBeenSet() const
{
    return m_toothDecayHasBeenSet;
}

StomatologyGingiva StomatologyBaseItem::GetGingiva() const
{
    return m_gingiva;
}

void StomatologyBaseItem::SetGingiva(const StomatologyGingiva& _gingiva)
{
    m_gingiva = _gingiva;
    m_gingivaHasBeenSet = true;
}

bool StomatologyBaseItem::GingivaHasBeenSet() const
{
    return m_gingivaHasBeenSet;
}

StomatologyPeriodontics StomatologyBaseItem::GetPeriodontics() const
{
    return m_periodontics;
}

void StomatologyBaseItem::SetPeriodontics(const StomatologyPeriodontics& _periodontics)
{
    m_periodontics = _periodontics;
    m_periodonticsHasBeenSet = true;
}

bool StomatologyBaseItem::PeriodonticsHasBeenSet() const
{
    return m_periodonticsHasBeenSet;
}

vector<KeyValueItem> StomatologyBaseItem::GetOthers() const
{
    return m_others;
}

void StomatologyBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool StomatologyBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

StomatologyBriefSummary StomatologyBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void StomatologyBaseItem::SetBriefSummary(const StomatologyBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool StomatologyBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

