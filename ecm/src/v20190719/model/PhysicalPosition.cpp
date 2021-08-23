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

#include <tencentcloud/ecm/v20190719/model/PhysicalPosition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PhysicalPosition::PhysicalPosition() :
    m_posIdHasBeenSet(false),
    m_rackIdHasBeenSet(false),
    m_switchIdHasBeenSet(false)
{
}

CoreInternalOutcome PhysicalPosition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PosId") && !value["PosId"].IsNull())
    {
        if (!value["PosId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalPosition.PosId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_posId = string(value["PosId"].GetString());
        m_posIdHasBeenSet = true;
    }

    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalPosition.RackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = string(value["RackId"].GetString());
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("SwitchId") && !value["SwitchId"].IsNull())
    {
        if (!value["SwitchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhysicalPosition.SwitchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchId = string(value["SwitchId"].GetString());
        m_switchIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhysicalPosition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_posIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_posId.c_str(), allocator).Move(), allocator);
    }

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchId.c_str(), allocator).Move(), allocator);
    }

}


string PhysicalPosition::GetPosId() const
{
    return m_posId;
}

void PhysicalPosition::SetPosId(const string& _posId)
{
    m_posId = _posId;
    m_posIdHasBeenSet = true;
}

bool PhysicalPosition::PosIdHasBeenSet() const
{
    return m_posIdHasBeenSet;
}

string PhysicalPosition::GetRackId() const
{
    return m_rackId;
}

void PhysicalPosition::SetRackId(const string& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool PhysicalPosition::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

string PhysicalPosition::GetSwitchId() const
{
    return m_switchId;
}

void PhysicalPosition::SetSwitchId(const string& _switchId)
{
    m_switchId = _switchId;
    m_switchIdHasBeenSet = true;
}

bool PhysicalPosition::SwitchIdHasBeenSet() const
{
    return m_switchIdHasBeenSet;
}

