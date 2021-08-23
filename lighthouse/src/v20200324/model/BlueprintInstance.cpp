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

#include <tencentcloud/lighthouse/v20200324/model/BlueprintInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

BlueprintInstance::BlueprintInstance() :
    m_blueprintHasBeenSet(false),
    m_softwareSetHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome BlueprintInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Blueprint") && !value["Blueprint"].IsNull())
    {
        if (!value["Blueprint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintInstance.Blueprint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blueprint.Deserialize(value["Blueprint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blueprintHasBeenSet = true;
    }

    if (value.HasMember("SoftwareSet") && !value["SoftwareSet"].IsNull())
    {
        if (!value["SoftwareSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlueprintInstance.SoftwareSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SoftwareSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Software item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_softwareSet.push_back(item);
        }
        m_softwareSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlueprintInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blueprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blueprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blueprint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_softwareSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_softwareSet.begin(); itr != m_softwareSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


Blueprint BlueprintInstance::GetBlueprint() const
{
    return m_blueprint;
}

void BlueprintInstance::SetBlueprint(const Blueprint& _blueprint)
{
    m_blueprint = _blueprint;
    m_blueprintHasBeenSet = true;
}

bool BlueprintInstance::BlueprintHasBeenSet() const
{
    return m_blueprintHasBeenSet;
}

vector<Software> BlueprintInstance::GetSoftwareSet() const
{
    return m_softwareSet;
}

void BlueprintInstance::SetSoftwareSet(const vector<Software>& _softwareSet)
{
    m_softwareSet = _softwareSet;
    m_softwareSetHasBeenSet = true;
}

bool BlueprintInstance::SoftwareSetHasBeenSet() const
{
    return m_softwareSetHasBeenSet;
}

string BlueprintInstance::GetInstanceId() const
{
    return m_instanceId;
}

void BlueprintInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BlueprintInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

