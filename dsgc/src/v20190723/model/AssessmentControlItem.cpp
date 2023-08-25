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

#include <tencentcloud/dsgc/v20190723/model/AssessmentControlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssessmentControlItem::AssessmentControlItem() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_itemSubTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_templateCountHasBeenSet(false)
{
}

CoreInternalOutcome AssessmentControlItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.ItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = string(value["ItemType"].GetString());
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("ItemSubType") && !value["ItemSubType"].IsNull())
    {
        if (!value["ItemSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.ItemSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemSubType = string(value["ItemSubType"].GetString());
        m_itemSubTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TemplateCount") && !value["TemplateCount"].IsNull())
    {
        if (!value["TemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentControlItem.TemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateCount = value["TemplateCount"].GetInt64();
        m_templateCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessmentControlItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemType.c_str(), allocator).Move(), allocator);
    }

    if (m_itemSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_templateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateCount, allocator);
    }

}


string AssessmentControlItem::GetItemId() const
{
    return m_itemId;
}

void AssessmentControlItem::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool AssessmentControlItem::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string AssessmentControlItem::GetItemName() const
{
    return m_itemName;
}

void AssessmentControlItem::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool AssessmentControlItem::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string AssessmentControlItem::GetDescription() const
{
    return m_description;
}

void AssessmentControlItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AssessmentControlItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AssessmentControlItem::GetSource() const
{
    return m_source;
}

void AssessmentControlItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AssessmentControlItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AssessmentControlItem::GetItemType() const
{
    return m_itemType;
}

void AssessmentControlItem::SetItemType(const string& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool AssessmentControlItem::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

string AssessmentControlItem::GetItemSubType() const
{
    return m_itemSubType;
}

void AssessmentControlItem::SetItemSubType(const string& _itemSubType)
{
    m_itemSubType = _itemSubType;
    m_itemSubTypeHasBeenSet = true;
}

bool AssessmentControlItem::ItemSubTypeHasBeenSet() const
{
    return m_itemSubTypeHasBeenSet;
}

string AssessmentControlItem::GetCreatedTime() const
{
    return m_createdTime;
}

void AssessmentControlItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AssessmentControlItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AssessmentControlItem::GetStatus() const
{
    return m_status;
}

void AssessmentControlItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssessmentControlItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AssessmentControlItem::GetTemplateCount() const
{
    return m_templateCount;
}

void AssessmentControlItem::SetTemplateCount(const int64_t& _templateCount)
{
    m_templateCount = _templateCount;
    m_templateCountHasBeenSet = true;
}

bool AssessmentControlItem::TemplateCountHasBeenSet() const
{
    return m_templateCountHasBeenSet;
}

