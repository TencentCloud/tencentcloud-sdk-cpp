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

#include <tencentcloud/mrs/v20200910/model/OphthalmologyBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OphthalmologyBaseItem::OphthalmologyBaseItem() :
    m_bareEyeSightHasBeenSet(false),
    m_correctedVisualAcuityHasBeenSet(false),
    m_colourVisionHasBeenSet(false),
    m_fundoscopyHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome OphthalmologyBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BareEyeSight") && !value["BareEyeSight"].IsNull())
    {
        if (!value["BareEyeSight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.BareEyeSight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bareEyeSight.Deserialize(value["BareEyeSight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bareEyeSightHasBeenSet = true;
    }

    if (value.HasMember("CorrectedVisualAcuity") && !value["CorrectedVisualAcuity"].IsNull())
    {
        if (!value["CorrectedVisualAcuity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.CorrectedVisualAcuity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_correctedVisualAcuity.Deserialize(value["CorrectedVisualAcuity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_correctedVisualAcuityHasBeenSet = true;
    }

    if (value.HasMember("ColourVision") && !value["ColourVision"].IsNull())
    {
        if (!value["ColourVision"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.ColourVision` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colourVision.Deserialize(value["ColourVision"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colourVisionHasBeenSet = true;
    }

    if (value.HasMember("Fundoscopy") && !value["Fundoscopy"].IsNull())
    {
        if (!value["Fundoscopy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.Fundoscopy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fundoscopy.Deserialize(value["Fundoscopy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fundoscopyHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.Others` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `OphthalmologyBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
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

void OphthalmologyBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bareEyeSightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BareEyeSight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bareEyeSight.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_correctedVisualAcuityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectedVisualAcuity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_correctedVisualAcuity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colourVisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColourVision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colourVision.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fundoscopyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fundoscopy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fundoscopy.ToJsonObject(value[key.c_str()], allocator);
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


OphthalmologyBareEyeSight OphthalmologyBaseItem::GetBareEyeSight() const
{
    return m_bareEyeSight;
}

void OphthalmologyBaseItem::SetBareEyeSight(const OphthalmologyBareEyeSight& _bareEyeSight)
{
    m_bareEyeSight = _bareEyeSight;
    m_bareEyeSightHasBeenSet = true;
}

bool OphthalmologyBaseItem::BareEyeSightHasBeenSet() const
{
    return m_bareEyeSightHasBeenSet;
}

OphthalmologyCorrectedVisualAcuity OphthalmologyBaseItem::GetCorrectedVisualAcuity() const
{
    return m_correctedVisualAcuity;
}

void OphthalmologyBaseItem::SetCorrectedVisualAcuity(const OphthalmologyCorrectedVisualAcuity& _correctedVisualAcuity)
{
    m_correctedVisualAcuity = _correctedVisualAcuity;
    m_correctedVisualAcuityHasBeenSet = true;
}

bool OphthalmologyBaseItem::CorrectedVisualAcuityHasBeenSet() const
{
    return m_correctedVisualAcuityHasBeenSet;
}

OphthalmologyColourVision OphthalmologyBaseItem::GetColourVision() const
{
    return m_colourVision;
}

void OphthalmologyBaseItem::SetColourVision(const OphthalmologyColourVision& _colourVision)
{
    m_colourVision = _colourVision;
    m_colourVisionHasBeenSet = true;
}

bool OphthalmologyBaseItem::ColourVisionHasBeenSet() const
{
    return m_colourVisionHasBeenSet;
}

OphthalmologyFundoscopy OphthalmologyBaseItem::GetFundoscopy() const
{
    return m_fundoscopy;
}

void OphthalmologyBaseItem::SetFundoscopy(const OphthalmologyFundoscopy& _fundoscopy)
{
    m_fundoscopy = _fundoscopy;
    m_fundoscopyHasBeenSet = true;
}

bool OphthalmologyBaseItem::FundoscopyHasBeenSet() const
{
    return m_fundoscopyHasBeenSet;
}

vector<KeyValueItem> OphthalmologyBaseItem::GetOthers() const
{
    return m_others;
}

void OphthalmologyBaseItem::SetOthers(const vector<KeyValueItem>& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool OphthalmologyBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

OphthalmologyBriefSummary OphthalmologyBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void OphthalmologyBaseItem::SetBriefSummary(const OphthalmologyBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool OphthalmologyBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

