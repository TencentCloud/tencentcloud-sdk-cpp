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

#include <tencentcloud/postgres/v20170312/model/BackupDownloadRestriction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

BackupDownloadRestriction::BackupDownloadRestriction() :
    m_restrictionTypeHasBeenSet(false),
    m_vpcRestrictionEffectHasBeenSet(false),
    m_vpcIdSetHasBeenSet(false),
    m_ipRestrictionEffectHasBeenSet(false),
    m_ipSetHasBeenSet(false)
{
}

CoreInternalOutcome BackupDownloadRestriction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RestrictionType") && !value["RestrictionType"].IsNull())
    {
        if (!value["RestrictionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadRestriction.RestrictionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictionType = string(value["RestrictionType"].GetString());
        m_restrictionTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcRestrictionEffect") && !value["VpcRestrictionEffect"].IsNull())
    {
        if (!value["VpcRestrictionEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadRestriction.VpcRestrictionEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcRestrictionEffect = string(value["VpcRestrictionEffect"].GetString());
        m_vpcRestrictionEffectHasBeenSet = true;
    }

    if (value.HasMember("VpcIdSet") && !value["VpcIdSet"].IsNull())
    {
        if (!value["VpcIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupDownloadRestriction.VpcIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIdSet.push_back((*itr).GetString());
        }
        m_vpcIdSetHasBeenSet = true;
    }

    if (value.HasMember("IpRestrictionEffect") && !value["IpRestrictionEffect"].IsNull())
    {
        if (!value["IpRestrictionEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadRestriction.IpRestrictionEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipRestrictionEffect = string(value["IpRestrictionEffect"].GetString());
        m_ipRestrictionEffectHasBeenSet = true;
    }

    if (value.HasMember("IpSet") && !value["IpSet"].IsNull())
    {
        if (!value["IpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupDownloadRestriction.IpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipSet.push_back((*itr).GetString());
        }
        m_ipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupDownloadRestriction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIdSet.begin(); itr != m_vpcIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_ipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipSet.begin(); itr != m_ipSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BackupDownloadRestriction::GetRestrictionType() const
{
    return m_restrictionType;
}

void BackupDownloadRestriction::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool BackupDownloadRestriction::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

string BackupDownloadRestriction::GetVpcRestrictionEffect() const
{
    return m_vpcRestrictionEffect;
}

void BackupDownloadRestriction::SetVpcRestrictionEffect(const string& _vpcRestrictionEffect)
{
    m_vpcRestrictionEffect = _vpcRestrictionEffect;
    m_vpcRestrictionEffectHasBeenSet = true;
}

bool BackupDownloadRestriction::VpcRestrictionEffectHasBeenSet() const
{
    return m_vpcRestrictionEffectHasBeenSet;
}

vector<string> BackupDownloadRestriction::GetVpcIdSet() const
{
    return m_vpcIdSet;
}

void BackupDownloadRestriction::SetVpcIdSet(const vector<string>& _vpcIdSet)
{
    m_vpcIdSet = _vpcIdSet;
    m_vpcIdSetHasBeenSet = true;
}

bool BackupDownloadRestriction::VpcIdSetHasBeenSet() const
{
    return m_vpcIdSetHasBeenSet;
}

string BackupDownloadRestriction::GetIpRestrictionEffect() const
{
    return m_ipRestrictionEffect;
}

void BackupDownloadRestriction::SetIpRestrictionEffect(const string& _ipRestrictionEffect)
{
    m_ipRestrictionEffect = _ipRestrictionEffect;
    m_ipRestrictionEffectHasBeenSet = true;
}

bool BackupDownloadRestriction::IpRestrictionEffectHasBeenSet() const
{
    return m_ipRestrictionEffectHasBeenSet;
}

vector<string> BackupDownloadRestriction::GetIpSet() const
{
    return m_ipSet;
}

void BackupDownloadRestriction::SetIpSet(const vector<string>& _ipSet)
{
    m_ipSet = _ipSet;
    m_ipSetHasBeenSet = true;
}

bool BackupDownloadRestriction::IpSetHasBeenSet() const
{
    return m_ipSetHasBeenSet;
}

