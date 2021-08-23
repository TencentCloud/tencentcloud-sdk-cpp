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

#include <tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstanceFamilyTypeConfig::InstanceFamilyTypeConfig() :
    m_instanceFamilyTypeHasBeenSet(false),
    m_instanceFamilyTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceFamilyTypeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamilyType") && !value["InstanceFamilyType"].IsNull())
    {
        if (!value["InstanceFamilyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceFamilyTypeConfig.InstanceFamilyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamilyType = string(value["InstanceFamilyType"].GetString());
        m_instanceFamilyTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilyTypeName") && !value["InstanceFamilyTypeName"].IsNull())
    {
        if (!value["InstanceFamilyTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceFamilyTypeConfig.InstanceFamilyTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamilyTypeName = string(value["InstanceFamilyTypeName"].GetString());
        m_instanceFamilyTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceFamilyTypeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamilyType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamilyTypeName.c_str(), allocator).Move(), allocator);
    }

}


string InstanceFamilyTypeConfig::GetInstanceFamilyType() const
{
    return m_instanceFamilyType;
}

void InstanceFamilyTypeConfig::SetInstanceFamilyType(const string& _instanceFamilyType)
{
    m_instanceFamilyType = _instanceFamilyType;
    m_instanceFamilyTypeHasBeenSet = true;
}

bool InstanceFamilyTypeConfig::InstanceFamilyTypeHasBeenSet() const
{
    return m_instanceFamilyTypeHasBeenSet;
}

string InstanceFamilyTypeConfig::GetInstanceFamilyTypeName() const
{
    return m_instanceFamilyTypeName;
}

void InstanceFamilyTypeConfig::SetInstanceFamilyTypeName(const string& _instanceFamilyTypeName)
{
    m_instanceFamilyTypeName = _instanceFamilyTypeName;
    m_instanceFamilyTypeNameHasBeenSet = true;
}

bool InstanceFamilyTypeConfig::InstanceFamilyTypeNameHasBeenSet() const
{
    return m_instanceFamilyTypeNameHasBeenSet;
}

