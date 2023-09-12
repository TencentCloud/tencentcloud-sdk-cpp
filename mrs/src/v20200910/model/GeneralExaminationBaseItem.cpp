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

#include <tencentcloud/mrs/v20200910/model/GeneralExaminationBaseItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GeneralExaminationBaseItem::GeneralExaminationBaseItem() :
    m_vitalSignHasBeenSet(false),
    m_othersHasBeenSet(false),
    m_briefSummaryHasBeenSet(false)
{
}

CoreInternalOutcome GeneralExaminationBaseItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VitalSign") && !value["VitalSign"].IsNull())
    {
        if (!value["VitalSign"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationBaseItem.VitalSign` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vitalSign.Deserialize(value["VitalSign"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vitalSignHasBeenSet = true;
    }

    if (value.HasMember("Others") && !value["Others"].IsNull())
    {
        if (!value["Others"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationBaseItem.Others` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_others.Deserialize(value["Others"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_othersHasBeenSet = true;
    }

    if (value.HasMember("BriefSummary") && !value["BriefSummary"].IsNull())
    {
        if (!value["BriefSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationBaseItem.BriefSummary` is not object type").SetRequestId(requestId));
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

void GeneralExaminationBaseItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vitalSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VitalSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vitalSign.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Others";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_others.ToJsonObject(value[key.c_str()], allocator);
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


GeneralExaminationVitalSign GeneralExaminationBaseItem::GetVitalSign() const
{
    return m_vitalSign;
}

void GeneralExaminationBaseItem::SetVitalSign(const GeneralExaminationVitalSign& _vitalSign)
{
    m_vitalSign = _vitalSign;
    m_vitalSignHasBeenSet = true;
}

bool GeneralExaminationBaseItem::VitalSignHasBeenSet() const
{
    return m_vitalSignHasBeenSet;
}

GeneralExaminationOthers GeneralExaminationBaseItem::GetOthers() const
{
    return m_others;
}

void GeneralExaminationBaseItem::SetOthers(const GeneralExaminationOthers& _others)
{
    m_others = _others;
    m_othersHasBeenSet = true;
}

bool GeneralExaminationBaseItem::OthersHasBeenSet() const
{
    return m_othersHasBeenSet;
}

GeneralExaminationBriefSummary GeneralExaminationBaseItem::GetBriefSummary() const
{
    return m_briefSummary;
}

void GeneralExaminationBaseItem::SetBriefSummary(const GeneralExaminationBriefSummary& _briefSummary)
{
    m_briefSummary = _briefSummary;
    m_briefSummaryHasBeenSet = true;
}

bool GeneralExaminationBaseItem::BriefSummaryHasBeenSet() const
{
    return m_briefSummaryHasBeenSet;
}

