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

#include <tencentcloud/wedata/v20210820/model/ApproveType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ApproveType::ApproveType() :
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_classificationHasBeenSet(false)
{
}

CoreInternalOutcome ApproveType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveType.Classification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classification = string(value["Classification"].GetString());
        m_classificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproveType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classification.c_str(), allocator).Move(), allocator);
    }

}


string ApproveType::GetType() const
{
    return m_type;
}

void ApproveType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApproveType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApproveType::GetTypeName() const
{
    return m_typeName;
}

void ApproveType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool ApproveType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string ApproveType::GetClassification() const
{
    return m_classification;
}

void ApproveType::SetClassification(const string& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool ApproveType::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

