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

#include <tencentcloud/tdai/v20250717/model/ClawDeployInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

ClawDeployInfo::ClawDeployInfo() :
    m_userVpcIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_userVpcRegionHasBeenSet(false)
{
}

CoreInternalOutcome ClawDeployInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserVpcId") && !value["UserVpcId"].IsNull())
    {
        if (!value["UserVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClawDeployInfo.UserVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcId = string(value["UserVpcId"].GetString());
        m_userVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UserSubnetId") && !value["UserSubnetId"].IsNull())
    {
        if (!value["UserSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClawDeployInfo.UserSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSubnetId = string(value["UserSubnetId"].GetString());
        m_userSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("UserVpcRegion") && !value["UserVpcRegion"].IsNull())
    {
        if (!value["UserVpcRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClawDeployInfo.UserVpcRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcRegion = string(value["UserVpcRegion"].GetString());
        m_userVpcRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClawDeployInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVpcRegion.c_str(), allocator).Move(), allocator);
    }

}


string ClawDeployInfo::GetUserVpcId() const
{
    return m_userVpcId;
}

void ClawDeployInfo::SetUserVpcId(const string& _userVpcId)
{
    m_userVpcId = _userVpcId;
    m_userVpcIdHasBeenSet = true;
}

bool ClawDeployInfo::UserVpcIdHasBeenSet() const
{
    return m_userVpcIdHasBeenSet;
}

string ClawDeployInfo::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void ClawDeployInfo::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool ClawDeployInfo::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

string ClawDeployInfo::GetUserVpcRegion() const
{
    return m_userVpcRegion;
}

void ClawDeployInfo::SetUserVpcRegion(const string& _userVpcRegion)
{
    m_userVpcRegion = _userVpcRegion;
    m_userVpcRegionHasBeenSet = true;
}

bool ClawDeployInfo::UserVpcRegionHasBeenSet() const
{
    return m_userVpcRegionHasBeenSet;
}

