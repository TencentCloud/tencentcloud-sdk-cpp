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

#include <tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ModifyAlarmAttributeRequest::ModifyAlarmAttributeRequest() :
    m_attributeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

string ModifyAlarmAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_attributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attribute.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmAttributeRequest::GetAttribute() const
{
    return m_attribute;
}

void ModifyAlarmAttributeRequest::SetAttribute(const string& _attribute)
{
    m_attribute = _attribute;
    m_attributeHasBeenSet = true;
}

bool ModifyAlarmAttributeRequest::AttributeHasBeenSet() const
{
    return m_attributeHasBeenSet;
}

string ModifyAlarmAttributeRequest::GetValue() const
{
    return m_value;
}

void ModifyAlarmAttributeRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyAlarmAttributeRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


