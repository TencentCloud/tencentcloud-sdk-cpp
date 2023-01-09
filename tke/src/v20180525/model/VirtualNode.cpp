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

#include <tencentcloud/tke/v20180525/model/VirtualNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

VirtualNode::VirtualNode() :
    m_nameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome VirtualNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNode.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNode.Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(value["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNode.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirtualNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string VirtualNode::GetName() const
{
    return m_name;
}

void VirtualNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VirtualNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VirtualNode::GetSubnetId() const
{
    return m_subnetId;
}

void VirtualNode::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VirtualNode::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VirtualNode::GetPhase() const
{
    return m_phase;
}

void VirtualNode::SetPhase(const string& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool VirtualNode::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string VirtualNode::GetCreatedTime() const
{
    return m_createdTime;
}

void VirtualNode::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VirtualNode::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

