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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyCategoryItem::DspmIdentifyCategoryItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_complianceRelationsHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyCategoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryItem.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceRelations") && !value["ComplianceRelations"].IsNull())
    {
        if (!value["ComplianceRelations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCategoryItem.ComplianceRelations` is not array type"));

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

void DspmIdentifyCategoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


uint64_t DspmIdentifyCategoryItem::GetId() const
{
    return m_id;
}

void DspmIdentifyCategoryItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DspmIdentifyCategoryItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DspmIdentifyCategoryItem::GetName() const
{
    return m_name;
}

void DspmIdentifyCategoryItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmIdentifyCategoryItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DspmIdentifyCategoryItem::GetType() const
{
    return m_type;
}

void DspmIdentifyCategoryItem::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DspmIdentifyCategoryItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DspmIdentifyCategoryItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DspmIdentifyCategoryItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DspmIdentifyCategoryItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<DspmIdentifyRefComplianceInfo> DspmIdentifyCategoryItem::GetComplianceRelations() const
{
    return m_complianceRelations;
}

void DspmIdentifyCategoryItem::SetComplianceRelations(const vector<DspmIdentifyRefComplianceInfo>& _complianceRelations)
{
    m_complianceRelations = _complianceRelations;
    m_complianceRelationsHasBeenSet = true;
}

bool DspmIdentifyCategoryItem::ComplianceRelationsHasBeenSet() const
{
    return m_complianceRelationsHasBeenSet;
}

