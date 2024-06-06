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

#include <tencentcloud/dlc/v20210125/model/VpcCidrBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

VpcCidrBlock::VpcCidrBlock() :
    m_cidrIdHasBeenSet(false),
    m_cidrAddrHasBeenSet(false)
{
}

CoreInternalOutcome VpcCidrBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CidrId") && !value["CidrId"].IsNull())
    {
        if (!value["CidrId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcCidrBlock.CidrId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrId = string(value["CidrId"].GetString());
        m_cidrIdHasBeenSet = true;
    }

    if (value.HasMember("CidrAddr") && !value["CidrAddr"].IsNull())
    {
        if (!value["CidrAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcCidrBlock.CidrAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrAddr = string(value["CidrAddr"].GetString());
        m_cidrAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcCidrBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cidrIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrAddr.c_str(), allocator).Move(), allocator);
    }

}


string VpcCidrBlock::GetCidrId() const
{
    return m_cidrId;
}

void VpcCidrBlock::SetCidrId(const string& _cidrId)
{
    m_cidrId = _cidrId;
    m_cidrIdHasBeenSet = true;
}

bool VpcCidrBlock::CidrIdHasBeenSet() const
{
    return m_cidrIdHasBeenSet;
}

string VpcCidrBlock::GetCidrAddr() const
{
    return m_cidrAddr;
}

void VpcCidrBlock::SetCidrAddr(const string& _cidrAddr)
{
    m_cidrAddr = _cidrAddr;
    m_cidrAddrHasBeenSet = true;
}

bool VpcCidrBlock::CidrAddrHasBeenSet() const
{
    return m_cidrAddrHasBeenSet;
}

