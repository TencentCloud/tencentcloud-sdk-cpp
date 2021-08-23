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

#include <tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

LookupAttribute::LookupAttribute() :
    m_attributeKeyHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

CoreInternalOutcome LookupAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttributeKey") && !value["AttributeKey"].IsNull())
    {
        if (!value["AttributeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LookupAttribute.AttributeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeKey = string(value["AttributeKey"].GetString());
        m_attributeKeyHasBeenSet = true;
    }

    if (value.HasMember("AttributeValue") && !value["AttributeValue"].IsNull())
    {
        if (!value["AttributeValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LookupAttribute.AttributeValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeValue = string(value["AttributeValue"].GetString());
        m_attributeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LookupAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeValue.c_str(), allocator).Move(), allocator);
    }

}


string LookupAttribute::GetAttributeKey() const
{
    return m_attributeKey;
}

void LookupAttribute::SetAttributeKey(const string& _attributeKey)
{
    m_attributeKey = _attributeKey;
    m_attributeKeyHasBeenSet = true;
}

bool LookupAttribute::AttributeKeyHasBeenSet() const
{
    return m_attributeKeyHasBeenSet;
}

string LookupAttribute::GetAttributeValue() const
{
    return m_attributeValue;
}

void LookupAttribute::SetAttributeValue(const string& _attributeValue)
{
    m_attributeValue = _attributeValue;
    m_attributeValueHasBeenSet = true;
}

bool LookupAttribute::AttributeValueHasBeenSet() const
{
    return m_attributeValueHasBeenSet;
}

