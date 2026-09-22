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

#include <tencentcloud/workbuddyenterprise/v20260709/model/A2ASkillItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

A2ASkillItem::A2ASkillItem() :
    m_a2ASkillIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome A2ASkillItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("A2ASkillId") && !value["A2ASkillId"].IsNull())
    {
        if (!value["A2ASkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillItem.A2ASkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2ASkillId = string(value["A2ASkillId"].GetString());
        m_a2ASkillIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2ASkillItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void A2ASkillItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_a2ASkillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2ASkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2ASkillId.c_str(), allocator).Move(), allocator);
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

}


string A2ASkillItem::GetA2ASkillId() const
{
    return m_a2ASkillId;
}

void A2ASkillItem::SetA2ASkillId(const string& _a2ASkillId)
{
    m_a2ASkillId = _a2ASkillId;
    m_a2ASkillIdHasBeenSet = true;
}

bool A2ASkillItem::A2ASkillIdHasBeenSet() const
{
    return m_a2ASkillIdHasBeenSet;
}

string A2ASkillItem::GetName() const
{
    return m_name;
}

void A2ASkillItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool A2ASkillItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string A2ASkillItem::GetDescription() const
{
    return m_description;
}

void A2ASkillItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool A2ASkillItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

