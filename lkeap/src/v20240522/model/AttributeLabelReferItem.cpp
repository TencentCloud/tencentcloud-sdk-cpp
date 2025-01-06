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

#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

AttributeLabelReferItem::AttributeLabelReferItem() :
    m_attributeIdHasBeenSet(false),
    m_labelIdsHasBeenSet(false)
{
}

CoreInternalOutcome AttributeLabelReferItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeId") && !value["AttributeId"].IsNull())
    {
        if (!value["AttributeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttributeLabelReferItem.AttributeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeId = string(value["AttributeId"].GetString());
        m_attributeIdHasBeenSet = true;
    }

    if (value.HasMember("LabelIds") && !value["LabelIds"].IsNull())
    {
        if (!value["LabelIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttributeLabelReferItem.LabelIds` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelIds.push_back((*itr).GetString());
        }
        m_labelIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributeLabelReferItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelIds.begin(); itr != m_labelIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AttributeLabelReferItem::GetAttributeId() const
{
    return m_attributeId;
}

void AttributeLabelReferItem::SetAttributeId(const string& _attributeId)
{
    m_attributeId = _attributeId;
    m_attributeIdHasBeenSet = true;
}

bool AttributeLabelReferItem::AttributeIdHasBeenSet() const
{
    return m_attributeIdHasBeenSet;
}

vector<string> AttributeLabelReferItem::GetLabelIds() const
{
    return m_labelIds;
}

void AttributeLabelReferItem::SetLabelIds(const vector<string>& _labelIds)
{
    m_labelIds = _labelIds;
    m_labelIdsHasBeenSet = true;
}

bool AttributeLabelReferItem::LabelIdsHasBeenSet() const
{
    return m_labelIdsHasBeenSet;
}

