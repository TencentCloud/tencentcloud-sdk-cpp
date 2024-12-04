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

#include <tencentcloud/vcube/v20220410/model/XMagicResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

XMagicResource::XMagicResource() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_planHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_xMagicHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_xMagicTypeHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_isUseHasBeenSet(false)
{
}

CoreInternalOutcome XMagicResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("XMagic") && !value["XMagic"].IsNull())
    {
        if (!value["XMagic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.XMagic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xMagic = value["XMagic"].GetBool();
        m_xMagicHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("XMagicType") && !value["XMagicType"].IsNull())
    {
        if (!value["XMagicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.XMagicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xMagicType = string(value["XMagicType"].GetString());
        m_xMagicTypeHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("IsUse") && !value["IsUse"].IsNull())
    {
        if (!value["IsUse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResource.IsUse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUse = value["IsUse"].GetBool();
        m_isUseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XMagicResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plan.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_xMagicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xMagic, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_xMagicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xMagicType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUse, allocator);
    }

}


uint64_t XMagicResource::GetId() const
{
    return m_id;
}

void XMagicResource::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool XMagicResource::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string XMagicResource::GetAppId() const
{
    return m_appId;
}

void XMagicResource::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool XMagicResource::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string XMagicResource::GetPlan() const
{
    return m_plan;
}

void XMagicResource::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool XMagicResource::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string XMagicResource::GetDuration() const
{
    return m_duration;
}

void XMagicResource::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool XMagicResource::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string XMagicResource::GetCreatedAt() const
{
    return m_createdAt;
}

void XMagicResource::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool XMagicResource::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string XMagicResource::GetUpdatedAt() const
{
    return m_updatedAt;
}

void XMagicResource::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool XMagicResource::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

bool XMagicResource::GetXMagic() const
{
    return m_xMagic;
}

void XMagicResource::SetXMagic(const bool& _xMagic)
{
    m_xMagic = _xMagic;
    m_xMagicHasBeenSet = true;
}

bool XMagicResource::XMagicHasBeenSet() const
{
    return m_xMagicHasBeenSet;
}

string XMagicResource::GetStartTime() const
{
    return m_startTime;
}

void XMagicResource::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool XMagicResource::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string XMagicResource::GetEndTime() const
{
    return m_endTime;
}

void XMagicResource::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool XMagicResource::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool XMagicResource::GetExpired() const
{
    return m_expired;
}

void XMagicResource::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool XMagicResource::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

string XMagicResource::GetName() const
{
    return m_name;
}

void XMagicResource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool XMagicResource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string XMagicResource::GetXMagicType() const
{
    return m_xMagicType;
}

void XMagicResource::SetXMagicType(const string& _xMagicType)
{
    m_xMagicType = _xMagicType;
    m_xMagicTypeHasBeenSet = true;
}

bool XMagicResource::XMagicTypeHasBeenSet() const
{
    return m_xMagicTypeHasBeenSet;
}

string XMagicResource::GetBizType() const
{
    return m_bizType;
}

void XMagicResource::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool XMagicResource::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string XMagicResource::GetResourceId() const
{
    return m_resourceId;
}

void XMagicResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool XMagicResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

bool XMagicResource::GetIsUse() const
{
    return m_isUse;
}

void XMagicResource::SetIsUse(const bool& _isUse)
{
    m_isUse = _isUse;
    m_isUseHasBeenSet = true;
}

bool XMagicResource::IsUseHasBeenSet() const
{
    return m_isUseHasBeenSet;
}

