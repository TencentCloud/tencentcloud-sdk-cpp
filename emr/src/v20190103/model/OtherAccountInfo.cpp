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

#include <tencentcloud/emr/v20190103/model/OtherAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

OtherAccountInfo::OtherAccountInfo() :
    m_otherUinHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

CoreInternalOutcome OtherAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OtherUin") && !value["OtherUin"].IsNull())
    {
        if (!value["OtherUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAccountInfo.OtherUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherUin = string(value["OtherUin"].GetString());
        m_otherUinHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherAccountInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_otherUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherUin.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

}


string OtherAccountInfo::GetOtherUin() const
{
    return m_otherUin;
}

void OtherAccountInfo::SetOtherUin(const string& _otherUin)
{
    m_otherUin = _otherUin;
    m_otherUinHasBeenSet = true;
}

bool OtherAccountInfo::OtherUinHasBeenSet() const
{
    return m_otherUinHasBeenSet;
}

string OtherAccountInfo::GetRoleName() const
{
    return m_roleName;
}

void OtherAccountInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool OtherAccountInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

