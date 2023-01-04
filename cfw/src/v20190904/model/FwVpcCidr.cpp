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

#include <tencentcloud/cfw/v20190904/model/FwVpcCidr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwVpcCidr::FwVpcCidr() :
    m_vpcIdHasBeenSet(false),
    m_fwCidrHasBeenSet(false)
{
}

CoreInternalOutcome FwVpcCidr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwVpcCidr.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("FwCidr") && !value["FwCidr"].IsNull())
    {
        if (!value["FwCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwVpcCidr.FwCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwCidr = string(value["FwCidr"].GetString());
        m_fwCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwVpcCidr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwCidr.c_str(), allocator).Move(), allocator);
    }

}


string FwVpcCidr::GetVpcId() const
{
    return m_vpcId;
}

void FwVpcCidr::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool FwVpcCidr::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string FwVpcCidr::GetFwCidr() const
{
    return m_fwCidr;
}

void FwVpcCidr::SetFwCidr(const string& _fwCidr)
{
    m_fwCidr = _fwCidr;
    m_fwCidrHasBeenSet = true;
}

bool FwVpcCidr::FwCidrHasBeenSet() const
{
    return m_fwCidrHasBeenSet;
}

