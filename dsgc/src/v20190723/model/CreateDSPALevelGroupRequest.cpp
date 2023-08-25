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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPALevelGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPALevelGroupRequest::CreateDSPALevelGroupRequest() :
    m_dspaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_itemLevelsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateDSPALevelGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_itemLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemLevels.begin(); itr != m_itemLevels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPALevelGroupRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPALevelGroupRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPALevelGroupRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPALevelGroupRequest::GetName() const
{
    return m_name;
}

void CreateDSPALevelGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDSPALevelGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ItemLevel> CreateDSPALevelGroupRequest::GetItemLevels() const
{
    return m_itemLevels;
}

void CreateDSPALevelGroupRequest::SetItemLevels(const vector<ItemLevel>& _itemLevels)
{
    m_itemLevels = _itemLevels;
    m_itemLevelsHasBeenSet = true;
}

bool CreateDSPALevelGroupRequest::ItemLevelsHasBeenSet() const
{
    return m_itemLevelsHasBeenSet;
}

string CreateDSPALevelGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateDSPALevelGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDSPALevelGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


