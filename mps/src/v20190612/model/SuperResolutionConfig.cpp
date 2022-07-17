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

#include <tencentcloud/mps/v20190612/model/SuperResolutionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SuperResolutionConfig::SuperResolutionConfig() :
    m_switchHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome SuperResolutionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperResolutionConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperResolutionConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperResolutionConfig.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuperResolutionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

}


string SuperResolutionConfig::GetSwitch() const
{
    return m_switch;
}

void SuperResolutionConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool SuperResolutionConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string SuperResolutionConfig::GetType() const
{
    return m_type;
}

void SuperResolutionConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SuperResolutionConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SuperResolutionConfig::GetSize() const
{
    return m_size;
}

void SuperResolutionConfig::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SuperResolutionConfig::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

