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

#include <tencentcloud/iss/v20230517/model/RecordPlanOptResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RecordPlanOptResponse::RecordPlanOptResponse() :
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_streamTypeHasBeenSet(false)
{
}

CoreInternalOutcome RecordPlanOptResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("LifeCycle") && !value["LifeCycle"].IsNull())
    {
        if (!value["LifeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.LifeCycle` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RecordPlanOptResponse.StreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = string(value["StreamType"].GetString());
        m_streamTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordPlanOptResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string RecordPlanOptResponse::GetPlanId() const
{
    return m_planId;
}

void RecordPlanOptResponse::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool RecordPlanOptResponse::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string RecordPlanOptResponse::GetPlanName() const
{
    return m_planName;
}

void RecordPlanOptResponse::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool RecordPlanOptResponse::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string RecordPlanOptResponse::GetTemplateId() const
{
    return m_templateId;
}

void RecordPlanOptResponse::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool RecordPlanOptResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string RecordPlanOptResponse::GetDescribe() const
{
    return m_describe;
}

void RecordPlanOptResponse::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool RecordPlanOptResponse::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

LifeCycleData RecordPlanOptResponse::GetLifeCycle() const
{
    return m_lifeCycle;
}

void RecordPlanOptResponse::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool RecordPlanOptResponse::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

string RecordPlanOptResponse::GetStreamType() const
{
    return m_streamType;
}

void RecordPlanOptResponse::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool RecordPlanOptResponse::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

