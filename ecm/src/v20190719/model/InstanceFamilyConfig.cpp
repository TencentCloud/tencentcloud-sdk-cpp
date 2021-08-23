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

#include <tencentcloud/ecm/v20190719/model/InstanceFamilyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstanceFamilyConfig::InstanceFamilyConfig() :
    m_instanceFamilyNameHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false)
{
}

CoreInternalOutcome InstanceFamilyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamilyName") && !value["InstanceFamilyName"].IsNull())
    {
        if (!value["InstanceFamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceFamilyConfig.InstanceFamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamilyName = string(value["InstanceFamilyName"].GetString());
        m_instanceFamilyNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceFamilyConfig.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceFamilyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamilyName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

}


string InstanceFamilyConfig::GetInstanceFamilyName() const
{
    return m_instanceFamilyName;
}

void InstanceFamilyConfig::SetInstanceFamilyName(const string& _instanceFamilyName)
{
    m_instanceFamilyName = _instanceFamilyName;
    m_instanceFamilyNameHasBeenSet = true;
}

bool InstanceFamilyConfig::InstanceFamilyNameHasBeenSet() const
{
    return m_instanceFamilyNameHasBeenSet;
}

string InstanceFamilyConfig::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void InstanceFamilyConfig::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool InstanceFamilyConfig::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

