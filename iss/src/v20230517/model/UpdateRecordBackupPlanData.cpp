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

#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupPlanData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateRecordBackupPlanData::UpdateRecordBackupPlanData() :
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_channelCountHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome UpdateRecordBackupPlanData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("LifeCycle") && !value["LifeCycle"].IsNull())
    {
        if (!value["LifeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.LifeCycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifeCycle.Deserialize(value["LifeCycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifeCycleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ChannelCount") && !value["ChannelCount"].IsNull())
    {
        if (!value["ChannelCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.ChannelCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelCount = value["ChannelCount"].GetInt64();
        m_channelCountHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupPlanData.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateRecordBackupPlanData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_channelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelCount, allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

}


string UpdateRecordBackupPlanData::GetPlanId() const
{
    return m_planId;
}

void UpdateRecordBackupPlanData::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string UpdateRecordBackupPlanData::GetPlanName() const
{
    return m_planName;
}

void UpdateRecordBackupPlanData::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string UpdateRecordBackupPlanData::GetTemplateId() const
{
    return m_templateId;
}

void UpdateRecordBackupPlanData::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string UpdateRecordBackupPlanData::GetDescribe() const
{
    return m_describe;
}

void UpdateRecordBackupPlanData::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

LifeCycleData UpdateRecordBackupPlanData::GetLifeCycle() const
{
    return m_lifeCycle;
}

void UpdateRecordBackupPlanData::SetLifeCycle(const LifeCycleData& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

int64_t UpdateRecordBackupPlanData::GetStatus() const
{
    return m_status;
}

void UpdateRecordBackupPlanData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t UpdateRecordBackupPlanData::GetChannelCount() const
{
    return m_channelCount;
}

void UpdateRecordBackupPlanData::SetChannelCount(const int64_t& _channelCount)
{
    m_channelCount = _channelCount;
    m_channelCountHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::ChannelCountHasBeenSet() const
{
    return m_channelCountHasBeenSet;
}

string UpdateRecordBackupPlanData::GetCreateAt() const
{
    return m_createAt;
}

void UpdateRecordBackupPlanData::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string UpdateRecordBackupPlanData::GetUpdateAt() const
{
    return m_updateAt;
}

void UpdateRecordBackupPlanData::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool UpdateRecordBackupPlanData::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

