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

#include <tencentcloud/mps/v20190612/model/EditMediaOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EditMediaOutputConfig::EditMediaOutputConfig() :
    m_containerHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string EditMediaOutputConfig::GetContainer() const
{
    return m_container;
}

void EditMediaOutputConfig::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool EditMediaOutputConfig::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

string EditMediaOutputConfig::GetType() const
{
    return m_type;
}

void EditMediaOutputConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EditMediaOutputConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

