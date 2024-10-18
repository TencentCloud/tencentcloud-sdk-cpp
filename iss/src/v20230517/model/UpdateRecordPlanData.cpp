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

#include <tencentcloud/iss/v20230517/model/UpdateRecordPlanData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateRecordPlanData::UpdateRecordPlanData() :
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_addHasBeenSet(false),
    m_delHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_repairModeHasBeenSet(false)
{
}

CoreInternalOutcome UpdateRecordPlanData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.StreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = string(value["StreamType"].GetString());
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("LifeCycle") && !value["LifeCycle"].IsNull())
    {
        if (!value["LifeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.LifeCycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifeCycle.Deserialize(value["LifeCycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifeCycleHasBeenSet = true;
    }

    if (value.HasMember("Add") && !value["Add"].IsNull())
    {
        if (!value["Add"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.Add` is not array type"));

        const rapidjson::Value &tmpValue = value["Add"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_add.push_back(item);
        }
        m_addHasBeenSet = true;
    }

    if (value.HasMember("Del") && !value["Del"].IsNull())
    {
        if (!value["Del"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.Del` is not array type"));

        const rapidjson::Value &tmpValue = value["Del"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_del.push_back((*itr).GetString());
        }
        m_delHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.OrganizationId` is not array type"));

        const rapidjson::Value &tmpValue = value["OrganizationId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_organizationId.push_back((*itr).GetString());
        }
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("RepairMode") && !value["RepairMode"].IsNull())
    {
        if (!value["RepairMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordPlanData.RepairMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_repairMode = value["RepairMode"].GetInt64();
        m_repairModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateRecordPlanData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamType.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifeCycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Add";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_add.begin(); itr != m_add.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_delHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Del";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_del.begin(); itr != m_del.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_organizationId.begin(); itr != m_organizationId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_repairModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repairMode, allocator);
    }

}


string UpdateRecordPlanData::GetPlanName() const
{
    return m_planName;
}

void UpdateRecordPlanData::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool UpdateRecordPlanData::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string UpdateRecordPlanData::GetTemplateId() const
{
    return m_templateId;
}

void UpdateRecordPlanData::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool UpdateRecordPlanData::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string UpdateRecordPlanData::GetDescribe() const
{
    return m_describe;
}

void UpdateRecordPlanData::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool UpdateRecordPlanData::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string UpdateRecordPlanData::GetStreamType() const
{
    return m_streamType;
}

void UpdateRecordPlanData::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool UpdateRecordPlanData::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

LifeCycleData UpdateRecordPlanData::GetLifeCycle() const
{
    return m_lifeCycle;
}

void UpdateRecordPlanData::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool UpdateRecordPlanData::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

vector<ChannelInfo> UpdateRecordPlanData::GetAdd() const
{
    return m_add;
}

void UpdateRecordPlanData::SetAdd(const vector<ChannelInfo>& _add)
{
    m_add = _add;
    m_addHasBeenSet = true;
}

bool UpdateRecordPlanData::AddHasBeenSet() const
{
    return m_addHasBeenSet;
}

vector<string> UpdateRecordPlanData::GetDel() const
{
    return m_del;
}

void UpdateRecordPlanData::SetDel(const vector<string>& _del)
{
    m_del = _del;
    m_delHasBeenSet = true;
}

bool UpdateRecordPlanData::DelHasBeenSet() const
{
    return m_delHasBeenSet;
}

vector<string> UpdateRecordPlanData::GetOrganizationId() const
{
    return m_organizationId;
}

void UpdateRecordPlanData::SetOrganizationId(const vector<string>& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool UpdateRecordPlanData::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

int64_t UpdateRecordPlanData::GetRepairMode() const
{
    return m_repairMode;
}

void UpdateRecordPlanData::SetRepairMode(const int64_t& _repairMode)
{
    m_repairMode = _repairMode;
    m_repairModeHasBeenSet = true;
}

bool UpdateRecordPlanData::RepairModeHasBeenSet() const
{
    return m_repairModeHasBeenSet;
}

