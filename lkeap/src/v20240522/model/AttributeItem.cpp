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

#include <tencentcloud/lkeap/v20240522/model/AttributeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

AttributeItem::AttributeItem() :
    m_attributeIdHasBeenSet(false),
    m_attributeKeyHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome AttributeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeId") && !value["AttributeId"].IsNull())
    {
        if (!value["AttributeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeItem.AttributeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeId = string(value["AttributeId"].GetString());
        m_attributeIdHasBeenSet = true;
    }

    if (value.HasMember("AttributeKey") && !value["AttributeKey"].IsNull())
    {
        if (!value["AttributeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeItem.AttributeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeKey = string(value["AttributeKey"].GetString());
        m_attributeKeyHasBeenSet = true;
    }

    if (value.HasMember("AttributeName") && !value["AttributeName"].IsNull())
    {
        if (!value["AttributeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeItem.AttributeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeName = string(value["AttributeName"].GetString());
        m_attributeNameHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttributeItem.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeLabelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AttributeItem::GetAttributeId() const
{
    return m_attributeId;
}

void AttributeItem::SetAttributeId(const string& _attributeId)
{
    m_attributeId = _attributeId;
    m_attributeIdHasBeenSet = true;
}

bool AttributeItem::AttributeIdHasBeenSet() const
{
    return m_attributeIdHasBeenSet;
}

string AttributeItem::GetAttributeKey() const
{
    return m_attributeKey;
}

void AttributeItem::SetAttributeKey(const string& _attributeKey)
{
    m_attributeKey = _attributeKey;
    m_attributeKeyHasBeenSet = true;
}

bool AttributeItem::AttributeKeyHasBeenSet() const
{
    return m_attributeKeyHasBeenSet;
}

string AttributeItem::GetAttributeName() const
{
    return m_attributeName;
}

void AttributeItem::SetAttributeName(const string& _attributeName)
{
    m_attributeName = _attributeName;
    m_attributeNameHasBeenSet = true;
}

bool AttributeItem::AttributeNameHasBeenSet() const
{
    return m_attributeNameHasBeenSet;
}

vector<AttributeLabelItem> AttributeItem::GetLabels() const
{
    return m_labels;
}

void AttributeItem::SetLabels(const vector<AttributeLabelItem>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool AttributeItem::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

