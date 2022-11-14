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

#include <tencentcloud/wedata/v20210820/model/SourceObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SourceObject::SourceObject() :
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false)
{
}

CoreInternalOutcome SourceObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceObjectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectValue.c_str(), allocator).Move(), allocator);
    }

}


string SourceObject::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void SourceObject::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool SourceObject::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string SourceObject::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void SourceObject::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool SourceObject::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

