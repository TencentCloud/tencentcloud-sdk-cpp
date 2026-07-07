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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyRuleItem::DspmIdentifyRuleItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_structuredStatusHasBeenSet(false),
    m_unStructuredStatusHasBeenSet(false),
    m_complianceRelationsHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StructuredStatus") && !value["StructuredStatus"].IsNull())
    {
        if (!value["StructuredStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.StructuredStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_structuredStatus = value["StructuredStatus"].GetBool();
        m_structuredStatusHasBeenSet = true;
    }

    if (value.HasMember("UnStructuredStatus") && !value["UnStructuredStatus"].IsNull())
    {
        if (!value["UnStructuredStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.UnStructuredStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unStructuredStatus = value["UnStructuredStatus"].GetBool();
        m_unStructuredStatusHasBeenSet = true;
    }

    if (value.HasMember("ComplianceRelations") && !value["ComplianceRelations"].IsNull())
    {
        if (!value["ComplianceRelations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRuleItem.ComplianceRelations` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplianceRelations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyRefComplianceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_complianceRelations.push_back(item);
        }
        m_complianceRelationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_structuredStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_structuredStatus, allocator);
    }

    if (m_unStructuredStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnStructuredStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unStructuredStatus, allocator);
    }

    if (m_complianceRelationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceRelations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complianceRelations.begin(); itr != m_complianceRelations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DspmIdentifyRuleItem::GetId() const
{
    return m_id;
}

void DspmIdentifyRuleItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DspmIdentifyRuleItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DspmIdentifyRuleItem::GetName() const
{
    return m_name;
}

void DspmIdentifyRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmIdentifyRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmIdentifyRuleItem::GetDescription() const
{
    return m_description;
}

void DspmIdentifyRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspmIdentifyRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DspmIdentifyRuleItem::GetStatus() const
{
    return m_status;
}

void DspmIdentifyRuleItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmIdentifyRuleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DspmIdentifyRuleItem::GetType() const
{
    return m_type;
}

void DspmIdentifyRuleItem::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DspmIdentifyRuleItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DspmIdentifyRuleItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DspmIdentifyRuleItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DspmIdentifyRuleItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool DspmIdentifyRuleItem::GetStructuredStatus() const
{
    return m_structuredStatus;
}

void DspmIdentifyRuleItem::SetStructuredStatus(const bool& _structuredStatus)
{
    m_structuredStatus = _structuredStatus;
    m_structuredStatusHasBeenSet = true;
}

bool DspmIdentifyRuleItem::StructuredStatusHasBeenSet() const
{
    return m_structuredStatusHasBeenSet;
}

bool DspmIdentifyRuleItem::GetUnStructuredStatus() const
{
    return m_unStructuredStatus;
}

void DspmIdentifyRuleItem::SetUnStructuredStatus(const bool& _unStructuredStatus)
{
    m_unStructuredStatus = _unStructuredStatus;
    m_unStructuredStatusHasBeenSet = true;
}

bool DspmIdentifyRuleItem::UnStructuredStatusHasBeenSet() const
{
    return m_unStructuredStatusHasBeenSet;
}

vector<DspmIdentifyRefComplianceInfo> DspmIdentifyRuleItem::GetComplianceRelations() const
{
    return m_complianceRelations;
}

void DspmIdentifyRuleItem::SetComplianceRelations(const vector<DspmIdentifyRefComplianceInfo>& _complianceRelations)
{
    m_complianceRelations = _complianceRelations;
    m_complianceRelationsHasBeenSet = true;
}

bool DspmIdentifyRuleItem::ComplianceRelationsHasBeenSet() const
{
    return m_complianceRelationsHasBeenSet;
}

