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

#include <tencentcloud/iotvideoindustry/v20201201/model/LiveRecordPlanItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

LiveRecordPlanItem::LiveRecordPlanItem() :
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordPlanItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordPlanItem.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordPlanItem.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordPlanItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

}


string LiveRecordPlanItem::GetPlanId() const
{
    return m_planId;
}

void LiveRecordPlanItem::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool LiveRecordPlanItem::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string LiveRecordPlanItem::GetPlanName() const
{
    return m_planName;
}

void LiveRecordPlanItem::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool LiveRecordPlanItem::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

