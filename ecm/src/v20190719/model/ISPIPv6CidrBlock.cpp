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

#include <tencentcloud/ecm/v20190719/model/ISPIPv6CidrBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ISPIPv6CidrBlock::ISPIPv6CidrBlock() :
    m_iPv6CidrBlockHasBeenSet(false),
    m_iSPTypeHasBeenSet(false)
{
}

CoreInternalOutcome ISPIPv6CidrBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IPv6CidrBlock") && !value["IPv6CidrBlock"].IsNull())
    {
        if (!value["IPv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISPIPv6CidrBlock.IPv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6CidrBlock = string(value["IPv6CidrBlock"].GetString());
        m_iPv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("ISPType") && !value["ISPType"].IsNull())
    {
        if (!value["ISPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISPIPv6CidrBlock.ISPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSPType = string(value["ISPType"].GetString());
        m_iSPTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ISPIPv6CidrBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSPType.c_str(), allocator).Move(), allocator);
    }

}


string ISPIPv6CidrBlock::GetIPv6CidrBlock() const
{
    return m_iPv6CidrBlock;
}

void ISPIPv6CidrBlock::SetIPv6CidrBlock(const string& _iPv6CidrBlock)
{
    m_iPv6CidrBlock = _iPv6CidrBlock;
    m_iPv6CidrBlockHasBeenSet = true;
}

bool ISPIPv6CidrBlock::IPv6CidrBlockHasBeenSet() const
{
    return m_iPv6CidrBlockHasBeenSet;
}

string ISPIPv6CidrBlock::GetISPType() const
{
    return m_iSPType;
}

void ISPIPv6CidrBlock::SetISPType(const string& _iSPType)
{
    m_iSPType = _iSPType;
    m_iSPTypeHasBeenSet = true;
}

bool ISPIPv6CidrBlock::ISPTypeHasBeenSet() const
{
    return m_iSPTypeHasBeenSet;
}

