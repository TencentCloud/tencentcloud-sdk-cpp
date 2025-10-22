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

#include <tencentcloud/tsf/v20180326/model/UpdateUnitRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

UpdateUnitRuleRequest::UpdateUnitRuleRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitRuleItemListHasBeenSet(false)
{
}

string UpdateUnitRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_unitRuleItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitRuleItemList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unitRuleItemList.begin(); itr != m_unitRuleItemList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUnitRuleRequest::GetId() const
{
    return m_id;
}

void UpdateUnitRuleRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateUnitRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateUnitRuleRequest::GetName() const
{
    return m_name;
}

void UpdateUnitRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateUnitRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateUnitRuleRequest::GetDescription() const
{
    return m_description;
}

void UpdateUnitRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateUnitRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<UnitRuleItem> UpdateUnitRuleRequest::GetUnitRuleItemList() const
{
    return m_unitRuleItemList;
}

void UpdateUnitRuleRequest::SetUnitRuleItemList(const vector<UnitRuleItem>& _unitRuleItemList)
{
    m_unitRuleItemList = _unitRuleItemList;
    m_unitRuleItemListHasBeenSet = true;
}

bool UpdateUnitRuleRequest::UnitRuleItemListHasBeenSet() const
{
    return m_unitRuleItemListHasBeenSet;
}


