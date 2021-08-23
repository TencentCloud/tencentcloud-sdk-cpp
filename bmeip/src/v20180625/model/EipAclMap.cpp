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

#include <tencentcloud/bmeip/v20180625/model/EipAclMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

EipAclMap::EipAclMap() :
    m_eipIdHasBeenSet(false),
    m_aclIdHasBeenSet(false)
{
}

CoreInternalOutcome EipAclMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipId") && !value["EipId"].IsNull())
    {
        if (!value["EipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAclMap.EipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipId = string(value["EipId"].GetString());
        m_eipIdHasBeenSet = true;
    }

    if (value.HasMember("AclId") && !value["AclId"].IsNull())
    {
        if (!value["AclId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAclMap.AclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclId = string(value["AclId"].GetString());
        m_aclIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipAclMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipId.c_str(), allocator).Move(), allocator);
    }

    if (m_aclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclId.c_str(), allocator).Move(), allocator);
    }

}


string EipAclMap::GetEipId() const
{
    return m_eipId;
}

void EipAclMap::SetEipId(const string& _eipId)
{
    m_eipId = _eipId;
    m_eipIdHasBeenSet = true;
}

bool EipAclMap::EipIdHasBeenSet() const
{
    return m_eipIdHasBeenSet;
}

string EipAclMap::GetAclId() const
{
    return m_aclId;
}

void EipAclMap::SetAclId(const string& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool EipAclMap::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

