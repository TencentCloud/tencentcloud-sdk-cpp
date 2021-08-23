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

#include <tencentcloud/vpc/v20170312/model/AccountAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AccountAttribute::AccountAttribute() :
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
}

CoreInternalOutcome AccountAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeName") && !value["AttributeName"].IsNull())
    {
        if (!value["AttributeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountAttribute.AttributeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeName = string(value["AttributeName"].GetString());
        m_attributeNameHasBeenSet = true;
    }

    if (value.HasMember("AttributeValues") && !value["AttributeValues"].IsNull())
    {
        if (!value["AttributeValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountAttribute.AttributeValues` is not array type"));

        const rapidjson::Value &tmpValue = value["AttributeValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attributeValues.push_back((*itr).GetString());
        }
        m_attributeValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributeValues.begin(); itr != m_attributeValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccountAttribute::GetAttributeName() const
{
    return m_attributeName;
}

void AccountAttribute::SetAttributeName(const string& _attributeName)
{
    m_attributeName = _attributeName;
    m_attributeNameHasBeenSet = true;
}

bool AccountAttribute::AttributeNameHasBeenSet() const
{
    return m_attributeNameHasBeenSet;
}

vector<string> AccountAttribute::GetAttributeValues() const
{
    return m_attributeValues;
}

void AccountAttribute::SetAttributeValues(const vector<string>& _attributeValues)
{
    m_attributeValues = _attributeValues;
    m_attributeValuesHasBeenSet = true;
}

bool AccountAttribute::AttributeValuesHasBeenSet() const
{
    return m_attributeValuesHasBeenSet;
}

