/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyComplianceItem::DspmIdentifyComplianceItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_applyStatusHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyComplianceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyStatus") && !value["ApplyStatus"].IsNull())
    {
        if (!value["ApplyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceItem.ApplyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyStatus = value["ApplyStatus"].GetUint64();
        m_applyStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyComplianceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyStatus, allocator);
    }

}


uint64_t DspmIdentifyComplianceItem::GetId() const
{
    return m_id;
}

void DspmIdentifyComplianceItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DspmIdentifyComplianceItem::GetName() const
{
    return m_name;
}

void DspmIdentifyComplianceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmIdentifyComplianceItem::GetDescription() const
{
    return m_description;
}

void DspmIdentifyComplianceItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DspmIdentifyComplianceItem::GetStatus() const
{
    return m_status;
}

void DspmIdentifyComplianceItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DspmIdentifyComplianceItem::GetType() const
{
    return m_type;
}

void DspmIdentifyComplianceItem::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DspmIdentifyComplianceItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DspmIdentifyComplianceItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DspmIdentifyComplianceItem::GetApplyStatus() const
{
    return m_applyStatus;
}

void DspmIdentifyComplianceItem::SetApplyStatus(const uint64_t& _applyStatus)
{
    m_applyStatus = _applyStatus;
    m_applyStatusHasBeenSet = true;
}

bool DspmIdentifyComplianceItem::ApplyStatusHasBeenSet() const
{
    return m_applyStatusHasBeenSet;
}

