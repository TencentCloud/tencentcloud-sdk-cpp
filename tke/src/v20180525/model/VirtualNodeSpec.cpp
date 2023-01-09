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

#include <tencentcloud/tke/v20180525/model/VirtualNodeSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

VirtualNodeSpec::VirtualNodeSpec() :
    m_displayNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome VirtualNodeSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNodeSpec.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualNodeSpec.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirtualNodeSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

}


string VirtualNodeSpec::GetDisplayName() const
{
    return m_displayName;
}

void VirtualNodeSpec::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool VirtualNodeSpec::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string VirtualNodeSpec::GetSubnetId() const
{
    return m_subnetId;
}

void VirtualNodeSpec::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VirtualNodeSpec::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

