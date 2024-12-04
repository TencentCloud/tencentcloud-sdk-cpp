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

#include <tencentcloud/vcube/v20220410/model/XMagicResourceSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

XMagicResourceSimpleInfo::XMagicResourceSimpleInfo() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_planHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_xMagicHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_isUseHasBeenSet(false),
    m_xMagicTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

CoreInternalOutcome XMagicResourceSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Application` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_application.Deserialize(value["Application"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("XMagic") && !value["XMagic"].IsNull())
    {
        if (!value["XMagic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.XMagic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_xMagic.Deserialize(value["XMagic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_xMagicHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Operation` is not array type"));

        const rapidjson::Value &tmpValue = value["Operation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operation.push_back((*itr).GetString());
        }
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("IsUse") && !value["IsUse"].IsNull())
    {
        if (!value["IsUse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.IsUse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUse = value["IsUse"].GetBool();
        m_isUseHasBeenSet = true;
    }

    if (value.HasMember("XMagicType") && !value["XMagicType"].IsNull())
    {
        if (!value["XMagicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.XMagicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xMagicType = string(value["XMagicType"].GetString());
        m_xMagicTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicResourceSimpleInfo.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XMagicResourceSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_application.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_xMagicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_xMagic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operation.begin(); itr != m_operation.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUse, allocator);
    }

    if (m_xMagicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xMagicType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

}


uint64_t XMagicResourceSimpleInfo::GetId() const
{
    return m_id;
}

void XMagicResourceSimpleInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string XMagicResourceSimpleInfo::GetAppId() const
{
    return m_appId;
}

void XMagicResourceSimpleInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string XMagicResourceSimpleInfo::GetPlan() const
{
    return m_plan;
}

void XMagicResourceSimpleInfo::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string XMagicResourceSimpleInfo::GetDuration() const
{
    return m_duration;
}

void XMagicResourceSimpleInfo::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string XMagicResourceSimpleInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void XMagicResourceSimpleInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string XMagicResourceSimpleInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void XMagicResourceSimpleInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string XMagicResourceSimpleInfo::GetStartTime() const
{
    return m_startTime;
}

void XMagicResourceSimpleInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string XMagicResourceSimpleInfo::GetEndTime() const
{
    return m_endTime;
}

void XMagicResourceSimpleInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

AppInfo XMagicResourceSimpleInfo::GetApplication() const
{
    return m_application;
}

void XMagicResourceSimpleInfo::SetApplication(const AppInfo& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

XMagicSimpleInfo XMagicResourceSimpleInfo::GetXMagic() const
{
    return m_xMagic;
}

void XMagicResourceSimpleInfo::SetXMagic(const XMagicSimpleInfo& _xMagic)
{
    m_xMagic = _xMagic;
    m_xMagicHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::XMagicHasBeenSet() const
{
    return m_xMagicHasBeenSet;
}

uint64_t XMagicResourceSimpleInfo::GetStatus() const
{
    return m_status;
}

void XMagicResourceSimpleInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> XMagicResourceSimpleInfo::GetOperation() const
{
    return m_operation;
}

void XMagicResourceSimpleInfo::SetOperation(const vector<string>& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

bool XMagicResourceSimpleInfo::GetIsUse() const
{
    return m_isUse;
}

void XMagicResourceSimpleInfo::SetIsUse(const bool& _isUse)
{
    m_isUse = _isUse;
    m_isUseHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::IsUseHasBeenSet() const
{
    return m_isUseHasBeenSet;
}

string XMagicResourceSimpleInfo::GetXMagicType() const
{
    return m_xMagicType;
}

void XMagicResourceSimpleInfo::SetXMagicType(const string& _xMagicType)
{
    m_xMagicType = _xMagicType;
    m_xMagicTypeHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::XMagicTypeHasBeenSet() const
{
    return m_xMagicTypeHasBeenSet;
}

string XMagicResourceSimpleInfo::GetName() const
{
    return m_name;
}

void XMagicResourceSimpleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string XMagicResourceSimpleInfo::GetBizType() const
{
    return m_bizType;
}

void XMagicResourceSimpleInfo::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string XMagicResourceSimpleInfo::GetResourceId() const
{
    return m_resourceId;
}

void XMagicResourceSimpleInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t XMagicResourceSimpleInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void XMagicResourceSimpleInfo::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool XMagicResourceSimpleInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

