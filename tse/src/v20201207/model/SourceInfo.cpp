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

#include <tencentcloud/tse/v20201207/model/SourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

SourceInfo::SourceInfo() :
    m_addressesHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_authHasBeenSet(false)
{
}

CoreInternalOutcome SourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Addresses") && !value["Addresses"].IsNull())
    {
        if (!value["Addresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceInfo.Addresses` is not array type"));

        const rapidjson::Value &tmpValue = value["Addresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addresses.push_back((*itr).GetString());
        }
        m_addressesHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.VpcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcInfo.Deserialize(value["VpcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcInfoHasBeenSet = true;
    }

    if (value.HasMember("Auth") && !value["Auth"].IsNull())
    {
        if (!value["Auth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.Auth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auth.Deserialize(value["Auth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addresses.begin(); itr != m_addresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Auth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auth.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> SourceInfo::GetAddresses() const
{
    return m_addresses;
}

void SourceInfo::SetAddresses(const vector<string>& _addresses)
{
    m_addresses = _addresses;
    m_addressesHasBeenSet = true;
}

bool SourceInfo::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

SourceInstanceVpcInfo SourceInfo::GetVpcInfo() const
{
    return m_vpcInfo;
}

void SourceInfo::SetVpcInfo(const SourceInstanceVpcInfo& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool SourceInfo::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

SourceInstanceAuth SourceInfo::GetAuth() const
{
    return m_auth;
}

void SourceInfo::SetAuth(const SourceInstanceAuth& _auth)
{
    m_auth = _auth;
    m_authHasBeenSet = true;
}

bool SourceInfo::AuthHasBeenSet() const
{
    return m_authHasBeenSet;
}

