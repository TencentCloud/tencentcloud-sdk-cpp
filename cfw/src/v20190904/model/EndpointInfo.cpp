/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfw/v20190904/model/EndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EndpointInfo::EndpointInfo() :
    m_endpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcCidrHasBeenSet(false)
{
}

CoreInternalOutcome EndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcCidr") && !value["VpcCidr"].IsNull())
    {
        if (!value["VpcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.VpcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidr = string(value["VpcCidr"].GetString());
        m_vpcCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidr.c_str(), allocator).Move(), allocator);
    }

}


string EndpointInfo::GetEndpointId() const
{
    return m_endpointId;
}

void EndpointInfo::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool EndpointInfo::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string EndpointInfo::GetVpcId() const
{
    return m_vpcId;
}

void EndpointInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EndpointInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EndpointInfo::GetRegion() const
{
    return m_region;
}

void EndpointInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EndpointInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string EndpointInfo::GetVpcCidr() const
{
    return m_vpcCidr;
}

void EndpointInfo::SetVpcCidr(const string& _vpcCidr)
{
    m_vpcCidr = _vpcCidr;
    m_vpcCidrHasBeenSet = true;
}

bool EndpointInfo::VpcCidrHasBeenSet() const
{
    return m_vpcCidrHasBeenSet;
}

