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

#include <tencentcloud/iecp/v20210914/model/EnvValueSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EnvValueSelector::EnvValueSelector() :
    m_keyHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_objectTypeHasBeenSet(false)
{
}

CoreInternalOutcome EnvValueSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvValueSelector.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("ObjectName") && !value["ObjectName"].IsNull())
    {
        if (!value["ObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvValueSelector.ObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectName = string(value["ObjectName"].GetString());
        m_objectNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvValueSelector.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvValueSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

}


string EnvValueSelector::GetKey() const
{
    return m_key;
}

void EnvValueSelector::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EnvValueSelector::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EnvValueSelector::GetObjectName() const
{
    return m_objectName;
}

void EnvValueSelector::SetObjectName(const string& _objectName)
{
    m_objectName = _objectName;
    m_objectNameHasBeenSet = true;
}

bool EnvValueSelector::ObjectNameHasBeenSet() const
{
    return m_objectNameHasBeenSet;
}

string EnvValueSelector::GetObjectType() const
{
    return m_objectType;
}

void EnvValueSelector::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool EnvValueSelector::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

