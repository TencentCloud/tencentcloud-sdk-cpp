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

#include <tencentcloud/tiia/v20190529/model/ObjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

ObjectInfo::ObjectInfo() :
    m_boxHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_colorsHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_allBoxHasBeenSet(false)
{
}

CoreInternalOutcome ObjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Box") && !value["Box"].IsNull())
    {
        if (!value["Box"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectInfo.Box` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_box.Deserialize(value["Box"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boxHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectInfo.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("Colors") && !value["Colors"].IsNull())
    {
        if (!value["Colors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ObjectInfo.Colors` is not array type"));

        const rapidjson::Value &tmpValue = value["Colors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_colors.push_back(item);
        }
        m_colorsHasBeenSet = true;
    }

    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ObjectInfo.Attributes` is not array type"));

        const rapidjson::Value &tmpValue = value["Attributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Attribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributes.push_back(item);
        }
        m_attributesHasBeenSet = true;
    }

    if (value.HasMember("AllBox") && !value["AllBox"].IsNull())
    {
        if (!value["AllBox"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ObjectInfo.AllBox` is not array type"));

        const rapidjson::Value &tmpValue = value["AllBox"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Box item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allBox.push_back(item);
        }
        m_allBoxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_boxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Box";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_box.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_colorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Colors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_colors.begin(); itr != m_colors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_allBox.begin(); itr != m_allBox.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Box ObjectInfo::GetBox() const
{
    return m_box;
}

void ObjectInfo::SetBox(const Box& _box)
{
    m_box = _box;
    m_boxHasBeenSet = true;
}

bool ObjectInfo::BoxHasBeenSet() const
{
    return m_boxHasBeenSet;
}

int64_t ObjectInfo::GetCategoryId() const
{
    return m_categoryId;
}

void ObjectInfo::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ObjectInfo::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<ColorInfo> ObjectInfo::GetColors() const
{
    return m_colors;
}

void ObjectInfo::SetColors(const vector<ColorInfo>& _colors)
{
    m_colors = _colors;
    m_colorsHasBeenSet = true;
}

bool ObjectInfo::ColorsHasBeenSet() const
{
    return m_colorsHasBeenSet;
}

vector<Attribute> ObjectInfo::GetAttributes() const
{
    return m_attributes;
}

void ObjectInfo::SetAttributes(const vector<Attribute>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool ObjectInfo::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

vector<Box> ObjectInfo::GetAllBox() const
{
    return m_allBox;
}

void ObjectInfo::SetAllBox(const vector<Box>& _allBox)
{
    m_allBox = _allBox;
    m_allBoxHasBeenSet = true;
}

bool ObjectInfo::AllBoxHasBeenSet() const
{
    return m_allBoxHasBeenSet;
}

