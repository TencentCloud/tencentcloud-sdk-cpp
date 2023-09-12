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

#include <tencentcloud/mrs/v20200910/model/OtolaryngologyBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OtolaryngologyBaseItem::OtolaryngologyBaseItem() :
    m_earHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_larynxHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome OtolaryngologyBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ear") && !value["Ear"].IsNull())
    {
        if (!value["Ear"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyBaseItem.Ear` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ear.Deserialize(value["Ear"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_earHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyBaseItem.Nose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nose.Deserialize(value["Nose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noseHasBeenSet = true;
    }

    if (value.HasMember("Larynx") && !value["Larynx"].IsNull())
    {
        if (!value["Larynx"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyBaseItem.Larynx` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_larynx.Deserialize(value["Larynx"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_larynxHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyBaseItem.Others` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `OtolaryngologyBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
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

void OtolaryngologyBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_earHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ear.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_larynxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Larynx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_larynx.ToJsonObject(value[key.c_str()], allocator);
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


OtolaryngologyEar OtolaryngologyBaseItem::GetEar() const
{
    return m_ear;
}

void OtolaryngologyBaseItem::SetEar(const OtolaryngologyEar& _ear)
{
    m_ear = _ear;
    m_earHasBeenSet = true;
}

bool OtolaryngologyBaseItem::EarHasBeenSet() const
{
    return m_earHasBeenSet;
}

OtolaryngologyNose OtolaryngologyBaseItem::GetNose() const
{
    return m_nose;
}

void OtolaryngologyBaseItem::SetNose(const OtolaryngologyNose& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool OtolaryngologyBaseItem::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

OtolaryngologyLarynx OtolaryngologyBaseItem::GetLarynx() const
{
    return m_larynx;
}

void OtolaryngologyBaseItem::SetLarynx(const OtolaryngologyLarynx& _larynx)
{
    m_larynx = _larynx;
    m_larynxHasBeenSet = true;
}

bool OtolaryngologyBaseItem::LarynxHasBeenSet() const
{
    return m_larynxHasBeenSet;
}

vector<KeyValueItem> OtolaryngologyBaseItem::GetOthers() const
{
    return m_others;
}

void OtolaryngologyBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool OtolaryngologyBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

OtolaryngologyBriefSummary OtolaryngologyBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void OtolaryngologyBaseItem::SetBriefSummary(const OtolaryngologyBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool OtolaryngologyBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

