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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyLevelGroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyLevelGroupItem::DspmIdentifyLevelGroupItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelItemsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_complianceRelationsHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyLevelGroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LevelItems") && !value["LevelItems"].IsNull())
    {
        if (!value["LevelItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.LevelItems` is not array type"));

        const rapidjson::Value &tmpValue = value["LevelItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyLevelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_levelItems.push_back(item);
        }
        m_levelItemsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceRelations") && !value["ComplianceRelations"].IsNull())
    {
        if (!value["ComplianceRelations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyLevelGroupItem.ComplianceRelations` is not array type"));

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

void DspmIdentifyLevelGroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_levelItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelItems.begin(); itr != m_levelItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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


uint64_t DspmIdentifyLevelGroupItem::GetId() const
{
    return m_id;
}

void DspmIdentifyLevelGroupItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DspmIdentifyLevelGroupItem::GetName() const
{
    return m_name;
}

void DspmIdentifyLevelGroupItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmIdentifyLevelGroupItem::GetDescription() const
{
    return m_description;
}

void DspmIdentifyLevelGroupItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DspmIdentifyLevelGroupItem::GetType() const
{
    return m_type;
}

void DspmIdentifyLevelGroupItem::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<DspmIdentifyLevelItem> DspmIdentifyLevelGroupItem::GetLevelItems() const
{
    return m_levelItems;
}

void DspmIdentifyLevelGroupItem::SetLevelItems(const vector<DspmIdentifyLevelItem>& _levelItems)
{
    m_levelItems = _levelItems;
    m_levelItemsHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::LevelItemsHasBeenSet() const
{
    return m_levelItemsHasBeenSet;
}

string DspmIdentifyLevelGroupItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DspmIdentifyLevelGroupItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<DspmIdentifyRefComplianceInfo> DspmIdentifyLevelGroupItem::GetComplianceRelations() const
{
    return m_complianceRelations;
}

void DspmIdentifyLevelGroupItem::SetComplianceRelations(const vector<DspmIdentifyRefComplianceInfo>& _complianceRelations)
{
    m_complianceRelations = _complianceRelations;
    m_complianceRelationsHasBeenSet = true;
}

bool DspmIdentifyLevelGroupItem::ComplianceRelationsHasBeenSet() const
{
    return m_complianceRelationsHasBeenSet;
}

