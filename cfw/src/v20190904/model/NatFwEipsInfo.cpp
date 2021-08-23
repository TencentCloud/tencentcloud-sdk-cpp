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

#include <tencentcloud/cfw/v20190904/model/NatFwEipsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatFwEipsInfo::NatFwEipsInfo() :
    m_eipHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_natGatewayNameHasBeenSet(false)
{
}

CoreInternalOutcome NatFwEipsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Eip") && !value["Eip"].IsNull())
    {
        if (!value["Eip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwEipsInfo.Eip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eip = string(value["Eip"].GetString());
        m_eipHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwEipsInfo.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayName") && !value["NatGatewayName"].IsNull())
    {
        if (!value["NatGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwEipsInfo.NatGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayName = string(value["NatGatewayName"].GetString());
        m_natGatewayNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatFwEipsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eip.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

}


string NatFwEipsInfo::GetEip() const
{
    return m_eip;
}

void NatFwEipsInfo::SetEip(const string& _eip)
{
    m_eip = _eip;
    m_eipHasBeenSet = true;
}

bool NatFwEipsInfo::EipHasBeenSet() const
{
    return m_eipHasBeenSet;
}

string NatFwEipsInfo::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void NatFwEipsInfo::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool NatFwEipsInfo::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string NatFwEipsInfo::GetNatGatewayName() const
{
    return m_natGatewayName;
}

void NatFwEipsInfo::SetNatGatewayName(const string& _natGatewayName)
{
    m_natGatewayName = _natGatewayName;
    m_natGatewayNameHasBeenSet = true;
}

bool NatFwEipsInfo::NatGatewayNameHasBeenSet() const
{
    return m_natGatewayNameHasBeenSet;
}

