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

#include <tencentcloud/postgres/v20170312/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyBackupDownloadRestrictionRequest::ModifyBackupDownloadRestrictionRequest() :
    m_restrictionTypeHasBeenSet(false),
    m_vpcRestrictionEffectHasBeenSet(false),
    m_vpcIdSetHasBeenSet(false),
    m_ipRestrictionEffectHasBeenSet(false),
    m_ipSetHasBeenSet(false)
{
}

string ModifyBackupDownloadRestrictionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_restrictionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restrictionType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIdSet.begin(); itr != m_vpcIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipRestrictionEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRestrictionEffect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipRestrictionEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_ipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipSet.begin(); itr != m_ipSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBackupDownloadRestrictionRequest::GetRestrictionType() const
{
    return m_restrictionType;
}

void ModifyBackupDownloadRestrictionRequest::SetRestrictionType(const string& _restrictionType)
{
    m_restrictionType = _restrictionType;
    m_restrictionTypeHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::RestrictionTypeHasBeenSet() const
{
    return m_restrictionTypeHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetVpcRestrictionEffect() const
{
    return m_vpcRestrictionEffect;
}

void ModifyBackupDownloadRestrictionRequest::SetVpcRestrictionEffect(const string& _vpcRestrictionEffect)
{
    m_vpcRestrictionEffect = _vpcRestrictionEffect;
    m_vpcRestrictionEffectHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::VpcRestrictionEffectHasBeenSet() const
{
    return m_vpcRestrictionEffectHasBeenSet;
}

vector<string> ModifyBackupDownloadRestrictionRequest::GetVpcIdSet() const
{
    return m_vpcIdSet;
}

void ModifyBackupDownloadRestrictionRequest::SetVpcIdSet(const vector<string>& _vpcIdSet)
{
    m_vpcIdSet = _vpcIdSet;
    m_vpcIdSetHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::VpcIdSetHasBeenSet() const
{
    return m_vpcIdSetHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetIpRestrictionEffect() const
{
    return m_ipRestrictionEffect;
}

void ModifyBackupDownloadRestrictionRequest::SetIpRestrictionEffect(const string& _ipRestrictionEffect)
{
    m_ipRestrictionEffect = _ipRestrictionEffect;
    m_ipRestrictionEffectHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::IpRestrictionEffectHasBeenSet() const
{
    return m_ipRestrictionEffectHasBeenSet;
}

vector<string> ModifyBackupDownloadRestrictionRequest::GetIpSet() const
{
    return m_ipSet;
}

void ModifyBackupDownloadRestrictionRequest::SetIpSet(const vector<string>& _ipSet)
{
    m_ipSet = _ipSet;
    m_ipSetHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::IpSetHasBeenSet() const
{
    return m_ipSetHasBeenSet;
}


