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

#include <tencentcloud/iotvideo/v20211125/model/ProductTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ProductTemplate::ProductTemplate() :
    m_idHasBeenSet(false),
    m_categoryKeyHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_modelTemplateHasBeenSet(false),
    m_listOrderHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_iconUrlGridHasBeenSet(false)
{
}

CoreInternalOutcome ProductTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CategoryKey") && !value["CategoryKey"].IsNull())
    {
        if (!value["CategoryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.CategoryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryKey = string(value["CategoryKey"].GetString());
        m_categoryKeyHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("ModelTemplate") && !value["ModelTemplate"].IsNull())
    {
        if (!value["ModelTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.ModelTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelTemplate = string(value["ModelTemplate"].GetString());
        m_modelTemplateHasBeenSet = true;
    }

    if (value.HasMember("ListOrder") && !value["ListOrder"].IsNull())
    {
        if (!value["ListOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.ListOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listOrder = value["ListOrder"].GetInt64();
        m_listOrderHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("IconUrlGrid") && !value["IconUrlGrid"].IsNull())
    {
        if (!value["IconUrlGrid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTemplate.IconUrlGrid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrlGrid = string(value["IconUrlGrid"].GetString());
        m_iconUrlGridHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_categoryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_modelTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_listOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listOrder, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlGridHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrlGrid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrlGrid.c_str(), allocator).Move(), allocator);
    }

}


int64_t ProductTemplate::GetId() const
{
    return m_id;
}

void ProductTemplate::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProductTemplate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ProductTemplate::GetCategoryKey() const
{
    return m_categoryKey;
}

void ProductTemplate::SetCategoryKey(const string& _categoryKey)
{
    m_categoryKey = _categoryKey;
    m_categoryKeyHasBeenSet = true;
}

bool ProductTemplate::CategoryKeyHasBeenSet() const
{
    return m_categoryKeyHasBeenSet;
}

string ProductTemplate::GetCategoryName() const
{
    return m_categoryName;
}

void ProductTemplate::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool ProductTemplate::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

int64_t ProductTemplate::GetParentId() const
{
    return m_parentId;
}

void ProductTemplate::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool ProductTemplate::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string ProductTemplate::GetModelTemplate() const
{
    return m_modelTemplate;
}

void ProductTemplate::SetModelTemplate(const string& _modelTemplate)
{
    m_modelTemplate = _modelTemplate;
    m_modelTemplateHasBeenSet = true;
}

bool ProductTemplate::ModelTemplateHasBeenSet() const
{
    return m_modelTemplateHasBeenSet;
}

int64_t ProductTemplate::GetListOrder() const
{
    return m_listOrder;
}

void ProductTemplate::SetListOrder(const int64_t& _listOrder)
{
    m_listOrder = _listOrder;
    m_listOrderHasBeenSet = true;
}

bool ProductTemplate::ListOrderHasBeenSet() const
{
    return m_listOrderHasBeenSet;
}

string ProductTemplate::GetIconUrl() const
{
    return m_iconUrl;
}

void ProductTemplate::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ProductTemplate::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ProductTemplate::GetIconUrlGrid() const
{
    return m_iconUrlGrid;
}

void ProductTemplate::SetIconUrlGrid(const string& _iconUrlGrid)
{
    m_iconUrlGrid = _iconUrlGrid;
    m_iconUrlGridHasBeenSet = true;
}

bool ProductTemplate::IconUrlGridHasBeenSet() const
{
    return m_iconUrlGridHasBeenSet;
}

