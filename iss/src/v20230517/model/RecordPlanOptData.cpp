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

#include <tencentcloud/iss/v20230517/model/RecordPlanOptData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RecordPlanOptData::RecordPlanOptData() :
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_repairModeHasBeenSet(false)
{
}

CoreInternalOutcome RecordPlanOptData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("LifeCycle") && !value["LifeCycle"].IsNull())
    {
        if (!value["LifeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.LifeCycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifeCycle.Deserialize(value["LifeCycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifeCycleHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.StreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = string(value["StreamType"].GetString());
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("RepairMode") && !value["RepairMode"].IsNull())
    {
        if (!value["RepairMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptData.RepairMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_repairMode = value["RepairMode"].GetInt64();
        m_repairModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordPlanOptData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifeCycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamType.c_str(), allocator).Move(), allocator);
    }

    if (m_repairModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repairMode, allocator);
    }

}


string RecordPlanOptData::GetPlanId() const
{
    return m_planId;
}

void RecordPlanOptData::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool RecordPlanOptData::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string RecordPlanOptData::GetPlanName() const
{
    return m_planName;
}

void RecordPlanOptData::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool RecordPlanOptData::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string RecordPlanOptData::GetTemplateId() const
{
    return m_templateId;
}

void RecordPlanOptData::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool RecordPlanOptData::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string RecordPlanOptData::GetDescribe() const
{
    return m_describe;
}

void RecordPlanOptData::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool RecordPlanOptData::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

LifeCycleData RecordPlanOptData::GetLifeCycle() const
{
    return m_lifeCycle;
}

void RecordPlanOptData::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool RecordPlanOptData::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

string RecordPlanOptData::GetStreamType() const
{
    return m_streamType;
}

void RecordPlanOptData::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool RecordPlanOptData::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

int64_t RecordPlanOptData::GetRepairMode() const
{
    return m_repairMode;
}

void RecordPlanOptData::SetRepairMode(const int64_t& _repairMode)
{
    m_repairMode = _repairMode;
    m_repairModeHasBeenSet = true;
}

bool RecordPlanOptData::RepairModeHasBeenSet() const
{
    return m_repairModeHasBeenSet;
}

