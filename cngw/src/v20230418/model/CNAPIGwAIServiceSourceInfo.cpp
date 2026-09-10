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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwAIServiceSourceInfo::CNAPIGwAIServiceSourceInfo() :
    m_instanceIdHasBeenSet(false),
    m_authHasBeenSet(false),
    m_addressesHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwAIServiceSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Auth") && !value["Auth"].IsNull())
    {
        if (!value["Auth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceInfo.Auth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auth.Deserialize(value["Auth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authHasBeenSet = true;
    }

    if (value.HasMember("Addresses") && !value["Addresses"].IsNull())
    {
        if (!value["Addresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceInfo.Addresses` is not array type"));

        const rapidjson::Value &tmpValue = value["Addresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addresses.push_back((*itr).GetString());
        }
        m_addressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwAIServiceSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_authHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Auth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auth.ToJsonObject(value[key.c_str()], allocator);
    }

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

}


string CNAPIGwAIServiceSourceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CNAPIGwAIServiceSourceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

CNAPIGwAIServiceSourceAuth CNAPIGwAIServiceSourceInfo::GetAuth() const
{
    return m_auth;
}

void CNAPIGwAIServiceSourceInfo::SetAuth(const CNAPIGwAIServiceSourceAuth& _auth)
{
    m_auth = _auth;
    m_authHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceInfo::AuthHasBeenSet() const
{
    return m_authHasBeenSet;
}

vector<string> CNAPIGwAIServiceSourceInfo::GetAddresses() const
{
    return m_addresses;
}

void CNAPIGwAIServiceSourceInfo::SetAddresses(const vector<string>& _addresses)
{
    m_addresses = _addresses;
    m_addressesHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceInfo::AddressesHasBeenSet() const
{
    return m_addressesHasBeenSet;
}

