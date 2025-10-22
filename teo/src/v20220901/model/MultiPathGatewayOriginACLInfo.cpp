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

#include <tencentcloud/teo/v20220901/model/MultiPathGatewayOriginACLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MultiPathGatewayOriginACLInfo::MultiPathGatewayOriginACLInfo() :
    m_multiPathGatewayCurrentOriginACLHasBeenSet(false),
    m_multiPathGatewayNextOriginACLHasBeenSet(false)
{
}

CoreInternalOutcome MultiPathGatewayOriginACLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MultiPathGatewayCurrentOriginACL") && !value["MultiPathGatewayCurrentOriginACL"].IsNull())
    {
        if (!value["MultiPathGatewayCurrentOriginACL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayOriginACLInfo.MultiPathGatewayCurrentOriginACL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiPathGatewayCurrentOriginACL.Deserialize(value["MultiPathGatewayCurrentOriginACL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiPathGatewayCurrentOriginACLHasBeenSet = true;
    }

    if (value.HasMember("MultiPathGatewayNextOriginACL") && !value["MultiPathGatewayNextOriginACL"].IsNull())
    {
        if (!value["MultiPathGatewayNextOriginACL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiPathGatewayOriginACLInfo.MultiPathGatewayNextOriginACL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiPathGatewayNextOriginACL.Deserialize(value["MultiPathGatewayNextOriginACL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiPathGatewayNextOriginACLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiPathGatewayOriginACLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_multiPathGatewayCurrentOriginACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiPathGatewayCurrentOriginACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiPathGatewayCurrentOriginACL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiPathGatewayNextOriginACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiPathGatewayNextOriginACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiPathGatewayNextOriginACL.ToJsonObject(value[key.c_str()], allocator);
    }

}


MultiPathGatewayCurrentOriginACL MultiPathGatewayOriginACLInfo::GetMultiPathGatewayCurrentOriginACL() const
{
    return m_multiPathGatewayCurrentOriginACL;
}

void MultiPathGatewayOriginACLInfo::SetMultiPathGatewayCurrentOriginACL(const MultiPathGatewayCurrentOriginACL& _multiPathGatewayCurrentOriginACL)
{
    m_multiPathGatewayCurrentOriginACL = _multiPathGatewayCurrentOriginACL;
    m_multiPathGatewayCurrentOriginACLHasBeenSet = true;
}

bool MultiPathGatewayOriginACLInfo::MultiPathGatewayCurrentOriginACLHasBeenSet() const
{
    return m_multiPathGatewayCurrentOriginACLHasBeenSet;
}

MultiPathGatewayNextOriginACL MultiPathGatewayOriginACLInfo::GetMultiPathGatewayNextOriginACL() const
{
    return m_multiPathGatewayNextOriginACL;
}

void MultiPathGatewayOriginACLInfo::SetMultiPathGatewayNextOriginACL(const MultiPathGatewayNextOriginACL& _multiPathGatewayNextOriginACL)
{
    m_multiPathGatewayNextOriginACL = _multiPathGatewayNextOriginACL;
    m_multiPathGatewayNextOriginACLHasBeenSet = true;
}

bool MultiPathGatewayOriginACLInfo::MultiPathGatewayNextOriginACLHasBeenSet() const
{
    return m_multiPathGatewayNextOriginACLHasBeenSet;
}

