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

#include <tencentcloud/mongodb/v20190725/model/ModifyNetworkAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyNetworkAddress::ModifyNetworkAddress() :
    m_newIPAddressHasBeenSet(false),
    m_oldIpAddressHasBeenSet(false)
{
}

CoreInternalOutcome ModifyNetworkAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NewIPAddress") && !value["NewIPAddress"].IsNull())
    {
        if (!value["NewIPAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyNetworkAddress.NewIPAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newIPAddress = string(value["NewIPAddress"].GetString());
        m_newIPAddressHasBeenSet = true;
    }

    if (value.HasMember("OldIpAddress") && !value["OldIpAddress"].IsNull())
    {
        if (!value["OldIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyNetworkAddress.OldIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldIpAddress = string(value["OldIpAddress"].GetString());
        m_oldIpAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyNetworkAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_newIPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewIPAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newIPAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldIpAddress.c_str(), allocator).Move(), allocator);
    }

}


string ModifyNetworkAddress::GetNewIPAddress() const
{
    return m_newIPAddress;
}

void ModifyNetworkAddress::SetNewIPAddress(const string& _newIPAddress)
{
    m_newIPAddress = _newIPAddress;
    m_newIPAddressHasBeenSet = true;
}

bool ModifyNetworkAddress::NewIPAddressHasBeenSet() const
{
    return m_newIPAddressHasBeenSet;
}

string ModifyNetworkAddress::GetOldIpAddress() const
{
    return m_oldIpAddress;
}

void ModifyNetworkAddress::SetOldIpAddress(const string& _oldIpAddress)
{
    m_oldIpAddress = _oldIpAddress;
    m_oldIpAddressHasBeenSet = true;
}

bool ModifyNetworkAddress::OldIpAddressHasBeenSet() const
{
    return m_oldIpAddressHasBeenSet;
}

