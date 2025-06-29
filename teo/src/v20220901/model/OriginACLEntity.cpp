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

#include <tencentcloud/teo/v20220901/model/OriginACLEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginACLEntity::OriginACLEntity() :
    m_typeHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_operationModeHasBeenSet(false)
{
}

CoreInternalOutcome OriginACLEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginACLEntity.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Instances") && !value["Instances"].IsNull())
    {
        if (!value["Instances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginACLEntity.Instances` is not array type"));

        const rapidjson::Value &tmpValue = value["Instances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instances.push_back((*itr).GetString());
        }
        m_instancesHasBeenSet = true;
    }

    if (value.HasMember("OperationMode") && !value["OperationMode"].IsNull())
    {
        if (!value["OperationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginACLEntity.OperationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationMode = string(value["OperationMode"].GetString());
        m_operationModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginACLEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationMode.c_str(), allocator).Move(), allocator);
    }

}


string OriginACLEntity::GetType() const
{
    return m_type;
}

void OriginACLEntity::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OriginACLEntity::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> OriginACLEntity::GetInstances() const
{
    return m_instances;
}

void OriginACLEntity::SetInstances(const vector<string>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool OriginACLEntity::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

string OriginACLEntity::GetOperationMode() const
{
    return m_operationMode;
}

void OriginACLEntity::SetOperationMode(const string& _operationMode)
{
    m_operationMode = _operationMode;
    m_operationModeHasBeenSet = true;
}

bool OriginACLEntity::OperationModeHasBeenSet() const
{
    return m_operationModeHasBeenSet;
}

