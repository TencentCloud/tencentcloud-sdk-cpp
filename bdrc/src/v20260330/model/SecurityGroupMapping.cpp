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

#include <tencentcloud/bdrc/v20260330/model/SecurityGroupMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

SecurityGroupMapping::SecurityGroupMapping() :
    m_securityGroupMappingIdHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_sourceSecurityGroupIdHasBeenSet(false),
    m_targetSecurityGroupIdHasBeenSet(false),
    m_lifeStateHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupMappingId") && !value["SecurityGroupMappingId"].IsNull())
    {
        if (!value["SecurityGroupMappingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupMapping.SecurityGroupMappingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupMappingId = string(value["SecurityGroupMappingId"].GetString());
        m_securityGroupMappingIdHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupMapping.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("SourceSecurityGroupId") && !value["SourceSecurityGroupId"].IsNull())
    {
        if (!value["SourceSecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupMapping.SourceSecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceSecurityGroupId = string(value["SourceSecurityGroupId"].GetString());
        m_sourceSecurityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TargetSecurityGroupId") && !value["TargetSecurityGroupId"].IsNull())
    {
        if (!value["TargetSecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupMapping.TargetSecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSecurityGroupId = string(value["TargetSecurityGroupId"].GetString());
        m_targetSecurityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupMapping.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityGroupMappingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupMappingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroupMappingId.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceSecurityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceSecurityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSecurityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSecurityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroupMapping::GetSecurityGroupMappingId() const
{
    return m_securityGroupMappingId;
}

void SecurityGroupMapping::SetSecurityGroupMappingId(const string& _securityGroupMappingId)
{
    m_securityGroupMappingId = _securityGroupMappingId;
    m_securityGroupMappingIdHasBeenSet = true;
}

bool SecurityGroupMapping::SecurityGroupMappingIdHasBeenSet() const
{
    return m_securityGroupMappingIdHasBeenSet;
}

string SecurityGroupMapping::GetSitePairId() const
{
    return m_sitePairId;
}

void SecurityGroupMapping::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool SecurityGroupMapping::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string SecurityGroupMapping::GetSourceSecurityGroupId() const
{
    return m_sourceSecurityGroupId;
}

void SecurityGroupMapping::SetSourceSecurityGroupId(const string& _sourceSecurityGroupId)
{
    m_sourceSecurityGroupId = _sourceSecurityGroupId;
    m_sourceSecurityGroupIdHasBeenSet = true;
}

bool SecurityGroupMapping::SourceSecurityGroupIdHasBeenSet() const
{
    return m_sourceSecurityGroupIdHasBeenSet;
}

string SecurityGroupMapping::GetTargetSecurityGroupId() const
{
    return m_targetSecurityGroupId;
}

void SecurityGroupMapping::SetTargetSecurityGroupId(const string& _targetSecurityGroupId)
{
    m_targetSecurityGroupId = _targetSecurityGroupId;
    m_targetSecurityGroupIdHasBeenSet = true;
}

bool SecurityGroupMapping::TargetSecurityGroupIdHasBeenSet() const
{
    return m_targetSecurityGroupIdHasBeenSet;
}

string SecurityGroupMapping::GetLifeState() const
{
    return m_lifeState;
}

void SecurityGroupMapping::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool SecurityGroupMapping::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

