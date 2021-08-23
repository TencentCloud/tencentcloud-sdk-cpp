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

#include <tencentcloud/rce/v20201103/model/InputDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputDetails::InputDetails() :
    m_fieldNameHasBeenSet(false),
    m_fieldValueHasBeenSet(false)
{
}

CoreInternalOutcome InputDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDetails.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("FieldValue") && !value["FieldValue"].IsNull())
    {
        if (!value["FieldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDetails.FieldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldValue = string(value["FieldValue"].GetString());
        m_fieldValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldValue.c_str(), allocator).Move(), allocator);
    }

}


string InputDetails::GetFieldName() const
{
    return m_fieldName;
}

void InputDetails::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool InputDetails::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string InputDetails::GetFieldValue() const
{
    return m_fieldValue;
}

void InputDetails::SetFieldValue(const string& _fieldValue)
{
    m_fieldValue = _fieldValue;
    m_fieldValueHasBeenSet = true;
}

bool InputDetails::FieldValueHasBeenSet() const
{
    return m_fieldValueHasBeenSet;
}

