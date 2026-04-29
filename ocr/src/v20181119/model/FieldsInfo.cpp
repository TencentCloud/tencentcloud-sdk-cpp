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

#include <tencentcloud/ocr/v20181119/model/FieldsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FieldsInfo::FieldsInfo() :
    m_keyNameHasBeenSet(false),
    m_keyPromptHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_subItemsHasBeenSet(false)
{
}

CoreInternalOutcome FieldsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("KeyPrompt") && !value["KeyPrompt"].IsNull())
    {
        if (!value["KeyPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.KeyPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPrompt = string(value["KeyPrompt"].GetString());
        m_keyPromptHasBeenSet = true;
    }

    if (value.HasMember("KeyValue") && !value["KeyValue"].IsNull())
    {
        if (!value["KeyValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.KeyValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyValue = string(value["KeyValue"].GetString());
        m_keyValueHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.KeyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = value["KeyType"].GetInt64();
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("SubItems") && !value["SubItems"].IsNull())
    {
        if (!value["SubItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldsInfo.SubItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SubItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubItemGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subItems.push_back(item);
        }
        m_subItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_keyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyValue.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyType, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subItems.begin(); itr != m_subItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FieldsInfo::GetKeyName() const
{
    return m_keyName;
}

void FieldsInfo::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool FieldsInfo::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string FieldsInfo::GetKeyPrompt() const
{
    return m_keyPrompt;
}

void FieldsInfo::SetKeyPrompt(const string& _keyPrompt)
{
    m_keyPrompt = _keyPrompt;
    m_keyPromptHasBeenSet = true;
}

bool FieldsInfo::KeyPromptHasBeenSet() const
{
    return m_keyPromptHasBeenSet;
}

string FieldsInfo::GetKeyValue() const
{
    return m_keyValue;
}

void FieldsInfo::SetKeyValue(const string& _keyValue)
{
    m_keyValue = _keyValue;
    m_keyValueHasBeenSet = true;
}

bool FieldsInfo::KeyValueHasBeenSet() const
{
    return m_keyValueHasBeenSet;
}

int64_t FieldsInfo::GetKeyType() const
{
    return m_keyType;
}

void FieldsInfo::SetKeyType(const int64_t& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool FieldsInfo::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

CoordList FieldsInfo::GetPolygon() const
{
    return m_polygon;
}

void FieldsInfo::SetPolygon(const CoordList& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool FieldsInfo::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

vector<SubItemGroup> FieldsInfo::GetSubItems() const
{
    return m_subItems;
}

void FieldsInfo::SetSubItems(const vector<SubItemGroup>& _subItems)
{
    m_subItems = _subItems;
    m_subItemsHasBeenSet = true;
}

bool FieldsInfo::SubItemsHasBeenSet() const
{
    return m_subItemsHasBeenSet;
}

